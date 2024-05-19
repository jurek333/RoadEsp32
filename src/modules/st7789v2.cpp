#include "modules/st7789v2.hpp"
#include "driver/gpio.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

#include "freertos/FreeRTOS.h"
#include "freertos/task.h"

#include "fonts/fonts.hpp"
#include "esp_log.h"

#include "graphics.hpp"

using namespace RouteEsp32::modules;

static PIN DC;

ST7789V2::ST7789V2(PIN cs, PIN dc, PIN rst, PIN bl, uint16_t screen_H_px, uint16_t screen_W_px)
    : _cs(cs), _dc(dc), _rst(rst), _bl(bl), _screen_H_px(screen_H_px), _screen_W_px(screen_W_px)
{
    _buffer = NULL;
    _bufferSize = _screen_W_px * PARALLEL_LINES;
    _buffer = (uint16_t *)heap_caps_malloc(_bufferSize * sizeof(uint16_t), MALLOC_CAP_DMA);
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
    for (uint idx = 0; idx < _screen_W_px * PARALLEL_LINES; ++idx)
        _buffer[idx] = color;

    for (uint y = 0; y < _screen_H_px; y += PARALLEL_LINES)
    {
        send_lines(y, _buffer);
        _spi->wait4AllQueues(_device);
    }
}

void ST7789V2::Rect(uint16_t x, uint16_t y, uint16_t w, uint16_t h, uint16_t color)
{
    auto bufsize = w * PARALLEL_LINES;
    auto packedColor = packColor(color);
    for (auto i = 0; i < bufsize; ++i)
        _buffer[i] = packedColor;

    for (uint row = 0; row < h; row += PARALLEL_LINES)
    {
        auto lines = (h - row) < PARALLEL_LINES ? (h - row) : PARALLEL_LINES;
        send_block(x, y + row, w, lines, _buffer, lines * w);
        _spi->wait4AllQueues(_device);
    }
}

void ST7789V2::send_lines(uint ypos, uint16_t *linedata)
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
    trans[3].tx_data[2] = (y + PARALLEL_LINES - 1) >> 8;   // end page high
    trans[3].tx_data[3] = (y + PARALLEL_LINES - 1) & 0xff; // end page low
    trans[4].tx_data[0] = 0x2C;                            // memory write
    trans[5].tx_buffer = linedata;                         // finally send the line data
    trans[5].length = _screen_W_px * PARALLEL_LINES * 16;  // Data length, in bits
    trans[5].flags = 0;                                    // undo SPI_TRANS_USE_TXDATA flag

    for (x = 0; x < 6; x++)
    {
        _spi->queue(&trans[x], _device);
    }
}

void ST7789V2::Img(uint16_t x, uint16_t y, uint16_t w, uint16_t h, uint16_t *img)
{
    for (uint row = 0; row < h; row += PARALLEL_LINES)
    {
        auto lines = (h - row) < PARALLEL_LINES ? (h - row) : PARALLEL_LINES;
        // memccpy(line, img, lines*w, sizeof(uint16_t));
        for (auto i = 0; i < lines * w; ++i)
        {
            auto val = img[i + row * w];
            _buffer[i] = packColor(val);
        }

        send_block(x, y + row, w, lines, _buffer, lines * w);
        _spi->wait4AllQueues(_device);
    }
}

LcdBox ST7789V2::RotatedImages(
    const LcdPoint &position, const LcdPoint &center,
    double angle,
    const image_t *img)
{
    LcdBox box{};
    LcdPoint corners[4] = {
        position,
        position.Move(img->w, 0),
        position.Move(img->w, img->h),
        position.Move(0, img->h)};

    for (int i = 0; i < 4; ++i)
    {
        //ESP_LOGI("glx", "corner %d (%ld,%ld)", i, corners[i].x, corners[i].y);
        //auto p = Rotate(corners[i].Move(-center.x, -center.y), angle);
        auto p = corners[i].Move(-center.x, -center.y);        
        //ESP_LOGI("glx", "(%ld,%ld)", p.x, p.y);
        box.StretchByPoint(p.Move(center.x, center.y));
    }

    Rect(box.x0, box.y0, box.x1 - box.x0, box.y1 - box.y0, 0x003f);
    return box;
}

