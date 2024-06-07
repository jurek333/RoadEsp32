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
    uint8_t number = (uint8_t)_sharedBuffer->GpsSharedData.Satelites;
    if (_showingValues.SatNo == number)
        return;

    _lcd->Print(70, 21, number, &Font16, PalleteColors::MainText, PalleteColors::ScreenBackground, true);
    _showingValues.SatNo = number;
}

void Gps::ShowTime()
{
    if (_showingValues.Minute == _sharedBuffer->GpsSharedData.DateTime.minute)
        return;

    char txt[8]{0};
    snprintf(txt, 8, "%02d:%02d", _sharedBuffer->GpsSharedData.DateTime.hour, _sharedBuffer->GpsSharedData.DateTime.minute);

    _lcd->Print(90, 270, txt, &Font16, PalleteColors::MainText, PalleteColors::ScreenBackground);
    _showingValues.Minute = _sharedBuffer->GpsSharedData.DateTime.minute;
}
void Gps::ShowNav()
{
    if (!AreEqual(_showingValues.Speed, _sharedBuffer->GpsSharedData.Speed))
    {
        char txt[13]{'\0'};
        _showingValues.Speed = _sharedBuffer->GpsSharedData.Speed;
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
    if (!AreEqual(_showingValues.Course, _sharedBuffer->GpsSharedData.Course))
    {
        _showingValues.Course = _sharedBuffer->GpsSharedData.Course;
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