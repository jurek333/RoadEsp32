#pragma once
#include <string>
#include "common/system.hpp"
#include "modules/lcds/lcd.hpp"
#include "data/sharedData.hpp"

namespace RoadEsp32::Screens
{
    using namespace RoadEsp32::Modules;
    using namespace RoadEsp32::Data;

    class Windows
    {
    private:
        static void WaitForAnyKey(SharedData *kbrd)
        {
            auto key = kbrd->GetKeys();
            while (key == KeysState::Keys::None)
            {
                RtosSystem::Wait(500);
                key = kbrd->GetKeys();
            }
        }

    public:
        static void Alert(Lcd *lcd, SharedData *kbrd, const std::string &msg)
        {
            const uint16_t w = 160, h = 140;
            const CustFont *font = &Font16;
            uint16_t widthInLetters = (w / font->width) - 2;
            uint16_t heightInLetters = (h / font->height) - 2;

            lcd->Rect(40, 90, w, h, PalleteColors::AlertFrame);
            lcd->Rect(42, 92, w-4, h-4, PalleteColors::AlertBackground);

            uint16_t lineNum = 0;
            for (auto lineOffset = 0; lineOffset < msg.length() && lineNum <= heightInLetters; lineOffset += widthInLetters)
            {
                ++lineNum;
                auto line = msg.substr(lineOffset, widthInLetters);
                lcd->Print(40 + font->width, 90+font->height*lineNum, line.c_str(), font,
                           PalleteColors::AlertForeground, PalleteColors::AlertBackground);
            }
            WaitForAnyKey(kbrd);
        }
    };
}