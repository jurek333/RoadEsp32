#pragma once

#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "data/sharedData.hpp"
#include "screens/gps.hpp"
#include "screens/logo.hpp"
#include "screens/menu.hpp"
#include "screens/navigate.hpp"

#define PIN_NUM_MISO 8
#define PIN_NUM_MOSI 9
#define PIN_NUM_CLK 7

#define LCD_HOST SPI2_HOST

#define PIN_NUM_CS GPIO_NUM_43
#define PIN_NUM_DC GPIO_NUM_4
#define PIN_NUM_RST GPIO_NUM_1
#define PIN_NUM_BCKL GPIO_NUM_2

#define SCR_H 320
#define SCR_W 240

namespace RouteEsp32
{
    using namespace RouteEsp32::data;
    using namespace RouteEsp32::protocols;
    using namespace RouteEsp32::modules;
    using namespace RouteEsp32::screens;

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
        }

    private:
        SharedData *_sharedBuffer;
        ContextHandler *_currentRoutine;

        Spi spi{SPI2_HOST};
        ST7789V2 lcd{PIN_NUM_CS, PIN_NUM_DC,
                     PIN_NUM_RST, PIN_NUM_BCKL, SCR_H, SCR_W};
        SdCard sdCard{GPIO_NUM_44};
        Logo _logoScreen{&lcd};
        Menu _menuScreen{&sdCard, &lcd};
        Gps _gpsScreen{&lcd};
        Navigate _navigationScreen{&lcd};

        void SwitchScreens(ContextHandler *handl)
        {
            _currentRoutine = handl;
            _currentRoutine->Init();
        }
    };
}