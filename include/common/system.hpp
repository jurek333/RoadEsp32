#pragma once

#include <freertos/FreeRTOS.h>
#include <freertos/task.h>

namespace RoadEsp32::Common
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