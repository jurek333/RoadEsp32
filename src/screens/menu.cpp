#include "screens/menu.hpp"
#include "common/system.hpp"
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

const int16_t choosenLineInd = 4;
const int16_t maxScreenLines = 9;
const int16_t menuHeightInLines = 9;
const int16_t yOffset = 25;
const int16_t xOffset = 0;

const CustFont_t *MenuFont = &Font24;

void Menu::Init()
{
    _lcd->Clean(0x0000);
    _lcd->Rect(xOffset, yOffset + choosenLineInd*(MenuFont->height + 6) , 240, MenuFont->height+4, 0x1111);
}
void Menu::Loop()
{
    const int16_t offsetInPxFromTop = yOffset;
    const int16_t offsetInPxFromLeft = xOffset + 5;
    int16_t lineHeight = Font24.height + 6;
    static const char spaces[2]{' ', '\0'};
    for (size_t i = 0; i < 6; ++i)
    {
        auto height = offsetInPxFromTop + i * lineHeight;
        auto index = _currentItemIndex - choosenLineInd + i;
        if (index < 0 || index >= _list.size())
            _lcd->PrintLine(offsetInPxFromLeft, height, spaces, &Font24, 0x0ff0, 0x0000);
        else
            _lcd->PrintLine(offsetInPxFromLeft, height, _list[index].c_str(), &Font24, 0x0ff0, (i == choosenLineInd ? 0x1111 : 0x0000));
    }
    wait(200);
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
