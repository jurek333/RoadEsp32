#pragma once
#include "data/sharedData.hpp"
#include "modules/st7789v2.hpp"
#include "screens/contextHandler.hpp"

namespace RouteEsp32::screens
{
    using namespace RouteEsp32::data;
    using namespace RouteEsp32::modules;

    class Gps : public ContextHandler
    {
    public:
        Gps(ST7789V2 *lcd)
        {
            _lcd = lcd;
        }
        void Init();
        DoneAction Loop();
        void SetSharedBuffer(SharedData *buffer)
        {
            this->_sharedBuffer = buffer;
        }
        ContextHandler::ContextType Context() { return ContextHandler::ContextType::Gps; }

    private:
        SharedData *_sharedBuffer;
        ST7789V2 *_lcd;
    };
}