void ST7789V2::Image(uint x, uint y, const image_t *img)
{
    for (uint chunk_row_start = 0; chunk_row_start < img->h; chunk_row_start += PARALLEL_LINES)
    {
        auto lines_in_chunk = (img->h - chunk_row_start) < PARALLEL_LINES ? (img->h - chunk_row_start) : PARALLEL_LINES;

        auto lineOff = 0;
        for (auto i = 0; i < lines_in_chunk; ++i)
        {
            auto rowData = img->rows[i + chunk_row_start];
            for (auto part = 0; part < rowData.partsCount; ++part)
            {
                for (auto offset = 0; offset < rowData.parts[part].amount; ++offset)
                    _buffer[lineOff++] = packColor(rowData.parts[part].color);
            }
        }

        send_block(x, y + chunk_row_start, img->w, lines_in_chunk, _buffer, lines_in_chunk * img->w);
        _spi->wait4AllQueues(_device);
    }
}

#define GRADLEN 20.0f

uint16_t ST7789V2::GetColor(uint16_t color, uint16_t x, uint16_t y)
{
    auto dist = std::abs(static_cast<float>(x) - static_cast<float>(_gradientX));
    if (dist > GRADLEN || color == 0x0000)
        return color;

    static int gr = static_cast<int>(0xFF * 31.0 / 255.0),
               gg = static_cast<int>(0xFD * 63.0 / 255.0),
               gb = static_cast<int>(0x55 * 31.0 / 255.0);
    int cr = color >> 11,
        cg = (color >> 5) & 0x3F,
        cb = color & 0x1F;
    auto di = dist / GRADLEN;
    auto dif = 1 - di * di;
    float dr = gr - cr,
          dg = gg - cg,
          db = gb - cb;
    return (static_cast<int>(cr + dr * dif) & 0x1f) << 11 | (static_cast<int>(cg + dg * dif) & 0x3f) << 5 | (static_cast<int>(cb + db * dif) & 0x1f);
}

void ST7789V2::MonoImage(uint x, uint y, const mono_image_t *img, uint16_t color, uint8_t scale)
{
    uint16_t maxLinesThatFitsInBuffer = std::floor(_spi->MaxTransferBufferSize / (2 * scale * img->w));
    uint16_t bytesForLine = std::ceil(img->w / 8.0);
    auto imgSizeH = img->h * scale;

    for (uint chunk_row_start = 0; chunk_row_start < imgSizeH; chunk_row_start += maxLinesThatFitsInBuffer)
    {
        auto lines_in_chunk = (imgSizeH - chunk_row_start) < maxLinesThatFitsInBuffer
                                  ? (imgSizeH - chunk_row_start)
                                  : maxLinesThatFitsInBuffer;
        auto lineOff = 0;
        for (uint ih = 0; ih < lines_in_chunk; ++ih)
        {
            auto rowInMap = static_cast<uint16_t>(std::floor((ih + chunk_row_start) / scale));

            auto rowData = &(img->bytes[bytesForLine * rowInMap]);
            for (uint16_t iw = 0; iw < img->w; ++iw)
            {
                uint8_t mask = 0x01 << (7 - iw % 8);

                uint8_t isColor = !(!(rowData[iw >> 3] & mask));
                uint16_t pcol = isColor * color;
                for (auto iws = 0; iws < scale; ++iws)
                    _buffer[lineOff++] = packColor(GetColor(pcol, iws + scale * iw, ih + chunk_row_start));
            }
        }

        send_block(x, y + chunk_row_start, img->w * scale, lines_in_chunk, _buffer, lines_in_chunk * img->w * scale);
        _spi->wait4AllQueues(_device);
    }
}

void ST7789V2::send_block(uint xpos, uint ypos, uint w, uint h, uint16_t *linedata, uint buffSize)
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
    trans[5].tx_buffer = linedata;     // finally send the line data
    trans[5].length = buffSize * 16;   // Data length, in bits
    trans[5].flags = 0;                // undo SPI_TRANS_USE_TXDATA flag

    for (x = 0; x < 6; x++)
    {
        _spi->queue(&trans[x], _device);
    }
}

