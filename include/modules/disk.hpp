#pragma once
#include <string>
#include <vector>

namespace RouteEsp32::modules
{
    typedef uint8_t SdCardFileHandler;

    enum FileOpenMode
    {
        Open4Read = 0,
        Open4ReadWrite = 2,
        Open4Write = 3
    };

    class Disk
    {
    public:
        virtual bool ListFiles(const std::string &subDirPath, std::vector<std::string> &list) = 0;
        virtual SdCardFileHandler OpenFile(const std::string &path, const FileOpenMode mode) = 0;
        virtual void CloseFile(const SdCardFileHandler &fileHandler) = 0;
        virtual bool Read(const SdCardFileHandler &fileHandler, char *buff, const uint16_t buffSize) = 0;
        virtual void Write(const SdCardFileHandler &fileHandler, const std::string &value) = 0;
        virtual void Reset(const SdCardFileHandler &fileHandler) = 0;
    };
}