#pragma once

#include "data/sharedData.hpp"
#include "screens/contextHandler.hpp"
#include "modules/st7789v2.hpp"
#include "modules/disk.hpp"
#include "modules/sdcard.hpp"
#include "parser/routeReader.hpp"

#include "esp_log.h"

namespace RouteEsp32::screens
{
    using namespace RouteEsp32::data;
    using namespace RouteEsp32::modules;
    using namespace RouteEsp32::parser;

    struct LastValues {
        uint8_t LastBtrLvl{0};
        uint8_t LastSatelites{0};
        uint8_t LastMinute{255};
    };

    class Navigate : public ContextHandler
    {
    public:
        Navigate(ST7789V2 *lcd, SdCard *sd)
        {
            _lcd = lcd;
            _sd = sd;
            _reader = nullptr;
        }
        void Init();
        DoneAction Loop();
        void SetSharedBuffer(SharedData *buffer)
        {
            this->_sharedBuffer = buffer;
        }
        ContextHandler::ContextType Context()
        {
            return ContextHandler::ContextType::Navigation;
        }
        bool ReadFile(const std::string &path)
        {
            ESP_LOGI("nav", "Open file: %s", path.c_str());
            _navFileHandler = _sd->OpenFile(path, FileOpenMode::Open4Read);
            if (FileHandlerExtnsions::IsEmpty(_navFileHandler))
            {
                return false;
            }
            ESP_LOGI("nav", "Got filehandler %d", _navFileHandler);
            _reader = new RouteReader(_sd, _navFileHandler);
            return _reader->StartReading();
        }
        void CloseFile()
        {
            delete _reader;
            _reader = nullptr;
            _sd->CloseFile(_navFileHandler);
            FileHandlerExtnsions::ClearHandler(_navFileHandler);
        }

    private:
        SharedData *_sharedBuffer;
        ST7789V2 *_lcd;
        SdCard *_sd;
        SdCardFileHandler _navFileHandler;
        RouteReader *_reader;

        LastValues _lasts;

        void ShowTime();
        void ShowBattery();
        void ShowSatelites();
        void ShowDirection(Direction &dir);
        DoneAction HandleButtons();
        bool ReadSection();
    };
}