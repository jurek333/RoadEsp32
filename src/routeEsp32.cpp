#include "routeEsp32.hpp"

#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
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

    spi.init(PIN_NUM_MOSI, PIN_NUM_MISO, PIN_NUM_CLK, 4096);
    lcd.init(&spi);
    lcd.Clean(0x0000);
    sdCard.Init();

    _currentRoutine->Init();
    TaskHandle_t menu;
    xTaskCreatePinnedToCore(loadMenuInTask, "LoadMenu", 4096, &this->_menuScreen, 1, &menu, 1);
}

void RouteBook::EventLoop()
{
    _currentRoutine->Loop();

    // bool nPressed = _sharedBuffer->SharedKeyState.ReadNextKeyState();
    if (_currentRoutine->Context() == ContextHandler::ContextType::Intro && _menuScreen.IsReady())
    {
        SwitchScreens(&_menuScreen);
    }
}
