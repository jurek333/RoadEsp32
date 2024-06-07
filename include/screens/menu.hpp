#pragma once

#include "modules/sdcard.hpp"
#include "modules/lcds/lcd.hpp"
#include "data/sharedData.hpp"
#include "screens/contextHandler.hpp"

#include <vector>
#include <string>

namespace RoadEsp32::Screens
{
    using namespace RoadEsp32::Data;
    using namespace RoadEsp32::Modules;
    using namespace RoadEsp32::Modules::Lcds;

    class Menu : public ContextHandler
    {
    public:
        Menu(SdCard *sd, Lcd *lcd)
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
            if(_currentItemIndex == _list.size()-1) {
                return _list[_currentItemIndex];
            }
            return _routesDir + "/" + _list[_currentItemIndex] + ".route";
        }

    private:
        SdCard *_sd;
        Lcd *_lcd;
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