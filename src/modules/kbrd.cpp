#include "modules/kbrd.hpp"

#include <esp_system.h>
#include <driver/gpio.h>
#include <esp_log.h>

using namespace RouteEsp32::modules;

void Kbrd::Init(I2CPort* i2c) {
    _i2c = i2c;
    _deviceId = _i2c->AddDevice(I2CExt_ADDR);
    _i2c->WriteDevice(_deviceId, 0x0F);
}

uint8_t Kbrd::ReadKey(){
    uint8_t data;
    _i2c->ReadDevice(_deviceId, &data, 1);
    return ~(data | 0xf0);
}
