#include "protocols/i2cPort.hpp"

using namespace RouteEsp32::protocols;

void I2CPort::init() {    
    i2c_master_bus_config_t i2c_mst_config {
        .i2c_port = -1,
        .sda_io_num = GPIO_NUM_5,
        .scl_io_num = GPIO_NUM_6,
        .clk_source = I2C_CLK_SRC_XTAL,
        .glitch_ignore_cnt = 7,
        .intr_priority = 0,
        //.trans_queue_depth = 6,
        .flags {
            .enable_internal_pullup = true
        }
    };
    ESP_ERROR_CHECK(i2c_new_master_bus(&i2c_mst_config, &_busHandle));
}

void I2CPort::RemoveDevices() {
    for(uint16_t index = _deviceAmoun; index >= 0; --index) {
        ESP_ERROR_CHECK(i2c_master_bus_rm_device(_devices[index]));
        _devices[index] = NULL;
    }
    _deviceAmoun = 0;
}

void I2CPort::CloseBus() {
    ESP_ERROR_CHECK(i2c_del_master_bus(_busHandle));
    _busHandle = NULL;
}

i2c_device_id_t I2CPort::AddDevice(uint16_t addr) {
    if (_deviceAmoun >= MAX_I2C_DEV_AMOUNT)
        return 0xFF;
    uint16_t maskedAddr = addr & static_cast<uint16_t>(0xFFFE);
    i2c_device_config_t dev_cfg = {
        .dev_addr_length = I2C_ADDR_BIT_LEN_7,
        .device_address = maskedAddr,
        .scl_speed_hz = 100000,
    };
    uint8_t currentDev = _deviceAmoun;
    ESP_ERROR_CHECK(i2c_master_bus_add_device(_busHandle, &dev_cfg, &_devices[_deviceAmoun++]));
    
    return currentDev;
}

bool I2CPort::ProbeDevice(uint16_t addr) {
    //ESP_LOGI("I2C", "probing: %x", addr);
    esp_err_t ret = i2c_master_probe(_busHandle, addr, 500);
    //ESP_LOGI("I2C", "probe res: %x", ret);
    return ret == ESP_OK;
}

void I2CPort::ReadDeviceByMask(i2c_device_id_t deviceId, uint8_t mask, uint8_t *buffer, size_t buffSize) {
    esp_err_t ret = i2c_master_transmit_receive(_devices[deviceId], &mask, 1, buffer, buffSize, 100);
    //ESP_LOGI("I2C", "recv res: %x, data: %x", ret, *buffer);
    ESP_ERROR_CHECK(ret);
}

void I2CPort::ReadDevice(i2c_device_id_t deviceId, uint8_t *buffer, size_t buffSize) {
    esp_err_t ret = i2c_master_receive(_devices[deviceId], buffer, buffSize, 100);
    //ESP_LOGI("I2C", "recv res: %x, data: %x, addr: %p", ret, *buffer, _devices[deviceId]);
    ESP_ERROR_CHECK(ret);
}

void I2CPort::WriteDevice(i2c_device_id_t deviceId, uint8_t data) {
    esp_err_t ret = i2c_master_transmit(_devices[deviceId], &data, 1, 100);
    //ESP_LOGI("I2C", "send ret: %x, data: %x, addr: %p", ret, data, _devices[deviceId]);
    ESP_ERROR_CHECK(ret);
}