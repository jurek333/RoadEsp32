#include "common/system.hpp"
#include "screens/gps.hpp"

using namespace RoadEsp32::Screens;
using namespace RoadEsp32::Common;
using namespace RoadEsp32::Data::Images;

void Gps::Init()
{
    _lcd->Clean(0x0000);
    _lcd->Image(100, 20, &Imgs::Icons::battery);
    _lcd->Rect(55, 45, 130, 1, 0xFFFF);
}

DoneAction Gps::Loop()
{
    RtosSystem::Wait(100);
    return DoneAction::None;
}