#include "modules/st7789v2.hpp"
#include "driver/gpio.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <string>
#include <bits/stdc++.h>

#ifdef BUILD_ENV_ESP
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#endif

#include "fonts/fonts.hpp"
#include "esp_log.h"

#include "graphics.hpp"

using namespace RoadEsp32::Modules;
using namespace RoadEsp32::Fonts;

static PIN DC;

ST7789V2::ST7789V2(PIN cs, PIN dc, PIN rst, PIN bl, uint16_t screen_H_px, uint16_t screen_W_px)
    : _cs(cs), _dc(dc), _rst(rst), _bl(bl), _screen_H_px(screen_H_px), _screen_W_px(screen_W_px)
{
    _buffer = NULL;
    _bufferSize = _screen_W_px * PARALLEL_LINES;
    _buffer = (uint16_t *)heap_caps_malloc(_bufferSize * sizeof(uint16_t), MALLOC_CAP_DMA);
    ESP_LOGI("LCD", "Memory for buffer allocated at: %p", _buffer);
}

ST7789V2::~ST7789V2()
{
    heap_caps_free(_buffer);
    _buffer = NULL;
}

void ST7789V2::lcd_spi_pre_transfer_callback(spi_transaction_t *t)
{
    int val = (int)t->user;
    gpio_set_level(_dc, val);
}

void ST7789V2::Init(Spi *spi)
{
    _spi = spi;

    DC = this->_dc;
    _device = _spi->addDevice(_cs, 20 * 1000 * 1000, [](spi_transaction_t *t)
                              {
        int val = (int)t->user;
        gpio_set_level(DC, val); });
    this->initLcd();
}

void ST7789V2::initLcd()
{
    int cmd = 0;

    gpio_config_t io_conf = {};
    io_conf.pin_bit_mask = ((1ULL << _dc) | (1ULL << _rst) | (1ULL << _bl));
    io_conf.mode = GPIO_MODE_OUTPUT;
    io_conf.pull_up_en = GPIO_PULLUP_ENABLE;
    gpio_config(&io_conf);

    gpio_set_level(_rst, 0);
    vTaskDelay(100 / portTICK_PERIOD_MS);
    gpio_set_level(_rst, 1);
    vTaskDelay(100 / portTICK_PERIOD_MS);

    while (ST_INIT_CMDS[cmd].databytes != 0xff)
    {
        this->lcd_cmd(ST_INIT_CMDS[cmd].cmd, false);
        this->lcd_data(ST_INIT_CMDS[cmd].data, ST_INIT_CMDS[cmd].databytes & 0x1F);
        if (ST_INIT_CMDS[cmd].databytes & 0x80)
        {
            vTaskDelay(100 / portTICK_PERIOD_MS);
        }
        ++cmd;
    }

    gpio_set_level(_bl, LCD_BK_LIGHT_ON_LEVEL);
}

void ST7789V2::lcd_cmd(const uint8_t cmd, bool keep_cs_active)
{
    spi_transaction_t trans;

    memset(&trans, 0, sizeof(trans));
    trans.length = 8;
    trans.tx_buffer = &cmd;
    trans.user = (void *)0;
    if (keep_cs_active)
    {
        trans.flags = SPI_TRANS_CS_KEEP_ACTIVE;
    }
    _spi->pool(&trans, _device);
}

void ST7789V2::lcd_data(const uint8_t *data, uint len)
{
    spi_transaction_t trans;
    if (len == 0)
    {
        return;
    }

    memset(&trans, 0, sizeof(trans));
    trans.length = len * 8;
    trans.tx_buffer = data;
    trans.user = (void *)1;
    _spi->pool(&trans, _device);
}

void ST7789V2::Clean(uint16_t color)
{
    auto maxPxLines = static_cast<uint16_t>(GetBufferSize() / _screen_W_px);
    auto buffChunkSize = static_cast<uint16_t>(maxPxLines * _screen_W_px);
    for (uint idx = 0; idx < buffChunkSize; ++idx)
        _buffer[idx] = color;
    ESP_LOGI("st", "clear %d lines (%d px each)", _screen_H_px, _screen_W_px);
    for (uint y = 0; y < _screen_H_px; y += maxPxLines)
    {
        ESP_LOGI("st","lines %d - %d", y, y+maxPxLines);
        send_lines(y, std::min(maxPxLines, static_cast<uint16_t>(_screen_H_px-y)));
        _spi->wait4AllQueues(_device);
    }
}

