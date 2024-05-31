#pragma once
#include "data/gpsData.hpp"
#include "data/threadSecureKeyboard.hpp"

#include <freertos/FreeRTOS.h>
#include <freertos/semphr.h>

#include <vector>

namespace RoadEsp32::Data
{
    struct SharedData
    {
        GpsData GpsSharedData;
        ThreadSecureKeyboard SharedKeyState;
        SemaphoreHandle_t Semaphore{0};
        int batteryLvl{0}; // 1700 = 2.9V

        KeysState::Keys GetKeys()
        {
            KeysState::Keys key;
            if(!SharedKeyState.GetKeys(Semaphore, key))
                return KeysState::Keys::None;
            
            return key;
        }
    };
}