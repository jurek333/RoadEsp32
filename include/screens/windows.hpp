#pragma once
#include <string>
#include "modules/st7789v2.hpp"
#include "common/system.hpp"
#include "data/sharedData.hpp"

namespace RouteEsp32::screens
{
    using namespace RouteEsp32::modules;
    using namespace RouteEsp32::data;

    class Windows
    {
    public:
        static void Alert(ST7789V2 *lcd, SharedData *kbrd, const std::string &msg)
        {
            lcd->Rect(10, 50, 230, 200, 0x1011);
            lcd->Print(20, 100, msg.c_str(), &Font16, 0x0110, 0x1011);

            auto key = kbrd->GetKeys();
            while (key == KeysState::Keys::None)
            {
                RtosSystem::Wait(500);
                key = kbrd->GetKeys();
            }
        }
    };
}