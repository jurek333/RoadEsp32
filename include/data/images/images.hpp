#pragma once

#include <inttypes.h>

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

  typedef struct
  {
    uint16_t h, w;
    uint8_t *bytes;
  } mono_image_t;

  class RouteImgs {
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