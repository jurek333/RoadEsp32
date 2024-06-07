#include "modules/lcds/lcd.hpp"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <string>
#include <bits/stdc++.h>

using namespace RoadEsp32::Modules;
using namespace RoadEsp32::Modules::Lcds;
using namespace RoadEsp32::Protocols;

void Lcd::Rect(uint16_t x, uint16_t y, uint16_t w, uint16_t h, uint16_t color)
{
    auto bufsize = _driver.GetBufferSize(); //  w * PARALLEL_LINES;
    auto linesInChunk = std::min(static_cast<uint16_t>(bufsize / w), h);
    auto buffer = _driver.GetBuffer();
    auto packedColor = packColor(color);

    for (auto i = 0; i < linesInChunk * w; ++i)
        buffer[i] = packedColor;

    for (uint row = 0; row < h; row += linesInChunk)
    {
        auto lines = (h - row) < linesInChunk ? (h - row) : linesInChunk;
        _driver.send_block(x, y + row, w, lines, lines * w);
    }
}

void Lcd::MonoImage(uint x, uint y, const mono_image_t *img, uint16_t color, uint8_t scale)
{
    uint16_t maxLinesThatFitsInBuffer = std::floor(_driver.GetBufferSize() / (scale * img->w));
    uint16_t bytesForLine = std::ceil(img->w / 8.0);
    auto imgSizeH = img->h * scale;

    auto buffer = _driver.GetBuffer();

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
                    if (nullptr == _currentEffect)
                        buffer[lineOff++] = packColor(pcol);
                    else
                        buffer[lineOff++] = packColor(_currentEffect->CalculateColor(pcol, iws + scale * iw, ih + chunk_row_start));
            }
        }

        _driver.send_block(x, y + chunk_row_start, img->w * scale, lines_in_chunk, lines_in_chunk * img->w * scale);
    }
}

void Lcd::Img(uint16_t x, uint16_t y, uint16_t w, uint16_t h, uint16_t *img)
{
    auto buffer = _driver.GetBuffer();
    auto linesInBuffer = _driver.GetBufferSize() / w;
    for (uint row = 0; row < h; row += linesInBuffer)
    {
        auto lines = (h - row) < linesInBuffer ? (h - row) : linesInBuffer;
        for (auto i = 0; i < lines * w; ++i)
        {
            auto val = img[i + row * w];
            buffer[i] = packColor(val);
        }

        _driver.send_block(x, y + row, w, lines, lines * w);
    }
}

bool Lcd::getColor(const mono_image_t *img, double x, double y)
{
    uint16_t x0 = static_cast<uint16_t>(std::floor(x));
    uint16_t y0 = static_cast<uint16_t>(std::floor(y));
    // auto prevXPart = (1.0 - x + x0);
    // auto prevYPart = (1.0 - y + y0);
    if (img->HasColorAt(x0, y0))
        return true;
    if (img->HasColorAt(x0 + 1, y0))
        return true;
    if (img->HasColorAt(x0, y0 + 1))
        return true;
    if (img->HasColorAt(x0 + 1, y0 + 1))
        return true;

    return false;
}

