#pragma once

#include <inttypes.h>

namespace RouteEsp32::data::images
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

  class Images
  {
  public:
    static image_t const crossing;
    static image_t const crossing_1;
    static image_t const crossing_2;
    static image_t const crossing_3;
    static image_t const round_0;
    static image_t const round_1;
    static image_t const round_2;
    static image_t const round_3;
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
      static image_t const dir_arrow;
    };
  };
}