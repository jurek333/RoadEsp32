#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "routeEsp32.hpp"
#include <esp_log.h>

using namespace RouteEsp32;
using namespace RouteEsp32::screens;
using namespace RouteEsp32::modules;

void loadMenuInTask(void *pvArgs)
{
    Menu *menu = (Menu *)pvArgs;
    menu->Load();
    vTaskDelete(NULL);
}

RouteBook::RouteBook()
{
    _currentRoutine = &_logoScreen;
}

void RouteBook::Setup(SharedData *sharedBuffer)
{
    this->SetSharedBuffer(sharedBuffer);

    spi.Init(PIN_NUM_MOSI, PIN_NUM_MISO, PIN_NUM_CLK, 4096);
    lcd.Init(&spi);
    lcd.Clean(0x0000);
    sdCard.Init();

    _currentRoutine->Init();
    TaskHandle_t menu;
    xTaskCreatePinnedToCore(loadMenuInTask, "LoadMenu", 4096, &this->_menuScreen, 1, &menu, 1);
}

void RouteBook::EventLoop()
{
    auto action = _currentRoutine->Loop();
    switch (action)
    {
    case DoneAction::Selected:
    {
        auto path = _menuScreen.GetSelectedPath();
        if (_navigationScreen.ReadFile(path))
        {
            SwitchScreens(&_navigationScreen);
        }
    }
    break;
    case DoneAction::None:
    {
        if (_currentRoutine->Context() == ContextHandler::ContextType::Intro && _menuScreen.IsReady())
        {
            SwitchScreens(&_menuScreen);
        }
    }
    break;
    case DoneAction::Exit:
    {
        if (_currentRoutine->Context() == ContextHandler::ContextType::Navigation
         || _currentRoutine->Context() == ContextHandler::ContextType::Gps)
        {
            SwitchScreens(&_menuScreen);
        }
    }
    break;
    }
}
