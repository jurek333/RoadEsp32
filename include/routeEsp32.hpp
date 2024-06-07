#pragma once

#include "data/sharedData.hpp"
#include "screens/gps.hpp"
#include "screens/logo.hpp"
#include "screens/menu.hpp"
#include "screens/navigate.hpp"
#include "modules/lcds/lcd.hpp"

#define PIN_NUM_MISO 8
#define PIN_NUM_MOSI 9
#define PIN_NUM_CLK 7

#define LCD_HOST SPI2_HOST

#define SCR_H 320
#define SCR_W 240

namespace RoadEsp32
{
    using namespace RoadEsp32::Data;
    using namespace RoadEsp32::Protocols;
    using namespace RoadEsp32::Modules;
    using namespace RoadEsp32::Modules::Lcds;
    using namespace RoadEsp32::Screens;

    class RouteBook
    {
    public:
        RouteBook();
        void Setup(SharedData *sharedBuffer);
        void EventLoop();

        bool FinishLoop = false;
        void SetSharedBuffer(SharedData *buffer)
        {
            this->_sharedBuffer = buffer;
            this->_menuScreen.SetSharedBuffer(buffer);
            this->_gpsScreen.SetSharedBuffer(buffer);
            this->_navigationScreen.SetSharedBuffer(buffer);
        }

    private:
        SharedData *_sharedBuffer;
        ContextHandler *_currentRoutine;

        Spi spi{SPI2_HOST};
        Lcd lcd{SCR_W, SCR_H};
        SdCard sdCard{GPIO_NUM_43};
        Logo _logoScreen{&lcd};
        Menu _menuScreen{&sdCard, &lcd};
        Gps _gpsScreen{&lcd};
        Navigate _navigationScreen{&lcd, &sdCard};

        void SwitchScreens(ContextHandler *handl)
        {
            _currentRoutine = handl;
            _currentRoutine->Init();
        }
    };
}