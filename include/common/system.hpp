#pragma once

#include <freertos/FreeRTOS.h>

namespace RouteEsp32::common
{
    class RtosSystem
    {
        public:
        static void Wait(uint32_t timeMs)
        {
            vTaskDelay(timeMs / portTICK_PERIOD_MS);
        }
    };
}