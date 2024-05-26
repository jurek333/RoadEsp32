#pragma once

#include "modules/disk.hpp"
#include "parser/parserStateMachine.hpp"
#include "common/stringExtensions.hpp"
#include <queue>

#ifndef JSONPARSER_BUFF_SIZE
#define JSONPARSER_BUFF_SIZE 24     

// 1024
#endif

using namespace RouteEsp32::modules;

namespace RouteEsp32::parser
{
    class JsonParser
    {
    public:
        JsonParser(Disk *sd, SdCardFileHandler file)
        {
            _buffSize = 0;
            _readFileOffset = 0;

            _sd = sd;
            _file = file;
        }
        inline bool IsReadingObject() { return _stateMachine.State() == JsonParserStates::Object; }

        bool StartReadingObject(std::string xpath)
        {
            Reset();
            auto sections = StringExtensions::Split(xpath, "/");

            for (auto section = sections.cbegin(); section != sections.cend(); ++section)
            {
                if (section->empty())
                    continue;
                auto index = GoToSection(*section);
                if (-1 == index)
                    return false;
            }
            return true;
        }
        std::string ReadField(JsonParserStates type)
        {
            char c[2]{'\0', '\0'};
            std::string val;
            ParserStateMachine::StateOperation stateStatus;

            while (_stateMachine.State() != type)
                ReadNextChar(stateStatus);

            if(type == JsonParserStates::ValueNumber) {
                c[0] = _buff[_parseIndex-1];
                val.append(c);
            }
            while (_stateMachine.State() == type)
            {
                c[0] = ReadNextChar(stateStatus);
                if (c[0] == '\0')
                    return val;
                if (stateStatus == ParserStateMachine::StateOperation::Unchanged)
                    val.append(c);
            }
            return val;
        }
        std::string ReadPropertyName()
        {
            return ReadField(JsonParserStates::PropertyName);
        }
        std::string ReadStringValue()
        {
            return ReadField(JsonParserStates::ValueString);
        }
        float ReadFloatValue()
        {
            auto val = ReadField(JsonParserStates::ValueNumber);
            return std::stof(val);
        }
        double ReadDoubleValue()
        {
            auto val = ReadField(JsonParserStates::ValueNumber);
            return std::stod(val);
        }
        int ReadIntValue()
        {
            auto val = ReadField(JsonParserStates::ValueNumber);
            return std::stoi(val);
        }

        bool GoToNext(const JsonParserStates& state)
        {
            char c;
            ParserStateMachine::StateOperation status;
            while (_stateMachine.State() != state)
            {
                c = ReadNextChar(status);
                if (c == '\0')
                    return false;
            }
            return true;
        }

        void JumpOverCurrentState()
        {
            ParserStateMachine::StateOperation operation;

            _stateMachine.SetBookmark();
            ReadNextChar(operation);

            while (operation != ParserStateMachine::StateOperation::PopedWithBookmark)
            {
                ReadNextChar(operation);
            }
        }

        JsonParserStates Probe()
        {
            ParserStateMachine::StateOperation status;
            char c = ReadNextChar(status);
            if (c == '\0')
                return JsonParserStates::End;
            return _stateMachine.State();
        }

        inline const JsonParserStates &CurrentElement() noexcept { return _stateMachine.State(); }
        inline const bool StillInProperty() noexcept { 
            return _stateMachine.State() == JsonParserStates::Property
                || _stateMachine.State() == JsonParserStates::PropertyValue
                || _stateMachine.State() == JsonParserStates::PropertyName; }

    private:
        Disk *_sd;
        SdCardFileHandler _file;

        ParserStateMachine _stateMachine{};

        size_t _readFileOffset;
        size_t _parseIndex;
        char _buff[JSONPARSER_BUFF_SIZE + 1];
        size_t _buffSize;

        void Reset()
        {
            _sd->Reset(_file);
            _readFileOffset = 0;
            _buffSize = 0;
            _parseIndex = 0;
            _stateMachine.Reset();
        }

        bool ReadMoreOfTheFile()
        {
            _readFileOffset += _buffSize;
            _parseIndex = 0;
            if (!_sd->Read(_file, _buff, JSONPARSER_BUFF_SIZE))
                return false;
            _buff[JSONPARSER_BUFF_SIZE] = '\0';
            _buffSize = strlen(_buff);
            return true;
        }

        char ReadNextChar(ParserStateMachine::StateOperation &stateStatus)
        {
            if (_parseIndex >= _buffSize)
            {
                if (!ReadMoreOfTheFile())
                {
                    stateStatus = ParserStateMachine::StateOperation::Unchanged;
                    return '\0';
                }
            }

            char c = _buff[_parseIndex++];
            stateStatus = _stateMachine.Process(c);
            return c;
        }

        size_t GoToSection(const std::string &sectionName)
        {
            char c[2]{' ', '\0'};
            std::string name;
            ParserStateMachine::StateOperation stateStatus;
            while (c[0] != '\0')
            {
                c[0] = ReadNextChar(stateStatus);

                if (stateStatus == ParserStateMachine::StateOperation::Error || stateStatus == ParserStateMachine::StateOperation::PopedWithBookmark)
                    return -1;
                else if (stateStatus == ParserStateMachine::StateOperation::Unchanged && _stateMachine.State() == JsonParserStates::PropertyName)
                    name.append(c);
                else if (stateStatus == ParserStateMachine::StateOperation::Pushed && _stateMachine.State() == JsonParserStates::PropertyName)
                    name.clear();
                else if (stateStatus == ParserStateMachine::StateOperation::Pushed && _stateMachine.State() == JsonParserStates::PropertyValue)
                {
                    if (sectionName == name)
                    {
                        return _parseIndex + _readFileOffset;
                    }
                }
            }
            return -1;
        }
    };
}