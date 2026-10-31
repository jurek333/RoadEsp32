#include "common/system.hpp"
#include "common/palleteColors.hpp"
#include "screens/gps.hpp"

using namespace RoadEsp32::Screens;
using namespace RoadEsp32::Common;
using namespace RoadEsp32::Data::Images;

void Gps::Init()
{
    _lcd->Clean(PalleteColors::ScreenBackground);
    _lcd->Image(150, 20, &Imgs::Icons::battery);
    _lcd->Image(50, 20, &Imgs::Icons::satellite);
    _lcd->Rect(55, 45, 130, 1, PalleteColors::LightBlue);
    _lcd->Rect(55, 268, 130, 1, PalleteColors::LightBlue);
}

DoneAction Gps::HandleButton()
{
    KeysState::Keys key;
    _sharedBuffer->SharedKeyState.GetKeys(_sharedBuffer->Semaphore, key);

    if (key == KeysState::Keys::BothBtns)
    {
        return DoneAction::Exit;
    }
    return DoneAction::None;
}

void Gps::ShowSatelites()
{
    uint8_t number;
    {
        SharedData::GpsLock lock(_sharedBuffer);
        if (!lock)
            return;
        number = (uint8_t)_sharedBuffer->GpsSharedData.Satelites;
    }
    if (_showingValues.SatNo == number)
        return;

    _lcd->Print(70, 21, number, &Font16, PalleteColors::MainText, PalleteColors::ScreenBackground, true);
    _showingValues.SatNo = number;
}

void Gps::ShowTime()
{
    uint8_t hour, minute;
    {
        SharedData::GpsLock lock(_sharedBuffer);
        if (!lock)
            return;
        hour = _sharedBuffer->GpsSharedData.DateTime.hour;
        minute = _sharedBuffer->GpsSharedData.DateTime.minute;
    }
    if (_showingValues.Minute == minute)
        return;

    char txt[8]{0};
    snprintf(txt, 8, "%02d:%02d", hour, minute);

    _lcd->Print(90, 270, txt, &Font16, PalleteColors::MainText, PalleteColors::ScreenBackground);
    _showingValues.Minute = minute;
}
void Gps::ShowNav()
{
    double speed, course;
    {
        SharedData::GpsLock lock(_sharedBuffer);
        if (!lock)
            return;
        speed = _sharedBuffer->GpsSharedData.Speed;
        course = _sharedBuffer->GpsSharedData.Course;
    }
    if (!AreEqual(_showingValues.Speed, speed))
    {
        char txt[13]{'\0'};
        _showingValues.Speed = speed;
        snprintf(txt, 12, "%5.1f km/h", _showingValues.Speed);
        _lcd->PrintCenteredLine(220, txt, &Font35, PalleteColors::MainText, PalleteColors::ScreenBackground);
    }
    // if (!AreEqual(_showingValues.Altitude, _sharedBuffer->GpsSharedData.Altitude))
    // {
    //     char txt[11]{'\0'};
    //     //_showingValues.Altitude = _sharedBuffer->GpsSharedData.Altitude;
    //     snprintf(txt, 10, "%6.1f m", _showingValues.Altitude);
    //     _lcd->PrintCenteredLine(253, txt, &Font16, PalleteColors::MainText, PalleteColors::ScreenBackground);
    // }
    if (!AreEqual(_showingValues.Course, course))
    {
        _showingValues.Course = course;
        _lcd->RotatedImage(40, 60, &Imgs::compass, _showingValues.Course, 80, 80, PalleteColors::LightGold, PalleteColors::ScreenBackground);
        _lcd->MonoImage(109, 84, &Imgs::compass_needle, PalleteColors::LightBlue, 1);
    }
}

DoneAction Gps::Loop()
{
    ShowSatelites();
    ShowTime();
    ShowNav();

    RtosSystem::Wait(200);
    return HandleButton();
}