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
        const JsonParserStates& State() { return _state.top(); }

        enum StateOperation
        {
            Unchanged,
            Changed,
            ChangedAndCrossTheBookmark,
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

        bool Pop()
        {
            _state.pop();
            return _bookmark == -1 || _state.size() >= _bookmark;
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
            return StateOperation::Changed;
        }
        StateOperation WhenObject(char c)
        {
            if (c == '}')
            {
                return Pop()
                           ? StateOperation::Changed
                           : StateOperation::ChangedAndCrossTheBookmark;
            }
            if (c == '"')
            {
                _state.push(JsonParserStates::Property);
                _state.push(JsonParserStates::PropertyName);
                return StateOperation::Changed;
            }
            return StateOperation::Unchanged;
        }
        StateOperation WhenArray(char c)
        {
            if (c > '0' && c < '9')
            {
                _state.push(JsonParserStates::ValueNumber);
                return StateOperation::Changed;
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
                return Pop()
                           ? StateOperation::Changed
                           : StateOperation::ChangedAndCrossTheBookmark;
            case '-':
                _state.push(JsonParserStates::ValueNumber);
                break;
            default:
                return StateOperation::Unchanged;
            }
            return StateOperation::Changed;
        }
        StateOperation WhenNumber(char c)
        {
            auto changeWithoutBookmark = true;
            switch (c)
            {
            case ']':
                changeWithoutBookmark = Pop();
                if (_state.top() == JsonParserStates::Array)
                    changeWithoutBookmark |= Pop();
                break;
            case ',':
                changeWithoutBookmark = Pop();
                if (_state.top() == JsonParserStates::PropertyValue)
                    changeWithoutBookmark |= Pop();
                changeWithoutBookmark |= Pop();
                break;
            default:
                return StateOperation::Unchanged;
            }
            return changeWithoutBookmark
                       ? StateOperation::Changed
                       : StateOperation::ChangedAndCrossTheBookmark;
        }
        StateOperation WhenString(char c)
        {
            if (c == '"')
            {
                _state.pop();
                return StateOperation::Changed;
            }
            return StateOperation::Unchanged;
        }
        StateOperation WhenPropertyName(char c)
        {
            if (c == '"')
            {
                _state.pop();
                return StateOperation::Changed;
            }
            return StateOperation::Unchanged;
        }
        StateOperation WhenProperty(char c)
        {
            if (c == ':')
            {
                _state.push(JsonParserStates::PropertyValue);
                return StateOperation::Changed;
            }
            if (c == ',')
            {
                return Pop()
                           ? StateOperation::Changed
                           : StateOperation::ChangedAndCrossTheBookmark;
            }
            return StateOperation::Unchanged;
        }
        StateOperation WhenPropertyValue(char c)
        {
            auto changeWithoutBookmark = false;

            if (c == '-' || (c > '0' && c < '9'))
            {
                _state.push(JsonParserStates::ValueNumber);
                return StateOperation::Changed;
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
            case ',':
                changeWithoutBookmark = Pop();
                changeWithoutBookmark |= Pop();
                return changeWithoutBookmark ? StateOperation::Changed : StateOperation::ChangedAndCrossTheBookmark;
            default:
                return StateOperation::Unchanged;
            }
            return StateOperation::Changed;
        }
        StateOperation WhenEnd(char c)
        {
            return StateOperation::Unchanged;
        }
    };
}