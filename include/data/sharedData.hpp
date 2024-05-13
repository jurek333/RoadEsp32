#pragma once
#include "data/gpsData.hpp"
#include "data/threadSecureKeyboard.hpp"

#include <freertos/FreeRTOS.h>
#include <freertos/semphr.h>

#include <vector>

namespace RouteEsp32::data
{
    struct SharedData
    {
        GpsData GpsSharedData;
        ThreadSecureKeyboard SharedKeyState;
        SemaphoreHandle_t Semaphore{0};
        int batteryLvl{0}; // 1700 = 2.9V
    };

    template <typename T, typename H = uint8_t, size_t L = 8>
    class Handlers<T, H>
    {
        T _buffor[L];
        bool _occupied[L];

    public:
        Handlers()
        {
            for (auto index = 0; index < L; ++index)
                _occupied[index] = false;
        }
        H Add(T arg)
        {
            for (auto index = 0; index < L; ++index)
            {
                if (!_occupied[index])
                {
                    _occupied[index] = true;
                    _buffor[index] = arg;
                    return (H)index;
                }
            }
            return L;
        }
        T Get(H hdr)
        {
            return _buffor[hdr];
        }
        void Release(H hdr)
        {
            _occupied[hdr] = false;
        }
    };
}