#pragma once

#include "data/sharedData.hpp"
#include "screens/contextHandler.hpp"
#include "modules/st7789v2.hpp"

namespace RouteEsp32::screens
{
    using namespace RouteEsp32::data;
    using namespace RouteEsp32::modules;

    class Navigate : public ContextHandler
    {
    public:
        Navigate(ST7789V2 *lcd) {
            _lcd = lcd;
        }
        void Init();
        void Loop();
        void SetSharedBuffer(SharedData *buffer)
        {
            this->_sharedBuffer = buffer;
        }
        ContextHandler::ContextType Context()
        {
            return ContextHandler::ContextType::Navigation;
        }

    private:
        SharedData *_sharedBuffer;
        ST7789V2 *_lcd;

        void ShowTime();
        void ShowSatelites();
        void HandleButtons();
    };
}