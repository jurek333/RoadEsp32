#pragma once

#include <cstddef>
#include <string>
#include <vector>
#include <sys/stat.h>
#include "soc/gpio_num.h"
#include "common/SmallBuffer.hpp"

namespace RouteEsp32::modules
{
    using namespace std;
    using namespace RouteEsp32::common;

#define MaxOpenedFilesAmount 4

    typedef uint8_t SdCardFileHandler;
    class FileHandlerExtnsions
    {
    public:
        static bool IsEmpty(const SdCardFileHandler &handler) 
        { return handler == 0xFF; }
        static void ClearHandler(SdCardFileHandler &handler) 
        { handler = 0xFF; }
    };

    class SdCard
    {
    public:
        SdCard(gpio_num_t cs);
        void Init();

        enum FileOpenType
        {
            Open4Read = 0,
            Open4ReadWrite = 2,
            Open4Write = 3
        };

        bool ListFiles(const std::string &subDirPath, std::vector<std::string> &list);
        SdCardFileHandler OpenFile(const std::string &path, const SdCard::FileOpenType mode);
        void CloseFile(const SdCardFileHandler &fileHandler);
        std::string Read(const SdCardFileHandler &fileHandler, const uint16_t chunkSize);
        void Write(const SdCardFileHandler &fileHandler, const std::string &value);

    private:
        gpio_num_t _cs;
        static constexpr std::string _mountPoint{"/sdcard"};
        SmallBuffer<FILE *, SdCardFileHandler, 4> _files;
    };
}