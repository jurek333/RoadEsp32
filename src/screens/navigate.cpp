#include "common/system.hpp"
//#include "common/palleteColors.hpp"
#include "screens/navigate.hpp"
#include "string.h"
#include "screens/windows.hpp"
#include <math.h>

using namespace RoadEsp32::Common;
using namespace RoadEsp32::Screens;
using namespace RoadEsp32::Data;
using namespace RoadEsp32::Modules;

void Navigate::Init()
{
    _lcd->Clean(PalleteColors::ScreenBackground);
    _lcd->Image(150, 20, &Imgs::Icons::battery);
    _lcd->Image(50, 20, &Imgs::Icons::satellite);
    _lcd->Rect(55, 45, 130, 1, PalleteColors::LightBlue);
    _lcd->Rect(55, 268, 130, 1, PalleteColors::LightBlue);
    _lcd->Print(20, 270, "#", &Font16, PalleteColors::MainText, PalleteColors::ScreenBackground);
}

DoneAction Navigate::Loop()
{
    this->ShowBattery();
    this->ShowSatelites();
    this->ShowTime();

    auto action = this->HandleButtons();
    if (action == DoneAction::Exit)
    {
        ESP_LOGI("nav", "Closing file %d", _navFileHandler);
        return DoneAction::Exit;
    }
    if (_dirIndex >= _directions.size())
    {
        if (!this->ReadSection())
        {
            if (_dirIndex == 0)
            {
                Windows::Alert(_lcd, this->_sharedBuffer, "Empty File");
                return DoneAction::Exit;
            }
            else
                --_dirIndex;
        }
        else
            action = DoneAction::Changed;
    }
    if (action == DoneAction::Changed)
    {
        _sharedBuffer->GpsSharedData.GpsDirections.SetDestination(_directions[_dirIndex].Gps);
        this->ShowDirection(_directions[_dirIndex]);
    }
    this->PrintNames(_directions[_dirIndex]);
    this->PrintGpsDirections();
    RtosSystem::Wait(200);
    return DoneAction::None;
}

void Navigate::ShowBattery()
{
    auto battLvl = _sharedBuffer->batteryLvl;
    auto lvl = std::min((std::max(0, 100 - battLvl)) / 3, 30);

    ESP_LOGI("nav", "bat lvl in px %d", battLvl);
    ESP_LOGI("nav", "lvl in px %d", lvl);

    if (std::abs(lvl - _lasts.LastBtrLvl) >= 6)
    {
        _lasts.LastBtrLvl = lvl;
        if (30 - lvl > 0)
            _lcd->Rect(155, 23, 30 - lvl, 14, 0x0f80);
        if (lvl > 0)
            _lcd->Rect(185 - lvl, 23, lvl, 14, 0x0000);
        if (battLvl <= 10)
        {
            _lcd->Print(114, 23, static_cast<uint8_t>(battLvl), &Font16, 0xf800, 0x0000, false);
        }
        else
        {
            _lcd->Rect(114, 23, 149 - 114, 16, 0x0000);
            //_lcd->Print(114, 23, "   ", &Font16, 0x0000, 0x0000);
        }
    }
}
void Navigate::ShowTime()
{
    if (_lasts.LastMinute == _sharedBuffer->GpsSharedData.DateTime.minute)
        return;

    char txt[8]{0};
    snprintf(txt, 8, "%02d:%02d", _sharedBuffer->GpsSharedData.DateTime.hour, _sharedBuffer->GpsSharedData.DateTime.minute);

    _lcd->Print(90, 270, txt, &Font16, PalleteColors::MainText, PalleteColors::ScreenBackground);
    _lasts.LastMinute = _sharedBuffer->GpsSharedData.DateTime.minute;
}

void Navigate::ShowSatelites()
{
    uint8_t number = (uint8_t)_sharedBuffer->GpsSharedData.Satelites;
    if (_lasts.LastSatelites == number)
        return;

    _lcd->Print(70, 21, number, &Font16, PalleteColors::MainText, PalleteColors::ScreenBackground, true);
    _lasts.LastSatelites = number;
}

void Navigate::ShowDirection(Direction &dir)
{
    const uint16_t x = 40, y = 100;

    _lcd->Print(20 + Font16.width + 1, 270, static_cast<uint16_t>(_dirIndex), &Font16,
                PalleteColors::MainText, PalleteColors::ScreenBackground, true);

    switch (dir.Type)
    {
    case DirectionType::crossing:
        if (dir.Dir == Directions::ahead)
            _lcd->MonoImage(x, y, &RouteImgs::crossroads2, PalleteColors::DirectionsForeground, 4);
        else if (dir.Dir == Directions::left)
            _lcd->MonoImage(x, y, &RouteImgs::crossroads3, PalleteColors::DirectionsForeground, 4);
        else if (dir.Dir == Directions::right)
            _lcd->MonoImage(x, y, &RouteImgs::crossroads1, PalleteColors::DirectionsForeground, 4);
        else
            _lcd->MonoImage(x, y, &RouteImgs::unknown, PalleteColors::MainText, 4);
        break;
    case DirectionType::round:
        if (dir.Exit == 1)
            _lcd->MonoImage(x, y, &RouteImgs::roundabout1, PalleteColors::DirectionsForeground, 2);
        else if (dir.Exit == 2)
            _lcd->MonoImage(x, y, &RouteImgs::roundabout2, PalleteColors::DirectionsForeground, 2);
        else if (dir.Exit == 3)
            _lcd->MonoImage(x, y, &RouteImgs::roundabout3, PalleteColors::DirectionsForeground, 2);
        else if (dir.Exit == 4)
            _lcd->MonoImage(x, y, &RouteImgs::bridge, PalleteColors::DirectionsForeground, 1);

        break;
    case DirectionType::bridge:
        _lcd->MonoImage(x, y, &RouteImgs::bridge, PalleteColors::DirectionsForeground, 1);
        break;
    case DirectionType::left_join:
        if (dir.Dir == Directions::ahead)
            _lcd->MonoImage(x, y, &RouteImgs::left_join_1, PalleteColors::DirectionsForeground, 4);
        else if (dir.Dir == Directions::left)
            _lcd->MonoImage(x, y, &RouteImgs::left_join_2, PalleteColors::DirectionsForeground, 4);
        break;
    case DirectionType::right_join:
        if (dir.Dir == Directions::ahead)
            _lcd->MonoImage(x, y, &RouteImgs::right_join_2, PalleteColors::DirectionsForeground, 4);
        else if (dir.Dir == Directions::right)
            _lcd->MonoImage(x, y, &RouteImgs::right_join_1, PalleteColors::DirectionsForeground, 4);
        break;
    case DirectionType::town:
        _lcd->MonoImage(x, y, &RouteImgs::town, PalleteColors::DirectionsForeground, 1);
        break;
    case DirectionType::t_join:
        if (dir.Dir == Directions::left)
            _lcd->MonoImage(x, y, &RouteImgs::t_join_2, PalleteColors::DirectionsForeground, 4);
        else if (dir.Dir == Directions::right)
            _lcd->MonoImage(x, y, &RouteImgs::t_join_1, PalleteColors::DirectionsForeground, 4);
        break;
    case DirectionType::end:
        _lcd->MonoImage(x, y, &RouteImgs::end, PalleteColors::DirectionsForeground, 1);
        break;
    default:
        _lcd->MonoImage(x, y, &RouteImgs::unknown, PalleteColors::MainText, 4);
        break;
    }
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