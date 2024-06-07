#pragma once
#include <stdint.h>

namespace RoadEsp32::Common
{
    class PalleteColors
    {
    public:
        static const uint16_t LightBlue=0x261e;
        static const uint16_t LightGold=0xffb2;

        static const uint16_t AlertFrame = 0xe04e;
        static const uint16_t AlertForeground = 0x0000;
        static const uint16_t AlertBackground = 0xf79c;
        static const uint16_t MainText = 0x261e;//0xe7dc;
        static const uint16_t ScreenBackground = 0x0000;
        static const uint16_t ChooseBackground = 0x3267; //0x1111;
        static const uint16_t DirectionsForeground = 0xee43;
        static const uint16_t DirectionType = 0xffb2;//0x657c;

        static const uint16_t RoadForeground = 0x0000;
        static const uint16_t RoadBackground = 0x0fb0;
        static const uint16_t NameForeground = 0x0000;
        static const uint16_t NameBackground = 0xf79c;
    };
}