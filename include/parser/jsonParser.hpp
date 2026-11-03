#pragma once

#include "modules/disk.hpp"
#include "parser/parserStateMachine.hpp"
#include "common/stringExtensions.hpp"
#include <queue>

#ifndef JSONPARSER_BUFF_SIZE
#define JSONPARSER_BUFF_SIZE 512
#endif

using namespace RoadEsp32::Modules;
using namespace RoadEsp32::Common;

namespace RoadEsp32::Parser
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
            {
                if (ReadNextChar(stateStatus) == '\0')
                    return val;
            }

            if(type == JsonParserStates::ValueNumber) {
                c[0] = _buff[_parseIndex-1];
                val.append(c);
            }
            while (_stateMachine.State() == type)
            {
                c[0] = ReadNextChar(stateStatus);
                if (c[0] == '\0')
                    return val;
                if (stateStatus != ParserStateMachine::StateOperation::Unchanged)
                    continue;
                if (c[0] == '\\')
                {
                    if (!AppendEscapedChar(val))
                        return val;
                    continue;
                }
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
            if (ReadNextChar(operation) == '\0')
                return;

            while (operation != ParserStateMachine::StateOperation::PopedWithBookmark)
            {
                if (ReadNextChar(operation) == '\0')
                    return;
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
        inline bool StillInProperty() noexcept { 
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

        // Decodes the character(s) following a backslash. Returns false on EOF.
        bool AppendEscapedChar(std::string &val)
        {
            ParserStateMachine::StateOperation status;
            char e = ReadNextChar(status);
            switch (e)
            {
            case '\0':
                return false;
            case 'n':
                val += '\n';
                return true;
            case 't':
                val += '\t';
                return true;
            case 'r':
                val += '\r';
                return true;
            case 'b':
                val += '\b';
                return true;
            case 'f':
                val += '\f';
                return true;
            case 'u':
                return AppendUnicodeEscape(val);
            default:
                // covers \" \\ \/
                val += e;
                return true;
            }
        }
        // Appends the UTF-8 encoding of a \uXXXX BMP code point. Surrogate pairs are not combined.
        bool AppendUnicodeEscape(std::string &val)
        {
            ParserStateMachine::StateOperation status;
            uint32_t cp = 0;
            for (int i = 0; i < 4; ++i)
            {
                char h = ReadNextChar(status);
                if (h == '\0')
                    return false;
                uint32_t d;
                if (h >= '0' && h <= '9')
                    d = h - '0';
                else if (h >= 'a' && h <= 'f')
                    d = h - 'a' + 10;
                else if (h >= 'A' && h <= 'F')
                    d = h - 'A' + 10;
                else
                {
                    val += '?';
                    return true;
                }
                cp = (cp << 4) | d;
            }
            if (cp < 0x80)
            {
                val += static_cast<char>(cp);
            }
            else if (cp < 0x800)
            {
                val += static_cast<char>(0xC0 | (cp >> 6));
                val += static_cast<char>(0x80 | (cp & 0x3F));
            }
            else
            {
                val += static_cast<char>(0xE0 | (cp >> 12));
                val += static_cast<char>(0x80 | ((cp >> 6) & 0x3F));
                val += static_cast<char>(0x80 | (cp & 0x3F));
            }
            return true;
        }
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