uint16_t strLineLen(const char *text)
{
    uint16_t len = 0;
    while (*text != '\0' && *text != '\n')
    {
        ++text;
        ++len;
    }
    return len;
}

void ST7789V2::PrintLine(uint16_t x, uint16_t y, const char *text, const CustFont_t *font, const uint16_t fColor, const uint16_t bColor){
    auto textLen = strLineLen(text);
    auto screenWidth = textLen * font->width;

    if (screenWidth <= 0)
        return;

    if (screenWidth + x > _screen_W_px)
        screenWidth = _screen_W_px - x;
    auto maxLinesForBuff = _bufferSize / (2 * _screen_W_px);
    auto screenHeight = maxLinesForBuff < font->height ? maxLinesForBuff : font->height;

    auto foreground = packColor(fColor);
    auto background = packColor(bColor);

    for (uint16_t cy = y; cy < y + font->height; cy += screenHeight)
    {
        auto h = std::min(screenHeight, y + font->height - cy);

        for (uint16_t ih = 0; ih < h; ++ih)
        {
            for (uint16_t ix = 0; ix < x; ++ix)
                _buffer[ih * _screen_W_px + ix] = background;
            for (uint16_t ix = 0; ix < screenWidth; ++ix)
            {
                uint32_t letterIndex = ix / font->width;
                uint8_t letterOffset = ix % font->width;
                auto fontLineSizeInBytes = (uint32_t)std::ceil(font->width / 8.0);
                auto fontOffset =
                    (text[letterIndex] - ' ') * fontLineSizeInBytes * (uint32_t)font->height // whole letter
                    + fontLineSizeInBytes * (ih + cy - y)                                    // line of letter
                    + (letterOffset / 8);                                                    // byte of line data

                uint8_t characterPart = font->chars[fontOffset];
                uint8_t color = characterPart & (0x80 >> (letterOffset % 8));
                _buffer[ih * _screen_W_px + ix+x] = !(!color) * foreground + !color * background;
            }
            for (uint16_t ix = x+screenWidth; ix < _screen_W_px; ++ix)
                _buffer[ih * _screen_W_px + ix] = background;
        }
        send_block(0, cy, _screen_W_px, h, _buffer, _screen_W_px * h);
        _spi->wait4AllQueues(_device);
    }
}

void ST7789V2::Print(uint16_t x, uint16_t y, const char *text, CustFont_t *font, uint16_t fColor, uint16_t bColor)
{
    auto textLen = strLineLen(text);
    auto screenWidth = textLen * font->width;
    if (screenWidth <= 0)
        return;

    if (screenWidth + x > _screen_W_px)
        screenWidth = _screen_W_px - x;
    auto maxLinesForBuff = _bufferSize / (2 * screenWidth);
    auto screenHeight = maxLinesForBuff < font->height ? maxLinesForBuff : font->height;

    auto foreground = packColor(fColor);
    auto background = packColor(bColor);

    for (uint16_t cy = y; cy < y + font->height; cy += screenHeight)
    {
        auto h = std::min(screenHeight, y + font->height - cy);

        for (uint16_t ih = 0; ih < h; ++ih)
        {
            for (uint16_t ix = 0; ix < screenWidth; ++ix)
            {
                uint32_t letterIndex = ix / font->width;
                uint8_t letterOffset = ix % font->width;
                auto fontLineSizeInBytes = (uint32_t)std::ceil(font->width / 8.0);
                auto fontOffset =
                    (text[letterIndex] - ' ') * fontLineSizeInBytes * (uint32_t)font->height // whole letter
                    + fontLineSizeInBytes * (ih + cy - y)                                    // line of letter
                    + (letterOffset / 8);                                                    // byte of line data

                uint8_t characterPart = font->chars[fontOffset];
                uint8_t color = characterPart & (0x80 >> (letterOffset % 8));
                _buffer[ih * screenWidth + ix] = !(!color) * foreground + !color * background;
            }
        }
        send_block(x, cy, screenWidth, h, _buffer, screenWidth * h);
        _spi->wait4AllQueues(_device);
    }
}
