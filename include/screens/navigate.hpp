#pragma once

#include "data/sharedData.hpp"
#include "screens/contextHandler.hpp"
#include "modules/st7789v2.hpp"
#include "modules/sdcard.hpp"

#include "esp_log.h"

namespace RouteEsp32::screens
{
    using namespace RouteEsp32::data;
    using namespace RouteEsp32::modules;

    class Navigate : public ContextHandler
    {
    public:
        Navigate(ST7789V2 *lcd, SdCard *sd)
        {
            _lcd = lcd;
            _sd = sd;
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
            _navFileHandler = _sd->OpenFile(path, SdCard::FileOpenMode::Open4Read);
            ESP_LOGI("nav", "Got filehandler %d", _navFileHandler);
            return !FileHandlerExtnsions::IsEmpty(_navFileHandler);
        }
        void CloseFile() {
            _sd->CloseFile(_navFileHandler);
            FileHandlerExtnsions::ClearHandler(_navFileHandler);
        }

    private:
        SharedData *_sharedBuffer;
        ST7789V2 *_lcd;
        SdCard *_sd;
        SdCardFileHandler _navFileHandler;

        void ShowTime();
        void ShowSatelites();
        DoneAction HandleButtons();
        bool ReadSection();
    };
}