#pragma once
#include <inttypes.h>

typedef struct CustFont {
    uint8_t width, height;
    const uint8_t *chars;
} CustFont_t;

extern CustFont_t Font16;
extern CustFont_t Font24;