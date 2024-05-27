#include "common/system.hpp"
#include "screens/navigate.hpp"
#include "string.h"
#include "screens/windows.hpp"
#include <math.h>

using namespace RouteEsp32::screens;
using namespace RouteEsp32::data;
using namespace RouteEsp32::data::images;
using namespace RouteEsp32::modules;

DoneAction Navigate::Loop()
{
    this->ShowBattery();
    this->ShowSatelites();
    this->ShowTime();

    auto action = this->HandleButtons();
    if (action == DoneAction::Exit)
    {
        ESP_LOGI("nav", "Closing file %d", _navFileHandler);
        this->CloseFile();
        return DoneAction::Exit;
    }
    if (_dirIndex >= _directions.size())
    {
        if (!this->ReadSection())
        {
            Windows::Alert(_lcd, _sharedBuffer, "Exit, no more file");
            return DoneAction::Exit;
        }
    }
    if (action == DoneAction::Changed)
    {
        this->ShowDirection(_directions[_dirIndex]);
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
void Navigate::ShowBattery()
{
    auto lvl = std::min((std::max(0, 100 - _sharedBuffer->batteryLvl)) / 3, 30);
    if (std::abs(lvl - _lasts.LastBtrLvl) > 6)
    {
        _lasts.LastBtrLvl = lvl;
        _lcd->Rect(155, 23, 30 - _lasts.LastBtrLvl, 14, 0x0f80);
        _lcd->Rect(185 - _lasts.LastBtrLvl, 23, _lasts.LastBtrLvl, 14, 0x0000);

        if (lvl < 10 && lvl >= 0)
        {
            char val[2]{static_cast<char>(lvl + '0'), '\0'};
            _lcd->Print(140, 23, val, &Font16, 0xf800, 0x0000);
        }
    }
}
void Navigate::ShowTime()
{
    if (_lasts.LastMinute == _sharedBuffer->GpsSharedData.DateTime.minute)
        return;

    char txt[8]{0};
    snprintf(txt, 8, "%02d:%02d", _sharedBuffer->GpsSharedData.DateTime.hour, _sharedBuffer->GpsSharedData.DateTime.minute);

    _lcd->PrintLine(90, 270, txt, &Font16, 0x0ff0, 0x0000);
    _lasts.LastMinute = _sharedBuffer->GpsSharedData.DateTime.minute;
}
void Navigate::ShowSatelites()
{
    uint16_t number = (uint8_t)_sharedBuffer->GpsSharedData.Satelites;
    if (_lasts.LastSatelites == number)
        return;

    char txt[6]{' '};
    snprintf(txt, 6, "%d", number);
    for (int off = 2; off > 0; --off)
        if (txt[off] == '\0')
            txt[off] = ' ';

    _lcd->Print(70, 21, txt, &Font16, 0x0ff0, 0x0000);
    _lasts.LastSatelites = number;
}

void Navigate::ShowDirection(Direction &dir)
{
    const uint16_t x = 30, y = 80;
    switch (dir.Type)
    {
    case DirectionType::crossing:
        _lcd->Image(x, y, &Images::crossing);
        break;
    case DirectionType::round:
        if (dir.Exit == 1)
            _lcd->Image(x, y, &Images::round_0);
        else if (dir.Exit == 2)
            _lcd->Image(x, y, &Images::round_1);
        else if (dir.Exit == 3)
            _lcd->Image(x, y, &Images::round_2);
        else if (dir.Exit == 4)
            _lcd->Image(x, y, &Images::round_3);
        break;
    case DirectionType::bridge:
        _lcd->Image(x, y, &Images::bridge);
        break;
    case DirectionType::left_join:
        _lcd->Image(x, y, &Images::l_join);
        break;
    case DirectionType::right_join:
        _lcd->Image(x, y, &Images::r_join);
        break;
    case DirectionType::town:
        _lcd->Image(x, y, &Images::town);
        break;
    case DirectionType::t_join:
        _lcd->Image(x, y, &Images::town);
        break;
    case DirectionType::end:
        _lcd->Image(x, y, &Images::town);
        break;
    default:
        _lcd->Image(x, y, &Images::crossing_3);
        break;
    }
    if (!dir.RoadName.empty())
        _lcd->PrintLine(20, 54, dir.RoadName.c_str(),
                        &Font24, 0x0000, 0x0fb0);
    else
        _lcd->PrintLine(20, 54, " ",
                        &Font24, 0x0000, 0x0000);
}

bool Navigate::ReadSection()
{
    Direction dir;
    if (!_reader->ReadNextDirection(dir))
        return false;
    _directions.push_back(dir);
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
        ++_dirIndex;
        return DoneAction::Changed;
    }
    else if (key == KeysState::Keys::BtnPrev)
    {
        if (_dirIndex > 0)
            --_dirIndex;
        return DoneAction::Changed;
    }
    else if (key == KeysState::Keys::BothBtns)
    {
        ESP_LOGI("nav", "Exit, button pressed");
        return DoneAction::Exit;
    }
    return DoneAction::None;
}