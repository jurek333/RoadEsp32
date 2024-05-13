#pragma once
#include "driver/spi_master.h"

namespace RouteEsp32::protocols
{
#define MAX_SPI_DEVICES_AMOUNT 8
#define QUEUE_SIZE 7

    typedef uint8_t device_no_t;

    class Spi
    {
    public:
        Spi(spi_host_device_t host);
        void init(int mosi, int miso, int clk, int maxTransfer);
        device_no_t addDevice(int cs, int speedHz, transaction_cb_t preCb = NULL);

        void queue(spi_transaction_t *trans, device_no_t device);
        void wait4AllQueues(device_no_t device);
        void pool(spi_transaction_t *trans, device_no_t forDevice);

        uint32_t MaxTransferBufferSize;

    private:
        spi_host_device_t _host;
        spi_device_handle_t _spis[MAX_SPI_DEVICES_AMOUNT];
        uint8_t _numOfSpi = 0;
        uint16_t *_buffer;
        uint16_t _bufferSize;
    };
}