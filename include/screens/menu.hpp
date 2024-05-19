#pragma once

#include "modules/sdcard.hpp"
#include "modules/st7789v2.hpp"
#include "data/sharedData.hpp"
#include "screens/contextHandler.hpp"

#include <vector>
#include <string>

namespace RouteEsp32::screens
{
    using namespace RouteEsp32::data;
    using namespace RouteEsp32::modules;

    class Menu : public ContextHandler
    {
    public:
        Menu(SdCard *sd, ST7789V2 *lcd)
        {
            _sd = sd;
            _lcd = lcd;
        }
        void Load();
        void Init();
        DoneAction Loop();
        bool IsReady() { return _ready; }
        void SetSharedBuffer(SharedData *buffer)
        {
            this->_sharedBuffer = buffer;
        }
        ContextHandler::ContextType Context() { return ContextHandler::ContextType::Menu; }
        std::string GetSelectedPath()
        {
            return _routesDir + "/" + _list[_currentItemIndex] + ".route";
        }

    private:
        SdCard *_sd;
        ST7789V2 *_lcd;
        SharedData *_sharedBuffer;
        bool _ready = false;
        static constexpr std::string _routesDir{"/routes"};
        std::vector<std::string> _list{};
        size_t _currentItemIndex{0};

        DoneAction HandleButton();
        bool NextPosition();
        bool PrevPosition();
        bool Select();
    };

}