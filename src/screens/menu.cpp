#include "screens/menu.hpp"

#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include <esp_log.h>

using namespace RouteEsp32::screens;

void Menu::Load()
{
    if (!_sd->ListFiles(this->_routesDir, _list))
    {
        ESP_LOGI("menu", "ListFiles error");
        return;
    }
    _currentItemIndex = 0;
    _ready = true;
}

const int16_t cooseLineInd = 4;
const int16_t maxScreenLines = 9;
const int16_t menuHeightInLines = 6;
const int16_t yOffset = 25;

void Menu::Init()
{
    _lcd->Clean(0x0000);
    auto yO = yOffset+(maxScreenLines-menuHeightInLines)*Font16.height;
    _lcd->Rect(0, yO + cooseLineInd*(Font24.height + 6) , 240, 28, 0x1111);
}
void Menu::Loop()
{
    char val[18];
    snprintf(val, 18, "PWR: %d", _sharedBuffer->batteryLvl);
    _lcd->Print(60, yOffset, val, &Font16, 0x0fa0, 0x0000);

    const int16_t offsetInPxFromTop = yOffset+(maxScreenLines-menuHeightInLines)*Font16.height;
    const int16_t offsetInPxFromLeft = 5;
    int16_t lineHeight = Font24.height + 6;
    static const char spaces[2]{' ', '\0'};
    for (size_t i = 0; i < 6; ++i)
    {
        auto height = offsetInPxFromTop + i * lineHeight;
        auto index = _currentItemIndex - cooseLineInd + i;
        if (index < 0 || index >= _list.size())
            _lcd->PrintLine(offsetInPxFromLeft, height, spaces, &Font24, 0x0ff0, 0x0000);
        else
            _lcd->PrintLine(offsetInPxFromLeft, height, _list[index].c_str(), &Font24, 0x0ff0, (i == cooseLineInd ? 0x1111 : 0x0000));
    }
    vTaskDelay(200 / portTICK_PERIOD_MS);

    this->HandleButton();
}
bool Menu::NextPosition()
{
    ++_currentItemIndex;
    if (_currentItemIndex >= _list.size())
    {
        _currentItemIndex = _list.size() - 1;
        return false;
    }
    return true;
}
bool Menu::Select()
{
    return true;
}
bool Menu::PrevPosition()
{
    if (_currentItemIndex == 0)
    {
        return false;
    }
    --_currentItemIndex;
    return true;
}
void Menu::HandleButton()
{
    KeysState::Keys key;
    _sharedBuffer->SharedKeyState.GetKeys(_sharedBuffer->Semaphore, key);

    if (key == KeysState::Keys::None)
        return;
    if (key == KeysState::Keys::BtnNext)
    {
        this->NextPosition();
    }
    else if (key == KeysState::Keys::BtnPrev)
    {
        this->PrevPosition();
    }
    else if (key == KeysState::Keys::BothBtns)
    {
        this->Select();
    }
}
