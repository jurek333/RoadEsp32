#include "freertos/FreeRTOS.h"

#include "modules/kbrd.hpp"
#include <esp_system.h>
#include <driver/gpio.h>
#include <esp_log.h>

using namespace RoadEsp32::Modules;

esp_err_t Kbrd::Init(I2CPort* i2c) {
    _i2c = i2c;
    _deviceId = _i2c->AddDevice(I2CExt_ADDR);
    if (_deviceId == 0xFF)
        return ESP_FAIL;
    return _i2c->WriteDevice(_deviceId, 0x0F);
}

uint8_t Kbrd::ReadKey(){
    uint8_t data;
    if (_i2c->ReadDevice(_deviceId, &data, 1) != ESP_OK) {
        ESP_LOGW("kbrd", "Keyboard read failed; reporting no keys");
        return 0;
    }
    return ~(data | 0xf0);
}
