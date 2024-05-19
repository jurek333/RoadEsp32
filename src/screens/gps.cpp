#include "screens/gps.hpp"

using namespace RouteEsp32::screens;

void Gps::Init()
{
    _lcd->Clean(0x0000);
    _lcd->Image(100, 20, &Images::Icons::battery);
    _lcd->Rect(55, 45, 130, 1, 0xFFFF);
}

DoneAction Gps::Loop()
{
    vTaskDelay(100 / portTICK_PERIOD_MS);
    return DoneAction::None;
}