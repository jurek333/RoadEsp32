#pragma once
#include <cstdint>
#include <cstddef>
#include "data/keysState.hpp"
#include <freertos/FreeRTOS.h>
#include <freertos/semphr.h>
#include <freertos/projdefs.h>

namespace RouteEsp32::data
{
    class ThreadSecureKeyboard
    {
    public:
        bool SecUpdateState(uint8_t newState, SemaphoreHandle_t semaphore)
        {
            if (semaphore == NULL)
                return false;
            
            if (pdTRUE == xSemaphoreTake(semaphore, (TickType_t)100))
            {
                State.UpdateState(newState);
                xSemaphoreGive(semaphore);
            }
            else
            {
                return false;
            }
            return true;
        }
        bool GetKeys(SemaphoreHandle_t semaphore, KeysState::Keys &key)
        {
            if (semaphore == NULL)
                return false;

            if (pdTRUE == xSemaphoreTake(semaphore, (TickType_t)100))
            {
                key = State.ReadKey();
                xSemaphoreGive(semaphore);
            }
            else
            {
                return false;
            }
            return true;
        }

        KeysState State{};
    };
}