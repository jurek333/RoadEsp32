#pragma once

#include "modules/disk.hpp"
#include "parser/parserStateMachine.hpp"
#include "common/stringExtensions.hpp"

using namespace RouteEsp32::modules;

namespace RouteEsp32::parser
{
#define JSONPARSER_BUFF_SIZE 1024

    class RouteJsonParser
    {
    public:
        RouteJsonParser(Disk *sd, SdCardFileHandler file)
        {
            _buffSize = 0;
            _readFileOffset = 0;

            _sd = sd;
            _file = file;
        }
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

            while (Probe() != type)
                ;
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
            return 0.0f;
        }
        int ReadIntValue()
        {
            auto val = ReadField(JsonParserStates::ValueNumber);
            return 0;
        }
        bool IsReadingObject() { return _stateMachine.State() == JsonParserStates::Object; }
        bool IsReadingArray() { return _stateMachine.State() == JsonParserStates::Array; }
        bool IsReadingStringValue() { return _stateMachine.State() == JsonParserStates::ValueString; }
        bool IsReadingNumberValue() { return _stateMachine.State() == JsonParserStates::ValueNumber; }

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

        JsonParserStates Probe()
        {
            ParserStateMachine::StateOperation status;
            char c = ReadNextChar(status);
            return _stateMachine.State();
        }

        size_t GoToSection(const std::string &sectionName)
        {
            char c[2]{' ', '\0'};
            std::string name;
            ParserStateMachine::StateOperation stateStatus;
            while (c[0] != '\0')
            {
                c[0] = ReadNextChar(stateStatus);

                if (stateStatus == ParserStateMachine::StateOperation::Error || stateStatus == ParserStateMachine::StateOperation::ChangedAndCrossTheBookmark)
                    return -1;
                else if (stateStatus == ParserStateMachine::StateOperation::Unchanged && _stateMachine.State() == JsonParserStates::PropertyName)
                    name.append(c);
                else if (stateStatus == ParserStateMachine::StateOperation::Changed && _stateMachine.State() == JsonParserStates::PropertyName)
                    name.clear();
                else if (stateStatus == ParserStateMachine::StateOperation::Changed && _stateMachine.State() == JsonParserStates::PropertyValue)
                {
                    if (sectionName == name)
                    {
                        _stateMachine.SetBookmark();
                        return _parseIndex + _readFileOffset;
                    }
                }
            }
            return -1;
        }
    };
}
