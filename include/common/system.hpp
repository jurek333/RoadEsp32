#pragma once

#include <freertos/FreeRTOS.h>

void wait(uint32_t timeMs) {
    vTaskDelay(timeMs / portTICK_PERIOD_MS);
}