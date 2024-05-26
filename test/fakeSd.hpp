#pragma once

#include "unity.h"
#include "modules/disk.hpp"
#include <math.h>

using namespace RouteEsp32::modules;

class MockedSdCard : public Disk
{
private:
    size_t _offset = 0;
    std::string _json;

public:
    MockedSdCard(const std::string& json)
        : _json(json)
    {
    }

    bool ListFiles(const std::string &subDirPath, std::vector<std::string> &list)
    {
        return true;
    }
    SdCardFileHandler OpenFile(const std::string &path, const FileOpenMode mode)
    {
        return 0;
    }
    void CloseFile(const SdCardFileHandler &fileHandler)
    {
    }
    bool Read(const SdCardFileHandler &fileHandler, char *buff, const uint16_t buffSize)
    {
        auto len = _json.length();
        if (_offset >= len)
            return false;

        auto sz = std::min((size_t)buffSize, len - _offset);
        strncpy(buff, _json.c_str() + _offset, sz);
        buff[sz] = '\0';

        auto result = _offset < len;
        _offset += sz;
        return result;
    }
    void Write(const SdCardFileHandler &fileHandler, const std::string &value)
    {
    }
    void Reset(const SdCardFileHandler &fileHandler)
    {
        _offset = 0;
    }
};

class FakeSdCard : public Disk
{
private:
    int _jsonNo;
    size_t _offset = 0;
    std::string _json[7] = {
        "{\"p1\":\"12\",\"headers\":{\"name\":\"Nazwa\",\"wiek\":-534}}",
        "{\"p1\":123,\"p2\":\"name\",\"p3\":-534}",
        "{\"p1\":[1,-7,6,-9],\"p2\":\"test\"}",
        "{\"p1\":\"3,4\\\",-7\",\"p2\":\"test\"}",
        "{\"p1\":[\"1\",\"-7\"],\"p2\":\"test\"}",
        "{\"p1\":{\"p2\":{\"p3\":{\"pr\":\"test\"}}}}",
        "{\"p1\":{\"p2\":[{\"p3\":{\"pr\":\"test1\"}},{\"p3\":{\"pr\":\"test2\"}},{\"p3\":{\"pr\":\"test3\"}}]}}"};

public:
    void ChooseJsonNo(int jsonNo) { _jsonNo = jsonNo; }
    bool ListFiles(const std::string &subDirPath, std::vector<std::string> &list)
    {
        return true;
    }
    SdCardFileHandler OpenFile(const std::string &path, const FileOpenMode mode)
    {
        return 0;
    }
    void CloseFile(const SdCardFileHandler &fileHandler)
    {
    }
    bool Read(const SdCardFileHandler &fileHandler, char *buff, const uint16_t buffSize)
    {
        auto len = _json[_jsonNo].length();
        if (_offset >= len)
            return false;

        auto sz = std::min((size_t)buffSize, len - _offset);
        strncpy(buff, _json[_jsonNo].c_str() + _offset, sz);
        buff[sz] = '\0';

        auto result = _offset < len;
        _offset += sz;
        return result;
    }
    void Write(const SdCardFileHandler &fileHandler, const std::string &value)
    {
    }
    void Reset(const SdCardFileHandler &fileHandler)
    {
        _offset = 0;
    }
};
