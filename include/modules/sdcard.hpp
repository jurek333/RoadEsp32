#pragma once

#include <cstddef>
#include <string>
#include <vector>
#include "soc/gpio_num.h"

using namespace std;

namespace RouteEsp32::modules
{
    #define MaxOpenedFilesAmount 4
    typedef uint8_t SdCardFileHandler;

    class SdCard
    {
    public:
        SdCard(gpio_num_t cs);
        void Init();

        bool ListFiles(const std::string& subDirPath, std::vector<std::string>& list);
        SdCardFileHandler OpenFile(const std::string &path);
        void CloseFile(const SdCardFileHandler &fileHandler);
        std::string&& Read(const SdCardFileHandler &fileHandler, const uint16_t chunkSize);
        void Write(const SdCardFileHandler &fileHandler, const std::string& value);

        enum FileOpenType:uint8_t {
            Read = 0,
            ReadWrite = 2,
            Write = 3
        };
    private:
        gpio_num_t _cs;
        static constexpr std::string _mountPoint { "/sdcard" };
        File* _files[MaxOpenedFilesAmount] {nullptr};
    };
}