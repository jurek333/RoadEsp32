#include "modules/sdcard.hpp"
#include <sys/unistd.h>
#include "esp_vfs_fat.h"
#include <dirent.h>
#include "sdmmc_cmd.h"
#include <string.h>
#include <errno.h>

using namespace RoadEsp32::Modules;

const static char *TAG = "esp";

SdCard::SdCard(gpio_num_t cs)
{
    _cs = cs;
}

void SdCard::Init()
{
    esp_err_t ret;
    esp_vfs_fat_sdmmc_mount_config_t mountConfig = {
        .format_if_mount_failed = false,
        .max_files = 5,
        .allocation_unit_size = 16 * 1024};
    sdmmc_card_t *card;

    sdmmc_host_t host = SDSPI_HOST_DEFAULT();
    sdspi_device_config_t sdSlot = SDSPI_DEVICE_CONFIG_DEFAULT();
    sdSlot.gpio_cs = _cs;
    sdSlot.host_id = SPI2_HOST;

    ret = esp_vfs_fat_sdspi_mount(_mountPoint.c_str(), &host, &sdSlot, &mountConfig, &card);
    if (ret != ESP_OK)
    {
        ESP_LOGE(TAG, "Failed to initialize the card (%s).", esp_err_to_name(ret));
        return;
    }
}

bool SdCard::ListFiles(const std::string &subDirPath, std::vector<std::string> &list)
{
    char file[255];
    auto path = _mountPoint + subDirPath;
    auto d = opendir(path.c_str());
    if (nullptr == d)
    {
        ESP_LOGW(TAG, "can't open the dir %s", path.c_str());
        return false;
    }
    dirent *dir;
    while ((dir = readdir(d)) != NULL)
    {
        if (dir->d_type != DT_REG)
            continue;
        strncpy(file, dir->d_name, 254);
        for (int ind = strlen(file) - 1; ind >= 0; --ind)
            if (file[ind] == '.')
            {
                file[ind] = '\0';
                break;
            }
        list.push_back(std::string{file});
    }
    closedir(d);
    return true;
}

SdCardFileHandler SdCard::OpenFile(const std::string &path, const FileOpenMode mode)
{
    if (_files.IsFull())
    {
        ESP_LOGE(TAG, "Limit of opened files reached");
        return SdCardFileHandler{0xFF};
    }
    auto fullpath = _mountPoint + path;
    char m[5]{'r', '\0', 'r', 'w', '\0'};
    FILE *f = fopen(fullpath.c_str(), &m[mode]);
    if (f == NULL)
    {
        ESP_LOGE(TAG, "Failed to open file for reading");
        return SdCardFileHandler{0xFF};
    }
    auto hdr = _files.Add(f);
    return hdr;
}

void SdCard::CloseFile(const SdCardFileHandler &fileHandler)
{
    fclose(_files.Get(fileHandler));
    _files.Release(fileHandler);
}

bool SdCard::Read(const SdCardFileHandler &fileHandler, char *buff, const uint16_t buffSize)
{
    //ESP_LOGE(TAG, "Read file %d", fileHandler);
    if (NULL == fgets(buff, buffSize, _files.Get(fileHandler)))
    {
        //ESP_LOGE(TAG, "Read error: %d", errno);
        return false;
    }
    return true;
}


