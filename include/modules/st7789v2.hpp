#pragma once

#include <inttypes.h>
#include "driver/gpio.h"
#include "esp_system.h"
#include "data/images/images.hpp"
#include "protocols/spi.hpp"
#include "fonts/fonts.hpp"
#include "graphics.hpp"
#include <math.h>

#define PARALLEL_LINES 16
#define LCD_HOST SPI2_HOST
#define LCD_BK_LIGHT_ON_LEVEL 1

namespace RoadEsp32::Modules
{
    using namespace RoadEsp32::Protocols;
    using namespace RoadEsp32::Data::Images;
    using namespace RoadEsp32::Fonts;

    typedef gpio_num_t PIN;

    static constexpr uint16_t mapColor(const unsigned long color)
    {
        uint8_t r = (color >> 16) & 0xFF,
                g = (color >> 8) & 0xFF,
                b = color & 0xFF;
        return (r * 31 / 255 << 11) | (g * 63 / 255 << 5) | (b * 31 / 255);
    }

    typedef struct
    {
        uint8_t cmd;
        uint8_t data[16];
        uint16_t databytes;
    } lcd_init_cmd_t;

    class ST7789V2
    {
    public:
        ST7789V2(PIN cs, PIN dc, PIN rst, PIN bl, uint16_t screen_H_px, uint16_t screen_W_px);
        ~ST7789V2();

        void Init(Spi *);
        void Clean(uint16_t color);

        uint16_t GetBufferSize() { return std::min(_bufferSize, (uint16_t)(_spi->MaxTransferBufferSize/sizeof(uint16_t))); }
        //const uint16_t GetBufferSize() { return _bufferSize; }
        auto GetBuffer() { return _buffer; }

        void send_lines(uint ypos, uint16_t size);
        void send_block(uint xpos, uint ypos, uint w, uint h, uint buffSize);
    private:
        Spi *_spi;
        device_no_t _device;
        uint16_t *_buffer;
        uint16_t _bufferSize;

        PIN _cs, _dc, _rst, _bl;
        uint16_t _screen_H_px, _screen_W_px;
        const lcd_init_cmd_t ST_INIT_CMDS[17] = {
            /* Memory Data Access Control, MX=MV=1, MY=ML=MH=0, RGB=0 */
            {0x36, {0x00}, 1},
            /* Interface Pixel Format, 16bits/pixel for RGB/MCU interface */
            {0x3A, {0x55}, 1},
            /* Porch Setting */
            {0xB2, {0x0c, 0x0c, 0x00, 0x33, 0x33}, 5},
            /* Gate Control, Vgh=13.65V, Vgl=-10.43V */
            {0xB7, {0x11}, 1},
            /* VCOM Setting, VCOM=1.175V */
            {0xBB, {0x20}, 1},
            /* LCM Control, XOR: BGR, MX, MH */
            {0xC0, {0x2C}, 1},
            /* VDV and VRH Command Enable, enable=1 */
            {0xC2, {0x01, 0xff}, 2},
            /* VRH Set, Vap=4.4+... */
            {0xC3, {0x11}, 1},
            /* VDV Set, VDV=0 */
            {0xC4, {0x20}, 1},
            /* Frame Rate Control, 60Hz, inversion=0 */
            {0xC6, {0x0f}, 1},
            /* Power Control 1, AVDD=6.8V, AVCL=-4.8V, VDDS=2.3V */
            {0xD0, {0xA4, 0xA1}, 2},
            /* Positive Voltage Gamma Control */
            {0xE0, {0xD0, 0x00, 0x05, 0x0E, 0x15, 0x0D, 0x37, 0x43, 0x47, 0x09, 0x15, 0x12, 0x16, 0x19}, 14},
            /* Negative Voltage Gamma Control */
            {0xE1, {0xD0, 0x00, 0x05, 0x0D, 0x0C, 0x06, 0x2D, 0x44, 0x40, 0x0E, 0x1C, 0x18, 0x16, 0x19}, 14},
            /*Recover From inversion Mode*/
            {0x21, {0}, 0x80},
            /* Sleep Out */
            {0x11, {0}, 0x80},
            /* Display On */
            {0x29, {0}, 0x80},
            {0, {0}, 0xff}};

        void lcd_spi_pre_transfer_callback(spi_transaction_t *t);
        void initLcd();
        void lcd_cmd(const uint8_t cmd, bool keep_cs_active);
        void lcd_data(const uint8_t *data, uint len);
    };
}