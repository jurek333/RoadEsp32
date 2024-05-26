#pragma once

#include "string.h"
#include <stack>
#include <vector>
#include <string>
namespace RouteEsp32::parser
{
    enum JsonParserStateModifiers
    {
        none,
        escaped
    };
    enum JsonParserStates : int
    {
        Empty = 0,
        Property,
        PropertyName,
        PropertyValue,
        ValueString,
        ValueNumber,
        Object,
        Array,
        End
    };

    class ParserStateMachine
    {
    public:
        ParserStateMachine()
        {
            Reset();
        }
        void Reset()
        {
            _stateModifier = JsonParserStateModifiers::none;
            _state.push(JsonParserStates::Empty);
        }
        const JsonParserStates &State() { return _state.top(); }

        enum StateOperation
        {
            Unchanged,
            Pushed,
            Poped,
            PopedWithBookmark,
            Error
        };

        StateOperation Process(char c)
        {
            if (IsEscapedChar(c))
                return StateOperation::Unchanged;

            return (this->*_chooser[_state.top()])(c);
        }
        void SetBookmark() { _bookmark = _state.size(); }
        void RemoveBookmark() { _bookmark = -1; }

    private:
        size_t _bookmark = -1;
        JsonParserStateModifiers _stateModifier;
        std::stack<JsonParserStates> _state;
        StateOperation (ParserStateMachine::*_chooser[9])(char c){
            &ParserStateMachine::WhenEmpty,
            &ParserStateMachine::WhenProperty,
            &ParserStateMachine::WhenPropertyName,
            &ParserStateMachine::WhenPropertyValue,
            &ParserStateMachine::WhenString,
            &ParserStateMachine::WhenNumber,
            &ParserStateMachine::WhenObject,
            &ParserStateMachine::WhenArray,
            &ParserStateMachine::WhenEnd};

        StateOperation Pop()
        {
            _state.pop();

            bool untouchedBookmark = _bookmark == -1 || _state.size() >= _bookmark;
            if (untouchedBookmark)
                return StateOperation::Poped;

            return StateOperation::PopedWithBookmark;
        }

        bool IsEscapedChar(char c)
        {
            if (_stateModifier == JsonParserStateModifiers::escaped)
            {
                _stateModifier = JsonParserStateModifiers::none;
                return true;
            }
            if (c == '\\')
            {
                _stateModifier = JsonParserStateModifiers::escaped;
                return true;
            }
            return false;
        }

        StateOperation WhenEmpty(char c)
        {
            switch (c)
            {
            case '{':
                _state.push(JsonParserStates::Object);
                break;
            case '[':
                _state.push(JsonParserStates::Array);
                break;
            default:
                return StateOperation::Unchanged;
            }
            return StateOperation::Pushed;
        }
        StateOperation WhenObject(char c)
        {
            if (c == '}')
            {
                return Pop();
            }
            if (c == '"')
            {
                _state.push(JsonParserStates::Property);
                _state.push(JsonParserStates::PropertyName);
                return StateOperation::Pushed;
            }
            return StateOperation::Unchanged;
        }
        StateOperation WhenPropertyName(char c)
        {
            if (c == '"')
            {
                return Pop();
            }
            return StateOperation::Unchanged;
        }
        StateOperation WhenProperty(char c)
        {
            if (c == ':')
            {
                _state.push(JsonParserStates::PropertyValue);
                return StateOperation::Pushed;
            }
            if (c == ',')
            {
                return Pop();
            }
            return StateOperation::Unchanged;
        }
        StateOperation WhenPropertyValue(char c)
        {
            auto changeWithoutBookmark = false;

            if (c == '-' || (c >= '0' && c <= '9'))
            {
                _state.push(JsonParserStates::ValueNumber);
                return StateOperation::Pushed;
            }
            switch (c)
            {
            case '"':
                _state.push(JsonParserStates::ValueString);
                break;
            case '[':
                _state.push(JsonParserStates::Array);
                break;
            case '{':
                _state.push(JsonParserStates::Object);
                break;
            case ']':
            case '}':
                changeWithoutBookmark = (StateOperation::Poped == Pop());
                changeWithoutBookmark &= (StateOperation::Poped == Pop());
                changeWithoutBookmark &= (StateOperation::Poped == Pop());
                return changeWithoutBookmark ? StateOperation::Poped : StateOperation::PopedWithBookmark;
            case ',':
                changeWithoutBookmark = (StateOperation::Poped == Pop());
                changeWithoutBookmark &= (StateOperation::Poped == Pop());
                return changeWithoutBookmark ? StateOperation::Poped : StateOperation::PopedWithBookmark;
            default:
                return StateOperation::Unchanged;
            }
            return StateOperation::Pushed;
        }
        StateOperation WhenArray(char c)
        {
            if (c > '0' && c < '9')
            {
                _state.push(JsonParserStates::ValueNumber);
                return StateOperation::Pushed;
            }
            switch (c)
            {
            case '{':
                _state.push(JsonParserStates::Object);
                break;
            case '"':
                _state.push(JsonParserStates::ValueString);
                break;
            case ']':
                return Pop();
            case '-':
                _state.push(JsonParserStates::ValueNumber);
                break;
            default:
                return StateOperation::Unchanged;
            }
            return StateOperation::Pushed;
        }
        StateOperation WhenNumber(char c)
        {
            auto changeWithoutBookmark = true;
            switch (c)
            {
            case '}':
                changeWithoutBookmark = (Pop() == StateOperation::Poped);
                changeWithoutBookmark &= (Pop() == StateOperation::Poped);
                changeWithoutBookmark &= (Pop() == StateOperation::Poped);
                if (_state.top() == JsonParserStates::Object)
                    changeWithoutBookmark &= (Pop() == StateOperation::Poped);
                else
                    return StateOperation::Error;
                break;
            case ']':
                changeWithoutBookmark = (Pop() == StateOperation::Poped);
                if (_state.top() == JsonParserStates::Array)
                    changeWithoutBookmark &= (Pop() == StateOperation::Poped);
                else
                    return StateOperation::Error;
                if (_state.top() == JsonParserStates::PropertyValue)
                {
                    changeWithoutBookmark &= (Pop() == StateOperation::Poped);
                    changeWithoutBookmark &= (Pop() == StateOperation::Poped);
                }
                break;
            case ',':
                changeWithoutBookmark = (Pop() == StateOperation::Poped);
                if (_state.top() == JsonParserStates::PropertyValue)
                    changeWithoutBookmark &= (Pop() == StateOperation::Poped);
                changeWithoutBookmark &= (Pop() == StateOperation::Poped);
                break;
            default:
                return StateOperation::Unchanged;
            }
            return changeWithoutBookmark
                       ? StateOperation::Poped
                       : StateOperation::PopedWithBookmark;
        }
        StateOperation WhenString(char c)
        {
            if (c == '"')
            {
                return Pop();
            }
            return StateOperation::Unchanged;
        }
        StateOperation WhenEnd(char c)
        {
            return StateOperation::Unchanged;
        }
    };
}