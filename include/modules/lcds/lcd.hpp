#pragma once
#include <stdint.h>
#include "modules/lcds/effects.hpp"
#include "modules/st7789v2.hpp"
#include "protocols/spi.hpp"
#include "soc/gpio_num.h"

#define PIN_NUM_CS GPIO_NUM_44
#define PIN_NUM_DC GPIO_NUM_2
#define PIN_NUM_RST GPIO_NUM_3
#define PIN_NUM_BCKL GPIO_NUM_4

using namespace RoadEsp32::Modules;
using namespace RoadEsp32::Protocols;

namespace RoadEsp32::Modules::Lcds
{
    class Lcd
    {
    private:
        uint16_t _screenWPx, _screenHPx;
        ST7789V2 _driver;
        Effect *_currentEffect{nullptr};

        constexpr uint16_t packColor(const uint16_t color) noexcept
        {
            return (color << 8) | (color >> 8);
        }
        bool getColor(const mono_image_t *img, double x, double y);

    public:
        ColorEffects Effects;
        void SetCurrentEffect(Effect &effect)
        {
            _currentEffect = &effect;
        }

        Lcd(uint16_t screenWPx, uint16_t screenHPx)
            : _screenWPx{screenWPx},
              _screenHPx{screenHPx},
              _driver{PIN_NUM_CS, PIN_NUM_DC,
                      PIN_NUM_RST, PIN_NUM_BCKL,
                      screenHPx, screenWPx},
              Effects{screenWPx, screenHPx}
        {
        }

        void Init(Spi *spi)
        {
            _driver.Init(spi);
        }
        void Clean(uint16_t color)
        {
            _driver.Clean(color);
        }
        void Tick()
        {
            Effects.Tick();
        }
        void MonoImage(uint x, uint y, const mono_image_t *img, uint16_t color, uint8_t scale = 1);
        void Rect(uint16_t x, uint16_t y, uint16_t w, uint16_t h, uint16_t color);
        void Img(uint16_t x, uint16_t y, uint16_t w, uint16_t h, uint16_t *img);
        void Image(uint x, uint y, const image_t *img);
        LcdBox RotateImages(const LcdPoint &position, const LcdPoint &center, double angle, const image_t *img);
        void RotatedImage(uint16_t x0, u_int16_t y0, const mono_image_t *img, double angle, uint16_t xR, u_int16_t yR, u_int16_t fcolor, u_int16_t bcolor);
        void PrintLine(uint16_t x, uint16_t y, const char *text, const CustFont *font, const uint16_t fColor, const uint16_t bColor);
        void PrintCenteredLine(uint16_t y, const char *text, const CustFont *font, const uint16_t fColor, const uint16_t bColor);
        void Print(uint16_t x, uint16_t y, const char *text, const CustFont *font, uint16_t fColor, uint16_t bColor);
        void Print(uint16_t x, uint16_t y, uint8_t number, const CustFont *font, uint16_t fColor, uint16_t bColor, bool toLeft);
        void Print(uint16_t x, uint16_t y, uint16_t number, const CustFont *font, uint16_t fColor, uint16_t bColor, bool toLeft);
        void Print(uint16_t x, uint16_t y, float number, const CustFont *font, uint16_t fColor, uint16_t bColor);
    };

}