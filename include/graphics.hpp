#ifndef _GRAPHICS_H__
#define _GRAPHICS_H__

#include <math.h>
//#include <Eigen/Dense>
#include "esp_log.h"

//using Eigen::Matrix3f;
//using Eigen::Vector3f;

struct LcdPoint
{
    int32_t x, y;

    LcdPoint() {}
    LcdPoint(int32_t px, int32_t py)
    {
        x = px, y = py;
    }

    double DistanceTo(const LcdPoint &p) const
    {
        return std::sqrt(std::pow(p.x - x, 2.0) + std::pow(p.y - y, 2.0));
    }
    LcdPoint Move(const int32_t dx, const int32_t dy) const
    {
        LcdPoint point;
        point.x = x + dx;
        point.y = y + dy;
        return point;
    }

    LcdPoint Clip() const
    {
        LcdPoint cliped;
        cliped.x = x < 0 ? 0 : (x > 240 ? 240 : x);
        cliped.y = y < 0 ? 0 : (y > 280 ? 280 : y);
        return cliped;
    }
};
struct LcdBox
{
    uint16_t x0, y0, x1, y1;

    LcdBox()
    {
        x0 = y0 = 0xFFFF;
        x1 = y1 = 0x0000;
    }

    void StretchByPoint(const LcdPoint &point)
    {
        auto clipedPoint = point.Clip();
        x0 = std::min(x0, (uint16_t)clipedPoint.x);
        y0 = std::min(y0, (uint16_t)clipedPoint.y);
        x1 = std::max(x1, (uint16_t)clipedPoint.x);
        y1 = std::max(y1, (uint16_t)clipedPoint.y);
    }
};
/*
static LcdPoint Rotate(const LcdPoint &point, float angle)
{
    auto rad = angle*6.48f/360.0f;
    Eigen::Vector2f vec{(float)point.x, (float)point.y};
    
    Eigen::Matrix2f rotate;
    rotate(1, 1) = rotate(0, 0) = std::cos(rad);
    rotate(1, 0) = std::sin(rad);
    rotate(0, 1) = -rotate(1, 0);
    Eigen::Vector2f result = rotate * vec;
    
    return LcdPoint((int32_t)result[0], (int32_t)result[1]);
};
*/

#endif //_GRAPHICS_H__