void ST7789V2::send_lines(uint ypos, uint16_t numberOfPxLines)
{
    uint x;
    static spi_transaction_t trans[6];
    for (x = 0; x < 6; ++x)
    {
        memset(&trans[x], 0, sizeof(spi_transaction_t));
        if ((x & 1) == 0)
        {
            trans[x].length = 8;
            trans[x].user = (void *)0;
        }
        else
        {
            trans[x].length = 8 * 4;
            trans[x].user = (void *)1;
        }
        trans[x].flags = SPI_TRANS_USE_TXDATA;
    }
    uint y = ypos;
    trans[0].tx_data[0] = 0x2A;                            // Column Address Set
    trans[1].tx_data[0] = 0;                               // Start Col High
    trans[1].tx_data[1] = 0;                               // Start Col Low
    trans[1].tx_data[2] = (_screen_W_px - 1) >> 8;         // End Col High
    trans[1].tx_data[3] = (_screen_W_px - 1) & 0xff;       // End Col Low
    trans[2].tx_data[0] = 0x2B;                            // Page address set
    trans[3].tx_data[0] = y >> 8;                          // Start page high
    trans[3].tx_data[1] = y & 0xff;                        // start page low
    trans[3].tx_data[2] = (y + numberOfPxLines -1) >> 8;   // end page high
    trans[3].tx_data[3] = (y + numberOfPxLines -1) & 0xff; // end page low
    trans[4].tx_data[0] = 0x2C;                            // memory write
    trans[5].tx_buffer = _buffer;                         // finally send the line data
    trans[5].length = numberOfPxLines * _screen_W_px * 16;  // Data length, in bits
    trans[5].flags = 0;                                    // undo SPI_TRANS_USE_TXDATA flag

    for (x = 0; x < 6; x++)
    {
        _spi->queue(&trans[x], _device);
    }
}

void ST7789V2::send_block(uint xpos, uint ypos, uint w, uint h, uint buffSize)
{
    uint x;
    static spi_transaction_t trans[6];
    for (x = 0; x < 6; ++x)
    {
        memset(&trans[x], 0, sizeof(spi_transaction_t));
        if ((x & 1) == 0)
        {
            trans[x].length = 8;
            trans[x].user = (void *)0;
        }
        else
        {
            trans[x].length = 8 * 4;
            trans[x].user = (void *)1;
        }
        trans[x].flags = SPI_TRANS_USE_TXDATA;
    }
    auto xmax = xpos + w - 1;
    auto ymax = ypos + h - 1;
    trans[0].tx_data[0] = 0x2A;        // Column Address Set
    trans[1].tx_data[0] = xpos >> 8;   // Start Col High
    trans[1].tx_data[1] = xpos & 0xff; // Start Col Low
    trans[1].tx_data[2] = xmax >> 8;   // End Col High
    trans[1].tx_data[3] = xmax & 0xff; // End Col Low
    trans[2].tx_data[0] = 0x2B;        // Page address set
    trans[3].tx_data[0] = ypos >> 8;   // Start page high
    trans[3].tx_data[1] = ypos & 0xff; // start page low
    trans[3].tx_data[2] = ymax >> 8;   // end page high
    trans[3].tx_data[3] = ymax & 0xff; // end page low
    trans[4].tx_data[0] = 0x2C;        // memory write
    trans[5].tx_buffer = _buffer;     // finally send the line data
    trans[5].length = buffSize * 16;   // Data length, in bits
    trans[5].flags = 0;                // undo SPI_TRANS_USE_TXDATA flag

    for (x = 0; x < 6; x++)
    {
        _spi->queue(&trans[x], _device);
    }

    _spi->wait4AllQueues(_device);
}
