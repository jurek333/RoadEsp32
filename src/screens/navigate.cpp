#include "screens/navigate.hpp"
#include "common/system.hpp"
#include "string.h"
#include "screens/windows.hpp"

using namespace RouteEsp32::screens;
using namespace RouteEsp32::data;
using namespace RouteEsp32::data::images;
using namespace RouteEsp32::modules;

DoneAction Navigate::Loop()
{    
    auto action = this->HandleButtons();
    if (action == DoneAction::Exit)
    {
        ESP_LOGI("nav", "Closing file %d", _navFileHandler);
        this->CloseFile();
        return DoneAction::Exit;
    }
    RtosSystem::Wait(200);
    return DoneAction::None;
}
void Navigate::Init()
{
    _lcd->Clean(0x0000);
    _lcd->Image(150, 20, &Images::Icons::battery);
    _lcd->Image(50, 20, &Images::Icons::satellite);
    _lcd->Rect(55, 45, 130, 1, 0xFFFF);
    _lcd->Rect(55, 268, 130, 1, 0xFFFF);
    ESP_LOGI("nav", "init lcd 4 nav");
}
void Navigate::ShowTime()
{
    char txt[8]{0};
    snprintf(txt, 8, "%02d:%02d", _sharedBuffer->GpsSharedData.DateTime.hour, _sharedBuffer->GpsSharedData.DateTime.minute);

    _lcd->PrintLine(90, 270, txt, &Font16, 0x0ff0, 0x0000);
}
void Navigate::ShowSatelites()
{
    char txt[4]{' '};
    uint8_t number = (uint8_t)_sharedBuffer->GpsSharedData.Satelites;
    snprintf(txt, 4, "%d", number);
    for (int off = 2; off > 0; --off)
        if (txt[off] == '\0')
            txt[off] = ' ';

    _lcd->PrintLine(70, 21, txt, &Font16, 0x0ff0, 0x0000);
}

bool Navigate::ReadSection()
{
    auto txt = _sd->Read(_navFileHandler, 18);
    if (txt.length() == 0)
    {
        return false;
    }
    _lcd->Print(0, 120, txt.c_str(), &Font16, 0x0110, 0x0000);
    return true;
}

DoneAction Navigate::HandleButtons()
{
    KeysState::Keys key;
    _sharedBuffer->SharedKeyState.GetKeys(_sharedBuffer->Semaphore, key);

    if (key == KeysState::Keys::None)
        return DoneAction::None;
    
    ESP_LOGI("nav", "Key press %d", key);
    if (key == KeysState::Keys::BtnNext)
    {
        if (!this->ReadSection())
        {
            Windows::Alert(_lcd, _sharedBuffer, "Exit, no more file");
            return DoneAction::Exit;
        }
    }
    else if (key == KeysState::Keys::BothBtns)
    {
        ESP_LOGI("nav", "Exit, button pressed");
        return DoneAction::Exit;
    }
    return DoneAction::None;
}