void Lcd::RotatedImage(uint16_t x0, uint16_t y0, const mono_image_t *img, double angle, uint16_t xR, uint16_t yR, uint16_t fcolor, uint16_t bcolor)
{
    uint16_t maxLinesThatFitsInBuffer = std::floor(_driver.GetBufferSize() / img->w);
    auto imgSizeH = img->h;

    auto buffer = _driver.GetBuffer();
    for (uint chunk_row_start = 0; chunk_row_start < imgSizeH; chunk_row_start += maxLinesThatFitsInBuffer)
    {
        auto lines_in_chunk = (imgSizeH - chunk_row_start) < maxLinesThatFitsInBuffer
                                  ? (imgSizeH - chunk_row_start)
                                  : maxLinesThatFitsInBuffer;
        auto lineOff = 0;
        for (uint ih = 0; ih < lines_in_chunk; ++ih)
        {
            auto y = ih + chunk_row_start;
            for (uint16_t x = 0; x < img->w; ++x)
            {
                if (!img->outOfDrawableZone(x, y))
                {
                    buffer[lineOff++] = packColor(bcolor);
                    continue;
                }
                auto dx = static_cast<int>(x) - xR;
                auto dy = static_cast<int>(y) - yR;
                auto si = std::sin(angle);
                auto co = std::cos(angle);

                auto xp = co * dx - si * dy + xR;
                auto yp = si * dx + co * dy + yR;

                // buffer[lineOff++] = img->HasColorAt(x, y) ? fcolor : bcolor;
                auto proportion = getColor(img, xp, yp);
                buffer[lineOff++] = packColor(proportion * fcolor + (1.0 - proportion) * bcolor);
            }
        }
        _driver.send_block(x0, y0 + chunk_row_start, img->w, lines_in_chunk, lines_in_chunk * img->w);
    }
}

LcdBox Lcd::RotateImages(
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
        // ESP_LOGI("glx", "corner %d (%ld,%ld)", i, corners[i].x, corners[i].y);
        // auto p = Rotate(corners[i].Move(-center.x, -center.y), angle);
        auto p = corners[i].Move(-center.x, -center.y);
        // ESP_LOGI("glx", "(%ld,%ld)", p.x, p.y);
        box.StretchByPoint(p.Move(center.x, center.y));
    }

    this->Rect(box.x0, box.y0, box.x1 - box.x0, box.y1 - box.y0, 0x003f);
    return box;
}

