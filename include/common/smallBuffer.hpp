#pragma once
#include <stdint.h>
#include <stddef.h>
#include <concepts>
#include <vector>

namespace RouteEsp32::common
{
    template <typename T, typename H, size_t L = 8>
    class SmallBuffer
    {
        T _buffor[L];
        bool _occupied[L];

    public:
        SmallBuffer()
        {
            for (auto index = 0; index < L; ++index)
                _occupied[index] = false;
        }
        H Add(T arg)
        {
            for (H index = 0; index < L; ++index)
            {
                if (!_occupied[index])
                {
                    _occupied[index] = true;
                    _buffor[index] = arg;
                    return index;
                }
            }
            return 0xFF;
        }
        T Get(H hdr)
        {
            return _buffor[hdr];
        }
        void Release(H hdr)
        {
            _buffor[hdr] = 0;
            _occupied[hdr] = false;
        }
        H FirstOrDefault()
        {
            for (H index = 0; index < L; ++index)
            {
                if (_occupied[index])
                    return index;
            }
            return 0xFF;
        }
        bool IsTheEnd(H val)
        {
            return val >= L;
        }
        bool IsFull()
        {
            for (H index = 0; index < L; ++index)
            {
                if (!_occupied[index])
                    return false;
            }
            return true;
        }
    };
}