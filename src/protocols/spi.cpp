#include "protocols/spi.hpp"
#include "driver/gpio.h"

using namespace RouteEsp32::protocols;

Spi::Spi(spi_host_device_t host = SPI2_HOST) {
    _host = host;
}

void Spi::init(int mosi, int miso, int clk, int maxTransfer = 4092) {
    MaxTransferBufferSize = maxTransfer;

    esp_err_t ret;
    spi_bus_config_t buscfg = {
        .mosi_io_num = mosi,
        .miso_io_num = miso,
        .sclk_io_num = clk,
        .quadwp_io_num = -1,
        .quadhd_io_num = -1,
        .max_transfer_sz = maxTransfer
    };
    ret = spi_bus_initialize(_host, &buscfg, SPI_DMA_CH_AUTO);
    ESP_ERROR_CHECK(ret);
}

device_no_t Spi::addDevice(int cs, int speedHz, transaction_cb_t preCb) {
    esp_err_t ret;    
    assert(_numOfSpi < MAX_SPI_DEVICES_AMOUNT);

    spi_device_interface_config_t devcfg = {};
    devcfg.clock_speed_hz = speedHz;
    devcfg.mode = 0;
    devcfg.spics_io_num = cs;
    devcfg.queue_size = QUEUE_SIZE;
    devcfg.pre_cb = preCb;

    ret = spi_bus_add_device(_host, &devcfg, &_spis[_numOfSpi]);
    ESP_ERROR_CHECK(ret);
    return _numOfSpi++;
}

void Spi::queue(spi_transaction_t *trans, device_no_t device) {
    esp_err_t ret;
    assert(device < MAX_SPI_DEVICES_AMOUNT);
    ret = spi_device_queue_trans(_spis[device], trans, portMAX_DELAY);
    assert(ret == ESP_OK);
}

void Spi::wait4AllQueues(device_no_t device) {
    spi_transaction_t *rtrans;
    esp_err_t ret;
    //Wait for all 6 transactions to be done and get back the results.
    for (int x = 0; x < 6; x++) {
        ret = spi_device_get_trans_result(_spis[device], &rtrans, portMAX_DELAY);
        assert(ret == ESP_OK);
        //We could inspect rtrans now if we received any info back. The LCD is treated as write-only, though.
    }
}

void Spi::pool(spi_transaction_t* trans, device_no_t forDevice) {
    esp_err_t ret;
    ret = spi_device_polling_transmit(_spis[forDevice], trans);
    assert(ret == ESP_OK); 
}