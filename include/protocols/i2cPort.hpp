#pragma once
#include "common/SmallBuffer.hpp"
#include "data/sharedData.hpp"
#include <driver/i2c_master.h>

#define MAX_I2C_DEV_AMOUNT 8

namespace RoadEsp32::Protocols
{
    using namespace RoadEsp32::Data;
    using namespace RoadEsp32::Common;

    typedef uint8_t i2c_device_id_t;

    class I2CPort
    {
    public:
        void Init();
        bool ProbeDevice(uint16_t addr);
        i2c_device_id_t AddDevice(uint16_t addr);
        void ReadDevice(i2c_device_id_t deviceId, uint8_t *buffer, size_t buffSize);
        void WriteDevice(i2c_device_id_t deviceId, uint8_t data);
        void ReadDeviceByMask(i2c_device_id_t deviceId, uint8_t mask, uint8_t *buffer, size_t buffSize);
        void RemoveDevices();
        void CloseBus();

    private:
        i2c_master_bus_handle_t _busHandle;
        SmallBuffer<i2c_master_dev_handle_t, i2c_device_id_t, 8u> _devices;
    };
}