void Lcd::Image(uint x, uint y, const image_t *img)
{
    auto buffer = _driver.GetBuffer();
    auto linesInBuffer = _driver.GetBufferSize() / img->w;
    for (uint chunk_row_start = 0; chunk_row_start < img->h; chunk_row_start += linesInBuffer)
    {
        auto lines_in_chunk = (img->h - chunk_row_start) < linesInBuffer ? (img->h - chunk_row_start) : linesInBuffer;
        auto lineOff = 0;
        for (auto i = 0; i < lines_in_chunk; ++i)
        {
            auto rowData = img->rows[i + chunk_row_start];
            for (auto part = 0; part < rowData.partsCount; ++part)
            {
                for (auto offset = 0; offset < rowData.parts[part].amount; ++offset)
                    buffer[lineOff++] = packColor(rowData.parts[part].color);
            }
        }

        _driver.send_block(x, y + chunk_row_start, img->w, lines_in_chunk, lines_in_chunk * img->w);
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

void Lcd::PrintCenteredLine(uint16_t y, const char *text, const CustFont *font, const uint16_t fColor, const uint16_t bColor)
{
    const uint16_t standardMinXOff = 5;
    auto textLen = strLineLen(text);
    auto screenWidth = textLen * font->width;

    if (screenWidth >= _screenWPx - 2 * standardMinXOff)
    {
        PrintLine(standardMinXOff, y, text, font, fColor, bColor);
    }
    else
    {
        PrintLine((_screenWPx - screenWidth) / 2, y, text, font, fColor, bColor);
    }
}

void Lcd::PrintLine(uint16_t x, uint16_t y, const char *text, const CustFont *font, const uint16_t fColor, const uint16_t bColor)
{
    auto textLen = strLineLen(text);
    auto screenWidth = textLen * font->width;

    auto buffer = _driver.GetBuffer();
    auto bufferSize = _driver.GetBufferSize();

    if (screenWidth <= 0)
        return;

    uint16_t scrollOffset = 0;
    if (screenWidth + x > _screenWPx)
    {
        scrollOffset = _currentEffect->GetPixelOffset(screenWidth + x - _screenWPx);
        screenWidth = _screenWPx - x;
    }
    auto maxLinesForBuff = bufferSize / (2 * _screenWPx);
    auto screenHeight = maxLinesForBuff < font->height ? maxLinesForBuff : font->height;

    auto foreground = packColor(fColor);
    auto background = packColor(bColor);

    for (uint16_t cy = y; cy < y + font->height; cy += screenHeight)
    {
        auto h = std::min(screenHeight, y + font->height - cy);

        for (uint16_t ih = 0; ih < h; ++ih)
        {
            for (uint16_t ix = 0; ix < x; ++ix)
                buffer[ih * _screenWPx + ix] = background;
            for (uint16_t ix = 0; ix < screenWidth; ++ix)
            {
                uint32_t letterIndex = (ix + scrollOffset) / font->width;
                uint8_t letterOffset = (ix + scrollOffset) % font->width;
                auto fontLineSizeInBytes = (uint32_t)std::ceil(font->width / 8.0);
                auto fontOffset =
                    CustFont::GetFontIndexForLetter(text[letterIndex]) * fontLineSizeInBytes * (uint32_t)font->height // whole letter
                    + fontLineSizeInBytes * (ih + cy - y)                                                             // line of letter
                    + (letterOffset / 8);                                                                             // byte of line data

                uint8_t characterPart = font->chars[fontOffset];
                uint8_t color = characterPart & (0x80 >> (letterOffset % 8));
                buffer[ih * _screenWPx + ix + x] = !(!color) * foreground + !color * background;
            }
            for (uint16_t ix = x + screenWidth; ix < _screenWPx; ++ix)
                buffer[ih * _screenWPx + ix] = background;
        }
        _driver.send_block(0, cy, _screenWPx, h, _screenWPx * h);
    }
}

void Lcd::Print(uint16_t x, uint16_t y, uint8_t number, const CustFont *font, uint16_t fColor, uint16_t bColor, bool toLeft)
{
    char txt[4]{'\0'};
    snprintf(txt, 4, toLeft ? "%d" : "%3d", number);

    for (uint8_t i = 0; toLeft && i < 3; ++i)
    {
        if (txt[i] == '\0')
        {
            txt[i] = ' ';
            txt[i + 1] = '\0';
        }
    }

    this->Print(x, y, txt, font, fColor, bColor);
}

void Lcd::Print(uint16_t x, uint16_t y, uint16_t number, const CustFont *font, uint16_t fColor, uint16_t bColor, bool toLeft)
{
    constexpr auto numberMaxSize = 6;
    char txt[numberMaxSize]{'\0'};
    snprintf(txt, numberMaxSize, toLeft ? "%d" : "%6d", number);
    for (uint8_t i = 0; toLeft && i < numberMaxSize - 1; ++i)
    {
        if (txt[i] == '\0')
        {
            txt[i] = ' ';
            txt[i + 1] = '\0';
        }
    }

    this->Print(x, y, txt, font, fColor, bColor);
}

void Lcd::Print(uint16_t x, uint16_t y, float number, const CustFont *font, uint16_t fColor, uint16_t bColor)
{

    this->Print(x, y, std::to_string(number).c_str(), font, fColor, bColor);
}

void Lcd::Print(uint16_t x, uint16_t y, const char *text, const CustFont *font, uint16_t fColor, uint16_t bColor)
{
    auto textLen = strLineLen(text);
    auto screenWidth = textLen * font->width;
    if (screenWidth <= 0)
        return;

    auto buffSize = _driver.GetBufferSize();
    auto buffer = _driver.GetBuffer();

    if (screenWidth + x > _screenWPx)
        screenWidth = _screenWPx - x;
    auto maxLinesForBuff = buffSize / (2 * screenWidth);
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
                    CustFont::GetFontIndexForLetter(text[letterIndex]) * fontLineSizeInBytes * (uint32_t)font->height // whole letter
                    + fontLineSizeInBytes * (ih + cy - y)                                                             // line of letter
                    + (letterOffset / 8);                                                                             // byte of line data

                uint8_t characterPart = font->chars[fontOffset];
                uint8_t color = characterPart & (0x80 >> (letterOffset % 8));
                buffer[ih * screenWidth + ix] = !(!color) * foreground + !color * background;
            }
        }
        _driver.send_block(x, cy, screenWidth, h, screenWidth * h);
    }
}
