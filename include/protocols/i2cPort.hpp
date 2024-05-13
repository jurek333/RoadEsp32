#pragma once
#include "data/sharedData.hpp"
#include <driver/i2c_master.h>

#define MAX_I2C_DEV_AMOUNT 8

namespace RouteEsp32::protocols
{
    using namespace RouteEsp32::data;

    typedef uint8_t i2c_device_id_t;

    class I2CPort
    {
    public:
        void init();
        bool ProbeDevice(uint16_t addr);
        i2c_device_id_t AddDevice(uint16_t addr);
        void ReadDevice(i2c_device_id_t deviceId, uint8_t *buffer, size_t buffSize);
        void WriteDevice(i2c_device_id_t deviceId, uint8_t data);
        void ReadDeviceByMask(i2c_device_id_t deviceId, uint8_t mask, uint8_t *buffer, size_t buffSize);
        void RemoveDevices();
        void CloseBus();

    private:
        i2c_master_bus_handle_t _busHandle;
        Handlers<i2c_master_dev_handle_t, i2c_device_id_t, 8> _devices;
    };
}