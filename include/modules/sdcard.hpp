#pragma once

#include <cstddef>
#include <string>
#include <vector>
#include <sys/stat.h>
#include "soc/gpio_num.h"
#include "common/SmallBuffer.hpp"
#include "modules/disk.hpp"

namespace RouteEsp32::modules
{
    using namespace std;
    using namespace RouteEsp32::common;

#define MaxOpenedFilesAmount 4

    class FileHandlerExtnsions
    {
    public:
        static bool IsEmpty(const SdCardFileHandler &handler)
        {
            return handler == 0xFF;
        }
        static void ClearHandler(SdCardFileHandler &handler)
        {
            handler = 0xFF;
        }
    };

    class SdCard : Disk
    {
    public:
        SdCard(gpio_num_t cs);
        void Init();

        bool ListFiles(const std::string &subDirPath, std::vector<std::string> &list);
        SdCardFileHandler OpenFile(const std::string &path, const SdCard::FileOpenMode mode);
        void CloseFile(const SdCardFileHandler &fileHandler);
        bool Read(const SdCardFileHandler &fileHandler, char *buff, const uint16_t buffSize);
        void Write(const SdCardFileHandler &fileHandler, const std::string &value)
        {
            fputs(value.c_str(), _files.Get(fileHandler));
        }
        void Reset(const SdCardFileHandler &fileHandler)
        {
            rewind(_files.Get(fileHandler));
        }

    private:
        gpio_num_t _cs;
        static constexpr std::string _mountPoint{"/sdcard"};
        SmallBuffer<FILE *, SdCardFileHandler, 4> _files;
    };
}