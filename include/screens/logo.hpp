#pragma once

#include "modules/st7789v2.hpp"
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "screens/contextHandler.hpp"

namespace RouteEsp32::screens
{
    using namespace RouteEsp32::modules;

    class Logo : public ContextHandler
    {
    public:
        Logo(ST7789V2 *lcd) { _lcd = lcd; }
        void Init()
        {
            _lcd->Clean(0x0000);
        }
        void Loop()
        {
            vTaskDelay(50 / portTICK_PERIOD_MS);
            _lcd->Tick();
            _lcd->MonoImage(50, 82, &Images::Logos::logo, RouteEsp32::modules::mapColor(0xD1332B), 14);
        }
        ContextHandler::ContextType Context() { return ContextHandler::ContextType::Intro; }

    private:
        ST7789V2 *_lcd;
    };
}