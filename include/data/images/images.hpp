#pragma once

#include <inttypes.h>
#include <math.h>

namespace RoadEsp32::Data::Images
{
  struct image_row_part_t
  {
    uint16_t amount;
    uint16_t color;
  };

  struct image_row_t
  {
    image_row_part_t *parts;
    uint16_t partsCount;
  };

  typedef struct
  {
    uint16_t h, w;
    image_row_t *rows;
  } image_t;

  enum DrawOptimizationType
  {
    none,
    round,
    frame
  };

  struct draw_optimization_t
  {
    DrawOptimizationType kind{DrawOptimizationType::none};
    uint16_t outterDimmention{0}, innerDimmention{0};
  };

  struct mono_image_t
  {
    uint16_t h, w;
    uint8_t *bytes;

    draw_optimization_t optimization{};

    bool HasColorAt(uint16_t x, uint16_t y) const
    {
      if (x >= w || y >= h)
        return false;
      auto byteInLine = (w >> 3) + ((w & 0x0007) > 0 ? 1 : 0);

      auto byte = bytes[(y * byteInLine + (x >> 3))];
      auto mask = 0x01 << (7 - (x & 0x0007));
      return (byte & mask) != 0;
    }

    bool outOfDrawableZone(uint16_t x, uint16_t y) const
    {
      if (optimization.kind == DrawOptimizationType::none)
        return false;
      if (optimization.kind == DrawOptimizationType::round)
      {
        auto dx = static_cast<int>(x) - w / 2;
        auto dy = static_cast<int>(y) - h / 2;
        auto d = dx * dx + dy * dy;
        return !(d > optimization.innerDimmention * optimization.innerDimmention 
          && d < optimization.outterDimmention * optimization.outterDimmention);
      }
      if (optimization.kind == DrawOptimizationType::frame)
      {
        auto dx = std::abs(static_cast<int>(x) - w / 2);
        auto dy = std::abs(static_cast<int>(y) - h / 2);
        return !(dx > optimization.innerDimmention && dy>optimization.innerDimmention
          && dx < optimization.outterDimmention && dy>optimization.outterDimmention);
      }
      return false;
    }
  };

  class RouteImgs
  {
  public:
    static mono_image_t const bridge;
    static mono_image_t const crossroads1;
    static mono_image_t const crossroads2;
    static mono_image_t const crossroads3;
    static mono_image_t const roundabout1;
    static mono_image_t const roundabout2;
    static mono_image_t const roundabout3;
    static mono_image_t const end;
    static mono_image_t const town;

    static mono_image_t const t_join_1;
    static mono_image_t const t_join_2;

    static mono_image_t const left_join_1;
    static mono_image_t const left_join_2;

    static mono_image_t const right_join_1;
    static mono_image_t const right_join_2;

    static mono_image_t const unknown;
  };

  class Imgs
  {
  public:
    static mono_image_t const compass_needle;
    static mono_image_t const compass;

    class Logos
    {
    public:
      static mono_image_t const logo;
    };
    class Icons
    {
    public:
      static image_t const battery;
      static image_t const satellite;
    };
  };
}