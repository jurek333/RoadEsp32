#include "screens/navigate.hpp"
#include "string.h"

using namespace RouteEsp32::screens;
using namespace RouteEsp32::data;
using namespace RouteEsp32::data::images;
using namespace RouteEsp32::modules;

void Navigate::Loop() 
{

}
void Navigate::Init()
{
    _lcd->Clean(0x0000);
    _lcd->Image(150, 20, &Images::Icons::battery);
    _lcd->Image(50, 20, &Images::Icons::satellite);
    _lcd->Rect(55, 45, 130, 1, 0xFFFF);
    _lcd->Rect(55, 268, 130, 1, 0xFFFF);
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
void Navigate::HandleButtons() {}