#pragma once

#include "protocols/i2cPort.hpp"

#define I2CExt_ADDR 0x24

using namespace RoadEsp32::Protocols;

namespace RoadEsp32::Modules
{
    class Kbrd
    {
    public:
        esp_err_t Init(I2CPort *i2c);
        uint8_t ReadKey();

    private:
        i2c_device_id_t _deviceId;
        I2CPort *_i2c;
    };
}