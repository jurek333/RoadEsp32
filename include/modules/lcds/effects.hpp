#pragma once
#include "stdint.h"
#include <math.h>

namespace RoadEsp32::Modules::Lcds
{

    class Effect
    {
    public:
        virtual uint16_t CalculateColor(uint16_t color, uint16_t x, uint16_t y) { return color; }
        virtual uint16_t GetPixelOffset(uint16_t textScrollAbleLenPx) { return 0; }
    };

    class ScrollableText: public Effect
    {
    private:
        uint16_t _offset{0};
        const uint16_t _scrollSpeedInPx = 4;

    public:
        virtual uint16_t CalculateColor(uint16_t color, uint16_t x, uint16_t y) { return color; }
        virtual uint16_t GetPixelOffset(uint16_t textScrollAbleLenPx)
        {
            auto parity = _offset / textScrollAbleLenPx;
            auto result = _offset % textScrollAbleLenPx;
            if ((parity & 1) == 1)
                result = textScrollAbleLenPx - result;
            return result;
        }

        void MoveText()
        {
            _offset += _scrollSpeedInPx;
        }
    };

    class GradientShineEffect : public Effect
    {
    private:
        uint16_t _screenW;
        uint16_t _gradientX{0};
        const float _gradientLength = 20.0f;

    public:
        GradientShineEffect(uint16_t screenW)
            : _screenW{screenW}
        {
        }
        uint16_t CalculateColor(uint16_t color, uint16_t x, uint16_t y)
        {
            auto dist = std::abs(static_cast<float>(x) - static_cast<float>(_gradientX));
            if (dist > _gradientLength || color == 0x0000)
                return color;

            static int gr = static_cast<int>(0xFF * 31.0 / 255.0),
                       gg = static_cast<int>(0xFD * 63.0 / 255.0),
                       gb = static_cast<int>(0x55 * 31.0 / 255.0);
            int cr = color >> 11,
                cg = (color >> 5) & 0x3F,
                cb = color & 0x1F;
            auto di = dist / _gradientLength;
            auto dif = 1 - di * di;
            float dr = gr - cr,
                  dg = gg - cg,
                  db = gb - cb;
            return (static_cast<int>(cr + dr * dif) & 0x1f) << 11 | (static_cast<int>(cg + dg * dif) & 0x3f) << 5 | (static_cast<int>(cb + db * dif) & 0x1f);
        }
        void MoveShine()
        {
            _gradientX += 7;
            _gradientX = (_gradientX >= _screenW ? 0 : _gradientX);
        }
    };

    class ColorEffects
    {
    public:
        ColorEffects(uint16_t screenW, uint16_t screenH)
            : GradientShine{screenW}
        {
        }

        Effect NoEffect;
        GradientShineEffect GradientShine;
        ScrollableText Scrollable;

        void Tick()
        {
            GradientShine.MoveShine();
            Scrollable.MoveText();
        }
    };

}