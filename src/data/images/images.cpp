#include "data/images/images.hpp"

using namespace RouteEsp32::data::images;

image_t const Images::Icons::dir_arrow =
    {
        .h = 18,
        .w = 18,
        .rows = new image_row_t[18]{
            {.parts = new image_row_part_t[3]{{8, 0}, {2, 14312}, {8, 0}}, .partsCount = 3},
            {.parts = new image_row_part_t[3]{{8, 0}, {2, 14312}, {8, 0}}, .partsCount = 3},
            {.parts = new image_row_part_t[3]{{7, 0}, {4, 14312}, {7, 0}}, .partsCount = 3},
            {.parts = new image_row_part_t[3]{{6, 0}, {6, 14312}, {6, 0}}, .partsCount = 3},
            {.parts = new image_row_part_t[5]{{5, 0}, {3, 14312}, {2, 0}, {3, 14312}, {5, 0}}, .partsCount = 5},
            {.parts = new image_row_part_t[5]{{4, 0}, {3, 14312}, {4, 0}, {3, 14312}, {4, 0}}, .partsCount = 5},
            {.parts = new image_row_part_t[6]{{2, 2113}, {2, 0}, {2, 14312}, {6, 0}, {2, 14312}, {4, 0}}, .partsCount = 6},
            {.parts = new image_row_part_t[8]{{1, 6339}, {1, 0}, {1, 2113}, {1, 2145}, {1, 14312}, {8, 0}, {1, 14312}, {4, 0}}, .partsCount = 8},
            {.parts = new image_row_part_t[6]{{2, 0}, {1, 2145}, {1, 2113}, {1, 0}, {2, 2145}, {11, 0}}, .partsCount = 6},
            {.parts = new image_row_part_t[6]{{5, 0}, {2, 2145}, {1, 32}, {2, 14312}, {1, 2113}, {7, 0}}, .partsCount = 6},
            {.parts = new image_row_part_t[3]{{8, 0}, {2, 14312}, {8, 0}}, .partsCount = 3},
            {.parts = new image_row_part_t[3]{{8, 0}, {2, 14312}, {8, 0}}, .partsCount = 3},
            {.parts = new image_row_part_t[7]{{3, 0}, {2, 63488}, {3, 0}, {2, 14312}, {3, 0}, {2, 63488}, {3, 0}}, .partsCount = 7},
            {.parts = new image_row_part_t[7]{{3, 0}, {2, 63488}, {3, 0}, {2, 14312}, {3, 0}, {2, 63488}, {3, 0}}, .partsCount = 7},
            {.parts = new image_row_part_t[3]{{8, 0}, {2, 14312}, {8, 0}}, .partsCount = 3},
            {.parts = new image_row_part_t[3]{{8, 0}, {2, 14312}, {8, 0}}, .partsCount = 3},
            {.parts = new image_row_part_t[3]{{8, 0}, {2, 14312}, {8, 0}}, .partsCount = 3},
            {.parts = new image_row_part_t[3]{{8, 0}, {2, 14312}, {8, 0}}, .partsCount = 3}}};

image_t const Images::Icons::satellite =
    {
        .h = 18,
        .w = 18,
        .rows = new image_row_t[18]{
            {.parts = new image_row_part_t[9]{{2, 0}, {1, 31680}, {1, 33760}, {7, 0}, {1, 6371}, {1, 25388}, {1, 29614}, {1, 23243}, {3, 0}}, .partsCount = 9},
            {.parts = new image_row_part_t[12]{{1, 6304}, {1, 14784}, {1, 52768}, {1, 59072}, {7, 0}, {1, 16968}, {1, 38066}, {1, 35921}, {1, 40179}, {1, 40211}, {1, 16968}, {1, 0}}, .partsCount = 12},
            {.parts = new image_row_part_t[14]{{1, 37952}, {1, 61184}, {1, 27456}, {1, 29568}, {1, 50624}, {1, 25344}, {5, 0}, {1, 4258}, {1, 35953}, {1, 38098}, {1, 29614}, {1, 29582}, {1, 42324}, {1, 10629}}, .partsCount = 14},
            {.parts = new image_row_part_t[12]{{1, 16864}, {1, 42208}, {1, 33760}, {1, 29536}, {1, 61184}, {1, 44288}, {6, 0}, {2, 29614}, {1, 40211}, {1, 31727}, {1, 35921}, {1, 33808}}, .partsCount = 12},
            {.parts = new image_row_part_t[17]{{2, 0}, {1, 56960}, {1, 54848}, {1, 6304}, {1, 40128}, {1, 52736}, {1, 32}, {1, 0}, {1, 10597}, {1, 33808}, {1, 0}, {1, 27469}, {1, 40211}, {1, 25356}, {1, 42292}, {1, 27501}, {1, 38098}}, .partsCount = 17},
            {.parts = new image_row_part_t[16]{{2, 0}, {1, 25312}, {1, 37952}, {1, 37984}, {1, 38016}, {1, 65408}, {1, 50624}, {1, 0}, {1, 21130}, {1, 48663}, {1, 44373}, {1, 33840}, {2, 31695}, {1, 42292}, {1, 29646}, {1, 38066}}, .partsCount = 16},
            {.parts = new image_row_part_t[16]{{3, 0}, {1, 23232}, {1, 63296}, {1, 46432}, {1, 42208}, {1, 46400}, {1, 31727}, {1, 31695}, {1, 46518}, {1, 50744}, {1, 40211}, {1, 0}, {1, 14823}, {1, 23275}, {1, 33808}, {1, 27469}}, .partsCount = 16},
            {.parts = new image_row_part_t[12]{{4, 0}, {1, 37952}, {1, 59104}, {1, 21123}, {1, 35954}, {1, 50744}, {1, 44373}, {1, 29614}, {1, 46486}, {1, 46550}, {1, 23243}, {4, 0}}, .partsCount = 12},
            {.parts = new image_row_part_t[11]{{5, 0}, {1, 23272}, {1, 42324}, {1, 50712}, {1, 48663}, {1, 50712}, {1, 44405}, {1, 21162}, {1, 19017}, {1, 8484}, {4, 0}}, .partsCount = 11},
            {.parts = new image_row_part_t[9]{{4, 0}, {1, 25388}, {1, 46518}, {1, 50712}, {2, 48663}, {1, 48631}, {1, 35920}, {1, 16897}, {6, 0}}, .partsCount = 9},
            {.parts = new image_row_part_t[10]{{3, 0}, {1, 31727}, {3, 48663}, {1, 50712}, {1, 46486}, {1, 19084}, {1, 46400}, {1, 59072}, {1, 19008}, {5, 0}}, .partsCount = 10},
            {.parts = new image_row_part_t[11]{{3, 0}, {1, 29614}, {2, 48663}, {1, 50712}, {1, 42292}, {1, 29608}, {1, 50624}, {1, 33760}, {1, 63296}, {1, 50656}, {5, 0}}, .partsCount = 11},
            {.parts = new image_row_part_t[14]{{3, 0}, {1, 10597}, {1, 35953}, {1, 48631}, {1, 38066}, {1, 2}, {1, 19008}, {1, 61184}, {1, 54848}, {1, 27456}, {1, 35872}, {1, 44288}, {1, 8416}, {3, 0}}, .partsCount = 14},
            {.parts = new image_row_part_t[10]{{5, 0}, {1, 21162}, {3, 0}, {1, 27456}, {1, 48512}, {1, 23200}, {1, 35872}, {1, 65440}, {1, 42208}, {3, 0}}, .partsCount = 10},
            {.parts = new image_row_part_t[8]{{10, 0}, {1, 14784}, {1, 61184}, {1, 46400}, {1, 35872}, {1, 37984}, {1, 35904}, {2, 0}}, .partsCount = 8},
            {.parts = new image_row_part_t[8]{{11, 0}, {1, 40096}, {1, 46432}, {1, 4224}, {1, 46432}, {1, 61216}, {1, 19008}, {1, 0}}, .partsCount = 8},
            {.parts = new image_row_part_t[6]{{12, 0}, {1, 27456}, {1, 61216}, {1, 33792}, {1, 23232}, {2, 0}}, .partsCount = 6},
            {.parts = new image_row_part_t[5]{{12, 0}, {1, 8448}, {1, 42208}, {1, 21120}, {3, 0}}, .partsCount = 5}}};

image_t const Images::Icons::battery{
    .h = 20,
    .w = 40,
    .rows = new image_row_t[20]{
        {.parts = new image_row_part_t[1]{{40, 0x0000}}, .partsCount = 1},
        {.parts = new image_row_part_t[3]{{1, 0x0000}, {36, 0xffff}, {3, 0x0000}}, .partsCount = 3},
        {.parts = new image_row_part_t[3]{{1, 0x0000}, {36, 0xffff}, {3, 0x0000}}, .partsCount = 3},
        {.parts = new image_row_part_t[5]{{1, 0x0000}, {2, 0xffff}, {32, 0x07c0}, {2, 0xffff}, {3, 0x0000}}, .partsCount = 5},
        {.parts = new image_row_part_t[5]{{1, 0x0000}, {2, 0xffff}, {32, 0x07c0}, {2, 0xffff}, {3, 0x0000}}, .partsCount = 5},
        {.parts = new image_row_part_t[5]{{1, 0x0000}, {2, 0xffff}, {32, 0x07c0}, {2, 0xffff}, {3, 0x0000}}, .partsCount = 5},
        {.parts = new image_row_part_t[5]{{1, 0x0000}, {2, 0xffff}, {32, 0x07c0}, {4, 0xffff}, {1, 0x0000}}, .partsCount = 5},
        {.parts = new image_row_part_t[5]{{1, 0x0000}, {2, 0xffff}, {32, 0x07c0}, {4, 0xffff}, {1, 0x0000}}, .partsCount = 5},
        {.parts = new image_row_part_t[5]{{1, 0x0000}, {2, 0xffff}, {32, 0x07c0}, {4, 0xffff}, {1, 0x0000}}, .partsCount = 5},
        {.parts = new image_row_part_t[5]{{1, 0x0000}, {2, 0xffff}, {32, 0x07c0}, {4, 0xffff}, {1, 0x0000}}, .partsCount = 5},
        {.parts = new image_row_part_t[5]{{1, 0x0000}, {2, 0xffff}, {32, 0x07c0}, {4, 0xffff}, {1, 0x0000}}, .partsCount = 5},
        {.parts = new image_row_part_t[5]{{1, 0x0000}, {2, 0xffff}, {32, 0x07c0}, {4, 0xffff}, {1, 0x0000}}, .partsCount = 5},
        {.parts = new image_row_part_t[5]{{1, 0x0000}, {2, 0xffff}, {32, 0x07c0}, {4, 0xffff}, {1, 0x0000}}, .partsCount = 5},
        {.parts = new image_row_part_t[5]{{1, 0x0000}, {2, 0xffff}, {32, 0x07c0}, {4, 0xffff}, {1, 0x0000}}, .partsCount = 5},
        {.parts = new image_row_part_t[5]{{1, 0x0000}, {2, 0xffff}, {32, 0x07c0}, {2, 0xffff}, {3, 0x0000}}, .partsCount = 5},
        {.parts = new image_row_part_t[5]{{1, 0x0000}, {2, 0xffff}, {32, 0x07c0}, {2, 0xffff}, {3, 0x0000}}, .partsCount = 5},
        {.parts = new image_row_part_t[5]{{1, 0x0000}, {2, 0xffff}, {32, 0x07c0}, {2, 0xffff}, {3, 0x0000}}, .partsCount = 5},
        {.parts = new image_row_part_t[3]{{1, 0x0000}, {36, 0xffff}, {3, 0x0000}}, .partsCount = 3},
        {.parts = new image_row_part_t[3]{{1, 0x0000}, {36, 0xffff}, {3, 0x0000}}, .partsCount = 3},
        {.parts = new image_row_part_t[1]{{40, 0x0000}}, .partsCount = 1}}};

mono_image_t const Images::Logos::logo{
    .h = 10,
    .w = 10,
    .bytes = new uint8_t[10 * 2]{
        0b01100001, 0b10000000,
        0b01100001, 0b10000000,
        0b00011110, 0b00000000,
        0b00010010, 0b00000000,
        0b00001100, 0b00000000,
        0b01000000, 0b10000000,
        0b01110011, 0b10000000,
        0b01010010, 0b10000000,
        0b00001100, 0b00000000,
        0b00001100, 0b00000000}};

image_t const Images::crossing{
    .h = 180,
    .w = 180,
    .rows = new image_row_t[180]{
        {.parts = new image_row_part_t[5]{{74, 0}, {5, 0x071c}, {22, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 5},
        {.parts = new image_row_part_t[5]{{74, 0}, {5, 0x071c}, {22, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 5},
        {.parts = new image_row_part_t[5]{{74, 0}, {5, 0x071c}, {22, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 5},
        {.parts = new image_row_part_t[5]{{74, 0}, {5, 0x071c}, {22, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 5},
        {.parts = new image_row_part_t[5]{{74, 0}, {5, 0x071c}, {22, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 5},
        {.parts = new image_row_part_t[5]{{74, 0}, {5, 0x071c}, {22, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 5},
        {.parts = new image_row_part_t[5]{{74, 0}, {5, 0x071c}, {22, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 5},
        {.parts = new image_row_part_t[5]{{74, 0}, {5, 0x071c}, {22, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 5},
        {.parts = new image_row_part_t[5]{{74, 0}, {5, 0x071c}, {22, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 5},
        {.parts = new image_row_part_t[5]{{74, 0}, {5, 0x071c}, {22, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 5},
        {.parts = new image_row_part_t[5]{{74, 0}, {5, 0x071c}, {22, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 5},
        {.parts = new image_row_part_t[5]{{74, 0}, {5, 0x071c}, {22, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 5},
        {.parts = new image_row_part_t[5]{{74, 0}, {5, 0x071c}, {22, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 5},
        {.parts = new image_row_part_t[5]{{74, 0}, {5, 0x071c}, {22, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 5},
        {.parts = new image_row_part_t[5]{{74, 0}, {5, 0x071c}, {22, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 5},
        {.parts = new image_row_part_t[5]{{74, 0}, {5, 0x071c}, {22, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 5},
        {.parts = new image_row_part_t[5]{{74, 0}, {5, 0x071c}, {22, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 5},
        {.parts = new image_row_part_t[5]{{74, 0}, {5, 0x071c}, {22, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 5},
        {.parts = new image_row_part_t[5]{{74, 0}, {5, 0x071c}, {22, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 5},
        {.parts = new image_row_part_t[5]{{74, 0}, {5, 0x071c}, {22, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 5},
        {.parts = new image_row_part_t[5]{{74, 0}, {5, 0x071c}, {22, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 5},
        {.parts = new image_row_part_t[5]{{74, 0}, {5, 0x071c}, {22, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 5},
        {.parts = new image_row_part_t[5]{{74, 0}, {5, 0x071c}, {22, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 5},
        {.parts = new image_row_part_t[5]{{74, 0}, {5, 0x071c}, {22, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 5},
        {.parts = new image_row_part_t[5]{{74, 0}, {5, 0x071c}, {22, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 5},
        {.parts = new image_row_part_t[5]{{74, 0}, {5, 0x071c}, {22, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 5},
        {.parts = new image_row_part_t[5]{{74, 0}, {5, 0x071c}, {22, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 5},
        {.parts = new image_row_part_t[5]{{74, 0}, {5, 0x071c}, {22, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 5},
        {.parts = new image_row_part_t[5]{{74, 0}, {5, 0x071c}, {22, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 5},
        {.parts = new image_row_part_t[5]{{74, 0}, {5, 0x071c}, {22, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 5},
        {.parts = new image_row_part_t[5]{{74, 0}, {5, 0x071c}, {22, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 5},
        {.parts = new image_row_part_t[5]{{74, 0}, {5, 0x071c}, {22, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 5},
        {.parts = new image_row_part_t[5]{{74, 0}, {5, 0x071c}, {22, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 5},
        {.parts = new image_row_part_t[5]{{74, 0}, {5, 0x071c}, {22, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 5},
        {.parts = new image_row_part_t[5]{{74, 0}, {5, 0x071c}, {22, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 5},
        {.parts = new image_row_part_t[5]{{74, 0}, {5, 0x071c}, {22, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 5},
        {.parts = new image_row_part_t[5]{{74, 0}, {5, 0x071c}, {22, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 5},
        {.parts = new image_row_part_t[5]{{74, 0}, {5, 0x071c}, {22, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 5},
        {.parts = new image_row_part_t[5]{{74, 0}, {5, 0x071c}, {22, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 5},
        {.parts = new image_row_part_t[5]{{74, 0}, {5, 0x071c}, {22, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 5},
        {.parts = new image_row_part_t[5]{{74, 0}, {5, 0x071c}, {22, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 5},
        {.parts = new image_row_part_t[5]{{74, 0}, {5, 0x071c}, {22, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 5},
        {.parts = new image_row_part_t[5]{{74, 0}, {5, 0x071c}, {22, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 5},
        {.parts = new image_row_part_t[5]{{74, 0}, {5, 0x071c}, {22, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 5},
        {.parts = new image_row_part_t[5]{{74, 0}, {5, 0x071c}, {22, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 5},
        {.parts = new image_row_part_t[5]{{74, 0}, {5, 0x071c}, {22, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 5},
        {.parts = new image_row_part_t[5]{{74, 0}, {5, 0x071c}, {22, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 5},
        {.parts = new image_row_part_t[5]{{74, 0}, {5, 0x071c}, {22, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 5},
        {.parts = new image_row_part_t[5]{{74, 0}, {5, 0x071c}, {22, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 5},
        {.parts = new image_row_part_t[5]{{74, 0}, {5, 0x071c}, {22, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 5},
        {.parts = new image_row_part_t[5]{{74, 0}, {5, 0x071c}, {22, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 5},
        {.parts = new image_row_part_t[5]{{74, 0}, {5, 0x071c}, {22, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 5},
        {.parts = new image_row_part_t[5]{{74, 0}, {5, 0x071c}, {22, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 5},
        {.parts = new image_row_part_t[5]{{74, 0}, {5, 0x071c}, {22, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 5},
        {.parts = new image_row_part_t[5]{{74, 0}, {5, 0x071c}, {22, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 5},
        {.parts = new image_row_part_t[5]{{74, 0}, {5, 0x071c}, {22, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 5},
        {.parts = new image_row_part_t[5]{{74, 0}, {5, 0x071c}, {22, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 5},
        {.parts = new image_row_part_t[5]{{74, 0}, {5, 0x071c}, {22, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 5},
        {.parts = new image_row_part_t[5]{{74, 0}, {5, 0x071c}, {22, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 5},
        {.parts = new image_row_part_t[5]{{74, 0}, {5, 0x071c}, {22, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 5},
        {.parts = new image_row_part_t[5]{{74, 0}, {5, 0x071c}, {22, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 5},
        {.parts = new image_row_part_t[5]{{74, 0}, {5, 0x071c}, {22, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 5},
        {.parts = new image_row_part_t[5]{{74, 0}, {5, 0x071c}, {22, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 5},
        {.parts = new image_row_part_t[5]{{74, 0}, {5, 0x071c}, {22, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 5},
        {.parts = new image_row_part_t[5]{{74, 0}, {5, 0x071c}, {22, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 5},
        {.parts = new image_row_part_t[5]{{74, 0}, {5, 0x071c}, {22, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 5},
        {.parts = new image_row_part_t[5]{{74, 0}, {5, 0x071c}, {22, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 5},
        {.parts = new image_row_part_t[5]{{74, 0}, {5, 0x071c}, {22, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 5},
        {.parts = new image_row_part_t[5]{{74, 0}, {5, 0x071c}, {22, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 5},
        {.parts = new image_row_part_t[5]{{74, 0}, {5, 0x071c}, {22, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 5},
        {.parts = new image_row_part_t[5]{{74, 0}, {5, 0x071c}, {22, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 5},
        {.parts = new image_row_part_t[5]{{74, 0}, {5, 0x071c}, {22, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 5},
        {.parts = new image_row_part_t[5]{{74, 0}, {5, 0x071c}, {22, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 5},
        {.parts = new image_row_part_t[5]{{74, 0}, {5, 0x071c}, {22, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 5},
        {.parts = new image_row_part_t[3]{{79, 0x071c}, {22, 0}, {79, 0x071c}}, .partsCount = 3},
        {.parts = new image_row_part_t[3]{{79, 0x071c}, {22, 0}, {79, 0x071c}}, .partsCount = 3},
        {.parts = new image_row_part_t[3]{{79, 0x071c}, {22, 0}, {79, 0x071c}}, .partsCount = 3},
        {.parts = new image_row_part_t[3]{{79, 0x071c}, {22, 0}, {79, 0x071c}}, .partsCount = 3},
        {.parts = new image_row_part_t[3]{{79, 0x071c}, {22, 0}, {79, 0x071c}}, .partsCount = 3},
        {.parts = new image_row_part_t[1]{{180, 0}}, .partsCount = 1},
        {.parts = new image_row_part_t[1]{{180, 0}}, .partsCount = 1},
        {.parts = new image_row_part_t[1]{{180, 0}}, .partsCount = 1},
        {.parts = new image_row_part_t[1]{{180, 0}}, .partsCount = 1},
        {.parts = new image_row_part_t[1]{{180, 0}}, .partsCount = 1},
        {.parts = new image_row_part_t[1]{{180, 0}}, .partsCount = 1},
        {.parts = new image_row_part_t[1]{{180, 0}}, .partsCount = 1},
        {.parts = new image_row_part_t[1]{{180, 0}}, .partsCount = 1},
        {.parts = new image_row_part_t[1]{{180, 0}}, .partsCount = 1},
        {.parts = new image_row_part_t[1]{{180, 0}}, .partsCount = 1},
        {.parts = new image_row_part_t[1]{{180, 0}}, .partsCount = 1},
        {.parts = new image_row_part_t[1]{{180, 0}}, .partsCount = 1},
        {.parts = new image_row_part_t[1]{{180, 0}}, .partsCount = 1},
        {.parts = new image_row_part_t[1]{{180, 0}}, .partsCount = 1},
        {.parts = new image_row_part_t[1]{{180, 0}}, .partsCount = 1},
        {.parts = new image_row_part_t[1]{{180, 0}}, .partsCount = 1},
        {.parts = new image_row_part_t[1]{{180, 0}}, .partsCount = 1},
        {.parts = new image_row_part_t[1]{{180, 0}}, .partsCount = 1},
        {.parts = new image_row_part_t[1]{{180, 0}}, .partsCount = 1},
        {.parts = new image_row_part_t[1]{{180, 0}}, .partsCount = 1},
        {.parts = new image_row_part_t[1]{{180, 0}}, .partsCount = 1},
        {.parts = new image_row_part_t[3]{{79, 0x071c}, {22, 0}, {79, 0x071c}}, .partsCount = 3},
        {.parts = new image_row_part_t[3]{{79, 0x071c}, {22, 0}, {79, 0x071c}}, .partsCount = 3},
        {.parts = new image_row_part_t[3]{{79, 0x071c}, {22, 0}, {79, 0x071c}}, .partsCount = 3},
        {.parts = new image_row_part_t[3]{{79, 0x071c}, {22, 0}, {79, 0x071c}}, .partsCount = 3},
        {.parts = new image_row_part_t[3]{{79, 0x071c}, {22, 0}, {79, 0x071c}}, .partsCount = 3},
        {.parts = new image_row_part_t[5]{{74, 0}, {5, 0x071c}, {22, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 5},
        {.parts = new image_row_part_t[5]{{74, 0}, {5, 0x071c}, {22, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 5},
        {.parts = new image_row_part_t[5]{{74, 0}, {5, 0x071c}, {22, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 5},
        {.parts = new image_row_part_t[5]{{74, 0}, {5, 0x071c}, {22, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 5},
        {.parts = new image_row_part_t[5]{{74, 0}, {5, 0x071c}, {22, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 5},
        {.parts = new image_row_part_t[5]{{74, 0}, {5, 0x071c}, {22, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 5},
        {.parts = new image_row_part_t[5]{{74, 0}, {5, 0x071c}, {22, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 5},
        {.parts = new image_row_part_t[5]{{74, 0}, {5, 0x071c}, {22, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 5},
        {.parts = new image_row_part_t[5]{{74, 0}, {5, 0x071c}, {22, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 5},
        {.parts = new image_row_part_t[5]{{74, 0}, {5, 0x071c}, {22, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 5},
        {.parts = new image_row_part_t[5]{{74, 0}, {5, 0x071c}, {22, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 5},
        {.parts = new image_row_part_t[5]{{74, 0}, {5, 0x071c}, {22, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 5},
        {.parts = new image_row_part_t[5]{{74, 0}, {5, 0x071c}, {22, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 5},
        {.parts = new image_row_part_t[5]{{74, 0}, {5, 0x071c}, {22, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 5},
        {.parts = new image_row_part_t[5]{{74, 0}, {5, 0x071c}, {22, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 5},
        {.parts = new image_row_part_t[5]{{74, 0}, {5, 0x071c}, {22, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 5},
        {.parts = new image_row_part_t[5]{{74, 0}, {5, 0x071c}, {22, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 5},
        {.parts = new image_row_part_t[5]{{74, 0}, {5, 0x071c}, {22, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 5},
        {.parts = new image_row_part_t[5]{{74, 0}, {5, 0x071c}, {22, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 5},
        {.parts = new image_row_part_t[5]{{74, 0}, {5, 0x071c}, {22, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 5},
        {.parts = new image_row_part_t[5]{{74, 0}, {5, 0x071c}, {22, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 5},
        {.parts = new image_row_part_t[5]{{74, 0}, {5, 0x071c}, {22, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 5},
        {.parts = new image_row_part_t[5]{{74, 0}, {5, 0x071c}, {22, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 5},
        {.parts = new image_row_part_t[5]{{74, 0}, {5, 0x071c}, {22, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 5},
        {.parts = new image_row_part_t[5]{{74, 0}, {5, 0x071c}, {22, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 5},
        {.parts = new image_row_part_t[5]{{74, 0}, {5, 0x071c}, {22, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 5},
        {.parts = new image_row_part_t[5]{{74, 0}, {5, 0x071c}, {22, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 5},
        {.parts = new image_row_part_t[5]{{74, 0}, {5, 0x071c}, {22, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 5},
        {.parts = new image_row_part_t[5]{{74, 0}, {5, 0x071c}, {22, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 5},
        {.parts = new image_row_part_t[5]{{74, 0}, {5, 0x071c}, {22, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 5},
        {.parts = new image_row_part_t[5]{{74, 0}, {5, 0x071c}, {22, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 5},
        {.parts = new image_row_part_t[5]{{74, 0}, {5, 0x071c}, {22, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 5},
        {.parts = new image_row_part_t[5]{{74, 0}, {5, 0x071c}, {22, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 5},
        {.parts = new image_row_part_t[5]{{74, 0}, {5, 0x071c}, {22, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 5},
        {.parts = new image_row_part_t[5]{{74, 0}, {5, 0x071c}, {22, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 5},
        {.parts = new image_row_part_t[5]{{74, 0}, {5, 0x071c}, {22, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 5},
        {.parts = new image_row_part_t[5]{{74, 0}, {5, 0x071c}, {22, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 5},
        {.parts = new image_row_part_t[5]{{74, 0}, {5, 0x071c}, {22, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 5},
        {.parts = new image_row_part_t[5]{{74, 0}, {5, 0x071c}, {22, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 5},
        {.parts = new image_row_part_t[5]{{74, 0}, {5, 0x071c}, {22, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 5},
        {.parts = new image_row_part_t[5]{{74, 0}, {5, 0x071c}, {22, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 5},
        {.parts = new image_row_part_t[5]{{74, 0}, {5, 0x071c}, {22, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 5},
        {.parts = new image_row_part_t[5]{{74, 0}, {5, 0x071c}, {22, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 5},
        {.parts = new image_row_part_t[5]{{74, 0}, {5, 0x071c}, {22, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 5},
        {.parts = new image_row_part_t[5]{{74, 0}, {5, 0x071c}, {22, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 5},
        {.parts = new image_row_part_t[5]{{74, 0}, {5, 0x071c}, {22, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 5},
        {.parts = new image_row_part_t[5]{{74, 0}, {5, 0x071c}, {22, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 5},
        {.parts = new image_row_part_t[5]{{74, 0}, {5, 0x071c}, {22, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 5},
        {.parts = new image_row_part_t[5]{{74, 0}, {5, 0x071c}, {22, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 5},
        {.parts = new image_row_part_t[5]{{74, 0}, {5, 0x071c}, {22, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 5},
        {.parts = new image_row_part_t[5]{{74, 0}, {5, 0x071c}, {22, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 5},
        {.parts = new image_row_part_t[5]{{74, 0}, {5, 0x071c}, {22, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 5},
        {.parts = new image_row_part_t[5]{{74, 0}, {5, 0x071c}, {22, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 5},
        {.parts = new image_row_part_t[5]{{74, 0}, {5, 0x071c}, {22, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 5},
        {.parts = new image_row_part_t[5]{{74, 0}, {5, 0x071c}, {22, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 5},
        {.parts = new image_row_part_t[5]{{74, 0}, {5, 0x071c}, {22, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 5},
        {.parts = new image_row_part_t[5]{{74, 0}, {5, 0x071c}, {22, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 5},
        {.parts = new image_row_part_t[5]{{74, 0}, {5, 0x071c}, {22, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 5},
        {.parts = new image_row_part_t[5]{{74, 0}, {5, 0x071c}, {22, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 5},
        {.parts = new image_row_part_t[5]{{74, 0}, {5, 0x071c}, {22, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 5},
        {.parts = new image_row_part_t[5]{{74, 0}, {5, 0x071c}, {22, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 5},
        {.parts = new image_row_part_t[5]{{74, 0}, {5, 0x071c}, {22, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 5},
        {.parts = new image_row_part_t[5]{{74, 0}, {5, 0x071c}, {22, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 5},
        {.parts = new image_row_part_t[5]{{74, 0}, {5, 0x071c}, {22, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 5},
        {.parts = new image_row_part_t[5]{{74, 0}, {5, 0x071c}, {22, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 5},
        {.parts = new image_row_part_t[5]{{74, 0}, {5, 0x071c}, {22, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 5},
        {.parts = new image_row_part_t[5]{{74, 0}, {5, 0x071c}, {22, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 5},
        {.parts = new image_row_part_t[5]{{74, 0}, {5, 0x071c}, {22, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 5},
        {.parts = new image_row_part_t[5]{{74, 0}, {5, 0x071c}, {22, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 5},
        {.parts = new image_row_part_t[5]{{74, 0}, {5, 0x071c}, {22, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 5},
        {.parts = new image_row_part_t[5]{{74, 0}, {5, 0x071c}, {22, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 5},
        {.parts = new image_row_part_t[5]{{74, 0}, {5, 0x071c}, {22, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 5},
        {.parts = new image_row_part_t[5]{{74, 0}, {5, 0x071c}, {22, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 5},
        {.parts = new image_row_part_t[5]{{74, 0}, {5, 0x071c}, {22, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 5},
        {.parts = new image_row_part_t[5]{{74, 0}, {5, 0x071c}, {22, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 5}}};
image_t const Images::crossing_1{
    .h = 180,
    .w = 180,
    .rows = new image_row_t[180]{
        {.parts = new image_row_part_t[5]{{74, 0}, {5, 0x071c}, {22, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 5},

        {.parts = new image_row_part_t[5]{{74, 0}, {5, 0x071c}, {22, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 5},

        {.parts = new image_row_part_t[5]{{74, 0}, {5, 0x071c}, {22, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 5},

        {.parts = new image_row_part_t[5]{{74, 0}, {5, 0x071c}, {22, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 5},

        {.parts = new image_row_part_t[5]{{74, 0}, {5, 0x071c}, {22, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 5},

        {.parts = new image_row_part_t[5]{{74, 0}, {5, 0x071c}, {22, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 5},

        {.parts = new image_row_part_t[5]{{74, 0}, {5, 0x071c}, {22, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 5},

        {.parts = new image_row_part_t[5]{{74, 0}, {5, 0x071c}, {22, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 5},

        {.parts = new image_row_part_t[5]{{74, 0}, {5, 0x071c}, {22, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 5},

        {.parts = new image_row_part_t[5]{{74, 0}, {5, 0x071c}, {22, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 5},

        {.parts = new image_row_part_t[5]{{74, 0}, {5, 0x071c}, {22, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 5},

        {.parts = new image_row_part_t[5]{{74, 0}, {5, 0x071c}, {22, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 5},

        {.parts = new image_row_part_t[5]{{74, 0}, {5, 0x071c}, {22, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 5},

        {.parts = new image_row_part_t[5]{{74, 0}, {5, 0x071c}, {22, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 5},

        {.parts = new image_row_part_t[5]{{74, 0}, {5, 0x071c}, {22, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 5},

        {.parts = new image_row_part_t[5]{{74, 0}, {5, 0x071c}, {22, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 5},

        {.parts = new image_row_part_t[5]{{74, 0}, {5, 0x071c}, {22, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 5},

        {.parts = new image_row_part_t[5]{{74, 0}, {5, 0x071c}, {22, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 5},

        {.parts = new image_row_part_t[5]{{74, 0}, {5, 0x071c}, {22, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 5},

        {.parts = new image_row_part_t[5]{{74, 0}, {5, 0x071c}, {22, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 5},

        {.parts = new image_row_part_t[5]{{74, 0}, {5, 0x071c}, {22, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 5},

        {.parts = new image_row_part_t[5]{{74, 0}, {5, 0x071c}, {22, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 5},

        {.parts = new image_row_part_t[5]{{74, 0}, {5, 0x071c}, {22, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 5},

        {.parts = new image_row_part_t[5]{{74, 0}, {5, 0x071c}, {22, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 5},

        {.parts = new image_row_part_t[5]{{74, 0}, {5, 0x071c}, {22, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 5},

        {.parts = new image_row_part_t[5]{{74, 0}, {5, 0x071c}, {22, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 5},

        {.parts = new image_row_part_t[5]{{74, 0}, {5, 0x071c}, {22, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 5},

        {.parts = new image_row_part_t[5]{{74, 0}, {5, 0x071c}, {22, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 5},

        {.parts = new image_row_part_t[5]{{74, 0}, {5, 0x071c}, {22, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 5},

        {.parts = new image_row_part_t[5]{{74, 0}, {5, 0x071c}, {22, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 5},

        {.parts = new image_row_part_t[5]{{74, 0}, {5, 0x071c}, {22, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 5},

        {.parts = new image_row_part_t[5]{{74, 0}, {5, 0x071c}, {22, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 5},

        {.parts = new image_row_part_t[5]{{74, 0}, {5, 0x071c}, {22, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 5},

        {.parts = new image_row_part_t[5]{{74, 0}, {5, 0x071c}, {22, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 5},

        {.parts = new image_row_part_t[5]{{74, 0}, {5, 0x071c}, {22, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 5},

        {.parts = new image_row_part_t[5]{{74, 0}, {5, 0x071c}, {22, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 5},

        {.parts = new image_row_part_t[5]{{74, 0}, {5, 0x071c}, {22, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 5},

        {.parts = new image_row_part_t[5]{{74, 0}, {5, 0x071c}, {22, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 5},

        {.parts = new image_row_part_t[5]{{74, 0}, {5, 0x071c}, {22, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 5},

        {.parts = new image_row_part_t[5]{{74, 0}, {5, 0x071c}, {22, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 5},

        {.parts = new image_row_part_t[5]{{74, 0}, {5, 0x071c}, {22, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 5},

        {.parts = new image_row_part_t[5]{{74, 0}, {5, 0x071c}, {22, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 5},

        {.parts = new image_row_part_t[5]{{74, 0}, {5, 0x071c}, {22, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 5},

        {.parts = new image_row_part_t[5]{{74, 0}, {5, 0x071c}, {22, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 5},

        {.parts = new image_row_part_t[5]{{74, 0}, {5, 0x071c}, {22, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 5},

        {.parts = new image_row_part_t[5]{{74, 0}, {5, 0x071c}, {22, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 5},

        {.parts = new image_row_part_t[5]{{74, 0}, {5, 0x071c}, {22, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 5},

        {.parts = new image_row_part_t[5]{{74, 0}, {5, 0x071c}, {22, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 5},

        {.parts = new image_row_part_t[5]{{74, 0}, {5, 0x071c}, {22, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 5},

        {.parts = new image_row_part_t[5]{{74, 0}, {5, 0x071c}, {22, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 5},

        {.parts = new image_row_part_t[5]{{74, 0}, {5, 0x071c}, {22, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 5},

        {.parts = new image_row_part_t[5]{{74, 0}, {5, 0x071c}, {22, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 5},

        {.parts = new image_row_part_t[5]{{74, 0}, {5, 0x071c}, {22, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 5},

        {.parts = new image_row_part_t[5]{{74, 0}, {5, 0x071c}, {22, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 5},

        {.parts = new image_row_part_t[5]{{74, 0}, {5, 0x071c}, {22, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 5},

        {.parts = new image_row_part_t[5]{{74, 0}, {5, 0x071c}, {22, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 5},

        {.parts = new image_row_part_t[5]{{74, 0}, {5, 0x071c}, {22, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 5},

        {.parts = new image_row_part_t[5]{{74, 0}, {5, 0x071c}, {22, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 5},

        {.parts = new image_row_part_t[5]{{74, 0}, {5, 0x071c}, {22, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 5},

        {.parts = new image_row_part_t[5]{{74, 0}, {5, 0x071c}, {22, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 5},

        {.parts = new image_row_part_t[5]{{74, 0}, {5, 0x071c}, {22, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 5},

        {.parts = new image_row_part_t[5]{{74, 0}, {5, 0x071c}, {22, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 5},

        {.parts = new image_row_part_t[5]{{74, 0}, {5, 0x071c}, {22, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 5},

        {.parts = new image_row_part_t[5]{{74, 0}, {5, 0x071c}, {22, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 5},

        {.parts = new image_row_part_t[5]{{74, 0}, {5, 0x071c}, {22, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 5},

        {.parts = new image_row_part_t[5]{{74, 0}, {5, 0x071c}, {22, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 5},

        {.parts = new image_row_part_t[5]{{74, 0}, {5, 0x071c}, {22, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 5},

        {.parts = new image_row_part_t[5]{{74, 0}, {5, 0x071c}, {22, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 5},

        {.parts = new image_row_part_t[5]{{74, 0}, {5, 0x071c}, {22, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 5},

        {.parts = new image_row_part_t[5]{{74, 0}, {5, 0x071c}, {22, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 5},

        {.parts = new image_row_part_t[5]{{74, 0}, {5, 0x071c}, {22, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 5},

        {.parts = new image_row_part_t[5]{{74, 0}, {5, 0x071c}, {22, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 5},

        {.parts = new image_row_part_t[5]{{74, 0}, {5, 0x071c}, {22, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 5},

        {.parts = new image_row_part_t[5]{{74, 0}, {5, 0x071c}, {22, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 5},

        {.parts = new image_row_part_t[3]{{79, 0x071c}, {22, 0}, {79, 0x071c}}, .partsCount = 3},

        {.parts = new image_row_part_t[3]{{79, 0x071c}, {22, 0}, {79, 0x071c}}, .partsCount = 3},

        {.parts = new image_row_part_t[3]{{79, 0x071c}, {22, 0}, {79, 0x071c}}, .partsCount = 3},

        {.parts = new image_row_part_t[3]{{79, 0x071c}, {22, 0}, {79, 0x071c}}, .partsCount = 3},

        {.parts = new image_row_part_t[3]{{79, 0x071c}, {22, 0}, {79, 0x071c}}, .partsCount = 3},

        {.parts = new image_row_part_t[3]{{148, 0}, {3, 0xFF80}, {29, 0}}, .partsCount = 3},

        {.parts = new image_row_part_t[3]{{147, 0}, {7, 0xFF80}, {26, 0}}, .partsCount = 3},

        {.parts = new image_row_part_t[3]{{146, 0}, {12, 0xFF80}, {22, 0}}, .partsCount = 3},

        {.parts = new image_row_part_t[3]{{146, 0}, {15, 0xFF80}, {19, 0}}, .partsCount = 3},

        {.parts = new image_row_part_t[3]{{84, 0}, {81, 0xFF80}, {15, 0}}, .partsCount = 3},

        {.parts = new image_row_part_t[3]{{83, 0}, {85, 0xFF80}, {12, 0}}, .partsCount = 3},

        {.parts = new image_row_part_t[3]{{83, 0}, {89, 0xFF80}, {8, 0}}, .partsCount = 3},

        {.parts = new image_row_part_t[3]{{83, 0}, {92, 0xFF80}, {5, 0}}, .partsCount = 3},

        {.parts = new image_row_part_t[3]{{83, 0}, {95, 0xFF80}, {2, 0}}, .partsCount = 3},

        {.parts = new image_row_part_t[3]{{83, 0}, {96, 0xFF80}, {1, 0}}, .partsCount = 3},

        {.parts = new image_row_part_t[3]{{83, 0}, {96, 0xFF80}, {1, 0}}, .partsCount = 3},

        {.parts = new image_row_part_t[3]{{83, 0}, {96, 0xFF80}, {1, 0}}, .partsCount = 3},

        {.parts = new image_row_part_t[3]{{83, 0}, {95, 0xFF80}, {2, 0}}, .partsCount = 3},

        {.parts = new image_row_part_t[3]{{83, 0}, {92, 0xFF80}, {5, 0}}, .partsCount = 3},

        {.parts = new image_row_part_t[3]{{83, 0}, {89, 0xFF80}, {8, 0}}, .partsCount = 3},

        {.parts = new image_row_part_t[3]{{83, 0}, {85, 0xFF80}, {12, 0}}, .partsCount = 3},

        {.parts = new image_row_part_t[3]{{83, 0}, {82, 0xFF80}, {15, 0}}, .partsCount = 3},

        {.parts = new image_row_part_t[5]{{83, 0}, {16, 0xFF80}, {47, 0}, {16, 0xFF80}, {18, 0}}, .partsCount = 5},

        {.parts = new image_row_part_t[5]{{83, 0}, {16, 0xFF80}, {47, 0}, {12, 0xFF80}, {22, 0}}, .partsCount = 5},

        {.parts = new image_row_part_t[5]{{83, 0}, {16, 0xFF80}, {48, 0}, {8, 0xFF80}, {25, 0}}, .partsCount = 5},

        {.parts = new image_row_part_t[5]{{83, 0}, {16, 0xFF80}, {48, 0}, {4, 0xFF80}, {29, 0}}, .partsCount = 5},

        {.parts = new image_row_part_t[5]{{79, 0x071c}, {4, 0}, {16, 0xFF80}, {2, 0}, {79, 0x071c}}, .partsCount = 5},

        {.parts = new image_row_part_t[5]{{79, 0x071c}, {4, 0}, {16, 0xFF80}, {2, 0}, {79, 0x071c}}, .partsCount = 5},

        {.parts = new image_row_part_t[5]{{79, 0x071c}, {4, 0}, {16, 0xFF80}, {2, 0}, {79, 0x071c}}, .partsCount = 5},

        {.parts = new image_row_part_t[5]{{79, 0x071c}, {4, 0}, {16, 0xFF80}, {2, 0}, {79, 0x071c}}, .partsCount = 5},

        {.parts = new image_row_part_t[5]{{79, 0x071c}, {4, 0}, {16, 0xFF80}, {2, 0}, {79, 0x071c}}, .partsCount = 5},

        {.parts = new image_row_part_t[7]{{74, 0}, {5, 0x071c}, {4, 0}, {16, 0xFF80}, {2, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 7},

        {.parts = new image_row_part_t[7]{{74, 0}, {5, 0x071c}, {4, 0}, {16, 0xFF80}, {2, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 7},

        {.parts = new image_row_part_t[7]{{74, 0}, {5, 0x071c}, {4, 0}, {16, 0xFF80}, {2, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 7},

        {.parts = new image_row_part_t[7]{{74, 0}, {5, 0x071c}, {4, 0}, {16, 0xFF80}, {2, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 7},

        {.parts = new image_row_part_t[7]{{74, 0}, {5, 0x071c}, {4, 0}, {16, 0xFF80}, {2, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 7},

        {.parts = new image_row_part_t[7]{{74, 0}, {5, 0x071c}, {4, 0}, {16, 0xFF80}, {2, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 7},

        {.parts = new image_row_part_t[7]{{74, 0}, {5, 0x071c}, {4, 0}, {16, 0xFF80}, {2, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 7},

        {.parts = new image_row_part_t[7]{{74, 0}, {5, 0x071c}, {4, 0}, {16, 0xFF80}, {2, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 7},

        {.parts = new image_row_part_t[7]{{74, 0}, {5, 0x071c}, {4, 0}, {16, 0xFF80}, {2, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 7},

        {.parts = new image_row_part_t[7]{{74, 0}, {5, 0x071c}, {4, 0}, {16, 0xFF80}, {2, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 7},

        {.parts = new image_row_part_t[7]{{74, 0}, {5, 0x071c}, {4, 0}, {16, 0xFF80}, {2, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 7},

        {.parts = new image_row_part_t[7]{{74, 0}, {5, 0x071c}, {4, 0}, {16, 0xFF80}, {2, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 7},

        {.parts = new image_row_part_t[7]{{74, 0}, {5, 0x071c}, {4, 0}, {16, 0xFF80}, {2, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 7},

        {.parts = new image_row_part_t[7]{{74, 0}, {5, 0x071c}, {4, 0}, {16, 0xFF80}, {2, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 7},

        {.parts = new image_row_part_t[7]{{74, 0}, {5, 0x071c}, {4, 0}, {16, 0xFF80}, {2, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 7},

        {.parts = new image_row_part_t[7]{{74, 0}, {5, 0x071c}, {4, 0}, {16, 0xFF80}, {2, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 7},

        {.parts = new image_row_part_t[7]{{74, 0}, {5, 0x071c}, {4, 0}, {16, 0xFF80}, {2, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 7},

        {.parts = new image_row_part_t[7]{{74, 0}, {5, 0x071c}, {4, 0}, {16, 0xFF80}, {2, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 7},

        {.parts = new image_row_part_t[7]{{74, 0}, {5, 0x071c}, {4, 0}, {16, 0xFF80}, {2, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 7},

        {.parts = new image_row_part_t[7]{{74, 0}, {5, 0x071c}, {4, 0}, {16, 0xFF80}, {2, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 7},

        {.parts = new image_row_part_t[7]{{74, 0}, {5, 0x071c}, {4, 0}, {16, 0xFF80}, {2, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 7},

        {.parts = new image_row_part_t[7]{{74, 0}, {5, 0x071c}, {4, 0}, {16, 0xFF80}, {2, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 7},

        {.parts = new image_row_part_t[7]{{74, 0}, {5, 0x071c}, {4, 0}, {16, 0xFF80}, {2, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 7},

        {.parts = new image_row_part_t[7]{{74, 0}, {5, 0x071c}, {4, 0}, {16, 0xFF80}, {2, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 7},

        {.parts = new image_row_part_t[7]{{74, 0}, {5, 0x071c}, {4, 0}, {16, 0xFF80}, {2, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 7},

        {.parts = new image_row_part_t[7]{{74, 0}, {5, 0x071c}, {4, 0}, {16, 0xFF80}, {2, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 7},

        {.parts = new image_row_part_t[7]{{74, 0}, {5, 0x071c}, {4, 0}, {16, 0xFF80}, {2, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 7},

        {.parts = new image_row_part_t[7]{{74, 0}, {5, 0x071c}, {4, 0}, {16, 0xFF80}, {2, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 7},

        {.parts = new image_row_part_t[7]{{74, 0}, {5, 0x071c}, {4, 0}, {16, 0xFF80}, {2, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 7},

        {.parts = new image_row_part_t[7]{{74, 0}, {5, 0x071c}, {4, 0}, {16, 0xFF80}, {2, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 7},

        {.parts = new image_row_part_t[7]{{74, 0}, {5, 0x071c}, {4, 0}, {16, 0xFF80}, {2, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 7},

        {.parts = new image_row_part_t[7]{{74, 0}, {5, 0x071c}, {4, 0}, {16, 0xFF80}, {2, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 7},

        {.parts = new image_row_part_t[7]{{74, 0}, {5, 0x071c}, {4, 0}, {16, 0xFF80}, {2, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 7},

        {.parts = new image_row_part_t[7]{{74, 0}, {5, 0x071c}, {4, 0}, {16, 0xFF80}, {2, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 7},

        {.parts = new image_row_part_t[7]{{74, 0}, {5, 0x071c}, {4, 0}, {16, 0xFF80}, {2, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 7},

        {.parts = new image_row_part_t[7]{{74, 0}, {5, 0x071c}, {4, 0}, {16, 0xFF80}, {2, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 7},

        {.parts = new image_row_part_t[7]{{74, 0}, {5, 0x071c}, {4, 0}, {16, 0xFF80}, {2, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 7},

        {.parts = new image_row_part_t[7]{{74, 0}, {5, 0x071c}, {4, 0}, {16, 0xFF80}, {2, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 7},

        {.parts = new image_row_part_t[7]{{74, 0}, {5, 0x071c}, {4, 0}, {16, 0xFF80}, {2, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 7},

        {.parts = new image_row_part_t[7]{{74, 0}, {5, 0x071c}, {4, 0}, {16, 0xFF80}, {2, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 7},

        {.parts = new image_row_part_t[7]{{74, 0}, {5, 0x071c}, {4, 0}, {16, 0xFF80}, {2, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 7},

        {.parts = new image_row_part_t[7]{{74, 0}, {5, 0x071c}, {4, 0}, {16, 0xFF80}, {2, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 7},

        {.parts = new image_row_part_t[7]{{74, 0}, {5, 0x071c}, {4, 0}, {16, 0xFF80}, {2, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 7},

        {.parts = new image_row_part_t[7]{{74, 0}, {5, 0x071c}, {4, 0}, {16, 0xFF80}, {2, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 7},

        {.parts = new image_row_part_t[7]{{74, 0}, {5, 0x071c}, {4, 0}, {16, 0xFF80}, {2, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 7},

        {.parts = new image_row_part_t[7]{{74, 0}, {5, 0x071c}, {4, 0}, {16, 0xFF80}, {2, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 7},

        {.parts = new image_row_part_t[7]{{74, 0}, {5, 0x071c}, {4, 0}, {16, 0xFF80}, {2, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 7},

        {.parts = new image_row_part_t[7]{{74, 0}, {5, 0x071c}, {4, 0}, {16, 0xFF80}, {2, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 7},

        {.parts = new image_row_part_t[7]{{74, 0}, {5, 0x071c}, {4, 0}, {16, 0xFF80}, {2, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 7},

        {.parts = new image_row_part_t[7]{{74, 0}, {5, 0x071c}, {4, 0}, {16, 0xFF80}, {2, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 7},

        {.parts = new image_row_part_t[7]{{74, 0}, {5, 0x071c}, {4, 0}, {16, 0xFF80}, {2, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 7},

        {.parts = new image_row_part_t[7]{{74, 0}, {5, 0x071c}, {4, 0}, {16, 0xFF80}, {2, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 7},

        {.parts = new image_row_part_t[7]{{74, 0}, {5, 0x071c}, {4, 0}, {16, 0xFF80}, {2, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 7},

        {.parts = new image_row_part_t[7]{{74, 0}, {5, 0x071c}, {4, 0}, {16, 0xFF80}, {2, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 7},

        {.parts = new image_row_part_t[7]{{74, 0}, {5, 0x071c}, {4, 0}, {16, 0xFF80}, {2, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 7},

        {.parts = new image_row_part_t[7]{{74, 0}, {5, 0x071c}, {4, 0}, {16, 0xFF80}, {2, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 7},

        {.parts = new image_row_part_t[7]{{74, 0}, {5, 0x071c}, {4, 0}, {16, 0xFF80}, {2, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 7},

        {.parts = new image_row_part_t[7]{{74, 0}, {5, 0x071c}, {4, 0}, {16, 0xFF80}, {2, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 7},

        {.parts = new image_row_part_t[7]{{74, 0}, {5, 0x071c}, {4, 0}, {16, 0xFF80}, {2, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 7},

        {.parts = new image_row_part_t[7]{{74, 0}, {5, 0x071c}, {4, 0}, {16, 0xFF80}, {2, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 7},

        {.parts = new image_row_part_t[7]{{74, 0}, {5, 0x071c}, {4, 0}, {16, 0xFF80}, {2, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 7},

        {.parts = new image_row_part_t[7]{{74, 0}, {5, 0x071c}, {4, 0}, {16, 0xFF80}, {2, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 7},

        {.parts = new image_row_part_t[7]{{74, 0}, {5, 0x071c}, {4, 0}, {16, 0xFF80}, {2, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 7},

        {.parts = new image_row_part_t[7]{{74, 0}, {5, 0x071c}, {4, 0}, {16, 0xFF80}, {2, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 7},

        {.parts = new image_row_part_t[7]{{74, 0}, {5, 0x071c}, {4, 0}, {16, 0xFF80}, {2, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 7},

        {.parts = new image_row_part_t[7]{{74, 0}, {5, 0x071c}, {4, 0}, {16, 0xFF80}, {2, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 7},

        {.parts = new image_row_part_t[7]{{74, 0}, {5, 0x071c}, {4, 0}, {16, 0xFF80}, {2, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 7},

        {.parts = new image_row_part_t[7]{{74, 0}, {5, 0x071c}, {4, 0}, {16, 0xFF80}, {2, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 7},

        {.parts = new image_row_part_t[7]{{74, 0}, {5, 0x071c}, {4, 0}, {16, 0xFF80}, {2, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 7},

        {.parts = new image_row_part_t[7]{{74, 0}, {5, 0x071c}, {4, 0}, {16, 0xFF80}, {2, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 7},

        {.parts = new image_row_part_t[7]{{74, 0}, {5, 0x071c}, {4, 0}, {16, 0xFF80}, {2, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 7},

        {.parts = new image_row_part_t[7]{{74, 0}, {5, 0x071c}, {4, 0}, {16, 0xFF80}, {2, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 7},

        {.parts = new image_row_part_t[7]{{74, 0}, {5, 0x071c}, {4, 0}, {16, 0xFF80}, {2, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 7},

        {.parts = new image_row_part_t[7]{{74, 0}, {5, 0x071c}, {4, 0}, {16, 0xFF80}, {2, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 7},

        {.parts = new image_row_part_t[7]{{74, 0}, {5, 0x071c}, {4, 0}, {16, 0xFF80}, {2, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 7}}};
image_t const Images::crossing_2{
    .h = 180,
    .w = 180,
    .rows = new image_row_t[180]{
        {.parts = new image_row_part_t[7]{{74, 0}, {5, 0x071c}, {10, 0}, {2, 0xFF80}, {10, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 7},

        {.parts = new image_row_part_t[7]{{74, 0}, {5, 0x071c}, {9, 0}, {4, 0xFF80}, {9, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 7},

        {.parts = new image_row_part_t[7]{{74, 0}, {5, 0x071c}, {8, 0}, {6, 0xFF80}, {8, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 7},

        {.parts = new image_row_part_t[7]{{74, 0}, {5, 0x071c}, {8, 0}, {6, 0xFF80}, {8, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 7},

        {.parts = new image_row_part_t[7]{{74, 0}, {5, 0x071c}, {8, 0}, {6, 0xFF80}, {8, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 7},

        {.parts = new image_row_part_t[7]{{74, 0}, {5, 0x071c}, {8, 0}, {7, 0xFF80}, {7, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 7},

        {.parts = new image_row_part_t[7]{{74, 0}, {5, 0x071c}, {7, 0}, {8, 0xFF80}, {7, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 7},

        {.parts = new image_row_part_t[7]{{74, 0}, {5, 0x071c}, {7, 0}, {8, 0xFF80}, {7, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 7},

        {.parts = new image_row_part_t[7]{{74, 0}, {5, 0x071c}, {7, 0}, {8, 0xFF80}, {7, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 7},

        {.parts = new image_row_part_t[7]{{74, 0}, {5, 0x071c}, {6, 0}, {10, 0xFF80}, {6, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 7},

        {.parts = new image_row_part_t[7]{{74, 0}, {5, 0x071c}, {6, 0}, {10, 0xFF80}, {6, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 7},

        {.parts = new image_row_part_t[7]{{74, 0}, {5, 0x071c}, {6, 0}, {10, 0xFF80}, {6, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 7},

        {.parts = new image_row_part_t[7]{{74, 0}, {5, 0x071c}, {5, 0}, {12, 0xFF80}, {5, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 7},

        {.parts = new image_row_part_t[7]{{74, 0}, {5, 0x071c}, {5, 0}, {12, 0xFF80}, {5, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 7},

        {.parts = new image_row_part_t[7]{{74, 0}, {5, 0x071c}, {5, 0}, {12, 0xFF80}, {5, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 7},

        {.parts = new image_row_part_t[7]{{74, 0}, {5, 0x071c}, {5, 0}, {13, 0xFF80}, {4, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 7},

        {.parts = new image_row_part_t[7]{{74, 0}, {5, 0x071c}, {4, 0}, {14, 0xFF80}, {4, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 7},

        {.parts = new image_row_part_t[7]{{74, 0}, {5, 0x071c}, {4, 0}, {14, 0xFF80}, {4, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 7},

        {.parts = new image_row_part_t[7]{{74, 0}, {5, 0x071c}, {4, 0}, {14, 0xFF80}, {4, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 7},

        {.parts = new image_row_part_t[7]{{74, 0}, {5, 0x071c}, {3, 0}, {16, 0xFF80}, {3, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 7},

        {.parts = new image_row_part_t[7]{{74, 0}, {5, 0x071c}, {3, 0}, {16, 0xFF80}, {3, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 7},

        {.parts = new image_row_part_t[7]{{74, 0}, {5, 0x071c}, {3, 0}, {16, 0xFF80}, {3, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 7},

        {.parts = new image_row_part_t[7]{{74, 0}, {5, 0x071c}, {2, 0}, {18, 0xFF80}, {2, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 7},

        {.parts = new image_row_part_t[7]{{74, 0}, {5, 0x071c}, {2, 0}, {18, 0xFF80}, {2, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 7},

        {.parts = new image_row_part_t[7]{{74, 0}, {5, 0x071c}, {2, 0}, {18, 0xFF80}, {2, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 7},

        {.parts = new image_row_part_t[7]{{74, 0}, {5, 0x071c}, {2, 0}, {19, 0xFF80}, {1, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 7},

        {.parts = new image_row_part_t[7]{{74, 0}, {5, 0x071c}, {1, 0}, {20, 0xFF80}, {1, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 7},

        {.parts = new image_row_part_t[7]{{74, 0}, {5, 0x071c}, {1, 0}, {20, 0xFF80}, {1, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 7},

        {.parts = new image_row_part_t[7]{{74, 0}, {5, 0x071c}, {1, 0}, {20, 0xFF80}, {1, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 7},

        {.parts = new image_row_part_t[5]{{74, 0}, {5, 0x071c}, {22, 0xFF80}, {5, 0x071c}, {74, 0}}, .partsCount = 5},

        {.parts = new image_row_part_t[5]{{74, 0}, {5, 0x071c}, {22, 0xFF80}, {5, 0x071c}, {74, 0}}, .partsCount = 5},

        {.parts = new image_row_part_t[5]{{74, 0}, {5, 0x071c}, {22, 0xFF80}, {5, 0x071c}, {74, 0}}, .partsCount = 5},

        {.parts = new image_row_part_t[5]{{74, 0}, {5, 0x071c}, {22, 0xFF80}, {5, 0x071c}, {74, 0}}, .partsCount = 5},

        {.parts = new image_row_part_t[7]{{74, 0}, {5, 0x071c}, {4, 0}, {14, 0xFF80}, {4, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 7},

        {.parts = new image_row_part_t[7]{{74, 0}, {5, 0x071c}, {4, 0}, {14, 0xFF80}, {4, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 7},

        {.parts = new image_row_part_t[7]{{74, 0}, {5, 0x071c}, {4, 0}, {14, 0xFF80}, {4, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 7},

        {.parts = new image_row_part_t[7]{{74, 0}, {5, 0x071c}, {4, 0}, {14, 0xFF80}, {4, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 7},

        {.parts = new image_row_part_t[7]{{74, 0}, {5, 0x071c}, {4, 0}, {14, 0xFF80}, {4, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 7},

        {.parts = new image_row_part_t[7]{{74, 0}, {5, 0x071c}, {4, 0}, {14, 0xFF80}, {4, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 7},

        {.parts = new image_row_part_t[7]{{74, 0}, {5, 0x071c}, {4, 0}, {14, 0xFF80}, {4, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 7},

        {.parts = new image_row_part_t[7]{{74, 0}, {5, 0x071c}, {4, 0}, {14, 0xFF80}, {4, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 7},

        {.parts = new image_row_part_t[7]{{74, 0}, {5, 0x071c}, {4, 0}, {14, 0xFF80}, {4, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 7},

        {.parts = new image_row_part_t[7]{{74, 0}, {5, 0x071c}, {4, 0}, {14, 0xFF80}, {4, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 7},

        {.parts = new image_row_part_t[7]{{74, 0}, {5, 0x071c}, {4, 0}, {14, 0xFF80}, {4, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 7},

        {.parts = new image_row_part_t[7]{{74, 0}, {5, 0x071c}, {4, 0}, {14, 0xFF80}, {4, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 7},

        {.parts = new image_row_part_t[7]{{74, 0}, {5, 0x071c}, {4, 0}, {14, 0xFF80}, {4, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 7},

        {.parts = new image_row_part_t[7]{{74, 0}, {5, 0x071c}, {4, 0}, {14, 0xFF80}, {4, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 7},

        {.parts = new image_row_part_t[7]{{74, 0}, {5, 0x071c}, {4, 0}, {14, 0xFF80}, {4, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 7},

        {.parts = new image_row_part_t[7]{{74, 0}, {5, 0x071c}, {4, 0}, {14, 0xFF80}, {4, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 7},

        {.parts = new image_row_part_t[7]{{74, 0}, {5, 0x071c}, {4, 0}, {14, 0xFF80}, {4, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 7},

        {.parts = new image_row_part_t[7]{{74, 0}, {5, 0x071c}, {4, 0}, {14, 0xFF80}, {4, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 7},

        {.parts = new image_row_part_t[7]{{74, 0}, {5, 0x071c}, {4, 0}, {14, 0xFF80}, {4, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 7},

        {.parts = new image_row_part_t[7]{{74, 0}, {5, 0x071c}, {4, 0}, {14, 0xFF80}, {4, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 7},

        {.parts = new image_row_part_t[7]{{74, 0}, {5, 0x071c}, {4, 0}, {14, 0xFF80}, {4, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 7},

        {.parts = new image_row_part_t[7]{{74, 0}, {5, 0x071c}, {4, 0}, {14, 0xFF80}, {4, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 7},

        {.parts = new image_row_part_t[7]{{74, 0}, {5, 0x071c}, {4, 0}, {14, 0xFF80}, {4, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 7},

        {.parts = new image_row_part_t[7]{{74, 0}, {5, 0x071c}, {4, 0}, {14, 0xFF80}, {4, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 7},

        {.parts = new image_row_part_t[7]{{74, 0}, {5, 0x071c}, {4, 0}, {14, 0xFF80}, {4, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 7},

        {.parts = new image_row_part_t[7]{{74, 0}, {5, 0x071c}, {4, 0}, {14, 0xFF80}, {4, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 7},

        {.parts = new image_row_part_t[7]{{74, 0}, {5, 0x071c}, {4, 0}, {14, 0xFF80}, {4, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 7},

        {.parts = new image_row_part_t[7]{{74, 0}, {5, 0x071c}, {4, 0}, {14, 0xFF80}, {4, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 7},

        {.parts = new image_row_part_t[7]{{74, 0}, {5, 0x071c}, {4, 0}, {14, 0xFF80}, {4, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 7},

        {.parts = new image_row_part_t[7]{{74, 0}, {5, 0x071c}, {4, 0}, {14, 0xFF80}, {4, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 7},

        {.parts = new image_row_part_t[7]{{74, 0}, {5, 0x071c}, {4, 0}, {14, 0xFF80}, {4, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 7},

        {.parts = new image_row_part_t[7]{{74, 0}, {5, 0x071c}, {4, 0}, {14, 0xFF80}, {4, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 7},

        {.parts = new image_row_part_t[7]{{74, 0}, {5, 0x071c}, {4, 0}, {14, 0xFF80}, {4, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 7},

        {.parts = new image_row_part_t[7]{{74, 0}, {5, 0x071c}, {4, 0}, {14, 0xFF80}, {4, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 7},

        {.parts = new image_row_part_t[7]{{74, 0}, {5, 0x071c}, {4, 0}, {14, 0xFF80}, {4, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 7},

        {.parts = new image_row_part_t[7]{{74, 0}, {5, 0x071c}, {4, 0}, {14, 0xFF80}, {4, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 7},

        {.parts = new image_row_part_t[7]{{74, 0}, {5, 0x071c}, {4, 0}, {14, 0xFF80}, {4, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 7},

        {.parts = new image_row_part_t[7]{{74, 0}, {5, 0x071c}, {4, 0}, {14, 0xFF80}, {4, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 7},

        {.parts = new image_row_part_t[7]{{74, 0}, {5, 0x071c}, {4, 0}, {14, 0xFF80}, {4, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 7},

        {.parts = new image_row_part_t[7]{{74, 0}, {5, 0x071c}, {4, 0}, {14, 0xFF80}, {4, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 7},

        {.parts = new image_row_part_t[7]{{74, 0}, {5, 0x071c}, {4, 0}, {14, 0xFF80}, {4, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 7},

        {.parts = new image_row_part_t[5]{{79, 0x071c}, {4, 0}, {14, 0xFF80}, {4, 0}, {79, 0x071c}}, .partsCount = 5},

        {.parts = new image_row_part_t[5]{{79, 0x071c}, {4, 0}, {14, 0xFF80}, {4, 0}, {79, 0x071c}}, .partsCount = 5},

        {.parts = new image_row_part_t[5]{{79, 0x071c}, {4, 0}, {14, 0xFF80}, {4, 0}, {79, 0x071c}}, .partsCount = 5},

        {.parts = new image_row_part_t[5]{{79, 0x071c}, {4, 0}, {14, 0xFF80}, {4, 0}, {79, 0x071c}}, .partsCount = 5},

        {.parts = new image_row_part_t[5]{{79, 0x071c}, {4, 0}, {14, 0xFF80}, {4, 0}, {79, 0x071c}}, .partsCount = 5},

        {.parts = new image_row_part_t[3]{{83, 0}, {14, 0xFF80}, {83, 0}}, .partsCount = 3},

        {.parts = new image_row_part_t[3]{{83, 0}, {14, 0xFF80}, {83, 0}}, .partsCount = 3},

        {.parts = new image_row_part_t[3]{{83, 0}, {14, 0xFF80}, {83, 0}}, .partsCount = 3},

        {.parts = new image_row_part_t[3]{{83, 0}, {14, 0xFF80}, {83, 0}}, .partsCount = 3},

        {.parts = new image_row_part_t[3]{{83, 0}, {14, 0xFF80}, {83, 0}}, .partsCount = 3},

        {.parts = new image_row_part_t[3]{{83, 0}, {14, 0xFF80}, {83, 0}}, .partsCount = 3},

        {.parts = new image_row_part_t[3]{{83, 0}, {14, 0xFF80}, {83, 0}}, .partsCount = 3},

        {.parts = new image_row_part_t[3]{{83, 0}, {14, 0xFF80}, {83, 0}}, .partsCount = 3},

        {.parts = new image_row_part_t[3]{{83, 0}, {14, 0xFF80}, {83, 0}}, .partsCount = 3},

        {.parts = new image_row_part_t[3]{{83, 0}, {14, 0xFF80}, {83, 0}}, .partsCount = 3},

        {.parts = new image_row_part_t[3]{{83, 0}, {14, 0xFF80}, {83, 0}}, .partsCount = 3},

        {.parts = new image_row_part_t[3]{{83, 0}, {14, 0xFF80}, {83, 0}}, .partsCount = 3},

        {.parts = new image_row_part_t[3]{{83, 0}, {14, 0xFF80}, {83, 0}}, .partsCount = 3},

        {.parts = new image_row_part_t[3]{{83, 0}, {14, 0xFF80}, {83, 0}}, .partsCount = 3},

        {.parts = new image_row_part_t[3]{{83, 0}, {14, 0xFF80}, {83, 0}}, .partsCount = 3},

        {.parts = new image_row_part_t[3]{{83, 0}, {14, 0xFF80}, {83, 0}}, .partsCount = 3},

        {.parts = new image_row_part_t[3]{{83, 0}, {14, 0xFF80}, {83, 0}}, .partsCount = 3},

        {.parts = new image_row_part_t[3]{{83, 0}, {14, 0xFF80}, {83, 0}}, .partsCount = 3},

        {.parts = new image_row_part_t[3]{{83, 0}, {14, 0xFF80}, {83, 0}}, .partsCount = 3},

        {.parts = new image_row_part_t[3]{{83, 0}, {14, 0xFF80}, {83, 0}}, .partsCount = 3},

        {.parts = new image_row_part_t[3]{{83, 0}, {14, 0xFF80}, {83, 0}}, .partsCount = 3},

        {.parts = new image_row_part_t[5]{{79, 0x071c}, {4, 0}, {14, 0xFF80}, {4, 0}, {79, 0x071c}}, .partsCount = 5},

        {.parts = new image_row_part_t[5]{{79, 0x071c}, {4, 0}, {14, 0xFF80}, {4, 0}, {79, 0x071c}}, .partsCount = 5},

        {.parts = new image_row_part_t[5]{{79, 0x071c}, {4, 0}, {14, 0xFF80}, {4, 0}, {79, 0x071c}}, .partsCount = 5},

        {.parts = new image_row_part_t[5]{{79, 0x071c}, {4, 0}, {14, 0xFF80}, {4, 0}, {79, 0x071c}}, .partsCount = 5},

        {.parts = new image_row_part_t[5]{{79, 0x071c}, {4, 0}, {14, 0xFF80}, {4, 0}, {79, 0x071c}}, .partsCount = 5},

        {.parts = new image_row_part_t[7]{{74, 0}, {5, 0x071c}, {4, 0}, {14, 0xFF80}, {4, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 7},

        {.parts = new image_row_part_t[7]{{74, 0}, {5, 0x071c}, {4, 0}, {14, 0xFF80}, {4, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 7},

        {.parts = new image_row_part_t[7]{{74, 0}, {5, 0x071c}, {4, 0}, {14, 0xFF80}, {4, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 7},

        {.parts = new image_row_part_t[7]{{74, 0}, {5, 0x071c}, {4, 0}, {14, 0xFF80}, {4, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 7},

        {.parts = new image_row_part_t[7]{{74, 0}, {5, 0x071c}, {4, 0}, {14, 0xFF80}, {4, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 7},

        {.parts = new image_row_part_t[7]{{74, 0}, {5, 0x071c}, {4, 0}, {14, 0xFF80}, {4, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 7},

        {.parts = new image_row_part_t[7]{{74, 0}, {5, 0x071c}, {4, 0}, {14, 0xFF80}, {4, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 7},

        {.parts = new image_row_part_t[7]{{74, 0}, {5, 0x071c}, {4, 0}, {14, 0xFF80}, {4, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 7},

        {.parts = new image_row_part_t[7]{{74, 0}, {5, 0x071c}, {4, 0}, {14, 0xFF80}, {4, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 7},

        {.parts = new image_row_part_t[7]{{74, 0}, {5, 0x071c}, {4, 0}, {14, 0xFF80}, {4, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 7},

        {.parts = new image_row_part_t[7]{{74, 0}, {5, 0x071c}, {4, 0}, {14, 0xFF80}, {4, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 7},

        {.parts = new image_row_part_t[7]{{74, 0}, {5, 0x071c}, {4, 0}, {14, 0xFF80}, {4, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 7},

        {.parts = new image_row_part_t[7]{{74, 0}, {5, 0x071c}, {4, 0}, {14, 0xFF80}, {4, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 7},

        {.parts = new image_row_part_t[7]{{74, 0}, {5, 0x071c}, {4, 0}, {14, 0xFF80}, {4, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 7},

        {.parts = new image_row_part_t[7]{{74, 0}, {5, 0x071c}, {4, 0}, {14, 0xFF80}, {4, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 7},

        {.parts = new image_row_part_t[7]{{74, 0}, {5, 0x071c}, {4, 0}, {14, 0xFF80}, {4, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 7},

        {.parts = new image_row_part_t[7]{{74, 0}, {5, 0x071c}, {4, 0}, {14, 0xFF80}, {4, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 7},

        {.parts = new image_row_part_t[7]{{74, 0}, {5, 0x071c}, {4, 0}, {14, 0xFF80}, {4, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 7},

        {.parts = new image_row_part_t[7]{{74, 0}, {5, 0x071c}, {4, 0}, {14, 0xFF80}, {4, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 7},

        {.parts = new image_row_part_t[7]{{74, 0}, {5, 0x071c}, {4, 0}, {14, 0xFF80}, {4, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 7},

        {.parts = new image_row_part_t[7]{{74, 0}, {5, 0x071c}, {4, 0}, {14, 0xFF80}, {4, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 7},

        {.parts = new image_row_part_t[7]{{74, 0}, {5, 0x071c}, {4, 0}, {14, 0xFF80}, {4, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 7},

        {.parts = new image_row_part_t[7]{{74, 0}, {5, 0x071c}, {4, 0}, {14, 0xFF80}, {4, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 7},

        {.parts = new image_row_part_t[7]{{74, 0}, {5, 0x071c}, {4, 0}, {14, 0xFF80}, {4, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 7},

        {.parts = new image_row_part_t[7]{{74, 0}, {5, 0x071c}, {4, 0}, {14, 0xFF80}, {4, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 7},

        {.parts = new image_row_part_t[7]{{74, 0}, {5, 0x071c}, {4, 0}, {14, 0xFF80}, {4, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 7},

        {.parts = new image_row_part_t[7]{{74, 0}, {5, 0x071c}, {4, 0}, {14, 0xFF80}, {4, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 7},

        {.parts = new image_row_part_t[7]{{74, 0}, {5, 0x071c}, {4, 0}, {14, 0xFF80}, {4, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 7},

        {.parts = new image_row_part_t[7]{{74, 0}, {5, 0x071c}, {4, 0}, {14, 0xFF80}, {4, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 7},

        {.parts = new image_row_part_t[7]{{74, 0}, {5, 0x071c}, {4, 0}, {14, 0xFF80}, {4, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 7},

        {.parts = new image_row_part_t[7]{{74, 0}, {5, 0x071c}, {4, 0}, {14, 0xFF80}, {4, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 7},

        {.parts = new image_row_part_t[7]{{74, 0}, {5, 0x071c}, {4, 0}, {14, 0xFF80}, {4, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 7},

        {.parts = new image_row_part_t[7]{{74, 0}, {5, 0x071c}, {4, 0}, {14, 0xFF80}, {4, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 7},

        {.parts = new image_row_part_t[7]{{74, 0}, {5, 0x071c}, {4, 0}, {14, 0xFF80}, {4, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 7},

        {.parts = new image_row_part_t[7]{{74, 0}, {5, 0x071c}, {4, 0}, {14, 0xFF80}, {4, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 7},

        {.parts = new image_row_part_t[7]{{74, 0}, {5, 0x071c}, {4, 0}, {14, 0xFF80}, {4, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 7},

        {.parts = new image_row_part_t[7]{{74, 0}, {5, 0x071c}, {4, 0}, {14, 0xFF80}, {4, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 7},

        {.parts = new image_row_part_t[7]{{74, 0}, {5, 0x071c}, {4, 0}, {14, 0xFF80}, {4, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 7},

        {.parts = new image_row_part_t[7]{{74, 0}, {5, 0x071c}, {4, 0}, {14, 0xFF80}, {4, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 7},

        {.parts = new image_row_part_t[7]{{74, 0}, {5, 0x071c}, {4, 0}, {14, 0xFF80}, {4, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 7},

        {.parts = new image_row_part_t[7]{{74, 0}, {5, 0x071c}, {4, 0}, {14, 0xFF80}, {4, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 7},

        {.parts = new image_row_part_t[7]{{74, 0}, {5, 0x071c}, {4, 0}, {14, 0xFF80}, {4, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 7},

        {.parts = new image_row_part_t[7]{{74, 0}, {5, 0x071c}, {4, 0}, {14, 0xFF80}, {4, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 7},

        {.parts = new image_row_part_t[7]{{74, 0}, {5, 0x071c}, {4, 0}, {14, 0xFF80}, {4, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 7},

        {.parts = new image_row_part_t[7]{{74, 0}, {5, 0x071c}, {4, 0}, {14, 0xFF80}, {4, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 7},

        {.parts = new image_row_part_t[7]{{74, 0}, {5, 0x071c}, {4, 0}, {14, 0xFF80}, {4, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 7},

        {.parts = new image_row_part_t[7]{{74, 0}, {5, 0x071c}, {4, 0}, {14, 0xFF80}, {4, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 7},

        {.parts = new image_row_part_t[7]{{74, 0}, {5, 0x071c}, {4, 0}, {14, 0xFF80}, {4, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 7},

        {.parts = new image_row_part_t[7]{{74, 0}, {5, 0x071c}, {4, 0}, {14, 0xFF80}, {4, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 7},

        {.parts = new image_row_part_t[7]{{74, 0}, {5, 0x071c}, {4, 0}, {14, 0xFF80}, {4, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 7},

        {.parts = new image_row_part_t[7]{{74, 0}, {5, 0x071c}, {4, 0}, {14, 0xFF80}, {4, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 7},

        {.parts = new image_row_part_t[7]{{74, 0}, {5, 0x071c}, {4, 0}, {14, 0xFF80}, {4, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 7},

        {.parts = new image_row_part_t[7]{{74, 0}, {5, 0x071c}, {4, 0}, {14, 0xFF80}, {4, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 7},

        {.parts = new image_row_part_t[7]{{74, 0}, {5, 0x071c}, {4, 0}, {14, 0xFF80}, {4, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 7},

        {.parts = new image_row_part_t[7]{{74, 0}, {5, 0x071c}, {4, 0}, {14, 0xFF80}, {4, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 7},

        {.parts = new image_row_part_t[7]{{74, 0}, {5, 0x071c}, {4, 0}, {14, 0xFF80}, {4, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 7},

        {.parts = new image_row_part_t[7]{{74, 0}, {5, 0x071c}, {4, 0}, {14, 0xFF80}, {4, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 7},

        {.parts = new image_row_part_t[7]{{74, 0}, {5, 0x071c}, {4, 0}, {14, 0xFF80}, {4, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 7},

        {.parts = new image_row_part_t[7]{{74, 0}, {5, 0x071c}, {4, 0}, {14, 0xFF80}, {4, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 7},

        {.parts = new image_row_part_t[7]{{74, 0}, {5, 0x071c}, {4, 0}, {14, 0xFF80}, {4, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 7},

        {.parts = new image_row_part_t[7]{{74, 0}, {5, 0x071c}, {4, 0}, {14, 0xFF80}, {4, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 7},

        {.parts = new image_row_part_t[7]{{74, 0}, {5, 0x071c}, {4, 0}, {14, 0xFF80}, {4, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 7},

        {.parts = new image_row_part_t[7]{{74, 0}, {5, 0x071c}, {4, 0}, {14, 0xFF80}, {4, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 7},

        {.parts = new image_row_part_t[7]{{74, 0}, {5, 0x071c}, {4, 0}, {14, 0xFF80}, {4, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 7},

        {.parts = new image_row_part_t[7]{{74, 0}, {5, 0x071c}, {4, 0}, {14, 0xFF80}, {4, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 7},

        {.parts = new image_row_part_t[7]{{74, 0}, {5, 0x071c}, {4, 0}, {14, 0xFF80}, {4, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 7},

        {.parts = new image_row_part_t[7]{{74, 0}, {5, 0x071c}, {4, 0}, {14, 0xFF80}, {4, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 7},

        {.parts = new image_row_part_t[7]{{74, 0}, {5, 0x071c}, {4, 0}, {14, 0xFF80}, {4, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 7},

        {.parts = new image_row_part_t[7]{{74, 0}, {5, 0x071c}, {4, 0}, {14, 0xFF80}, {4, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 7},

        {.parts = new image_row_part_t[7]{{74, 0}, {5, 0x071c}, {4, 0}, {14, 0xFF80}, {4, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 7},

        {.parts = new image_row_part_t[7]{{74, 0}, {5, 0x071c}, {4, 0}, {14, 0xFF80}, {4, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 7},

        {.parts = new image_row_part_t[7]{{74, 0}, {5, 0x071c}, {4, 0}, {14, 0xFF80}, {4, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 7},

        {.parts = new image_row_part_t[7]{{74, 0}, {5, 0x071c}, {4, 0}, {14, 0xFF80}, {4, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 7},

        {.parts = new image_row_part_t[7]{{74, 0}, {5, 0x071c}, {4, 0}, {14, 0xFF80}, {4, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 7},

        {.parts = new image_row_part_t[7]{{74, 0}, {5, 0x071c}, {4, 0}, {14, 0xFF80}, {4, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 7}}};
image_t const Images::crossing_3{
    .h = 180,
    .w = 180,
    .rows = new image_row_t[180]{
        {.parts = new image_row_part_t[5]{{74, 0}, {5, 0x071c}, {22, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 5},

        {.parts = new image_row_part_t[5]{{74, 0}, {5, 0x071c}, {22, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 5},

        {.parts = new image_row_part_t[5]{{74, 0}, {5, 0x071c}, {22, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 5},

        {.parts = new image_row_part_t[5]{{74, 0}, {5, 0x071c}, {22, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 5},

        {.parts = new image_row_part_t[5]{{74, 0}, {5, 0x071c}, {22, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 5},

        {.parts = new image_row_part_t[5]{{74, 0}, {5, 0x071c}, {22, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 5},

        {.parts = new image_row_part_t[5]{{74, 0}, {5, 0x071c}, {22, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 5},

        {.parts = new image_row_part_t[5]{{74, 0}, {5, 0x071c}, {22, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 5},

        {.parts = new image_row_part_t[5]{{74, 0}, {5, 0x071c}, {22, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 5},

        {.parts = new image_row_part_t[5]{{74, 0}, {5, 0x071c}, {22, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 5},

        {.parts = new image_row_part_t[5]{{74, 0}, {5, 0x071c}, {22, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 5},

        {.parts = new image_row_part_t[5]{{74, 0}, {5, 0x071c}, {22, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 5},

        {.parts = new image_row_part_t[5]{{74, 0}, {5, 0x071c}, {22, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 5},

        {.parts = new image_row_part_t[5]{{74, 0}, {5, 0x071c}, {22, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 5},

        {.parts = new image_row_part_t[5]{{74, 0}, {5, 0x071c}, {22, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 5},

        {.parts = new image_row_part_t[5]{{74, 0}, {5, 0x071c}, {22, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 5},

        {.parts = new image_row_part_t[5]{{74, 0}, {5, 0x071c}, {22, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 5},

        {.parts = new image_row_part_t[5]{{74, 0}, {5, 0x071c}, {22, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 5},

        {.parts = new image_row_part_t[5]{{74, 0}, {5, 0x071c}, {22, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 5},

        {.parts = new image_row_part_t[5]{{74, 0}, {5, 0x071c}, {22, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 5},

        {.parts = new image_row_part_t[5]{{74, 0}, {5, 0x071c}, {22, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 5},

        {.parts = new image_row_part_t[5]{{74, 0}, {5, 0x071c}, {22, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 5},

        {.parts = new image_row_part_t[5]{{74, 0}, {5, 0x071c}, {22, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 5},

        {.parts = new image_row_part_t[5]{{74, 0}, {5, 0x071c}, {22, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 5},

        {.parts = new image_row_part_t[5]{{74, 0}, {5, 0x071c}, {22, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 5},

        {.parts = new image_row_part_t[5]{{74, 0}, {5, 0x071c}, {22, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 5},

        {.parts = new image_row_part_t[5]{{74, 0}, {5, 0x071c}, {22, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 5},

        {.parts = new image_row_part_t[5]{{74, 0}, {5, 0x071c}, {22, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 5},

        {.parts = new image_row_part_t[5]{{74, 0}, {5, 0x071c}, {22, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 5},

        {.parts = new image_row_part_t[5]{{74, 0}, {5, 0x071c}, {22, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 5},

        {.parts = new image_row_part_t[5]{{74, 0}, {5, 0x071c}, {22, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 5},

        {.parts = new image_row_part_t[5]{{74, 0}, {5, 0x071c}, {22, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 5},

        {.parts = new image_row_part_t[5]{{74, 0}, {5, 0x071c}, {22, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 5},

        {.parts = new image_row_part_t[5]{{74, 0}, {5, 0x071c}, {22, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 5},

        {.parts = new image_row_part_t[5]{{74, 0}, {5, 0x071c}, {22, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 5},

        {.parts = new image_row_part_t[5]{{74, 0}, {5, 0x071c}, {22, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 5},

        {.parts = new image_row_part_t[5]{{74, 0}, {5, 0x071c}, {22, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 5},

        {.parts = new image_row_part_t[5]{{74, 0}, {5, 0x071c}, {22, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 5},

        {.parts = new image_row_part_t[5]{{74, 0}, {5, 0x071c}, {22, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 5},

        {.parts = new image_row_part_t[5]{{74, 0}, {5, 0x071c}, {22, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 5},

        {.parts = new image_row_part_t[5]{{74, 0}, {5, 0x071c}, {22, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 5},

        {.parts = new image_row_part_t[5]{{74, 0}, {5, 0x071c}, {22, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 5},

        {.parts = new image_row_part_t[5]{{74, 0}, {5, 0x071c}, {22, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 5},

        {.parts = new image_row_part_t[5]{{74, 0}, {5, 0x071c}, {22, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 5},

        {.parts = new image_row_part_t[5]{{74, 0}, {5, 0x071c}, {22, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 5},

        {.parts = new image_row_part_t[5]{{74, 0}, {5, 0x071c}, {22, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 5},

        {.parts = new image_row_part_t[5]{{74, 0}, {5, 0x071c}, {22, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 5},

        {.parts = new image_row_part_t[5]{{74, 0}, {5, 0x071c}, {22, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 5},

        {.parts = new image_row_part_t[5]{{74, 0}, {5, 0x071c}, {22, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 5},

        {.parts = new image_row_part_t[5]{{74, 0}, {5, 0x071c}, {22, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 5},

        {.parts = new image_row_part_t[5]{{74, 0}, {5, 0x071c}, {22, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 5},

        {.parts = new image_row_part_t[5]{{74, 0}, {5, 0x071c}, {22, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 5},

        {.parts = new image_row_part_t[5]{{74, 0}, {5, 0x071c}, {22, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 5},

        {.parts = new image_row_part_t[5]{{74, 0}, {5, 0x071c}, {22, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 5},

        {.parts = new image_row_part_t[5]{{74, 0}, {5, 0x071c}, {22, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 5},

        {.parts = new image_row_part_t[5]{{74, 0}, {5, 0x071c}, {22, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 5},

        {.parts = new image_row_part_t[5]{{74, 0}, {5, 0x071c}, {22, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 5},

        {.parts = new image_row_part_t[5]{{74, 0}, {5, 0x071c}, {22, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 5},

        {.parts = new image_row_part_t[5]{{74, 0}, {5, 0x071c}, {22, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 5},

        {.parts = new image_row_part_t[5]{{74, 0}, {5, 0x071c}, {22, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 5},

        {.parts = new image_row_part_t[5]{{74, 0}, {5, 0x071c}, {22, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 5},

        {.parts = new image_row_part_t[5]{{74, 0}, {5, 0x071c}, {22, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 5},

        {.parts = new image_row_part_t[5]{{74, 0}, {5, 0x071c}, {22, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 5},

        {.parts = new image_row_part_t[5]{{74, 0}, {5, 0x071c}, {22, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 5},

        {.parts = new image_row_part_t[5]{{74, 0}, {5, 0x071c}, {22, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 5},

        {.parts = new image_row_part_t[5]{{74, 0}, {5, 0x071c}, {22, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 5},

        {.parts = new image_row_part_t[5]{{74, 0}, {5, 0x071c}, {22, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 5},

        {.parts = new image_row_part_t[5]{{74, 0}, {5, 0x071c}, {22, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 5},

        {.parts = new image_row_part_t[5]{{74, 0}, {5, 0x071c}, {22, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 5},

        {.parts = new image_row_part_t[5]{{74, 0}, {5, 0x071c}, {22, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 5},

        {.parts = new image_row_part_t[5]{{74, 0}, {5, 0x071c}, {22, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 5},

        {.parts = new image_row_part_t[5]{{74, 0}, {5, 0x071c}, {22, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 5},

        {.parts = new image_row_part_t[5]{{74, 0}, {5, 0x071c}, {22, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 5},

        {.parts = new image_row_part_t[5]{{74, 0}, {5, 0x071c}, {22, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 5},

        {.parts = new image_row_part_t[3]{{79, 0x071c}, {22, 0}, {79, 0x071c}}, .partsCount = 3},

        {.parts = new image_row_part_t[3]{{79, 0x071c}, {22, 0}, {79, 0x071c}}, .partsCount = 3},

        {.parts = new image_row_part_t[3]{{79, 0x071c}, {22, 0}, {79, 0x071c}}, .partsCount = 3},

        {.parts = new image_row_part_t[3]{{79, 0x071c}, {22, 0}, {79, 0x071c}}, .partsCount = 3},

        {.parts = new image_row_part_t[3]{{79, 0x071c}, {22, 0}, {79, 0x071c}}, .partsCount = 3},

        {.parts = new image_row_part_t[3]{{29, 0}, {3, 0xFF80}, {148, 0}}, .partsCount = 3},

        {.parts = new image_row_part_t[3]{{26, 0}, {7, 0xFF80}, {147, 0}}, .partsCount = 3},

        {.parts = new image_row_part_t[3]{{22, 0}, {12, 0xFF80}, {146, 0}}, .partsCount = 3},

        {.parts = new image_row_part_t[3]{{19, 0}, {15, 0xFF80}, {146, 0}}, .partsCount = 3},

        {.parts = new image_row_part_t[3]{{15, 0}, {81, 0xFF80}, {84, 0}}, .partsCount = 3},

        {.parts = new image_row_part_t[3]{{12, 0}, {85, 0xFF80}, {83, 0}}, .partsCount = 3},

        {.parts = new image_row_part_t[3]{{8, 0}, {89, 0xFF80}, {83, 0}}, .partsCount = 3},

        {.parts = new image_row_part_t[3]{{5, 0}, {92, 0xFF80}, {83, 0}}, .partsCount = 3},

        {.parts = new image_row_part_t[3]{{2, 0}, {95, 0xFF80}, {83, 0}}, .partsCount = 3},

        {.parts = new image_row_part_t[3]{{1, 0}, {96, 0xFF80}, {83, 0}}, .partsCount = 3},

        {.parts = new image_row_part_t[3]{{1, 0}, {96, 0xFF80}, {83, 0}}, .partsCount = 3},

        {.parts = new image_row_part_t[3]{{1, 0}, {96, 0xFF80}, {83, 0}}, .partsCount = 3},

        {.parts = new image_row_part_t[3]{{2, 0}, {95, 0xFF80}, {83, 0}}, .partsCount = 3},

        {.parts = new image_row_part_t[3]{{5, 0}, {92, 0xFF80}, {83, 0}}, .partsCount = 3},

        {.parts = new image_row_part_t[3]{{8, 0}, {89, 0xFF80}, {83, 0}}, .partsCount = 3},

        {.parts = new image_row_part_t[3]{{12, 0}, {85, 0xFF80}, {83, 0}}, .partsCount = 3},

        {.parts = new image_row_part_t[3]{{15, 0}, {82, 0xFF80}, {83, 0}}, .partsCount = 3},

        {.parts = new image_row_part_t[5]{{18, 0}, {16, 0xFF80}, {47, 0}, {16, 0xFF80}, {83, 0}}, .partsCount = 5},

        {.parts = new image_row_part_t[5]{{22, 0}, {12, 0xFF80}, {47, 0}, {16, 0xFF80}, {83, 0}}, .partsCount = 5},

        {.parts = new image_row_part_t[5]{{25, 0}, {8, 0xFF80}, {48, 0}, {16, 0xFF80}, {83, 0}}, .partsCount = 5},

        {.parts = new image_row_part_t[5]{{29, 0}, {4, 0xFF80}, {48, 0}, {16, 0xFF80}, {83, 0}}, .partsCount = 5},

        {.parts = new image_row_part_t[5]{{79, 0x071c}, {2, 0}, {16, 0xFF80}, {4, 0}, {79, 0x071c}}, .partsCount = 5},

        {.parts = new image_row_part_t[5]{{79, 0x071c}, {2, 0}, {16, 0xFF80}, {4, 0}, {79, 0x071c}}, .partsCount = 5},

        {.parts = new image_row_part_t[5]{{79, 0x071c}, {2, 0}, {16, 0xFF80}, {4, 0}, {79, 0x071c}}, .partsCount = 5},

        {.parts = new image_row_part_t[5]{{79, 0x071c}, {2, 0}, {16, 0xFF80}, {4, 0}, {79, 0x071c}}, .partsCount = 5},

        {.parts = new image_row_part_t[5]{{79, 0x071c}, {2, 0}, {16, 0xFF80}, {4, 0}, {79, 0x071c}}, .partsCount = 5},

        {.parts = new image_row_part_t[7]{{74, 0}, {5, 0x071c}, {2, 0}, {16, 0xFF80}, {4, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 7},

        {.parts = new image_row_part_t[7]{{74, 0}, {5, 0x071c}, {2, 0}, {16, 0xFF80}, {4, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 7},

        {.parts = new image_row_part_t[7]{{74, 0}, {5, 0x071c}, {2, 0}, {16, 0xFF80}, {4, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 7},

        {.parts = new image_row_part_t[7]{{74, 0}, {5, 0x071c}, {2, 0}, {16, 0xFF80}, {4, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 7},

        {.parts = new image_row_part_t[7]{{74, 0}, {5, 0x071c}, {2, 0}, {16, 0xFF80}, {4, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 7},

        {.parts = new image_row_part_t[7]{{74, 0}, {5, 0x071c}, {2, 0}, {16, 0xFF80}, {4, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 7},

        {.parts = new image_row_part_t[7]{{74, 0}, {5, 0x071c}, {2, 0}, {16, 0xFF80}, {4, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 7},

        {.parts = new image_row_part_t[7]{{74, 0}, {5, 0x071c}, {2, 0}, {16, 0xFF80}, {4, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 7},

        {.parts = new image_row_part_t[7]{{74, 0}, {5, 0x071c}, {2, 0}, {16, 0xFF80}, {4, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 7},

        {.parts = new image_row_part_t[7]{{74, 0}, {5, 0x071c}, {2, 0}, {16, 0xFF80}, {4, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 7},

        {.parts = new image_row_part_t[7]{{74, 0}, {5, 0x071c}, {2, 0}, {16, 0xFF80}, {4, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 7},

        {.parts = new image_row_part_t[7]{{74, 0}, {5, 0x071c}, {2, 0}, {16, 0xFF80}, {4, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 7},

        {.parts = new image_row_part_t[7]{{74, 0}, {5, 0x071c}, {2, 0}, {16, 0xFF80}, {4, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 7},

        {.parts = new image_row_part_t[7]{{74, 0}, {5, 0x071c}, {2, 0}, {16, 0xFF80}, {4, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 7},

        {.parts = new image_row_part_t[7]{{74, 0}, {5, 0x071c}, {2, 0}, {16, 0xFF80}, {4, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 7},

        {.parts = new image_row_part_t[7]{{74, 0}, {5, 0x071c}, {2, 0}, {16, 0xFF80}, {4, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 7},

        {.parts = new image_row_part_t[7]{{74, 0}, {5, 0x071c}, {2, 0}, {16, 0xFF80}, {4, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 7},

        {.parts = new image_row_part_t[7]{{74, 0}, {5, 0x071c}, {2, 0}, {16, 0xFF80}, {4, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 7},

        {.parts = new image_row_part_t[7]{{74, 0}, {5, 0x071c}, {2, 0}, {16, 0xFF80}, {4, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 7},

        {.parts = new image_row_part_t[7]{{74, 0}, {5, 0x071c}, {2, 0}, {16, 0xFF80}, {4, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 7},

        {.parts = new image_row_part_t[7]{{74, 0}, {5, 0x071c}, {2, 0}, {16, 0xFF80}, {4, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 7},

        {.parts = new image_row_part_t[7]{{74, 0}, {5, 0x071c}, {2, 0}, {16, 0xFF80}, {4, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 7},

        {.parts = new image_row_part_t[7]{{74, 0}, {5, 0x071c}, {2, 0}, {16, 0xFF80}, {4, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 7},

        {.parts = new image_row_part_t[7]{{74, 0}, {5, 0x071c}, {2, 0}, {16, 0xFF80}, {4, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 7},

        {.parts = new image_row_part_t[7]{{74, 0}, {5, 0x071c}, {2, 0}, {16, 0xFF80}, {4, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 7},

        {.parts = new image_row_part_t[7]{{74, 0}, {5, 0x071c}, {2, 0}, {16, 0xFF80}, {4, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 7},

        {.parts = new image_row_part_t[7]{{74, 0}, {5, 0x071c}, {2, 0}, {16, 0xFF80}, {4, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 7},

        {.parts = new image_row_part_t[7]{{74, 0}, {5, 0x071c}, {2, 0}, {16, 0xFF80}, {4, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 7},

        {.parts = new image_row_part_t[7]{{74, 0}, {5, 0x071c}, {2, 0}, {16, 0xFF80}, {4, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 7},

        {.parts = new image_row_part_t[7]{{74, 0}, {5, 0x071c}, {2, 0}, {16, 0xFF80}, {4, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 7},

        {.parts = new image_row_part_t[7]{{74, 0}, {5, 0x071c}, {2, 0}, {16, 0xFF80}, {4, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 7},

        {.parts = new image_row_part_t[7]{{74, 0}, {5, 0x071c}, {2, 0}, {16, 0xFF80}, {4, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 7},

        {.parts = new image_row_part_t[7]{{74, 0}, {5, 0x071c}, {2, 0}, {16, 0xFF80}, {4, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 7},

        {.parts = new image_row_part_t[7]{{74, 0}, {5, 0x071c}, {2, 0}, {16, 0xFF80}, {4, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 7},

        {.parts = new image_row_part_t[7]{{74, 0}, {5, 0x071c}, {2, 0}, {16, 0xFF80}, {4, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 7},

        {.parts = new image_row_part_t[7]{{74, 0}, {5, 0x071c}, {2, 0}, {16, 0xFF80}, {4, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 7},

        {.parts = new image_row_part_t[7]{{74, 0}, {5, 0x071c}, {2, 0}, {16, 0xFF80}, {4, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 7},

        {.parts = new image_row_part_t[7]{{74, 0}, {5, 0x071c}, {2, 0}, {16, 0xFF80}, {4, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 7},

        {.parts = new image_row_part_t[7]{{74, 0}, {5, 0x071c}, {2, 0}, {16, 0xFF80}, {4, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 7},

        {.parts = new image_row_part_t[7]{{74, 0}, {5, 0x071c}, {2, 0}, {16, 0xFF80}, {4, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 7},

        {.parts = new image_row_part_t[7]{{74, 0}, {5, 0x071c}, {2, 0}, {16, 0xFF80}, {4, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 7},

        {.parts = new image_row_part_t[7]{{74, 0}, {5, 0x071c}, {2, 0}, {16, 0xFF80}, {4, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 7},

        {.parts = new image_row_part_t[7]{{74, 0}, {5, 0x071c}, {2, 0}, {16, 0xFF80}, {4, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 7},

        {.parts = new image_row_part_t[7]{{74, 0}, {5, 0x071c}, {2, 0}, {16, 0xFF80}, {4, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 7},

        {.parts = new image_row_part_t[7]{{74, 0}, {5, 0x071c}, {2, 0}, {16, 0xFF80}, {4, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 7},

        {.parts = new image_row_part_t[7]{{74, 0}, {5, 0x071c}, {2, 0}, {16, 0xFF80}, {4, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 7},

        {.parts = new image_row_part_t[7]{{74, 0}, {5, 0x071c}, {2, 0}, {16, 0xFF80}, {4, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 7},

        {.parts = new image_row_part_t[7]{{74, 0}, {5, 0x071c}, {2, 0}, {16, 0xFF80}, {4, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 7},

        {.parts = new image_row_part_t[7]{{74, 0}, {5, 0x071c}, {2, 0}, {16, 0xFF80}, {4, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 7},

        {.parts = new image_row_part_t[7]{{74, 0}, {5, 0x071c}, {2, 0}, {16, 0xFF80}, {4, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 7},

        {.parts = new image_row_part_t[7]{{74, 0}, {5, 0x071c}, {2, 0}, {16, 0xFF80}, {4, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 7},

        {.parts = new image_row_part_t[7]{{74, 0}, {5, 0x071c}, {2, 0}, {16, 0xFF80}, {4, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 7},

        {.parts = new image_row_part_t[7]{{74, 0}, {5, 0x071c}, {2, 0}, {16, 0xFF80}, {4, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 7},

        {.parts = new image_row_part_t[7]{{74, 0}, {5, 0x071c}, {2, 0}, {16, 0xFF80}, {4, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 7},

        {.parts = new image_row_part_t[7]{{74, 0}, {5, 0x071c}, {2, 0}, {16, 0xFF80}, {4, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 7},

        {.parts = new image_row_part_t[7]{{74, 0}, {5, 0x071c}, {2, 0}, {16, 0xFF80}, {4, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 7},

        {.parts = new image_row_part_t[7]{{74, 0}, {5, 0x071c}, {2, 0}, {16, 0xFF80}, {4, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 7},

        {.parts = new image_row_part_t[7]{{74, 0}, {5, 0x071c}, {2, 0}, {16, 0xFF80}, {4, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 7},

        {.parts = new image_row_part_t[7]{{74, 0}, {5, 0x071c}, {2, 0}, {16, 0xFF80}, {4, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 7},

        {.parts = new image_row_part_t[7]{{74, 0}, {5, 0x071c}, {2, 0}, {16, 0xFF80}, {4, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 7},

        {.parts = new image_row_part_t[7]{{74, 0}, {5, 0x071c}, {2, 0}, {16, 0xFF80}, {4, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 7},

        {.parts = new image_row_part_t[7]{{74, 0}, {5, 0x071c}, {2, 0}, {16, 0xFF80}, {4, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 7},

        {.parts = new image_row_part_t[7]{{74, 0}, {5, 0x071c}, {2, 0}, {16, 0xFF80}, {4, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 7},

        {.parts = new image_row_part_t[7]{{74, 0}, {5, 0x071c}, {2, 0}, {16, 0xFF80}, {4, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 7},

        {.parts = new image_row_part_t[7]{{74, 0}, {5, 0x071c}, {2, 0}, {16, 0xFF80}, {4, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 7},

        {.parts = new image_row_part_t[7]{{74, 0}, {5, 0x071c}, {2, 0}, {16, 0xFF80}, {4, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 7},

        {.parts = new image_row_part_t[7]{{74, 0}, {5, 0x071c}, {2, 0}, {16, 0xFF80}, {4, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 7},

        {.parts = new image_row_part_t[7]{{74, 0}, {5, 0x071c}, {2, 0}, {16, 0xFF80}, {4, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 7},

        {.parts = new image_row_part_t[7]{{74, 0}, {5, 0x071c}, {2, 0}, {16, 0xFF80}, {4, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 7},

        {.parts = new image_row_part_t[7]{{74, 0}, {5, 0x071c}, {2, 0}, {16, 0xFF80}, {4, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 7},

        {.parts = new image_row_part_t[7]{{74, 0}, {5, 0x071c}, {2, 0}, {16, 0xFF80}, {4, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 7},

        {.parts = new image_row_part_t[7]{{74, 0}, {5, 0x071c}, {2, 0}, {16, 0xFF80}, {4, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 7},

        {.parts = new image_row_part_t[7]{{74, 0}, {5, 0x071c}, {2, 0}, {16, 0xFF80}, {4, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 7},

        {.parts = new image_row_part_t[7]{{74, 0}, {5, 0x071c}, {2, 0}, {16, 0xFF80}, {4, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 7},

        {.parts = new image_row_part_t[7]{{74, 0}, {5, 0x071c}, {2, 0}, {16, 0xFF80}, {4, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 7}}};
image_t const Images::round_0{
    .h = 180,
    .w = 180,
    .rows = new image_row_t[180]{
        {.parts = new image_row_part_t[5]{{74, 0}, {5, 0x071c}, {22, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 5},

        {.parts = new image_row_part_t[5]{{74, 0}, {5, 0x071c}, {22, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 5},

        {.parts = new image_row_part_t[5]{{74, 0}, {5, 0x071c}, {22, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 5},

        {.parts = new image_row_part_t[5]{{74, 0}, {5, 0x071c}, {22, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 5},

        {.parts = new image_row_part_t[5]{{74, 0}, {5, 0x071c}, {22, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 5},

        {.parts = new image_row_part_t[5]{{74, 0}, {5, 0x071c}, {22, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 5},

        {.parts = new image_row_part_t[5]{{74, 0}, {5, 0x071c}, {22, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 5},

        {.parts = new image_row_part_t[5]{{74, 0}, {5, 0x071c}, {22, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 5},

        {.parts = new image_row_part_t[5]{{74, 0}, {5, 0x071c}, {22, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 5},

        {.parts = new image_row_part_t[5]{{74, 0}, {5, 0x071c}, {22, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 5},

        {.parts = new image_row_part_t[5]{{74, 0}, {5, 0x071c}, {22, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 5},

        {.parts = new image_row_part_t[5]{{74, 0}, {5, 0x071c}, {22, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 5},

        {.parts = new image_row_part_t[5]{{74, 0}, {5, 0x071c}, {22, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 5},

        {.parts = new image_row_part_t[5]{{74, 0}, {5, 0x071c}, {22, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 5},

        {.parts = new image_row_part_t[5]{{74, 0}, {5, 0x071c}, {22, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 5},

        {.parts = new image_row_part_t[5]{{74, 0}, {5, 0x071c}, {22, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 5},

        {.parts = new image_row_part_t[5]{{74, 0}, {5, 0x071c}, {22, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 5},

        {.parts = new image_row_part_t[5]{{74, 0}, {5, 0x071c}, {22, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 5},

        {.parts = new image_row_part_t[5]{{74, 0}, {5, 0x071c}, {22, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 5},

        {.parts = new image_row_part_t[5]{{74, 0}, {5, 0x071c}, {22, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 5},

        {.parts = new image_row_part_t[5]{{74, 0}, {5, 0x071c}, {22, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 5},

        {.parts = new image_row_part_t[5]{{74, 0}, {5, 0x071c}, {22, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 5},

        {.parts = new image_row_part_t[5]{{74, 0}, {5, 0x071c}, {22, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 5},

        {.parts = new image_row_part_t[5]{{74, 0}, {5, 0x071c}, {22, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 5},

        {.parts = new image_row_part_t[5]{{74, 0}, {5, 0x071c}, {22, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 5},

        {.parts = new image_row_part_t[5]{{74, 0}, {5, 0x071c}, {22, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 5},

        {.parts = new image_row_part_t[5]{{72, 0}, {7, 0x071c}, {22, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 5},

        {.parts = new image_row_part_t[5]{{68, 0}, {11, 0x071c}, {22, 0}, {9, 0x071c}, {70, 0}}, .partsCount = 5},

        {.parts = new image_row_part_t[5]{{66, 0}, {13, 0x071c}, {22, 0}, {11, 0x071c}, {68, 0}}, .partsCount = 5},

        {.parts = new image_row_part_t[5]{{63, 0}, {16, 0x071c}, {22, 0}, {14, 0x071c}, {65, 0}}, .partsCount = 5},

        {.parts = new image_row_part_t[5]{{61, 0}, {15, 0x071c}, {26, 0}, {15, 0x071c}, {63, 0}}, .partsCount = 5},

        {.parts = new image_row_part_t[5]{{59, 0}, {13, 0x071c}, {34, 0}, {13, 0x071c}, {61, 0}}, .partsCount = 5},

        {.parts = new image_row_part_t[5]{{57, 0}, {12, 0x071c}, {40, 0}, {12, 0x071c}, {59, 0}}, .partsCount = 5},

        {.parts = new image_row_part_t[5]{{56, 0}, {10, 0x071c}, {46, 0}, {10, 0x071c}, {58, 0}}, .partsCount = 5},

        {.parts = new image_row_part_t[5]{{54, 0}, {10, 0x071c}, {50, 0}, {10, 0x071c}, {56, 0}}, .partsCount = 5},

        {.parts = new image_row_part_t[5]{{52, 0}, {10, 0x071c}, {54, 0}, {10, 0x071c}, {54, 0}}, .partsCount = 5},

        {.parts = new image_row_part_t[5]{{51, 0}, {9, 0x071c}, {58, 0}, {9, 0x071c}, {53, 0}}, .partsCount = 5},

        {.parts = new image_row_part_t[5]{{50, 0}, {9, 0x071c}, {60, 0}, {9, 0x071c}, {52, 0}}, .partsCount = 5},

        {.parts = new image_row_part_t[5]{{48, 0}, {9, 0x071c}, {64, 0}, {9, 0x071c}, {50, 0}}, .partsCount = 5},

        {.parts = new image_row_part_t[5]{{47, 0}, {8, 0x071c}, {68, 0}, {8, 0x071c}, {49, 0}}, .partsCount = 5},

        {.parts = new image_row_part_t[5]{{46, 0}, {8, 0x071c}, {70, 0}, {8, 0x071c}, {48, 0}}, .partsCount = 5},

        {.parts = new image_row_part_t[5]{{45, 0}, {8, 0x071c}, {72, 0}, {8, 0x071c}, {47, 0}}, .partsCount = 5},

        {.parts = new image_row_part_t[5]{{44, 0}, {7, 0x071c}, {76, 0}, {7, 0x071c}, {46, 0}}, .partsCount = 5},

        {.parts = new image_row_part_t[7]{{43, 0}, {7, 0x071c}, {33, 0}, {12, 0x071c}, {33, 0}, {7, 0x071c}, {45, 0}}, .partsCount = 7},

        {.parts = new image_row_part_t[7]{{42, 0}, {7, 0x071c}, {29, 0}, {22, 0x071c}, {29, 0}, {7, 0x071c}, {44, 0}}, .partsCount = 7},

        {.parts = new image_row_part_t[7]{{41, 0}, {7, 0x071c}, {26, 0}, {30, 0x071c}, {26, 0}, {7, 0x071c}, {43, 0}}, .partsCount = 7},

        {.parts = new image_row_part_t[7]{{40, 0}, {7, 0x071c}, {25, 0}, {34, 0x071c}, {25, 0}, {7, 0x071c}, {42, 0}}, .partsCount = 7},

        {.parts = new image_row_part_t[7]{{39, 0}, {7, 0x071c}, {24, 0}, {38, 0x071c}, {24, 0}, {7, 0x071c}, {41, 0}}, .partsCount = 7},

        {.parts = new image_row_part_t[9]{{39, 0}, {6, 0x071c}, {23, 0}, {15, 0x071c}, {12, 0}, {15, 0x071c}, {23, 0}, {6, 0x071c}, {41, 0}}, .partsCount = 9},

        {.parts = new image_row_part_t[9]{{38, 0}, {6, 0x071c}, {22, 0}, {12, 0x071c}, {22, 0}, {12, 0x071c}, {22, 0}, {6, 0x071c}, {40, 0}}, .partsCount = 9},

        {.parts = new image_row_part_t[9]{{37, 0}, {6, 0x071c}, {21, 0}, {11, 0x071c}, {28, 0}, {11, 0x071c}, {21, 0}, {6, 0x071c}, {39, 0}}, .partsCount = 9},

        {.parts = new image_row_part_t[9]{{36, 0}, {7, 0x071c}, {20, 0}, {10, 0x071c}, {32, 0}, {10, 0x071c}, {21, 0}, {6, 0x071c}, {38, 0}}, .partsCount = 9},

        {.parts = new image_row_part_t[9]{{36, 0}, {6, 0x071c}, {20, 0}, {9, 0x071c}, {36, 0}, {9, 0x071c}, {20, 0}, {6, 0x071c}, {38, 0}}, .partsCount = 9},

        {.parts = new image_row_part_t[9]{{35, 0}, {6, 0x071c}, {19, 0}, {9, 0x071c}, {40, 0}, {9, 0x071c}, {19, 0}, {6, 0x071c}, {37, 0}}, .partsCount = 9},

        {.parts = new image_row_part_t[9]{{34, 0}, {6, 0x071c}, {19, 0}, {8, 0x071c}, {44, 0}, {8, 0x071c}, {19, 0}, {6, 0x071c}, {36, 0}}, .partsCount = 9},

        {.parts = new image_row_part_t[9]{{34, 0}, {6, 0x071c}, {18, 0}, {8, 0x071c}, {46, 0}, {8, 0x071c}, {18, 0}, {6, 0x071c}, {36, 0}}, .partsCount = 9},

        {.parts = new image_row_part_t[9]{{33, 0}, {6, 0x071c}, {18, 0}, {8, 0x071c}, {48, 0}, {8, 0x071c}, {18, 0}, {6, 0x071c}, {35, 0}}, .partsCount = 9},

        {.parts = new image_row_part_t[9]{{33, 0}, {5, 0x071c}, {18, 0}, {7, 0x071c}, {52, 0}, {7, 0x071c}, {18, 0}, {6, 0x071c}, {34, 0}}, .partsCount = 9},

        {.parts = new image_row_part_t[9]{{32, 0}, {6, 0x071c}, {17, 0}, {7, 0x071c}, {54, 0}, {7, 0x071c}, {17, 0}, {6, 0x071c}, {34, 0}}, .partsCount = 9},

        {.parts = new image_row_part_t[9]{{31, 0}, {6, 0x071c}, {17, 0}, {7, 0x071c}, {56, 0}, {7, 0x071c}, {17, 0}, {6, 0x071c}, {33, 0}}, .partsCount = 9},

        {.parts = new image_row_part_t[9]{{31, 0}, {6, 0x071c}, {16, 0}, {7, 0x071c}, {58, 0}, {7, 0x071c}, {16, 0}, {6, 0x071c}, {33, 0}}, .partsCount = 9},

        {.parts = new image_row_part_t[9]{{31, 0}, {5, 0x071c}, {17, 0}, {6, 0x071c}, {60, 0}, {6, 0x071c}, {17, 0}, {6, 0x071c}, {32, 0}}, .partsCount = 9},

        {.parts = new image_row_part_t[9]{{30, 0}, {6, 0x071c}, {16, 0}, {6, 0x071c}, {62, 0}, {6, 0x071c}, {16, 0}, {6, 0x071c}, {32, 0}}, .partsCount = 9},

        {.parts = new image_row_part_t[9]{{30, 0}, {5, 0x071c}, {16, 0}, {7, 0x071c}, {62, 0}, {7, 0x071c}, {16, 0}, {6, 0x071c}, {31, 0}}, .partsCount = 9},

        {.parts = new image_row_part_t[9]{{29, 0}, {6, 0x071c}, {15, 0}, {7, 0x071c}, {64, 0}, {7, 0x071c}, {15, 0}, {6, 0x071c}, {31, 0}}, .partsCount = 9},

        {.parts = new image_row_part_t[9]{{29, 0}, {5, 0x071c}, {16, 0}, {6, 0x071c}, {66, 0}, {6, 0x071c}, {16, 0}, {5, 0x071c}, {31, 0}}, .partsCount = 9},

        {.parts = new image_row_part_t[9]{{28, 0}, {6, 0x071c}, {15, 0}, {6, 0x071c}, {68, 0}, {6, 0x071c}, {15, 0}, {6, 0x071c}, {30, 0}}, .partsCount = 9},

        {.parts = new image_row_part_t[9]{{28, 0}, {5, 0x071c}, {16, 0}, {6, 0x071c}, {69, 0}, {5, 0x071c}, {16, 0}, {5, 0x071c}, {30, 0}}, .partsCount = 9},

        {.parts = new image_row_part_t[9]{{28, 0}, {5, 0x071c}, {15, 0}, {6, 0x071c}, {70, 0}, {6, 0x071c}, {15, 0}, {5, 0x071c}, {30, 0}}, .partsCount = 9},

        {.parts = new image_row_part_t[9]{{27, 0}, {6, 0x071c}, {15, 0}, {5, 0x071c}, {72, 0}, {5, 0x071c}, {15, 0}, {6, 0x071c}, {29, 0}}, .partsCount = 9},

        {.parts = new image_row_part_t[9]{{27, 0}, {5, 0x071c}, {15, 0}, {6, 0x071c}, {72, 0}, {6, 0x071c}, {15, 0}, {5, 0x071c}, {29, 0}}, .partsCount = 9},

        {.parts = new image_row_part_t[9]{{27, 0}, {5, 0x071c}, {15, 0}, {5, 0x071c}, {74, 0}, {5, 0x071c}, {15, 0}, {5, 0x071c}, {29, 0}}, .partsCount = 9},

        {.parts = new image_row_part_t[9]{{26, 0}, {6, 0x071c}, {14, 0}, {6, 0x071c}, {74, 0}, {6, 0x071c}, {15, 0}, {5, 0x071c}, {28, 0}}, .partsCount = 9},

        {.parts = new image_row_part_t[9]{{26, 0}, {5, 0x071c}, {15, 0}, {5, 0x071c}, {76, 0}, {5, 0x071c}, {15, 0}, {5, 0x071c}, {28, 0}}, .partsCount = 9},

        {.parts = new image_row_part_t[7]{{31, 0x071c}, {15, 0}, {5, 0x071c}, {76, 0}, {5, 0x071c}, {15, 0}, {33, 0x071c}}, .partsCount = 7},

        {.parts = new image_row_part_t[7]{{31, 0x071c}, {14, 0}, {6, 0x071c}, {76, 0}, {6, 0x071c}, {14, 0}, {33, 0x071c}}, .partsCount = 7},

        {.parts = new image_row_part_t[7]{{31, 0x071c}, {14, 0}, {5, 0x071c}, {78, 0}, {5, 0x071c}, {15, 0}, {32, 0x071c}}, .partsCount = 7},

        {.parts = new image_row_part_t[7]{{30, 0x071c}, {15, 0}, {5, 0x071c}, {78, 0}, {5, 0x071c}, {15, 0}, {32, 0x071c}}, .partsCount = 7},

        {.parts = new image_row_part_t[7]{{30, 0x071c}, {14, 0}, {6, 0x071c}, {78, 0}, {6, 0x071c}, {14, 0}, {32, 0x071c}}, .partsCount = 7},

        {.parts = new image_row_part_t[5]{{44, 0}, {5, 0x071c}, {80, 0}, {5, 0x071c}, {46, 0}}, .partsCount = 5},

        {.parts = new image_row_part_t[5]{{44, 0}, {5, 0x071c}, {80, 0}, {5, 0x071c}, {46, 0}}, .partsCount = 5},

        {.parts = new image_row_part_t[5]{{44, 0}, {5, 0x071c}, {80, 0}, {5, 0x071c}, {46, 0}}, .partsCount = 5},

        {.parts = new image_row_part_t[5]{{44, 0}, {5, 0x071c}, {80, 0}, {5, 0x071c}, {46, 0}}, .partsCount = 5},

        {.parts = new image_row_part_t[5]{{44, 0}, {5, 0x071c}, {80, 0}, {6, 0x071c}, {45, 0}}, .partsCount = 5},

        {.parts = new image_row_part_t[5]{{43, 0}, {5, 0x071c}, {82, 0}, {5, 0x071c}, {45, 0}}, .partsCount = 5},

        {.parts = new image_row_part_t[5]{{43, 0}, {5, 0x071c}, {82, 0}, {5, 0x071c}, {45, 0}}, .partsCount = 5},

        {.parts = new image_row_part_t[5]{{43, 0}, {5, 0x071c}, {82, 0}, {5, 0x071c}, {45, 0}}, .partsCount = 5},

        {.parts = new image_row_part_t[5]{{43, 0}, {5, 0x071c}, {82, 0}, {5, 0x071c}, {45, 0}}, .partsCount = 5},

        {.parts = new image_row_part_t[5]{{43, 0}, {5, 0x071c}, {82, 0}, {5, 0x071c}, {45, 0}}, .partsCount = 5},

        {.parts = new image_row_part_t[5]{{43, 0}, {5, 0x071c}, {82, 0}, {5, 0x071c}, {45, 0}}, .partsCount = 5},

        {.parts = new image_row_part_t[5]{{43, 0}, {5, 0x071c}, {82, 0}, {5, 0x071c}, {45, 0}}, .partsCount = 5},

        {.parts = new image_row_part_t[5]{{43, 0}, {5, 0x071c}, {82, 0}, {5, 0x071c}, {45, 0}}, .partsCount = 5},

        {.parts = new image_row_part_t[5]{{43, 0}, {5, 0x071c}, {82, 0}, {5, 0x071c}, {45, 0}}, .partsCount = 5},

        {.parts = new image_row_part_t[5]{{43, 0}, {5, 0x071c}, {82, 0}, {5, 0x071c}, {45, 0}}, .partsCount = 5},

        {.parts = new image_row_part_t[5]{{43, 0}, {5, 0x071c}, {82, 0}, {5, 0x071c}, {45, 0}}, .partsCount = 5},

        {.parts = new image_row_part_t[5]{{43, 0}, {5, 0x071c}, {82, 0}, {5, 0x071c}, {45, 0}}, .partsCount = 5},

        {.parts = new image_row_part_t[5]{{44, 0}, {5, 0x071c}, {81, 0}, {5, 0x071c}, {45, 0}}, .partsCount = 5},

        {.parts = new image_row_part_t[5]{{44, 0}, {5, 0x071c}, {80, 0}, {5, 0x071c}, {46, 0}}, .partsCount = 5},

        {.parts = new image_row_part_t[5]{{44, 0}, {5, 0x071c}, {80, 0}, {5, 0x071c}, {46, 0}}, .partsCount = 5},

        {.parts = new image_row_part_t[5]{{44, 0}, {5, 0x071c}, {80, 0}, {5, 0x071c}, {46, 0}}, .partsCount = 5},

        {.parts = new image_row_part_t[7]{{30, 0x071c}, {14, 0}, {5, 0x071c}, {80, 0}, {5, 0x071c}, {14, 0}, {32, 0x071c}}, .partsCount = 7},

        {.parts = new image_row_part_t[7]{{30, 0x071c}, {14, 0}, {6, 0x071c}, {78, 0}, {6, 0x071c}, {14, 0}, {32, 0x071c}}, .partsCount = 7},

        {.parts = new image_row_part_t[7]{{30, 0x071c}, {15, 0}, {5, 0x071c}, {78, 0}, {5, 0x071c}, {15, 0}, {32, 0x071c}}, .partsCount = 7},

        {.parts = new image_row_part_t[7]{{31, 0x071c}, {14, 0}, {5, 0x071c}, {78, 0}, {5, 0x071c}, {15, 0}, {32, 0x071c}}, .partsCount = 7},

        {.parts = new image_row_part_t[7]{{31, 0x071c}, {14, 0}, {6, 0x071c}, {77, 0}, {5, 0x071c}, {14, 0}, {33, 0x071c}}, .partsCount = 7},

        {.parts = new image_row_part_t[9]{{26, 0}, {5, 0x071c}, {15, 0}, {5, 0x071c}, {76, 0}, {5, 0x071c}, {15, 0}, {5, 0x071c}, {28, 0}}, .partsCount = 9},

        {.parts = new image_row_part_t[9]{{26, 0}, {5, 0x071c}, {15, 0}, {5, 0x071c}, {76, 0}, {5, 0x071c}, {15, 0}, {5, 0x071c}, {28, 0}}, .partsCount = 9},

        {.parts = new image_row_part_t[9]{{26, 0}, {6, 0x071c}, {14, 0}, {6, 0x071c}, {74, 0}, {6, 0x071c}, {15, 0}, {5, 0x071c}, {28, 0}}, .partsCount = 9},

        {.parts = new image_row_part_t[9]{{27, 0}, {5, 0x071c}, {15, 0}, {5, 0x071c}, {74, 0}, {5, 0x071c}, {15, 0}, {5, 0x071c}, {29, 0}}, .partsCount = 9},

        {.parts = new image_row_part_t[9]{{27, 0}, {5, 0x071c}, {15, 0}, {6, 0x071c}, {72, 0}, {6, 0x071c}, {15, 0}, {5, 0x071c}, {29, 0}}, .partsCount = 9},

        {.parts = new image_row_part_t[9]{{27, 0}, {6, 0x071c}, {15, 0}, {5, 0x071c}, {72, 0}, {5, 0x071c}, {16, 0}, {5, 0x071c}, {29, 0}}, .partsCount = 9},

        {.parts = new image_row_part_t[9]{{28, 0}, {5, 0x071c}, {15, 0}, {6, 0x071c}, {70, 0}, {6, 0x071c}, {15, 0}, {5, 0x071c}, {30, 0}}, .partsCount = 9},

        {.parts = new image_row_part_t[9]{{28, 0}, {5, 0x071c}, {16, 0}, {6, 0x071c}, {69, 0}, {5, 0x071c}, {16, 0}, {5, 0x071c}, {30, 0}}, .partsCount = 9},

        {.parts = new image_row_part_t[9]{{28, 0}, {6, 0x071c}, {15, 0}, {6, 0x071c}, {68, 0}, {6, 0x071c}, {15, 0}, {6, 0x071c}, {30, 0}}, .partsCount = 9},

        {.parts = new image_row_part_t[9]{{29, 0}, {5, 0x071c}, {16, 0}, {6, 0x071c}, {66, 0}, {6, 0x071c}, {16, 0}, {5, 0x071c}, {31, 0}}, .partsCount = 9},

        {.parts = new image_row_part_t[9]{{29, 0}, {6, 0x071c}, {15, 0}, {7, 0x071c}, {64, 0}, {7, 0x071c}, {16, 0}, {5, 0x071c}, {31, 0}}, .partsCount = 9},

        {.parts = new image_row_part_t[9]{{29, 0}, {6, 0x071c}, {16, 0}, {6, 0x071c}, {64, 0}, {6, 0x071c}, {16, 0}, {6, 0x071c}, {31, 0}}, .partsCount = 9},

        {.parts = new image_row_part_t[9]{{30, 0}, {6, 0x071c}, {16, 0}, {6, 0x071c}, {62, 0}, {6, 0x071c}, {17, 0}, {5, 0x071c}, {32, 0}}, .partsCount = 9},

        {.parts = new image_row_part_t[9]{{30, 0}, {6, 0x071c}, {17, 0}, {6, 0x071c}, {60, 0}, {6, 0x071c}, {17, 0}, {6, 0x071c}, {32, 0}}, .partsCount = 9},

        {.parts = new image_row_part_t[9]{{31, 0}, {6, 0x071c}, {16, 0}, {7, 0x071c}, {58, 0}, {7, 0x071c}, {17, 0}, {5, 0x071c}, {33, 0}}, .partsCount = 9},

        {.parts = new image_row_part_t[9]{{31, 0}, {6, 0x071c}, {17, 0}, {7, 0x071c}, {56, 0}, {7, 0x071c}, {17, 0}, {6, 0x071c}, {33, 0}}, .partsCount = 9},

        {.parts = new image_row_part_t[9]{{32, 0}, {6, 0x071c}, {17, 0}, {7, 0x071c}, {54, 0}, {7, 0x071c}, {17, 0}, {6, 0x071c}, {34, 0}}, .partsCount = 9},

        {.parts = new image_row_part_t[9]{{32, 0}, {6, 0x071c}, {18, 0}, {7, 0x071c}, {52, 0}, {7, 0x071c}, {18, 0}, {6, 0x071c}, {34, 0}}, .partsCount = 9},

        {.parts = new image_row_part_t[9]{{33, 0}, {6, 0x071c}, {18, 0}, {7, 0x071c}, {50, 0}, {7, 0x071c}, {18, 0}, {6, 0x071c}, {35, 0}}, .partsCount = 9},

        {.parts = new image_row_part_t[9]{{34, 0}, {6, 0x071c}, {18, 0}, {8, 0x071c}, {46, 0}, {8, 0x071c}, {19, 0}, {5, 0x071c}, {36, 0}}, .partsCount = 9},

        {.parts = new image_row_part_t[9]{{34, 0}, {6, 0x071c}, {19, 0}, {8, 0x071c}, {44, 0}, {8, 0x071c}, {19, 0}, {6, 0x071c}, {36, 0}}, .partsCount = 9},

        {.parts = new image_row_part_t[9]{{35, 0}, {6, 0x071c}, {19, 0}, {9, 0x071c}, {40, 0}, {9, 0x071c}, {19, 0}, {6, 0x071c}, {37, 0}}, .partsCount = 9},

        {.parts = new image_row_part_t[9]{{36, 0}, {6, 0x071c}, {19, 0}, {10, 0x071c}, {36, 0}, {10, 0x071c}, {19, 0}, {7, 0x071c}, {37, 0}}, .partsCount = 9},

        {.parts = new image_row_part_t[9]{{36, 0}, {6, 0x071c}, {21, 0}, {10, 0x071c}, {32, 0}, {10, 0x071c}, {21, 0}, {6, 0x071c}, {38, 0}}, .partsCount = 9},

        {.parts = new image_row_part_t[9]{{37, 0}, {6, 0x071c}, {21, 0}, {11, 0x071c}, {28, 0}, {11, 0x071c}, {21, 0}, {6, 0x071c}, {39, 0}}, .partsCount = 9},

        {.parts = new image_row_part_t[9]{{38, 0}, {6, 0x071c}, {22, 0}, {12, 0x071c}, {22, 0}, {12, 0x071c}, {22, 0}, {6, 0x071c}, {40, 0}}, .partsCount = 9},

        {.parts = new image_row_part_t[9]{{38, 0}, {7, 0x071c}, {22, 0}, {16, 0x071c}, {12, 0}, {16, 0x071c}, {22, 0}, {7, 0x071c}, {40, 0}}, .partsCount = 9},

        {.parts = new image_row_part_t[7]{{39, 0}, {7, 0x071c}, {23, 0}, {40, 0x071c}, {23, 0}, {7, 0x071c}, {41, 0}}, .partsCount = 7},

        {.parts = new image_row_part_t[7]{{40, 0}, {7, 0x071c}, {25, 0}, {34, 0x071c}, {25, 0}, {7, 0x071c}, {42, 0}}, .partsCount = 7},

        {.parts = new image_row_part_t[7]{{41, 0}, {7, 0x071c}, {26, 0}, {30, 0x071c}, {26, 0}, {7, 0x071c}, {43, 0}}, .partsCount = 7},

        {.parts = new image_row_part_t[7]{{42, 0}, {7, 0x071c}, {29, 0}, {23, 0x071c}, {28, 0}, {7, 0x071c}, {44, 0}}, .partsCount = 7},

        {.parts = new image_row_part_t[7]{{43, 0}, {7, 0x071c}, {33, 0}, {12, 0x071c}, {33, 0}, {7, 0x071c}, {45, 0}}, .partsCount = 7},

        {.parts = new image_row_part_t[5]{{44, 0}, {7, 0x071c}, {76, 0}, {7, 0x071c}, {46, 0}}, .partsCount = 5},

        {.parts = new image_row_part_t[5]{{45, 0}, {8, 0x071c}, {72, 0}, {8, 0x071c}, {47, 0}}, .partsCount = 5},

        {.parts = new image_row_part_t[5]{{46, 0}, {8, 0x071c}, {70, 0}, {8, 0x071c}, {48, 0}}, .partsCount = 5},

        {.parts = new image_row_part_t[5]{{47, 0}, {8, 0x071c}, {68, 0}, {8, 0x071c}, {49, 0}}, .partsCount = 5},

        {.parts = new image_row_part_t[5]{{48, 0}, {9, 0x071c}, {64, 0}, {9, 0x071c}, {50, 0}}, .partsCount = 5},

        {.parts = new image_row_part_t[5]{{50, 0}, {8, 0x071c}, {62, 0}, {8, 0x071c}, {52, 0}}, .partsCount = 5},

        {.parts = new image_row_part_t[5]{{51, 0}, {9, 0x071c}, {58, 0}, {9, 0x071c}, {53, 0}}, .partsCount = 5},

        {.parts = new image_row_part_t[5]{{52, 0}, {10, 0x071c}, {54, 0}, {10, 0x071c}, {54, 0}}, .partsCount = 5},

        {.parts = new image_row_part_t[5]{{54, 0}, {10, 0x071c}, {50, 0}, {10, 0x071c}, {56, 0}}, .partsCount = 5},

        {.parts = new image_row_part_t[5]{{55, 0}, {11, 0x071c}, {46, 0}, {11, 0x071c}, {57, 0}}, .partsCount = 5},

        {.parts = new image_row_part_t[5]{{57, 0}, {12, 0x071c}, {40, 0}, {12, 0x071c}, {59, 0}}, .partsCount = 5},

        {.parts = new image_row_part_t[5]{{59, 0}, {13, 0x071c}, {34, 0}, {13, 0x071c}, {61, 0}}, .partsCount = 5},

        {.parts = new image_row_part_t[5]{{61, 0}, {15, 0x071c}, {26, 0}, {15, 0x071c}, {63, 0}}, .partsCount = 5},

        {.parts = new image_row_part_t[5]{{63, 0}, {16, 0x071c}, {22, 0}, {14, 0x071c}, {65, 0}}, .partsCount = 5},

        {.parts = new image_row_part_t[5]{{66, 0}, {13, 0x071c}, {22, 0}, {11, 0x071c}, {68, 0}}, .partsCount = 5},

        {.parts = new image_row_part_t[5]{{68, 0}, {11, 0x071c}, {22, 0}, {9, 0x071c}, {70, 0}}, .partsCount = 5},

        {.parts = new image_row_part_t[5]{{71, 0}, {8, 0x071c}, {22, 0}, {6, 0x071c}, {73, 0}}, .partsCount = 5},

        {.parts = new image_row_part_t[5]{{74, 0}, {5, 0x071c}, {22, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 5},

        {.parts = new image_row_part_t[5]{{74, 0}, {5, 0x071c}, {22, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 5},

        {.parts = new image_row_part_t[5]{{74, 0}, {5, 0x071c}, {22, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 5},

        {.parts = new image_row_part_t[5]{{74, 0}, {5, 0x071c}, {22, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 5},

        {.parts = new image_row_part_t[5]{{74, 0}, {5, 0x071c}, {22, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 5},

        {.parts = new image_row_part_t[5]{{74, 0}, {5, 0x071c}, {22, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 5},

        {.parts = new image_row_part_t[5]{{74, 0}, {5, 0x071c}, {22, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 5},

        {.parts = new image_row_part_t[5]{{74, 0}, {5, 0x071c}, {22, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 5},

        {.parts = new image_row_part_t[5]{{74, 0}, {5, 0x071c}, {22, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 5},

        {.parts = new image_row_part_t[5]{{74, 0}, {5, 0x071c}, {22, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 5},

        {.parts = new image_row_part_t[5]{{74, 0}, {5, 0x071c}, {22, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 5},

        {.parts = new image_row_part_t[5]{{74, 0}, {5, 0x071c}, {22, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 5},

        {.parts = new image_row_part_t[5]{{74, 0}, {5, 0x071c}, {22, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 5},

        {.parts = new image_row_part_t[5]{{74, 0}, {5, 0x071c}, {22, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 5},

        {.parts = new image_row_part_t[5]{{74, 0}, {5, 0x071c}, {22, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 5},

        {.parts = new image_row_part_t[5]{{74, 0}, {5, 0x071c}, {22, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 5},

        {.parts = new image_row_part_t[5]{{74, 0}, {5, 0x071c}, {22, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 5},

        {.parts = new image_row_part_t[5]{{74, 0}, {5, 0x071c}, {22, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 5},

        {.parts = new image_row_part_t[5]{{74, 0}, {5, 0x071c}, {22, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 5},

        {.parts = new image_row_part_t[5]{{74, 0}, {5, 0x071c}, {22, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 5},

        {.parts = new image_row_part_t[5]{{74, 0}, {5, 0x071c}, {22, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 5},

        {.parts = new image_row_part_t[5]{{74, 0}, {5, 0x071c}, {22, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 5},

        {.parts = new image_row_part_t[5]{{74, 0}, {5, 0x071c}, {22, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 5},

        {.parts = new image_row_part_t[5]{{74, 0}, {5, 0x071c}, {22, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 5},

        {.parts = new image_row_part_t[5]{{74, 0}, {5, 0x071c}, {22, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 5},

        {.parts = new image_row_part_t[5]{{74, 0}, {5, 0x071c}, {22, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 5}}};
image_t const Images::round_1{
    .h = 180,
    .w = 180,
    .rows = new image_row_t[180]{
        {.parts = new image_row_part_t[5]{{74, 0}, {5, 0x071c}, {22, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 5},

        {.parts = new image_row_part_t[5]{{74, 0}, {5, 0x071c}, {22, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 5},

        {.parts = new image_row_part_t[5]{{74, 0}, {5, 0x071c}, {22, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 5},

        {.parts = new image_row_part_t[5]{{74, 0}, {5, 0x071c}, {22, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 5},

        {.parts = new image_row_part_t[5]{{74, 0}, {5, 0x071c}, {22, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 5},

        {.parts = new image_row_part_t[5]{{74, 0}, {5, 0x071c}, {22, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 5},

        {.parts = new image_row_part_t[5]{{74, 0}, {5, 0x071c}, {22, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 5},

        {.parts = new image_row_part_t[5]{{74, 0}, {5, 0x071c}, {22, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 5},

        {.parts = new image_row_part_t[5]{{74, 0}, {5, 0x071c}, {22, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 5},

        {.parts = new image_row_part_t[5]{{74, 0}, {5, 0x071c}, {22, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 5},

        {.parts = new image_row_part_t[5]{{74, 0}, {5, 0x071c}, {22, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 5},

        {.parts = new image_row_part_t[5]{{74, 0}, {5, 0x071c}, {22, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 5},

        {.parts = new image_row_part_t[5]{{74, 0}, {5, 0x071c}, {22, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 5},

        {.parts = new image_row_part_t[5]{{74, 0}, {5, 0x071c}, {22, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 5},

        {.parts = new image_row_part_t[5]{{74, 0}, {5, 0x071c}, {22, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 5},

        {.parts = new image_row_part_t[5]{{74, 0}, {5, 0x071c}, {22, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 5},

        {.parts = new image_row_part_t[5]{{74, 0}, {5, 0x071c}, {22, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 5},

        {.parts = new image_row_part_t[5]{{74, 0}, {5, 0x071c}, {22, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 5},

        {.parts = new image_row_part_t[5]{{74, 0}, {5, 0x071c}, {22, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 5},

        {.parts = new image_row_part_t[5]{{74, 0}, {5, 0x071c}, {22, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 5},

        {.parts = new image_row_part_t[5]{{74, 0}, {5, 0x071c}, {22, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 5},

        {.parts = new image_row_part_t[5]{{74, 0}, {5, 0x071c}, {22, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 5},

        {.parts = new image_row_part_t[5]{{74, 0}, {5, 0x071c}, {22, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 5},

        {.parts = new image_row_part_t[5]{{74, 0}, {5, 0x071c}, {22, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 5},

        {.parts = new image_row_part_t[5]{{74, 0}, {5, 0x071c}, {22, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 5},

        {.parts = new image_row_part_t[5]{{74, 0}, {5, 0x071c}, {22, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 5},

        {.parts = new image_row_part_t[5]{{72, 0}, {7, 0x071c}, {22, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 5},

        {.parts = new image_row_part_t[5]{{68, 0}, {11, 0x071c}, {22, 0}, {9, 0x071c}, {70, 0}}, .partsCount = 5},

        {.parts = new image_row_part_t[5]{{66, 0}, {13, 0x071c}, {22, 0}, {11, 0x071c}, {68, 0}}, .partsCount = 5},

        {.parts = new image_row_part_t[5]{{63, 0}, {16, 0x071c}, {22, 0}, {14, 0x071c}, {65, 0}}, .partsCount = 5},

        {.parts = new image_row_part_t[5]{{61, 0}, {15, 0x071c}, {26, 0}, {15, 0x071c}, {63, 0}}, .partsCount = 5},

        {.parts = new image_row_part_t[5]{{59, 0}, {13, 0x071c}, {34, 0}, {13, 0x071c}, {61, 0}}, .partsCount = 5},

        {.parts = new image_row_part_t[5]{{57, 0}, {12, 0x071c}, {40, 0}, {12, 0x071c}, {59, 0}}, .partsCount = 5},

        {.parts = new image_row_part_t[5]{{56, 0}, {10, 0x071c}, {46, 0}, {10, 0x071c}, {58, 0}}, .partsCount = 5},

        {.parts = new image_row_part_t[5]{{54, 0}, {10, 0x071c}, {50, 0}, {10, 0x071c}, {56, 0}}, .partsCount = 5},

        {.parts = new image_row_part_t[5]{{52, 0}, {10, 0x071c}, {54, 0}, {10, 0x071c}, {54, 0}}, .partsCount = 5},

        {.parts = new image_row_part_t[5]{{51, 0}, {9, 0x071c}, {58, 0}, {9, 0x071c}, {53, 0}}, .partsCount = 5},

        {.parts = new image_row_part_t[5]{{50, 0}, {9, 0x071c}, {60, 0}, {9, 0x071c}, {52, 0}}, .partsCount = 5},

        {.parts = new image_row_part_t[5]{{48, 0}, {9, 0x071c}, {64, 0}, {9, 0x071c}, {50, 0}}, .partsCount = 5},

        {.parts = new image_row_part_t[5]{{47, 0}, {8, 0x071c}, {68, 0}, {8, 0x071c}, {49, 0}}, .partsCount = 5},

        {.parts = new image_row_part_t[5]{{46, 0}, {8, 0x071c}, {70, 0}, {8, 0x071c}, {48, 0}}, .partsCount = 5},

        {.parts = new image_row_part_t[5]{{45, 0}, {8, 0x071c}, {72, 0}, {8, 0x071c}, {47, 0}}, .partsCount = 5},

        {.parts = new image_row_part_t[5]{{44, 0}, {7, 0x071c}, {76, 0}, {7, 0x071c}, {46, 0}}, .partsCount = 5},

        {.parts = new image_row_part_t[7]{{43, 0}, {7, 0x071c}, {33, 0}, {12, 0x071c}, {33, 0}, {7, 0x071c}, {45, 0}}, .partsCount = 7},

        {.parts = new image_row_part_t[7]{{42, 0}, {7, 0x071c}, {29, 0}, {22, 0x071c}, {29, 0}, {7, 0x071c}, {44, 0}}, .partsCount = 7},

        {.parts = new image_row_part_t[7]{{41, 0}, {7, 0x071c}, {26, 0}, {30, 0x071c}, {26, 0}, {7, 0x071c}, {43, 0}}, .partsCount = 7},

        {.parts = new image_row_part_t[7]{{40, 0}, {7, 0x071c}, {25, 0}, {34, 0x071c}, {25, 0}, {7, 0x071c}, {42, 0}}, .partsCount = 7},

        {.parts = new image_row_part_t[7]{{39, 0}, {7, 0x071c}, {24, 0}, {38, 0x071c}, {24, 0}, {7, 0x071c}, {41, 0}}, .partsCount = 7},

        {.parts = new image_row_part_t[9]{{39, 0}, {6, 0x071c}, {23, 0}, {15, 0x071c}, {12, 0}, {15, 0x071c}, {23, 0}, {6, 0x071c}, {41, 0}}, .partsCount = 9},

        {.parts = new image_row_part_t[9]{{38, 0}, {6, 0x071c}, {22, 0}, {12, 0x071c}, {22, 0}, {12, 0x071c}, {22, 0}, {6, 0x071c}, {40, 0}}, .partsCount = 9},

        {.parts = new image_row_part_t[9]{{37, 0}, {6, 0x071c}, {21, 0}, {11, 0x071c}, {28, 0}, {11, 0x071c}, {21, 0}, {6, 0x071c}, {39, 0}}, .partsCount = 9},

        {.parts = new image_row_part_t[9]{{36, 0}, {7, 0x071c}, {20, 0}, {10, 0x071c}, {32, 0}, {10, 0x071c}, {21, 0}, {6, 0x071c}, {38, 0}}, .partsCount = 9},

        {.parts = new image_row_part_t[9]{{36, 0}, {6, 0x071c}, {20, 0}, {9, 0x071c}, {36, 0}, {9, 0x071c}, {20, 0}, {6, 0x071c}, {38, 0}}, .partsCount = 9},

        {.parts = new image_row_part_t[9]{{35, 0}, {6, 0x071c}, {19, 0}, {9, 0x071c}, {40, 0}, {9, 0x071c}, {19, 0}, {6, 0x071c}, {37, 0}}, .partsCount = 9},

        {.parts = new image_row_part_t[9]{{34, 0}, {6, 0x071c}, {19, 0}, {8, 0x071c}, {44, 0}, {8, 0x071c}, {19, 0}, {6, 0x071c}, {36, 0}}, .partsCount = 9},

        {.parts = new image_row_part_t[9]{{34, 0}, {6, 0x071c}, {18, 0}, {8, 0x071c}, {46, 0}, {8, 0x071c}, {18, 0}, {6, 0x071c}, {36, 0}}, .partsCount = 9},

        {.parts = new image_row_part_t[9]{{33, 0}, {6, 0x071c}, {18, 0}, {8, 0x071c}, {48, 0}, {8, 0x071c}, {18, 0}, {6, 0x071c}, {35, 0}}, .partsCount = 9},

        {.parts = new image_row_part_t[9]{{33, 0}, {5, 0x071c}, {18, 0}, {7, 0x071c}, {52, 0}, {7, 0x071c}, {18, 0}, {6, 0x071c}, {34, 0}}, .partsCount = 9},

        {.parts = new image_row_part_t[9]{{32, 0}, {6, 0x071c}, {17, 0}, {7, 0x071c}, {54, 0}, {7, 0x071c}, {17, 0}, {6, 0x071c}, {34, 0}}, .partsCount = 9},

        {.parts = new image_row_part_t[9]{{31, 0}, {6, 0x071c}, {17, 0}, {7, 0x071c}, {56, 0}, {7, 0x071c}, {17, 0}, {6, 0x071c}, {33, 0}}, .partsCount = 9},

        {.parts = new image_row_part_t[9]{{31, 0}, {6, 0x071c}, {16, 0}, {7, 0x071c}, {58, 0}, {7, 0x071c}, {16, 0}, {6, 0x071c}, {33, 0}}, .partsCount = 9},

        {.parts = new image_row_part_t[9]{{31, 0}, {5, 0x071c}, {17, 0}, {6, 0x071c}, {60, 0}, {6, 0x071c}, {17, 0}, {6, 0x071c}, {32, 0}}, .partsCount = 9},

        {.parts = new image_row_part_t[9]{{30, 0}, {6, 0x071c}, {16, 0}, {6, 0x071c}, {62, 0}, {6, 0x071c}, {16, 0}, {6, 0x071c}, {32, 0}}, .partsCount = 9},

        {.parts = new image_row_part_t[9]{{30, 0}, {5, 0x071c}, {16, 0}, {7, 0x071c}, {62, 0}, {7, 0x071c}, {16, 0}, {6, 0x071c}, {31, 0}}, .partsCount = 9},

        {.parts = new image_row_part_t[9]{{29, 0}, {6, 0x071c}, {15, 0}, {7, 0x071c}, {64, 0}, {7, 0x071c}, {15, 0}, {6, 0x071c}, {31, 0}}, .partsCount = 9},

        {.parts = new image_row_part_t[9]{{29, 0}, {5, 0x071c}, {16, 0}, {6, 0x071c}, {66, 0}, {6, 0x071c}, {16, 0}, {5, 0x071c}, {31, 0}}, .partsCount = 9},

        {.parts = new image_row_part_t[9]{{28, 0}, {6, 0x071c}, {15, 0}, {6, 0x071c}, {68, 0}, {6, 0x071c}, {15, 0}, {6, 0x071c}, {30, 0}}, .partsCount = 9},

        {.parts = new image_row_part_t[9]{{28, 0}, {5, 0x071c}, {16, 0}, {6, 0x071c}, {69, 0}, {5, 0x071c}, {16, 0}, {5, 0x071c}, {30, 0}}, .partsCount = 9},

        {.parts = new image_row_part_t[9]{{28, 0}, {5, 0x071c}, {15, 0}, {6, 0x071c}, {70, 0}, {6, 0x071c}, {15, 0}, {5, 0x071c}, {30, 0}}, .partsCount = 9},

        {.parts = new image_row_part_t[9]{{27, 0}, {6, 0x071c}, {15, 0}, {5, 0x071c}, {72, 0}, {5, 0x071c}, {15, 0}, {6, 0x071c}, {29, 0}}, .partsCount = 9},

        {.parts = new image_row_part_t[9]{{27, 0}, {5, 0x071c}, {15, 0}, {6, 0x071c}, {72, 0}, {6, 0x071c}, {15, 0}, {5, 0x071c}, {29, 0}}, .partsCount = 9},

        {.parts = new image_row_part_t[9]{{27, 0}, {5, 0x071c}, {15, 0}, {5, 0x071c}, {74, 0}, {5, 0x071c}, {15, 0}, {5, 0x071c}, {29, 0}}, .partsCount = 9},

        {.parts = new image_row_part_t[9]{{26, 0}, {6, 0x071c}, {14, 0}, {6, 0x071c}, {74, 0}, {6, 0x071c}, {15, 0}, {5, 0x071c}, {28, 0}}, .partsCount = 9},

        {.parts = new image_row_part_t[9]{{26, 0}, {5, 0x071c}, {15, 0}, {5, 0x071c}, {76, 0}, {5, 0x071c}, {15, 0}, {5, 0x071c}, {28, 0}}, .partsCount = 9},

        {.parts = new image_row_part_t[7]{{31, 0x071c}, {15, 0}, {5, 0x071c}, {76, 0}, {5, 0x071c}, {15, 0}, {33, 0x071c}}, .partsCount = 7},

        {.parts = new image_row_part_t[7]{{31, 0x071c}, {14, 0}, {6, 0x071c}, {76, 0}, {6, 0x071c}, {14, 0}, {33, 0x071c}}, .partsCount = 7},

        {.parts = new image_row_part_t[7]{{31, 0x071c}, {14, 0}, {5, 0x071c}, {78, 0}, {5, 0x071c}, {15, 0}, {32, 0x071c}}, .partsCount = 7},

        {.parts = new image_row_part_t[7]{{30, 0x071c}, {15, 0}, {5, 0x071c}, {78, 0}, {5, 0x071c}, {15, 0}, {32, 0x071c}}, .partsCount = 7},

        {.parts = new image_row_part_t[9]{{30, 0x071c}, {14, 0}, {6, 0x071c}, {78, 0}, {6, 0x071c}, {14, 0}, {9, 0x071c}, {3, 0xFF80}, {20, 0x071c}}, .partsCount = 9},

        {.parts = new image_row_part_t[7]{{44, 0}, {5, 0x071c}, {80, 0}, {5, 0x071c}, {22, 0}, {5, 0xFF80}, {19, 0}}, .partsCount = 7},

        {.parts = new image_row_part_t[7]{{44, 0}, {5, 0x071c}, {80, 0}, {5, 0x071c}, {21, 0}, {8, 0xFF80}, {17, 0}}, .partsCount = 7},

        {.parts = new image_row_part_t[7]{{44, 0}, {5, 0x071c}, {80, 0}, {5, 0x071c}, {21, 0}, {10, 0xFF80}, {15, 0}}, .partsCount = 7},

        {.parts = new image_row_part_t[7]{{44, 0}, {5, 0x071c}, {80, 0}, {5, 0x071c}, {21, 0}, {12, 0xFF80}, {13, 0}}, .partsCount = 7},

        {.parts = new image_row_part_t[7]{{44, 0}, {5, 0x071c}, {80, 0}, {6, 0x071c}, {1, 0}, {33, 0xFF80}, {11, 0}}, .partsCount = 7},

        {.parts = new image_row_part_t[6]{{43, 0}, {5, 0x071c}, {82, 0}, {5, 0x071c}, {36, 0xFF80}, {9, 0}}, .partsCount = 6},

        {.parts = new image_row_part_t[6]{{43, 0}, {5, 0x071c}, {82, 0}, {5, 0x071c}, {38, 0xFF80}, {7, 0}}, .partsCount = 6},

        {.parts = new image_row_part_t[6]{{43, 0}, {5, 0x071c}, {82, 0}, {5, 0x071c}, {40, 0xFF80}, {5, 0}}, .partsCount = 6},

        {.parts = new image_row_part_t[6]{{43, 0}, {5, 0x071c}, {82, 0}, {5, 0x071c}, {42, 0xFF80}, {3, 0}}, .partsCount = 6},

        {.parts = new image_row_part_t[6]{{43, 0}, {5, 0x071c}, {82, 0}, {5, 0x071c}, {43, 0xFF80}, {2, 0}}, .partsCount = 6},

        {.parts = new image_row_part_t[6]{{43, 0}, {5, 0x071c}, {82, 0}, {5, 0x071c}, {44, 0xFF80}, {1, 0}}, .partsCount = 6},

        {.parts = new image_row_part_t[6]{{43, 0}, {5, 0x071c}, {82, 0}, {5, 0x071c}, {44, 0xFF80}, {1, 0}}, .partsCount = 6},

        {.parts = new image_row_part_t[6]{{43, 0}, {5, 0x071c}, {82, 0}, {5, 0x071c}, {43, 0xFF80}, {2, 0}}, .partsCount = 6},

        {.parts = new image_row_part_t[6]{{43, 0}, {5, 0x071c}, {82, 0}, {5, 0x071c}, {42, 0xFF80}, {3, 0}}, .partsCount = 6},

        {.parts = new image_row_part_t[6]{{43, 0}, {5, 0x071c}, {82, 0}, {5, 0x071c}, {40, 0xFF80}, {5, 0}}, .partsCount = 6},

        {.parts = new image_row_part_t[6]{{43, 0}, {5, 0x071c}, {82, 0}, {5, 0x071c}, {38, 0xFF80}, {7, 0}}, .partsCount = 6},

        {.parts = new image_row_part_t[6]{{43, 0}, {5, 0x071c}, {82, 0}, {5, 0x071c}, {36, 0xFF80}, {9, 0}}, .partsCount = 6},

        {.parts = new image_row_part_t[6]{{44, 0}, {5, 0x071c}, {81, 0}, {5, 0x071c}, {34, 0xFF80}, {11, 0}}, .partsCount = 6},

        {.parts = new image_row_part_t[8]{{44, 0}, {5, 0x071c}, {80, 0}, {5, 0x071c}, {16, 0xFF80}, {5, 0}, {12, 0xFF80}, {13, 0}}, .partsCount = 8},

        {.parts = new image_row_part_t[8]{{44, 0}, {5, 0x071c}, {80, 0}, {5, 0x071c}, {15, 0xFF80}, {6, 0}, {11, 0xFF80}, {14, 0}}, .partsCount = 8},

        {.parts = new image_row_part_t[8]{{44, 0}, {5, 0x071c}, {80, 0}, {5, 0x071c}, {15, 0xFF80}, {6, 0}, {9, 0xFF80}, {16, 0}}, .partsCount = 8},

        {.parts = new image_row_part_t[9]{{30, 0x071c}, {14, 0}, {5, 0x071c}, {80, 0}, {5, 0x071c}, {14, 0xFF80}, {8, 0x071c}, {6, 0xFF80}, {18, 0x071c}}, .partsCount = 9},

        {.parts = new image_row_part_t[9]{{30, 0x071c}, {14, 0}, {6, 0x071c}, {78, 0}, {6, 0x071c}, {14, 0xFF80}, {9, 0x071c}, {3, 0xFF80}, {20, 0x071c}}, .partsCount = 9},

        {.parts = new image_row_part_t[7]{{30, 0x071c}, {15, 0}, {5, 0x071c}, {78, 0}, {5, 0x071c}, {15, 0xFF80}, {32, 0x071c}}, .partsCount = 7},

        {.parts = new image_row_part_t[7]{{31, 0x071c}, {14, 0}, {5, 0x071c}, {78, 0}, {5, 0x071c}, {15, 0xFF80}, {32, 0x071c}}, .partsCount = 7},

        {.parts = new image_row_part_t[7]{{31, 0x071c}, {14, 0}, {6, 0x071c}, {77, 0}, {5, 0x071c}, {14, 0xFF80}, {33, 0x071c}}, .partsCount = 7},

        {.parts = new image_row_part_t[9]{{26, 0}, {5, 0x071c}, {15, 0}, {5, 0x071c}, {76, 0}, {5, 0x071c}, {15, 0xFF80}, {5, 0x071c}, {28, 0}}, .partsCount = 9},

        {.parts = new image_row_part_t[9]{{26, 0}, {5, 0x071c}, {15, 0}, {5, 0x071c}, {76, 0}, {5, 0x071c}, {15, 0xFF80}, {5, 0x071c}, {28, 0}}, .partsCount = 9},

        {.parts = new image_row_part_t[9]{{26, 0}, {6, 0x071c}, {14, 0}, {6, 0x071c}, {74, 0}, {6, 0x071c}, {15, 0xFF80}, {5, 0x071c}, {28, 0}}, .partsCount = 9},

        {.parts = new image_row_part_t[9]{{27, 0}, {5, 0x071c}, {15, 0}, {5, 0x071c}, {74, 0}, {5, 0x071c}, {15, 0xFF80}, {5, 0x071c}, {29, 0}}, .partsCount = 9},

        {.parts = new image_row_part_t[9]{{27, 0}, {5, 0x071c}, {15, 0}, {6, 0x071c}, {72, 0}, {6, 0x071c}, {15, 0xFF80}, {5, 0x071c}, {29, 0}}, .partsCount = 9},

        {.parts = new image_row_part_t[9]{{27, 0}, {6, 0x071c}, {15, 0}, {5, 0x071c}, {72, 0}, {5, 0x071c}, {16, 0xFF80}, {5, 0x071c}, {29, 0}}, .partsCount = 9},

        {.parts = new image_row_part_t[9]{{28, 0}, {5, 0x071c}, {15, 0}, {6, 0x071c}, {70, 0}, {6, 0x071c}, {15, 0xFF80}, {5, 0x071c}, {30, 0}}, .partsCount = 9},

        {.parts = new image_row_part_t[9]{{28, 0}, {5, 0x071c}, {16, 0}, {6, 0x071c}, {69, 0}, {5, 0x071c}, {16, 0xFF80}, {5, 0x071c}, {30, 0}}, .partsCount = 9},

        {.parts = new image_row_part_t[9]{{28, 0}, {6, 0x071c}, {15, 0}, {6, 0x071c}, {68, 0}, {6, 0x071c}, {15, 0xFF80}, {6, 0x071c}, {30, 0}}, .partsCount = 9},

        {.parts = new image_row_part_t[9]{{29, 0}, {5, 0x071c}, {16, 0}, {6, 0x071c}, {66, 0}, {6, 0x071c}, {16, 0xFF80}, {5, 0x071c}, {31, 0}}, .partsCount = 9},

        {.parts = new image_row_part_t[9]{{29, 0}, {6, 0x071c}, {15, 0}, {7, 0x071c}, {64, 0}, {7, 0x071c}, {16, 0xFF80}, {5, 0x071c}, {31, 0}}, .partsCount = 9},

        {.parts = new image_row_part_t[9]{{29, 0}, {6, 0x071c}, {16, 0}, {6, 0x071c}, {64, 0}, {6, 0x071c}, {16, 0xFF80}, {6, 0x071c}, {31, 0}}, .partsCount = 9},

        {.parts = new image_row_part_t[9]{{30, 0}, {6, 0x071c}, {16, 0}, {6, 0x071c}, {62, 0}, {6, 0x071c}, {17, 0xFF80}, {5, 0x071c}, {32, 0}}, .partsCount = 9},

        {.parts = new image_row_part_t[9]{{30, 0}, {6, 0x071c}, {17, 0}, {6, 0x071c}, {60, 0}, {6, 0x071c}, {17, 0xFF80}, {6, 0x071c}, {32, 0}}, .partsCount = 9},

        {.parts = new image_row_part_t[9]{{31, 0}, {6, 0x071c}, {16, 0}, {7, 0x071c}, {58, 0}, {7, 0x071c}, {17, 0xFF80}, {5, 0x071c}, {33, 0}}, .partsCount = 9},

        {.parts = new image_row_part_t[9]{{31, 0}, {6, 0x071c}, {17, 0}, {7, 0x071c}, {56, 0}, {7, 0x071c}, {17, 0xFF80}, {6, 0x071c}, {33, 0}}, .partsCount = 9},

        {.parts = new image_row_part_t[9]{{32, 0}, {6, 0x071c}, {17, 0}, {7, 0x071c}, {54, 0}, {7, 0x071c}, {17, 0xFF80}, {6, 0x071c}, {34, 0}}, .partsCount = 9},

        {.parts = new image_row_part_t[9]{{32, 0}, {6, 0x071c}, {18, 0}, {7, 0x071c}, {52, 0}, {7, 0x071c}, {18, 0xFF80}, {6, 0x071c}, {34, 0}}, .partsCount = 9},

        {.parts = new image_row_part_t[9]{{33, 0}, {6, 0x071c}, {18, 0}, {7, 0x071c}, {50, 0}, {7, 0x071c}, {18, 0xFF80}, {6, 0x071c}, {35, 0}}, .partsCount = 9},

        {.parts = new image_row_part_t[9]{{34, 0}, {6, 0x071c}, {18, 0}, {8, 0x071c}, {46, 0}, {8, 0x071c}, {19, 0xFF80}, {5, 0x071c}, {36, 0}}, .partsCount = 9},

        {.parts = new image_row_part_t[9]{{34, 0}, {6, 0x071c}, {19, 0}, {8, 0x071c}, {44, 0}, {8, 0x071c}, {19, 0xFF80}, {6, 0x071c}, {36, 0}}, .partsCount = 9},

        {.parts = new image_row_part_t[9]{{35, 0}, {6, 0x071c}, {19, 0}, {9, 0x071c}, {40, 0}, {9, 0x071c}, {19, 0xFF80}, {6, 0x071c}, {37, 0}}, .partsCount = 9},

        {.parts = new image_row_part_t[9]{{36, 0}, {6, 0x071c}, {19, 0}, {10, 0x071c}, {36, 0}, {10, 0x071c}, {19, 0xFF80}, {7, 0x071c}, {37, 0}}, .partsCount = 9},

        {.parts = new image_row_part_t[9]{{36, 0}, {6, 0x071c}, {21, 0}, {10, 0x071c}, {32, 0}, {10, 0x071c}, {21, 0xFF80}, {6, 0x071c}, {38, 0}}, .partsCount = 9},

        {.parts = new image_row_part_t[9]{{37, 0}, {6, 0x071c}, {21, 0}, {11, 0x071c}, {28, 0}, {11, 0x071c}, {21, 0xFF80}, {6, 0x071c}, {39, 0}}, .partsCount = 9},

        {.parts = new image_row_part_t[9]{{38, 0}, {6, 0x071c}, {22, 0}, {12, 0x071c}, {22, 0}, {12, 0x071c}, {22, 0xFF80}, {6, 0x071c}, {40, 0}}, .partsCount = 9},

        {.parts = new image_row_part_t[9]{{38, 0}, {7, 0x071c}, {22, 0}, {16, 0x071c}, {12, 0}, {16, 0x071c}, {22, 0xFF80}, {7, 0x071c}, {40, 0}}, .partsCount = 9},

        {.parts = new image_row_part_t[7]{{39, 0}, {7, 0x071c}, {23, 0}, {40, 0x071c}, {23, 0xFF80}, {7, 0x071c}, {41, 0}}, .partsCount = 7},

        {.parts = new image_row_part_t[7]{{40, 0}, {7, 0x071c}, {25, 0}, {34, 0x071c}, {25, 0xFF80}, {7, 0x071c}, {42, 0}}, .partsCount = 7},

        {.parts = new image_row_part_t[7]{{41, 0}, {7, 0x071c}, {26, 0}, {30, 0x071c}, {26, 0xFF80}, {7, 0x071c}, {43, 0}}, .partsCount = 7},

        {.parts = new image_row_part_t[7]{{42, 0}, {7, 0x071c}, {29, 0}, {23, 0x071c}, {28, 0xFF80}, {7, 0x071c}, {44, 0}}, .partsCount = 7},

        {.parts = new image_row_part_t[8]{{43, 0}, {7, 0x071c}, {31, 0}, {3, 0xFF80}, {11, 0x071c}, {33, 0xFF80}, {7, 0x071c}, {45, 0}}, .partsCount = 8},

        {.parts = new image_row_part_t[6]{{44, 0}, {7, 0x071c}, {29, 0}, {47, 0xFF80}, {7, 0x071c}, {46, 0}}, .partsCount = 6},

        {.parts = new image_row_part_t[6]{{45, 0}, {8, 0x071c}, {27, 0}, {45, 0xFF80}, {8, 0x071c}, {47, 0}}, .partsCount = 6},

        {.parts = new image_row_part_t[6]{{46, 0}, {8, 0x071c}, {26, 0}, {44, 0xFF80}, {8, 0x071c}, {48, 0}}, .partsCount = 6},

        {.parts = new image_row_part_t[6]{{47, 0}, {8, 0x071c}, {25, 0}, {43, 0xFF80}, {8, 0x071c}, {49, 0}}, .partsCount = 6},

        {.parts = new image_row_part_t[6]{{48, 0}, {9, 0x071c}, {23, 0}, {41, 0xFF80}, {9, 0x071c}, {50, 0}}, .partsCount = 6},

        {.parts = new image_row_part_t[6]{{50, 0}, {8, 0x071c}, {22, 0}, {40, 0xFF80}, {8, 0x071c}, {52, 0}}, .partsCount = 6},

        {.parts = new image_row_part_t[6]{{51, 0}, {9, 0x071c}, {20, 0}, {38, 0xFF80}, {9, 0x071c}, {53, 0}}, .partsCount = 6},

        {.parts = new image_row_part_t[6]{{52, 0}, {10, 0x071c}, {18, 0}, {36, 0xFF80}, {10, 0x071c}, {54, 0}}, .partsCount = 6},

        {.parts = new image_row_part_t[6]{{54, 0}, {10, 0x071c}, {16, 0}, {34, 0xFF80}, {10, 0x071c}, {56, 0}}, .partsCount = 6},

        {.parts = new image_row_part_t[6]{{55, 0}, {11, 0x071c}, {14, 0}, {32, 0xFF80}, {11, 0x071c}, {57, 0}}, .partsCount = 6},

        {.parts = new image_row_part_t[6]{{57, 0}, {12, 0x071c}, {11, 0}, {29, 0xFF80}, {12, 0x071c}, {59, 0}}, .partsCount = 6},

        {.parts = new image_row_part_t[6]{{59, 0}, {13, 0x071c}, {8, 0}, {26, 0xFF80}, {13, 0x071c}, {61, 0}}, .partsCount = 6},

        {.parts = new image_row_part_t[6]{{61, 0}, {15, 0x071c}, {4, 0}, {22, 0xFF80}, {15, 0x071c}, {63, 0}}, .partsCount = 6},

        {.parts = new image_row_part_t[6]{{63, 0}, {16, 0x071c}, {1, 0}, {21, 0xFF80}, {14, 0x071c}, {65, 0}}, .partsCount = 6},

        {.parts = new image_row_part_t[6]{{66, 0}, {13, 0x071c}, {1, 0}, {21, 0xFF80}, {11, 0x071c}, {68, 0}}, .partsCount = 6},

        {.parts = new image_row_part_t[6]{{68, 0}, {11, 0x071c}, {1, 0}, {21, 0xFF80}, {9, 0x071c}, {70, 0}}, .partsCount = 6},

        {.parts = new image_row_part_t[6]{{71, 0}, {8, 0x071c}, {1, 0}, {21, 0xFF80}, {6, 0x071c}, {73, 0}}, .partsCount = 6},

        {.parts = new image_row_part_t[6]{{74, 0}, {5, 0x071c}, {1, 0}, {21, 0xFF80}, {5, 0x071c}, {74, 0}}, .partsCount = 6},

        {.parts = new image_row_part_t[6]{{74, 0}, {5, 0x071c}, {1, 0}, {21, 0xFF80}, {5, 0x071c}, {74, 0}}, .partsCount = 6},

        {.parts = new image_row_part_t[6]{{74, 0}, {5, 0x071c}, {1, 0}, {21, 0xFF80}, {5, 0x071c}, {74, 0}}, .partsCount = 6},

        {.parts = new image_row_part_t[6]{{74, 0}, {5, 0x071c}, {1, 0}, {21, 0xFF80}, {5, 0x071c}, {74, 0}}, .partsCount = 6},

        {.parts = new image_row_part_t[6]{{74, 0}, {5, 0x071c}, {1, 0}, {21, 0xFF80}, {5, 0x071c}, {74, 0}}, .partsCount = 6},

        {.parts = new image_row_part_t[6]{{74, 0}, {5, 0x071c}, {1, 0}, {21, 0xFF80}, {5, 0x071c}, {74, 0}}, .partsCount = 6},

        {.parts = new image_row_part_t[6]{{74, 0}, {5, 0x071c}, {1, 0}, {21, 0xFF80}, {5, 0x071c}, {74, 0}}, .partsCount = 6},

        {.parts = new image_row_part_t[6]{{74, 0}, {5, 0x071c}, {1, 0}, {21, 0xFF80}, {5, 0x071c}, {74, 0}}, .partsCount = 6},

        {.parts = new image_row_part_t[6]{{74, 0}, {5, 0x071c}, {1, 0}, {21, 0xFF80}, {5, 0x071c}, {74, 0}}, .partsCount = 6},

        {.parts = new image_row_part_t[6]{{74, 0}, {5, 0x071c}, {1, 0}, {21, 0xFF80}, {5, 0x071c}, {74, 0}}, .partsCount = 6},

        {.parts = new image_row_part_t[6]{{74, 0}, {5, 0x071c}, {1, 0}, {21, 0xFF80}, {5, 0x071c}, {74, 0}}, .partsCount = 6},

        {.parts = new image_row_part_t[6]{{74, 0}, {5, 0x071c}, {1, 0}, {21, 0xFF80}, {5, 0x071c}, {74, 0}}, .partsCount = 6},

        {.parts = new image_row_part_t[6]{{74, 0}, {5, 0x071c}, {1, 0}, {21, 0xFF80}, {5, 0x071c}, {74, 0}}, .partsCount = 6},

        {.parts = new image_row_part_t[6]{{74, 0}, {5, 0x071c}, {1, 0}, {21, 0xFF80}, {5, 0x071c}, {74, 0}}, .partsCount = 6},

        {.parts = new image_row_part_t[6]{{74, 0}, {5, 0x071c}, {1, 0}, {21, 0xFF80}, {5, 0x071c}, {74, 0}}, .partsCount = 6},

        {.parts = new image_row_part_t[6]{{74, 0}, {5, 0x071c}, {1, 0}, {21, 0xFF80}, {5, 0x071c}, {74, 0}}, .partsCount = 6},

        {.parts = new image_row_part_t[6]{{74, 0}, {5, 0x071c}, {1, 0}, {21, 0xFF80}, {5, 0x071c}, {74, 0}}, .partsCount = 6},

        {.parts = new image_row_part_t[6]{{74, 0}, {5, 0x071c}, {1, 0}, {21, 0xFF80}, {5, 0x071c}, {74, 0}}, .partsCount = 6},

        {.parts = new image_row_part_t[6]{{74, 0}, {5, 0x071c}, {1, 0}, {21, 0xFF80}, {5, 0x071c}, {74, 0}}, .partsCount = 6},

        {.parts = new image_row_part_t[6]{{74, 0}, {5, 0x071c}, {1, 0}, {21, 0xFF80}, {5, 0x071c}, {74, 0}}, .partsCount = 6},

        {.parts = new image_row_part_t[6]{{74, 0}, {5, 0x071c}, {1, 0}, {21, 0xFF80}, {5, 0x071c}, {74, 0}}, .partsCount = 6},

        {.parts = new image_row_part_t[6]{{74, 0}, {5, 0x071c}, {1, 0}, {21, 0xFF80}, {5, 0x071c}, {74, 0}}, .partsCount = 6},

        {.parts = new image_row_part_t[6]{{74, 0}, {5, 0x071c}, {1, 0}, {21, 0xFF80}, {5, 0x071c}, {74, 0}}, .partsCount = 6},

        {.parts = new image_row_part_t[6]{{74, 0}, {5, 0x071c}, {1, 0}, {21, 0xFF80}, {5, 0x071c}, {74, 0}}, .partsCount = 6},

        {.parts = new image_row_part_t[6]{{74, 0}, {5, 0x071c}, {1, 0}, {21, 0xFF80}, {5, 0x071c}, {74, 0}}, .partsCount = 6},

        {.parts = new image_row_part_t[6]{{74, 0}, {5, 0x071c}, {1, 0}, {21, 0xFF80}, {5, 0x071c}, {74, 0}}, .partsCount = 6}}};
image_t const Images::round_2{
    .h = 180,
    .w = 180,
    .rows = new image_row_t[180]{
        {.parts = new image_row_part_t[7]{{74, 0}, {5, 0x071c}, {10, 0}, {2, 0xFF80}, {10, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 7},

        {.parts = new image_row_part_t[7]{{74, 0}, {5, 0x071c}, {9, 0}, {4, 0xFF80}, {9, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 7},

        {.parts = new image_row_part_t[7]{{74, 0}, {5, 0x071c}, {8, 0}, {6, 0xFF80}, {8, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 7},

        {.parts = new image_row_part_t[7]{{74, 0}, {5, 0x071c}, {8, 0}, {6, 0xFF80}, {8, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 7},

        {.parts = new image_row_part_t[7]{{74, 0}, {5, 0x071c}, {7, 0}, {8, 0xFF80}, {7, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 7},

        {.parts = new image_row_part_t[7]{{74, 0}, {5, 0x071c}, {7, 0}, {8, 0xFF80}, {7, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 7},

        {.parts = new image_row_part_t[7]{{74, 0}, {5, 0x071c}, {7, 0}, {9, 0xFF80}, {6, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 7},

        {.parts = new image_row_part_t[7]{{74, 0}, {5, 0x071c}, {6, 0}, {10, 0xFF80}, {6, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 7},

        {.parts = new image_row_part_t[7]{{74, 0}, {5, 0x071c}, {6, 0}, {10, 0xFF80}, {6, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 7},

        {.parts = new image_row_part_t[7]{{74, 0}, {5, 0x071c}, {5, 0}, {12, 0xFF80}, {5, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 7},

        {.parts = new image_row_part_t[7]{{74, 0}, {5, 0x071c}, {5, 0}, {12, 0xFF80}, {5, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 7},

        {.parts = new image_row_part_t[7]{{74, 0}, {5, 0x071c}, {4, 0}, {14, 0xFF80}, {4, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 7},

        {.parts = new image_row_part_t[7]{{74, 0}, {5, 0x071c}, {4, 0}, {14, 0xFF80}, {4, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 7},

        {.parts = new image_row_part_t[7]{{74, 0}, {5, 0x071c}, {3, 0}, {16, 0xFF80}, {3, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 7},

        {.parts = new image_row_part_t[7]{{74, 0}, {5, 0x071c}, {3, 0}, {16, 0xFF80}, {3, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 7},

        {.parts = new image_row_part_t[7]{{74, 0}, {5, 0x071c}, {2, 0}, {18, 0xFF80}, {2, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 7},

        {.parts = new image_row_part_t[7]{{74, 0}, {5, 0x071c}, {2, 0}, {18, 0xFF80}, {2, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 7},

        {.parts = new image_row_part_t[7]{{74, 0}, {5, 0x071c}, {2, 0}, {18, 0xFF80}, {2, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 7},

        {.parts = new image_row_part_t[7]{{74, 0}, {5, 0x071c}, {1, 0}, {20, 0xFF80}, {1, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 7},

        {.parts = new image_row_part_t[7]{{74, 0}, {5, 0x071c}, {1, 0}, {20, 0xFF80}, {1, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 7},

        {.parts = new image_row_part_t[5]{{74, 0}, {5, 0x071c}, {22, 0xFF80}, {5, 0x071c}, {74, 0}}, .partsCount = 5},

        {.parts = new image_row_part_t[5]{{74, 0}, {5, 0x071c}, {22, 0xFF80}, {5, 0x071c}, {74, 0}}, .partsCount = 5},

        {.parts = new image_row_part_t[5]{{74, 0}, {5, 0x071c}, {22, 0xFF80}, {5, 0x071c}, {74, 0}}, .partsCount = 5},

        {.parts = new image_row_part_t[7]{{74, 0}, {5, 0x071c}, {1, 0}, {20, 0xFF80}, {1, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 7},

        {.parts = new image_row_part_t[7]{{74, 0}, {5, 0x071c}, {4, 0}, {14, 0xFF80}, {4, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 7},

        {.parts = new image_row_part_t[7]{{74, 0}, {5, 0x071c}, {4, 0}, {14, 0xFF80}, {4, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 7},

        {.parts = new image_row_part_t[7]{{72, 0}, {7, 0x071c}, {4, 0}, {14, 0xFF80}, {4, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 7},

        {.parts = new image_row_part_t[7]{{68, 0}, {11, 0x071c}, {4, 0}, {14, 0xFF80}, {4, 0}, {9, 0x071c}, {70, 0}}, .partsCount = 7},

        {.parts = new image_row_part_t[7]{{66, 0}, {13, 0x071c}, {4, 0}, {14, 0xFF80}, {4, 0}, {11, 0x071c}, {68, 0}}, .partsCount = 7},

        {.parts = new image_row_part_t[6]{{63, 0}, {16, 0x071c}, {4, 0}, {20, 0xFF80}, {12, 0x071c}, {65, 0}}, .partsCount = 6},

        {.parts = new image_row_part_t[6]{{61, 0}, {15, 0x071c}, {7, 0}, {21, 0xFF80}, {13, 0x071c}, {63, 0}}, .partsCount = 6},

        {.parts = new image_row_part_t[6]{{59, 0}, {13, 0x071c}, {11, 0}, {23, 0xFF80}, {13, 0x071c}, {61, 0}}, .partsCount = 6},

        {.parts = new image_row_part_t[6]{{57, 0}, {12, 0x071c}, {14, 0}, {26, 0xFF80}, {12, 0x071c}, {59, 0}}, .partsCount = 6},

        {.parts = new image_row_part_t[6]{{56, 0}, {10, 0x071c}, {17, 0}, {29, 0xFF80}, {10, 0x071c}, {58, 0}}, .partsCount = 6},

        {.parts = new image_row_part_t[6]{{54, 0}, {10, 0x071c}, {19, 0}, {31, 0xFF80}, {10, 0x071c}, {56, 0}}, .partsCount = 6},

        {.parts = new image_row_part_t[6]{{52, 0}, {10, 0x071c}, {21, 0}, {33, 0xFF80}, {10, 0x071c}, {54, 0}}, .partsCount = 6},

        {.parts = new image_row_part_t[6]{{51, 0}, {9, 0x071c}, {23, 0}, {35, 0xFF80}, {9, 0x071c}, {53, 0}}, .partsCount = 6},

        {.parts = new image_row_part_t[6]{{50, 0}, {9, 0x071c}, {24, 0}, {36, 0xFF80}, {9, 0x071c}, {52, 0}}, .partsCount = 6},

        {.parts = new image_row_part_t[6]{{48, 0}, {9, 0x071c}, {26, 0}, {38, 0xFF80}, {9, 0x071c}, {50, 0}}, .partsCount = 6},

        {.parts = new image_row_part_t[6]{{47, 0}, {8, 0x071c}, {28, 0}, {40, 0xFF80}, {8, 0x071c}, {49, 0}}, .partsCount = 6},

        {.parts = new image_row_part_t[6]{{46, 0}, {8, 0x071c}, {29, 0}, {41, 0xFF80}, {8, 0x071c}, {48, 0}}, .partsCount = 6},

        {.parts = new image_row_part_t[6]{{45, 0}, {8, 0x071c}, {30, 0}, {42, 0xFF80}, {8, 0x071c}, {47, 0}}, .partsCount = 6},

        {.parts = new image_row_part_t[6]{{44, 0}, {7, 0x071c}, {33, 0}, {43, 0xFF80}, {7, 0x071c}, {46, 0}}, .partsCount = 6},

        {.parts = new image_row_part_t[7]{{43, 0}, {7, 0x071c}, {33, 0}, {12, 0x071c}, {33, 0xFF80}, {7, 0x071c}, {45, 0}}, .partsCount = 7},

        {.parts = new image_row_part_t[7]{{42, 0}, {7, 0x071c}, {29, 0}, {22, 0x071c}, {29, 0xFF80}, {7, 0x071c}, {44, 0}}, .partsCount = 7},

        {.parts = new image_row_part_t[7]{{41, 0}, {7, 0x071c}, {26, 0}, {30, 0x071c}, {26, 0xFF80}, {7, 0x071c}, {43, 0}}, .partsCount = 7},

        {.parts = new image_row_part_t[7]{{40, 0}, {7, 0x071c}, {25, 0}, {34, 0x071c}, {25, 0xFF80}, {7, 0x071c}, {42, 0}}, .partsCount = 7},

        {.parts = new image_row_part_t[7]{{39, 0}, {7, 0x071c}, {24, 0}, {38, 0x071c}, {24, 0xFF80}, {7, 0x071c}, {41, 0}}, .partsCount = 7},

        {.parts = new image_row_part_t[9]{{39, 0}, {6, 0x071c}, {23, 0}, {15, 0x071c}, {12, 0}, {15, 0x071c}, {23, 0xFF80}, {6, 0x071c}, {41, 0}}, .partsCount = 9},

        {.parts = new image_row_part_t[9]{{38, 0}, {6, 0x071c}, {22, 0}, {12, 0x071c}, {22, 0}, {12, 0x071c}, {22, 0xFF80}, {6, 0x071c}, {40, 0}}, .partsCount = 9},

        {.parts = new image_row_part_t[9]{{37, 0}, {6, 0x071c}, {21, 0}, {11, 0x071c}, {28, 0}, {11, 0x071c}, {21, 0xFF80}, {6, 0x071c}, {39, 0}}, .partsCount = 9},

        {.parts = new image_row_part_t[9]{{36, 0}, {7, 0x071c}, {20, 0}, {10, 0x071c}, {32, 0}, {10, 0x071c}, {21, 0xFF80}, {6, 0x071c}, {38, 0}}, .partsCount = 9},

        {.parts = new image_row_part_t[9]{{36, 0}, {6, 0x071c}, {20, 0}, {9, 0x071c}, {36, 0}, {9, 0x071c}, {20, 0xFF80}, {6, 0x071c}, {38, 0}}, .partsCount = 9},

        {.parts = new image_row_part_t[9]{{35, 0}, {6, 0x071c}, {19, 0}, {9, 0x071c}, {40, 0}, {9, 0x071c}, {19, 0xFF80}, {6, 0x071c}, {37, 0}}, .partsCount = 9},

        {.parts = new image_row_part_t[9]{{34, 0}, {6, 0x071c}, {19, 0}, {8, 0x071c}, {44, 0}, {8, 0x071c}, {19, 0xFF80}, {6, 0x071c}, {36, 0}}, .partsCount = 9},

        {.parts = new image_row_part_t[9]{{34, 0}, {6, 0x071c}, {18, 0}, {8, 0x071c}, {46, 0}, {8, 0x071c}, {18, 0xFF80}, {6, 0x071c}, {36, 0}}, .partsCount = 9},

        {.parts = new image_row_part_t[9]{{33, 0}, {6, 0x071c}, {18, 0}, {8, 0x071c}, {48, 0}, {8, 0x071c}, {18, 0xFF80}, {6, 0x071c}, {35, 0}}, .partsCount = 9},

        {.parts = new image_row_part_t[9]{{33, 0}, {5, 0x071c}, {18, 0}, {7, 0x071c}, {52, 0}, {7, 0x071c}, {18, 0xFF80}, {6, 0x071c}, {34, 0}}, .partsCount = 9},

        {.parts = new image_row_part_t[9]{{32, 0}, {6, 0x071c}, {17, 0}, {7, 0x071c}, {54, 0}, {7, 0x071c}, {17, 0xFF80}, {6, 0x071c}, {34, 0}}, .partsCount = 9},

        {.parts = new image_row_part_t[9]{{31, 0}, {6, 0x071c}, {17, 0}, {7, 0x071c}, {56, 0}, {7, 0x071c}, {17, 0xFF80}, {6, 0x071c}, {33, 0}}, .partsCount = 9},

        {.parts = new image_row_part_t[9]{{31, 0}, {6, 0x071c}, {16, 0}, {7, 0x071c}, {58, 0}, {7, 0x071c}, {16, 0xFF80}, {6, 0x071c}, {33, 0}}, .partsCount = 9},

        {.parts = new image_row_part_t[9]{{31, 0}, {5, 0x071c}, {17, 0}, {6, 0x071c}, {60, 0}, {6, 0x071c}, {17, 0xFF80}, {6, 0x071c}, {32, 0}}, .partsCount = 9},

        {.parts = new image_row_part_t[9]{{30, 0}, {6, 0x071c}, {16, 0}, {6, 0x071c}, {62, 0}, {6, 0x071c}, {16, 0xFF80}, {6, 0x071c}, {32, 0}}, .partsCount = 9},

        {.parts = new image_row_part_t[9]{{30, 0}, {5, 0x071c}, {16, 0}, {7, 0x071c}, {62, 0}, {7, 0x071c}, {16, 0xFF80}, {6, 0x071c}, {31, 0}}, .partsCount = 9},

        {.parts = new image_row_part_t[9]{{29, 0}, {6, 0x071c}, {15, 0}, {7, 0x071c}, {64, 0}, {7, 0x071c}, {15, 0xFF80}, {6, 0x071c}, {31, 0}}, .partsCount = 9},

        {.parts = new image_row_part_t[9]{{29, 0}, {5, 0x071c}, {16, 0}, {6, 0x071c}, {66, 0}, {6, 0x071c}, {16, 0xFF80}, {5, 0x071c}, {31, 0}}, .partsCount = 9},

        {.parts = new image_row_part_t[9]{{28, 0}, {6, 0x071c}, {15, 0}, {6, 0x071c}, {68, 0}, {6, 0x071c}, {15, 0xFF80}, {6, 0x071c}, {30, 0}}, .partsCount = 9},

        {.parts = new image_row_part_t[9]{{28, 0}, {5, 0x071c}, {16, 0}, {6, 0x071c}, {69, 0}, {5, 0x071c}, {16, 0xFF80}, {5, 0x071c}, {30, 0}}, .partsCount = 9},

        {.parts = new image_row_part_t[9]{{28, 0}, {5, 0x071c}, {15, 0}, {6, 0x071c}, {70, 0}, {6, 0x071c}, {15, 0xFF80}, {5, 0x071c}, {30, 0}}, .partsCount = 9},

        {.parts = new image_row_part_t[9]{{27, 0}, {6, 0x071c}, {15, 0}, {5, 0x071c}, {72, 0}, {5, 0x071c}, {15, 0xFF80}, {6, 0x071c}, {29, 0}}, .partsCount = 9},

        {.parts = new image_row_part_t[9]{{27, 0}, {5, 0x071c}, {15, 0}, {6, 0x071c}, {72, 0}, {6, 0x071c}, {15, 0xFF80}, {5, 0x071c}, {29, 0}}, .partsCount = 9},

        {.parts = new image_row_part_t[9]{{27, 0}, {5, 0x071c}, {15, 0}, {5, 0x071c}, {74, 0}, {5, 0x071c}, {15, 0xFF80}, {5, 0x071c}, {29, 0}}, .partsCount = 9},

        {.parts = new image_row_part_t[9]{{26, 0}, {6, 0x071c}, {14, 0}, {6, 0x071c}, {74, 0}, {6, 0x071c}, {15, 0xFF80}, {5, 0x071c}, {28, 0}}, .partsCount = 9},

        {.parts = new image_row_part_t[9]{{26, 0}, {5, 0x071c}, {15, 0}, {5, 0x071c}, {76, 0}, {5, 0x071c}, {15, 0xFF80}, {5, 0x071c}, {28, 0}}, .partsCount = 9},

        {.parts = new image_row_part_t[7]{{31, 0x071c}, {15, 0}, {5, 0x071c}, {76, 0}, {5, 0x071c}, {15, 0xFF80}, {33, 0x071c}}, .partsCount = 7},

        {.parts = new image_row_part_t[7]{{31, 0x071c}, {14, 0}, {6, 0x071c}, {76, 0}, {6, 0x071c}, {14, 0xFF80}, {33, 0x071c}}, .partsCount = 7},

        {.parts = new image_row_part_t[7]{{31, 0x071c}, {14, 0}, {5, 0x071c}, {78, 0}, {5, 0x071c}, {15, 0xFF80}, {32, 0x071c}}, .partsCount = 7},

        {.parts = new image_row_part_t[7]{{30, 0x071c}, {15, 0}, {5, 0x071c}, {78, 0}, {5, 0x071c}, {16, 0xFF80}, {31, 0x071c}}, .partsCount = 7},

        {.parts = new image_row_part_t[7]{{30, 0x071c}, {14, 0}, {6, 0x071c}, {78, 0}, {6, 0x071c}, {15, 0xFF80}, {31, 0x071c}}, .partsCount = 7},

        {.parts = new image_row_part_t[6]{{44, 0}, {5, 0x071c}, {80, 0}, {5, 0x071c}, {15, 0xFF80}, {31, 0}}, .partsCount = 6},

        {.parts = new image_row_part_t[6]{{44, 0}, {5, 0x071c}, {80, 0}, {5, 0x071c}, {15, 0xFF80}, {31, 0}}, .partsCount = 6},

        {.parts = new image_row_part_t[6]{{44, 0}, {5, 0x071c}, {80, 0}, {5, 0x071c}, {15, 0xFF80}, {31, 0}}, .partsCount = 6},

        {.parts = new image_row_part_t[6]{{44, 0}, {5, 0x071c}, {80, 0}, {5, 0x071c}, {15, 0xFF80}, {31, 0}}, .partsCount = 6},

        {.parts = new image_row_part_t[6]{{44, 0}, {5, 0x071c}, {80, 0}, {6, 0x071c}, {14, 0xFF80}, {31, 0}}, .partsCount = 6},

        {.parts = new image_row_part_t[6]{{43, 0}, {5, 0x071c}, {82, 0}, {5, 0x071c}, {14, 0xFF80}, {31, 0}}, .partsCount = 6},

        {.parts = new image_row_part_t[6]{{43, 0}, {5, 0x071c}, {82, 0}, {5, 0x071c}, {14, 0xFF80}, {31, 0}}, .partsCount = 6},

        {.parts = new image_row_part_t[6]{{43, 0}, {5, 0x071c}, {82, 0}, {5, 0x071c}, {14, 0xFF80}, {31, 0}}, .partsCount = 6},

        {.parts = new image_row_part_t[6]{{43, 0}, {5, 0x071c}, {82, 0}, {5, 0x071c}, {14, 0xFF80}, {31, 0}}, .partsCount = 6},

        {.parts = new image_row_part_t[6]{{43, 0}, {5, 0x071c}, {82, 0}, {5, 0x071c}, {14, 0xFF80}, {31, 0}}, .partsCount = 6},

        {.parts = new image_row_part_t[6]{{43, 0}, {5, 0x071c}, {82, 0}, {5, 0x071c}, {14, 0xFF80}, {31, 0}}, .partsCount = 6},

        {.parts = new image_row_part_t[6]{{43, 0}, {5, 0x071c}, {82, 0}, {5, 0x071c}, {14, 0xFF80}, {31, 0}}, .partsCount = 6},

        {.parts = new image_row_part_t[6]{{43, 0}, {5, 0x071c}, {82, 0}, {5, 0x071c}, {14, 0xFF80}, {31, 0}}, .partsCount = 6},

        {.parts = new image_row_part_t[6]{{43, 0}, {5, 0x071c}, {82, 0}, {5, 0x071c}, {14, 0xFF80}, {31, 0}}, .partsCount = 6},

        {.parts = new image_row_part_t[6]{{43, 0}, {5, 0x071c}, {82, 0}, {5, 0x071c}, {14, 0xFF80}, {31, 0}}, .partsCount = 6},

        {.parts = new image_row_part_t[6]{{43, 0}, {5, 0x071c}, {82, 0}, {5, 0x071c}, {14, 0xFF80}, {31, 0}}, .partsCount = 6},

        {.parts = new image_row_part_t[6]{{43, 0}, {5, 0x071c}, {82, 0}, {5, 0x071c}, {14, 0xFF80}, {31, 0}}, .partsCount = 6},

        {.parts = new image_row_part_t[6]{{44, 0}, {5, 0x071c}, {81, 0}, {5, 0x071c}, {14, 0xFF80}, {31, 0}}, .partsCount = 6},

        {.parts = new image_row_part_t[6]{{44, 0}, {5, 0x071c}, {80, 0}, {5, 0x071c}, {15, 0xFF80}, {31, 0}}, .partsCount = 6},

        {.parts = new image_row_part_t[6]{{44, 0}, {5, 0x071c}, {80, 0}, {5, 0x071c}, {15, 0xFF80}, {31, 0}}, .partsCount = 6},

        {.parts = new image_row_part_t[6]{{44, 0}, {5, 0x071c}, {80, 0}, {5, 0x071c}, {15, 0xFF80}, {31, 0}}, .partsCount = 6},

        {.parts = new image_row_part_t[7]{{30, 0x071c}, {14, 0}, {5, 0x071c}, {80, 0}, {5, 0x071c}, {14, 0xFF80}, {32, 0x071c}}, .partsCount = 7},

        {.parts = new image_row_part_t[7]{{30, 0x071c}, {14, 0}, {6, 0x071c}, {78, 0}, {6, 0x071c}, {14, 0xFF80}, {32, 0x071c}}, .partsCount = 7},

        {.parts = new image_row_part_t[7]{{30, 0x071c}, {15, 0}, {5, 0x071c}, {78, 0}, {5, 0x071c}, {15, 0xFF80}, {32, 0x071c}}, .partsCount = 7},

        {.parts = new image_row_part_t[7]{{31, 0x071c}, {14, 0}, {5, 0x071c}, {78, 0}, {5, 0x071c}, {15, 0xFF80}, {32, 0x071c}}, .partsCount = 7},

        {.parts = new image_row_part_t[7]{{31, 0x071c}, {14, 0}, {6, 0x071c}, {77, 0}, {5, 0x071c}, {14, 0xFF80}, {33, 0x071c}}, .partsCount = 7},

        {.parts = new image_row_part_t[9]{{26, 0}, {5, 0x071c}, {15, 0}, {5, 0x071c}, {76, 0}, {5, 0x071c}, {15, 0xFF80}, {5, 0x071c}, {28, 0}}, .partsCount = 9},

        {.parts = new image_row_part_t[9]{{26, 0}, {5, 0x071c}, {15, 0}, {5, 0x071c}, {76, 0}, {5, 0x071c}, {15, 0xFF80}, {5, 0x071c}, {28, 0}}, .partsCount = 9},

        {.parts = new image_row_part_t[9]{{26, 0}, {6, 0x071c}, {14, 0}, {6, 0x071c}, {74, 0}, {6, 0x071c}, {15, 0xFF80}, {5, 0x071c}, {28, 0}}, .partsCount = 9},

        {.parts = new image_row_part_t[9]{{27, 0}, {5, 0x071c}, {15, 0}, {5, 0x071c}, {74, 0}, {5, 0x071c}, {15, 0xFF80}, {5, 0x071c}, {29, 0}}, .partsCount = 9},

        {.parts = new image_row_part_t[9]{{27, 0}, {5, 0x071c}, {15, 0}, {6, 0x071c}, {72, 0}, {6, 0x071c}, {15, 0xFF80}, {5, 0x071c}, {29, 0}}, .partsCount = 9},

        {.parts = new image_row_part_t[9]{{27, 0}, {6, 0x071c}, {15, 0}, {5, 0x071c}, {72, 0}, {5, 0x071c}, {16, 0xFF80}, {5, 0x071c}, {29, 0}}, .partsCount = 9},

        {.parts = new image_row_part_t[9]{{28, 0}, {5, 0x071c}, {15, 0}, {6, 0x071c}, {70, 0}, {6, 0x071c}, {15, 0xFF80}, {5, 0x071c}, {30, 0}}, .partsCount = 9},

        {.parts = new image_row_part_t[9]{{28, 0}, {5, 0x071c}, {16, 0}, {6, 0x071c}, {69, 0}, {5, 0x071c}, {16, 0xFF80}, {5, 0x071c}, {30, 0}}, .partsCount = 9},

        {.parts = new image_row_part_t[9]{{28, 0}, {6, 0x071c}, {15, 0}, {6, 0x071c}, {68, 0}, {6, 0x071c}, {15, 0xFF80}, {6, 0x071c}, {30, 0}}, .partsCount = 9},

        {.parts = new image_row_part_t[9]{{29, 0}, {5, 0x071c}, {16, 0}, {6, 0x071c}, {66, 0}, {6, 0x071c}, {16, 0xFF80}, {5, 0x071c}, {31, 0}}, .partsCount = 9},

        {.parts = new image_row_part_t[9]{{29, 0}, {6, 0x071c}, {15, 0}, {7, 0x071c}, {64, 0}, {7, 0x071c}, {16, 0xFF80}, {5, 0x071c}, {31, 0}}, .partsCount = 9},

        {.parts = new image_row_part_t[9]{{29, 0}, {6, 0x071c}, {16, 0}, {6, 0x071c}, {64, 0}, {6, 0x071c}, {16, 0xFF80}, {6, 0x071c}, {31, 0}}, .partsCount = 9},

        {.parts = new image_row_part_t[9]{{30, 0}, {6, 0x071c}, {16, 0}, {6, 0x071c}, {62, 0}, {6, 0x071c}, {17, 0xFF80}, {5, 0x071c}, {32, 0}}, .partsCount = 9},

        {.parts = new image_row_part_t[9]{{30, 0}, {6, 0x071c}, {17, 0}, {6, 0x071c}, {60, 0}, {6, 0x071c}, {17, 0xFF80}, {6, 0x071c}, {32, 0}}, .partsCount = 9},

        {.parts = new image_row_part_t[9]{{31, 0}, {6, 0x071c}, {16, 0}, {7, 0x071c}, {58, 0}, {7, 0x071c}, {17, 0xFF80}, {5, 0x071c}, {33, 0}}, .partsCount = 9},

        {.parts = new image_row_part_t[9]{{31, 0}, {6, 0x071c}, {17, 0}, {7, 0x071c}, {56, 0}, {7, 0x071c}, {17, 0xFF80}, {6, 0x071c}, {33, 0}}, .partsCount = 9},

        {.parts = new image_row_part_t[9]{{32, 0}, {6, 0x071c}, {17, 0}, {7, 0x071c}, {54, 0}, {7, 0x071c}, {17, 0xFF80}, {6, 0x071c}, {34, 0}}, .partsCount = 9},

        {.parts = new image_row_part_t[9]{{32, 0}, {6, 0x071c}, {18, 0}, {7, 0x071c}, {52, 0}, {7, 0x071c}, {18, 0xFF80}, {6, 0x071c}, {34, 0}}, .partsCount = 9},

        {.parts = new image_row_part_t[9]{{33, 0}, {6, 0x071c}, {18, 0}, {7, 0x071c}, {50, 0}, {7, 0x071c}, {18, 0xFF80}, {6, 0x071c}, {35, 0}}, .partsCount = 9},

        {.parts = new image_row_part_t[9]{{34, 0}, {6, 0x071c}, {18, 0}, {8, 0x071c}, {46, 0}, {8, 0x071c}, {19, 0xFF80}, {5, 0x071c}, {36, 0}}, .partsCount = 9},

        {.parts = new image_row_part_t[9]{{34, 0}, {6, 0x071c}, {19, 0}, {8, 0x071c}, {44, 0}, {8, 0x071c}, {19, 0xFF80}, {6, 0x071c}, {36, 0}}, .partsCount = 9},

        {.parts = new image_row_part_t[9]{{35, 0}, {6, 0x071c}, {19, 0}, {9, 0x071c}, {40, 0}, {9, 0x071c}, {19, 0xFF80}, {6, 0x071c}, {37, 0}}, .partsCount = 9},

        {.parts = new image_row_part_t[9]{{36, 0}, {6, 0x071c}, {19, 0}, {10, 0x071c}, {36, 0}, {10, 0x071c}, {19, 0xFF80}, {7, 0x071c}, {37, 0}}, .partsCount = 9},

        {.parts = new image_row_part_t[9]{{36, 0}, {6, 0x071c}, {21, 0}, {10, 0x071c}, {32, 0}, {10, 0x071c}, {21, 0xFF80}, {6, 0x071c}, {38, 0}}, .partsCount = 9},

        {.parts = new image_row_part_t[9]{{37, 0}, {6, 0x071c}, {21, 0}, {11, 0x071c}, {28, 0}, {11, 0x071c}, {21, 0xFF80}, {6, 0x071c}, {39, 0}}, .partsCount = 9},

        {.parts = new image_row_part_t[9]{{38, 0}, {6, 0x071c}, {22, 0}, {12, 0x071c}, {22, 0}, {12, 0x071c}, {22, 0xFF80}, {6, 0x071c}, {40, 0}}, .partsCount = 9},

        {.parts = new image_row_part_t[9]{{38, 0}, {7, 0x071c}, {22, 0}, {16, 0x071c}, {12, 0}, {16, 0x071c}, {22, 0xFF80}, {7, 0x071c}, {40, 0}}, .partsCount = 9},

        {.parts = new image_row_part_t[7]{{39, 0}, {7, 0x071c}, {23, 0}, {40, 0x071c}, {23, 0xFF80}, {7, 0x071c}, {41, 0}}, .partsCount = 7},

        {.parts = new image_row_part_t[7]{{40, 0}, {7, 0x071c}, {25, 0}, {34, 0x071c}, {25, 0xFF80}, {7, 0x071c}, {42, 0}}, .partsCount = 7},

        {.parts = new image_row_part_t[7]{{41, 0}, {7, 0x071c}, {26, 0}, {30, 0x071c}, {26, 0xFF80}, {7, 0x071c}, {43, 0}}, .partsCount = 7},

        {.parts = new image_row_part_t[7]{{42, 0}, {7, 0x071c}, {29, 0}, {23, 0x071c}, {28, 0xFF80}, {7, 0x071c}, {44, 0}}, .partsCount = 7},

        {.parts = new image_row_part_t[8]{{43, 0}, {7, 0x071c}, {31, 0}, {3, 0xFF80}, {11, 0x071c}, {33, 0xFF80}, {7, 0x071c}, {45, 0}}, .partsCount = 8},

        {.parts = new image_row_part_t[6]{{44, 0}, {7, 0x071c}, {29, 0}, {47, 0xFF80}, {7, 0x071c}, {46, 0}}, .partsCount = 6},

        {.parts = new image_row_part_t[6]{{45, 0}, {8, 0x071c}, {27, 0}, {45, 0xFF80}, {8, 0x071c}, {47, 0}}, .partsCount = 6},

        {.parts = new image_row_part_t[6]{{46, 0}, {8, 0x071c}, {26, 0}, {44, 0xFF80}, {8, 0x071c}, {48, 0}}, .partsCount = 6},

        {.parts = new image_row_part_t[6]{{47, 0}, {8, 0x071c}, {25, 0}, {43, 0xFF80}, {8, 0x071c}, {49, 0}}, .partsCount = 6},

        {.parts = new image_row_part_t[6]{{48, 0}, {9, 0x071c}, {23, 0}, {41, 0xFF80}, {9, 0x071c}, {50, 0}}, .partsCount = 6},

        {.parts = new image_row_part_t[6]{{50, 0}, {8, 0x071c}, {22, 0}, {40, 0xFF80}, {8, 0x071c}, {52, 0}}, .partsCount = 6},

        {.parts = new image_row_part_t[6]{{51, 0}, {9, 0x071c}, {20, 0}, {38, 0xFF80}, {9, 0x071c}, {53, 0}}, .partsCount = 6},

        {.parts = new image_row_part_t[6]{{52, 0}, {10, 0x071c}, {18, 0}, {36, 0xFF80}, {10, 0x071c}, {54, 0}}, .partsCount = 6},

        {.parts = new image_row_part_t[6]{{54, 0}, {10, 0x071c}, {16, 0}, {34, 0xFF80}, {10, 0x071c}, {56, 0}}, .partsCount = 6},

        {.parts = new image_row_part_t[6]{{55, 0}, {11, 0x071c}, {14, 0}, {32, 0xFF80}, {11, 0x071c}, {57, 0}}, .partsCount = 6},

        {.parts = new image_row_part_t[6]{{57, 0}, {12, 0x071c}, {11, 0}, {29, 0xFF80}, {12, 0x071c}, {59, 0}}, .partsCount = 6},

        {.parts = new image_row_part_t[6]{{59, 0}, {13, 0x071c}, {8, 0}, {26, 0xFF80}, {13, 0x071c}, {61, 0}}, .partsCount = 6},

        {.parts = new image_row_part_t[6]{{61, 0}, {15, 0x071c}, {4, 0}, {24, 0xFF80}, {13, 0x071c}, {63, 0}}, .partsCount = 6},

        {.parts = new image_row_part_t[6]{{63, 0}, {16, 0x071c}, {1, 0}, {23, 0xFF80}, {12, 0x071c}, {65, 0}}, .partsCount = 6},

        {.parts = new image_row_part_t[7]{{66, 0}, {13, 0x071c}, {1, 0}, {20, 0xFF80}, {1, 0}, {11, 0x071c}, {68, 0}}, .partsCount = 7},

        {.parts = new image_row_part_t[7]{{68, 0}, {11, 0x071c}, {1, 0}, {20, 0xFF80}, {1, 0}, {9, 0x071c}, {70, 0}}, .partsCount = 7},

        {.parts = new image_row_part_t[7]{{71, 0}, {8, 0x071c}, {1, 0}, {20, 0xFF80}, {1, 0}, {6, 0x071c}, {73, 0}}, .partsCount = 7},

        {.parts = new image_row_part_t[7]{{74, 0}, {5, 0x071c}, {1, 0}, {20, 0xFF80}, {1, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 7},

        {.parts = new image_row_part_t[7]{{74, 0}, {5, 0x071c}, {1, 0}, {20, 0xFF80}, {1, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 7},

        {.parts = new image_row_part_t[7]{{74, 0}, {5, 0x071c}, {1, 0}, {20, 0xFF80}, {1, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 7},

        {.parts = new image_row_part_t[7]{{74, 0}, {5, 0x071c}, {1, 0}, {20, 0xFF80}, {1, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 7},

        {.parts = new image_row_part_t[7]{{74, 0}, {5, 0x071c}, {1, 0}, {20, 0xFF80}, {1, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 7},

        {.parts = new image_row_part_t[7]{{74, 0}, {5, 0x071c}, {1, 0}, {20, 0xFF80}, {1, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 7},

        {.parts = new image_row_part_t[7]{{74, 0}, {5, 0x071c}, {1, 0}, {20, 0xFF80}, {1, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 7},

        {.parts = new image_row_part_t[7]{{74, 0}, {5, 0x071c}, {1, 0}, {20, 0xFF80}, {1, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 7},

        {.parts = new image_row_part_t[7]{{74, 0}, {5, 0x071c}, {1, 0}, {20, 0xFF80}, {1, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 7},

        {.parts = new image_row_part_t[7]{{74, 0}, {5, 0x071c}, {1, 0}, {20, 0xFF80}, {1, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 7},

        {.parts = new image_row_part_t[7]{{74, 0}, {5, 0x071c}, {1, 0}, {20, 0xFF80}, {1, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 7},

        {.parts = new image_row_part_t[7]{{74, 0}, {5, 0x071c}, {1, 0}, {20, 0xFF80}, {1, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 7},

        {.parts = new image_row_part_t[7]{{74, 0}, {5, 0x071c}, {1, 0}, {20, 0xFF80}, {1, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 7},

        {.parts = new image_row_part_t[7]{{74, 0}, {5, 0x071c}, {1, 0}, {20, 0xFF80}, {1, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 7},

        {.parts = new image_row_part_t[7]{{74, 0}, {5, 0x071c}, {1, 0}, {20, 0xFF80}, {1, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 7},

        {.parts = new image_row_part_t[7]{{74, 0}, {5, 0x071c}, {1, 0}, {20, 0xFF80}, {1, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 7},

        {.parts = new image_row_part_t[7]{{74, 0}, {5, 0x071c}, {1, 0}, {20, 0xFF80}, {1, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 7},

        {.parts = new image_row_part_t[7]{{74, 0}, {5, 0x071c}, {1, 0}, {20, 0xFF80}, {1, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 7},

        {.parts = new image_row_part_t[7]{{74, 0}, {5, 0x071c}, {1, 0}, {20, 0xFF80}, {1, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 7},

        {.parts = new image_row_part_t[7]{{74, 0}, {5, 0x071c}, {1, 0}, {20, 0xFF80}, {1, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 7},

        {.parts = new image_row_part_t[7]{{74, 0}, {5, 0x071c}, {1, 0}, {20, 0xFF80}, {1, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 7},

        {.parts = new image_row_part_t[7]{{74, 0}, {5, 0x071c}, {1, 0}, {20, 0xFF80}, {1, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 7},

        {.parts = new image_row_part_t[7]{{74, 0}, {5, 0x071c}, {1, 0}, {20, 0xFF80}, {1, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 7},

        {.parts = new image_row_part_t[7]{{74, 0}, {5, 0x071c}, {1, 0}, {20, 0xFF80}, {1, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 7},

        {.parts = new image_row_part_t[7]{{74, 0}, {5, 0x071c}, {1, 0}, {20, 0xFF80}, {1, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 7},

        {.parts = new image_row_part_t[7]{{74, 0}, {5, 0x071c}, {1, 0}, {20, 0xFF80}, {1, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 7}}};
image_t const Images::round_3{
    .h = 180,
    .w = 180,
    .rows = new image_row_t[180]{
        {.parts = new image_row_part_t[5]{{74, 0}, {5, 0x071c}, {22, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 5},

        {.parts = new image_row_part_t[5]{{74, 0}, {5, 0x071c}, {22, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 5},

        {.parts = new image_row_part_t[5]{{74, 0}, {5, 0x071c}, {22, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 5},

        {.parts = new image_row_part_t[5]{{74, 0}, {5, 0x071c}, {22, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 5},

        {.parts = new image_row_part_t[5]{{74, 0}, {5, 0x071c}, {22, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 5},

        {.parts = new image_row_part_t[5]{{74, 0}, {5, 0x071c}, {22, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 5},

        {.parts = new image_row_part_t[5]{{74, 0}, {5, 0x071c}, {22, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 5},

        {.parts = new image_row_part_t[5]{{74, 0}, {5, 0x071c}, {22, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 5},

        {.parts = new image_row_part_t[5]{{74, 0}, {5, 0x071c}, {22, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 5},

        {.parts = new image_row_part_t[5]{{74, 0}, {5, 0x071c}, {22, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 5},

        {.parts = new image_row_part_t[5]{{74, 0}, {5, 0x071c}, {22, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 5},

        {.parts = new image_row_part_t[5]{{74, 0}, {5, 0x071c}, {22, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 5},

        {.parts = new image_row_part_t[5]{{74, 0}, {5, 0x071c}, {22, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 5},

        {.parts = new image_row_part_t[5]{{74, 0}, {5, 0x071c}, {22, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 5},

        {.parts = new image_row_part_t[5]{{74, 0}, {5, 0x071c}, {22, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 5},

        {.parts = new image_row_part_t[5]{{74, 0}, {5, 0x071c}, {22, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 5},

        {.parts = new image_row_part_t[5]{{74, 0}, {5, 0x071c}, {22, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 5},

        {.parts = new image_row_part_t[5]{{74, 0}, {5, 0x071c}, {22, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 5},

        {.parts = new image_row_part_t[5]{{74, 0}, {5, 0x071c}, {22, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 5},

        {.parts = new image_row_part_t[5]{{74, 0}, {5, 0x071c}, {22, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 5},

        {.parts = new image_row_part_t[5]{{74, 0}, {5, 0x071c}, {22, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 5},

        {.parts = new image_row_part_t[5]{{74, 0}, {5, 0x071c}, {22, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 5},

        {.parts = new image_row_part_t[5]{{74, 0}, {5, 0x071c}, {22, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 5},

        {.parts = new image_row_part_t[5]{{74, 0}, {5, 0x071c}, {22, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 5},

        {.parts = new image_row_part_t[5]{{74, 0}, {5, 0x071c}, {22, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 5},

        {.parts = new image_row_part_t[5]{{74, 0}, {5, 0x071c}, {22, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 5},

        {.parts = new image_row_part_t[5]{{72, 0}, {7, 0x071c}, {22, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 5},

        {.parts = new image_row_part_t[5]{{68, 0}, {11, 0x071c}, {22, 0}, {9, 0x071c}, {70, 0}}, .partsCount = 5},

        {.parts = new image_row_part_t[5]{{66, 0}, {13, 0x071c}, {22, 0}, {11, 0x071c}, {68, 0}}, .partsCount = 5},

        {.parts = new image_row_part_t[5]{{63, 0}, {15, 0x071c}, {23, 0xFF80}, {14, 0x071c}, {65, 0}}, .partsCount = 5},

        {.parts = new image_row_part_t[7]{{61, 0}, {15, 0x071c}, {26, 0xFF80}, {1, 0x071c}, {1, 0xFF80}, {13, 0x071c}, {63, 0}}, .partsCount = 7},

        {.parts = new image_row_part_t[5]{{59, 0}, {13, 0x071c}, {34, 0xFF80}, {13, 0x071c}, {61, 0}}, .partsCount = 5},

        {.parts = new image_row_part_t[5]{{57, 0}, {12, 0x071c}, {40, 0xFF80}, {12, 0x071c}, {59, 0}}, .partsCount = 5},

        {.parts = new image_row_part_t[5]{{56, 0}, {10, 0x071c}, {46, 0xFF80}, {10, 0x071c}, {58, 0}}, .partsCount = 5},

        {.parts = new image_row_part_t[5]{{54, 0}, {10, 0x071c}, {50, 0xFF80}, {10, 0x071c}, {56, 0}}, .partsCount = 5},

        {.parts = new image_row_part_t[5]{{52, 0}, {10, 0x071c}, {54, 0xFF80}, {10, 0x071c}, {54, 0}}, .partsCount = 5},

        {.parts = new image_row_part_t[5]{{51, 0}, {9, 0x071c}, {58, 0xFF80}, {9, 0x071c}, {53, 0}}, .partsCount = 5},

        {.parts = new image_row_part_t[5]{{50, 0}, {9, 0x071c}, {60, 0xFF80}, {9, 0x071c}, {52, 0}}, .partsCount = 5},

        {.parts = new image_row_part_t[5]{{48, 0}, {9, 0x071c}, {64, 0xFF80}, {9, 0x071c}, {50, 0}}, .partsCount = 5},

        {.parts = new image_row_part_t[5]{{47, 0}, {8, 0x071c}, {68, 0xFF80}, {8, 0x071c}, {49, 0}}, .partsCount = 5},

        {.parts = new image_row_part_t[5]{{46, 0}, {8, 0x071c}, {70, 0xFF80}, {8, 0x071c}, {48, 0}}, .partsCount = 5},

        {.parts = new image_row_part_t[5]{{45, 0}, {8, 0x071c}, {72, 0xFF80}, {8, 0x071c}, {47, 0}}, .partsCount = 5},

        {.parts = new image_row_part_t[5]{{44, 0}, {7, 0x071c}, {76, 0xFF80}, {7, 0x071c}, {46, 0}}, .partsCount = 5},

        {.parts = new image_row_part_t[7]{{43, 0}, {7, 0x071c}, {33, 0xFF80}, {12, 0x071c}, {33, 0xFF80}, {7, 0x071c}, {45, 0}}, .partsCount = 7},

        {.parts = new image_row_part_t[7]{{42, 0}, {7, 0x071c}, {29, 0xFF80}, {22, 0x071c}, {29, 0xFF80}, {7, 0x071c}, {44, 0}}, .partsCount = 7},

        {.parts = new image_row_part_t[7]{{41, 0}, {7, 0x071c}, {26, 0xFF80}, {30, 0x071c}, {26, 0xFF80}, {7, 0x071c}, {43, 0}}, .partsCount = 7},

        {.parts = new image_row_part_t[7]{{40, 0}, {7, 0x071c}, {25, 0xFF80}, {34, 0x071c}, {25, 0xFF80}, {7, 0x071c}, {42, 0}}, .partsCount = 7},

        {.parts = new image_row_part_t[7]{{39, 0}, {7, 0x071c}, {24, 0xFF80}, {38, 0x071c}, {24, 0xFF80}, {7, 0x071c}, {41, 0}}, .partsCount = 7},

        {.parts = new image_row_part_t[9]{{39, 0}, {6, 0x071c}, {23, 0xFF80}, {15, 0x071c}, {12, 0}, {15, 0x071c}, {23, 0xFF80}, {6, 0x071c}, {41, 0}}, .partsCount = 9},

        {.parts = new image_row_part_t[9]{{38, 0}, {6, 0x071c}, {22, 0xFF80}, {12, 0x071c}, {22, 0}, {12, 0x071c}, {22, 0xFF80}, {6, 0x071c}, {40, 0}}, .partsCount = 9},

        {.parts = new image_row_part_t[9]{{37, 0}, {6, 0x071c}, {21, 0xFF80}, {11, 0x071c}, {28, 0}, {11, 0x071c}, {21, 0xFF80}, {6, 0x071c}, {39, 0}}, .partsCount = 9},

        {.parts = new image_row_part_t[9]{{36, 0}, {7, 0x071c}, {20, 0xFF80}, {10, 0x071c}, {32, 0}, {10, 0x071c}, {21, 0xFF80}, {6, 0x071c}, {38, 0}}, .partsCount = 9},

        {.parts = new image_row_part_t[9]{{36, 0}, {6, 0x071c}, {20, 0xFF80}, {9, 0x071c}, {36, 0}, {9, 0x071c}, {20, 0xFF80}, {6, 0x071c}, {38, 0}}, .partsCount = 9},

        {.parts = new image_row_part_t[9]{{35, 0}, {6, 0x071c}, {19, 0xFF80}, {9, 0x071c}, {40, 0}, {9, 0x071c}, {19, 0xFF80}, {6, 0x071c}, {37, 0}}, .partsCount = 9},

        {.parts = new image_row_part_t[9]{{34, 0}, {6, 0x071c}, {19, 0xFF80}, {8, 0x071c}, {44, 0}, {8, 0x071c}, {19, 0xFF80}, {6, 0x071c}, {36, 0}}, .partsCount = 9},

        {.parts = new image_row_part_t[9]{{34, 0}, {6, 0x071c}, {18, 0xFF80}, {8, 0x071c}, {46, 0}, {8, 0x071c}, {18, 0xFF80}, {6, 0x071c}, {36, 0}}, .partsCount = 9},

        {.parts = new image_row_part_t[9]{{33, 0}, {6, 0x071c}, {18, 0xFF80}, {8, 0x071c}, {48, 0}, {8, 0x071c}, {18, 0xFF80}, {6, 0x071c}, {35, 0}}, .partsCount = 9},

        {.parts = new image_row_part_t[9]{{33, 0}, {5, 0x071c}, {18, 0xFF80}, {7, 0x071c}, {52, 0}, {7, 0x071c}, {18, 0xFF80}, {6, 0x071c}, {34, 0}}, .partsCount = 9},

        {.parts = new image_row_part_t[9]{{32, 0}, {6, 0x071c}, {17, 0xFF80}, {7, 0x071c}, {54, 0}, {7, 0x071c}, {17, 0xFF80}, {6, 0x071c}, {34, 0}}, .partsCount = 9},

        {.parts = new image_row_part_t[9]{{31, 0}, {6, 0x071c}, {17, 0xFF80}, {7, 0x071c}, {56, 0}, {7, 0x071c}, {17, 0xFF80}, {6, 0x071c}, {33, 0}}, .partsCount = 9},

        {.parts = new image_row_part_t[9]{{31, 0}, {6, 0x071c}, {16, 0xFF80}, {7, 0x071c}, {58, 0}, {7, 0x071c}, {16, 0xFF80}, {6, 0x071c}, {33, 0}}, .partsCount = 9},

        {.parts = new image_row_part_t[9]{{31, 0}, {5, 0x071c}, {17, 0xFF80}, {6, 0x071c}, {60, 0}, {6, 0x071c}, {17, 0xFF80}, {6, 0x071c}, {32, 0}}, .partsCount = 9},

        {.parts = new image_row_part_t[9]{{30, 0}, {6, 0x071c}, {16, 0xFF80}, {6, 0x071c}, {62, 0}, {6, 0x071c}, {16, 0xFF80}, {6, 0x071c}, {32, 0}}, .partsCount = 9},

        {.parts = new image_row_part_t[9]{{30, 0}, {5, 0x071c}, {16, 0xFF80}, {7, 0x071c}, {62, 0}, {7, 0x071c}, {16, 0xFF80}, {6, 0x071c}, {31, 0}}, .partsCount = 9},

        {.parts = new image_row_part_t[9]{{29, 0}, {6, 0x071c}, {15, 0xFF80}, {7, 0x071c}, {64, 0}, {7, 0x071c}, {15, 0xFF80}, {6, 0x071c}, {31, 0}}, .partsCount = 9},

        {.parts = new image_row_part_t[9]{{29, 0}, {5, 0x071c}, {16, 0xFF80}, {6, 0x071c}, {66, 0}, {6, 0x071c}, {16, 0xFF80}, {5, 0x071c}, {31, 0}}, .partsCount = 9},

        {.parts = new image_row_part_t[9]{{28, 0}, {6, 0x071c}, {15, 0xFF80}, {6, 0x071c}, {68, 0}, {6, 0x071c}, {15, 0xFF80}, {6, 0x071c}, {30, 0}}, .partsCount = 9},

        {.parts = new image_row_part_t[9]{{28, 0}, {5, 0x071c}, {16, 0xFF80}, {6, 0x071c}, {69, 0}, {5, 0x071c}, {16, 0xFF80}, {5, 0x071c}, {30, 0}}, .partsCount = 9},

        {.parts = new image_row_part_t[9]{{28, 0}, {5, 0x071c}, {15, 0xFF80}, {6, 0x071c}, {70, 0}, {6, 0x071c}, {15, 0xFF80}, {5, 0x071c}, {30, 0}}, .partsCount = 9},

        {.parts = new image_row_part_t[9]{{27, 0}, {6, 0x071c}, {15, 0xFF80}, {5, 0x071c}, {72, 0}, {5, 0x071c}, {15, 0xFF80}, {6, 0x071c}, {29, 0}}, .partsCount = 9},

        {.parts = new image_row_part_t[9]{{27, 0}, {5, 0x071c}, {15, 0xFF80}, {6, 0x071c}, {72, 0}, {6, 0x071c}, {15, 0xFF80}, {5, 0x071c}, {29, 0}}, .partsCount = 9},

        {.parts = new image_row_part_t[9]{{27, 0}, {5, 0x071c}, {15, 0xFF80}, {5, 0x071c}, {74, 0}, {5, 0x071c}, {15, 0xFF80}, {5, 0x071c}, {29, 0}}, .partsCount = 9},

        {.parts = new image_row_part_t[9]{{26, 0}, {6, 0x071c}, {14, 0xFF80}, {6, 0x071c}, {74, 0}, {6, 0x071c}, {15, 0xFF80}, {5, 0x071c}, {28, 0}}, .partsCount = 9},

        {.parts = new image_row_part_t[9]{{26, 0}, {5, 0x071c}, {15, 0xFF80}, {5, 0x071c}, {76, 0}, {5, 0x071c}, {15, 0xFF80}, {5, 0x071c}, {28, 0}}, .partsCount = 9},

        {.parts = new image_row_part_t[7]{{31, 0x071c}, {15, 0xFF80}, {5, 0x071c}, {76, 0}, {5, 0x071c}, {15, 0xFF80}, {33, 0x071c}}, .partsCount = 7},

        {.parts = new image_row_part_t[7]{{31, 0x071c}, {14, 0xFF80}, {6, 0x071c}, {76, 0}, {6, 0x071c}, {14, 0xFF80}, {33, 0x071c}}, .partsCount = 7},

        {.parts = new image_row_part_t[7]{{31, 0x071c}, {14, 0xFF80}, {5, 0x071c}, {78, 0}, {5, 0x071c}, {15, 0xFF80}, {32, 0x071c}}, .partsCount = 7},

        {.parts = new image_row_part_t[7]{{30, 0x071c}, {15, 0xFF80}, {5, 0x071c}, {78, 0}, {5, 0x071c}, {16, 0xFF80}, {31, 0x071c}}, .partsCount = 7},

        {.parts = new image_row_part_t[7]{{30, 0x071c}, {14, 0xFF80}, {6, 0x071c}, {78, 0}, {6, 0x071c}, {15, 0xFF80}, {31, 0x071c}}, .partsCount = 7},

        {.parts = new image_row_part_t[9]{{20, 0}, {3, 0xFF80}, {7, 0}, {14, 0xFF80}, {5, 0x071c}, {80, 0}, {5, 0x071c}, {15, 0xFF80}, {31, 0}}, .partsCount = 9},

        {.parts = new image_row_part_t[9]{{18, 0}, {6, 0xFF80}, {6, 0}, {14, 0xFF80}, {5, 0x071c}, {80, 0}, {5, 0x071c}, {15, 0xFF80}, {31, 0}}, .partsCount = 9},

        {.parts = new image_row_part_t[9]{{16, 0}, {8, 0xFF80}, {6, 0}, {14, 0xFF80}, {5, 0x071c}, {80, 0}, {5, 0x071c}, {15, 0xFF80}, {31, 0}}, .partsCount = 9},

        {.parts = new image_row_part_t[9]{{14, 0}, {10, 0xFF80}, {6, 0}, {14, 0xFF80}, {5, 0x071c}, {80, 0}, {5, 0x071c}, {15, 0xFF80}, {31, 0}}, .partsCount = 9},

        {.parts = new image_row_part_t[7]{{11, 0}, {33, 0xFF80}, {5, 0x071c}, {80, 0}, {6, 0x071c}, {14, 0xFF80}, {31, 0}}, .partsCount = 7},

        {.parts = new image_row_part_t[7]{{9, 0}, {34, 0xFF80}, {5, 0x071c}, {82, 0}, {5, 0x071c}, {14, 0xFF80}, {31, 0}}, .partsCount = 7},

        {.parts = new image_row_part_t[7]{{7, 0}, {36, 0xFF80}, {5, 0x071c}, {82, 0}, {5, 0x071c}, {14, 0xFF80}, {31, 0}}, .partsCount = 7},

        {.parts = new image_row_part_t[7]{{4, 0}, {39, 0xFF80}, {5, 0x071c}, {82, 0}, {5, 0x071c}, {14, 0xFF80}, {31, 0}}, .partsCount = 7},

        {.parts = new image_row_part_t[7]{{2, 0}, {41, 0xFF80}, {5, 0x071c}, {82, 0}, {5, 0x071c}, {14, 0xFF80}, {31, 0}}, .partsCount = 7},

        {.parts = new image_row_part_t[7]{{1, 0}, {42, 0xFF80}, {5, 0x071c}, {82, 0}, {5, 0x071c}, {14, 0xFF80}, {31, 0}}, .partsCount = 7},

        {.parts = new image_row_part_t[7]{{1, 0}, {42, 0xFF80}, {5, 0x071c}, {82, 0}, {5, 0x071c}, {14, 0xFF80}, {31, 0}}, .partsCount = 7},

        {.parts = new image_row_part_t[7]{{1, 0}, {42, 0xFF80}, {5, 0x071c}, {82, 0}, {5, 0x071c}, {14, 0xFF80}, {31, 0}}, .partsCount = 7},

        {.parts = new image_row_part_t[7]{{2, 0}, {41, 0xFF80}, {5, 0x071c}, {82, 0}, {5, 0x071c}, {14, 0xFF80}, {31, 0}}, .partsCount = 7},

        {.parts = new image_row_part_t[7]{{4, 0}, {39, 0xFF80}, {5, 0x071c}, {82, 0}, {5, 0x071c}, {14, 0xFF80}, {31, 0}}, .partsCount = 7},

        {.parts = new image_row_part_t[7]{{6, 0}, {37, 0xFF80}, {5, 0x071c}, {82, 0}, {5, 0x071c}, {14, 0xFF80}, {31, 0}}, .partsCount = 7},

        {.parts = new image_row_part_t[7]{{9, 0}, {34, 0xFF80}, {5, 0x071c}, {82, 0}, {5, 0x071c}, {14, 0xFF80}, {31, 0}}, .partsCount = 7},

        {.parts = new image_row_part_t[8]{{11, 0}, {31, 0xFF80}, {1, 0}, {5, 0x071c}, {82, 0}, {5, 0x071c}, {14, 0xFF80}, {31, 0}}, .partsCount = 8},

        {.parts = new image_row_part_t[8]{{13, 0}, {11, 0xFF80}, {20, 0}, {5, 0x071c}, {81, 0}, {5, 0x071c}, {14, 0xFF80}, {31, 0}}, .partsCount = 8},

        {.parts = new image_row_part_t[8]{{16, 0}, {8, 0xFF80}, {20, 0}, {5, 0x071c}, {80, 0}, {5, 0x071c}, {15, 0xFF80}, {31, 0}}, .partsCount = 8},

        {.parts = new image_row_part_t[8]{{18, 0}, {6, 0xFF80}, {20, 0}, {5, 0x071c}, {80, 0}, {5, 0x071c}, {15, 0xFF80}, {31, 0}}, .partsCount = 8},

        {.parts = new image_row_part_t[8]{{20, 0}, {3, 0xFF80}, {21, 0}, {5, 0x071c}, {80, 0}, {5, 0x071c}, {15, 0xFF80}, {31, 0}}, .partsCount = 8},

        {.parts = new image_row_part_t[7]{{30, 0x071c}, {14, 0}, {5, 0x071c}, {80, 0}, {5, 0x071c}, {14, 0xFF80}, {32, 0x071c}}, .partsCount = 7},

        {.parts = new image_row_part_t[7]{{30, 0x071c}, {14, 0}, {6, 0x071c}, {78, 0}, {6, 0x071c}, {14, 0xFF80}, {32, 0x071c}}, .partsCount = 7},

        {.parts = new image_row_part_t[7]{{30, 0x071c}, {15, 0}, {5, 0x071c}, {78, 0}, {5, 0x071c}, {15, 0xFF80}, {32, 0x071c}}, .partsCount = 7},

        {.parts = new image_row_part_t[7]{{31, 0x071c}, {14, 0}, {5, 0x071c}, {78, 0}, {5, 0x071c}, {15, 0xFF80}, {32, 0x071c}}, .partsCount = 7},

        {.parts = new image_row_part_t[7]{{31, 0x071c}, {14, 0}, {6, 0x071c}, {77, 0}, {5, 0x071c}, {14, 0xFF80}, {33, 0x071c}}, .partsCount = 7},

        {.parts = new image_row_part_t[9]{{26, 0}, {5, 0x071c}, {15, 0}, {5, 0x071c}, {76, 0}, {5, 0x071c}, {15, 0xFF80}, {5, 0x071c}, {28, 0}}, .partsCount = 9},

        {.parts = new image_row_part_t[9]{{26, 0}, {5, 0x071c}, {15, 0}, {5, 0x071c}, {76, 0}, {5, 0x071c}, {15, 0xFF80}, {5, 0x071c}, {28, 0}}, .partsCount = 9},

        {.parts = new image_row_part_t[9]{{26, 0}, {6, 0x071c}, {14, 0}, {6, 0x071c}, {74, 0}, {6, 0x071c}, {15, 0xFF80}, {5, 0x071c}, {28, 0}}, .partsCount = 9},

        {.parts = new image_row_part_t[9]{{27, 0}, {5, 0x071c}, {15, 0}, {5, 0x071c}, {74, 0}, {5, 0x071c}, {15, 0xFF80}, {5, 0x071c}, {29, 0}}, .partsCount = 9},

        {.parts = new image_row_part_t[9]{{27, 0}, {5, 0x071c}, {15, 0}, {6, 0x071c}, {72, 0}, {6, 0x071c}, {15, 0xFF80}, {5, 0x071c}, {29, 0}}, .partsCount = 9},

        {.parts = new image_row_part_t[9]{{27, 0}, {6, 0x071c}, {15, 0}, {5, 0x071c}, {72, 0}, {5, 0x071c}, {16, 0xFF80}, {5, 0x071c}, {29, 0}}, .partsCount = 9},

        {.parts = new image_row_part_t[9]{{28, 0}, {5, 0x071c}, {15, 0}, {6, 0x071c}, {70, 0}, {6, 0x071c}, {15, 0xFF80}, {5, 0x071c}, {30, 0}}, .partsCount = 9},

        {.parts = new image_row_part_t[9]{{28, 0}, {5, 0x071c}, {16, 0}, {6, 0x071c}, {69, 0}, {5, 0x071c}, {16, 0xFF80}, {5, 0x071c}, {30, 0}}, .partsCount = 9},

        {.parts = new image_row_part_t[9]{{28, 0}, {6, 0x071c}, {15, 0}, {6, 0x071c}, {68, 0}, {6, 0x071c}, {15, 0xFF80}, {6, 0x071c}, {30, 0}}, .partsCount = 9},

        {.parts = new image_row_part_t[9]{{29, 0}, {5, 0x071c}, {16, 0}, {6, 0x071c}, {66, 0}, {6, 0x071c}, {16, 0xFF80}, {5, 0x071c}, {31, 0}}, .partsCount = 9},

        {.parts = new image_row_part_t[9]{{29, 0}, {6, 0x071c}, {15, 0}, {7, 0x071c}, {64, 0}, {7, 0x071c}, {16, 0xFF80}, {5, 0x071c}, {31, 0}}, .partsCount = 9},

        {.parts = new image_row_part_t[9]{{29, 0}, {6, 0x071c}, {16, 0}, {6, 0x071c}, {64, 0}, {6, 0x071c}, {16, 0xFF80}, {6, 0x071c}, {31, 0}}, .partsCount = 9},

        {.parts = new image_row_part_t[9]{{30, 0}, {6, 0x071c}, {16, 0}, {6, 0x071c}, {62, 0}, {6, 0x071c}, {17, 0xFF80}, {5, 0x071c}, {32, 0}}, .partsCount = 9},

        {.parts = new image_row_part_t[9]{{30, 0}, {6, 0x071c}, {17, 0}, {6, 0x071c}, {60, 0}, {6, 0x071c}, {17, 0xFF80}, {6, 0x071c}, {32, 0}}, .partsCount = 9},

        {.parts = new image_row_part_t[9]{{31, 0}, {6, 0x071c}, {16, 0}, {7, 0x071c}, {58, 0}, {7, 0x071c}, {17, 0xFF80}, {5, 0x071c}, {33, 0}}, .partsCount = 9},

        {.parts = new image_row_part_t[9]{{31, 0}, {6, 0x071c}, {17, 0}, {7, 0x071c}, {56, 0}, {7, 0x071c}, {17, 0xFF80}, {6, 0x071c}, {33, 0}}, .partsCount = 9},

        {.parts = new image_row_part_t[9]{{32, 0}, {6, 0x071c}, {17, 0}, {7, 0x071c}, {54, 0}, {7, 0x071c}, {17, 0xFF80}, {6, 0x071c}, {34, 0}}, .partsCount = 9},

        {.parts = new image_row_part_t[9]{{32, 0}, {6, 0x071c}, {18, 0}, {7, 0x071c}, {52, 0}, {7, 0x071c}, {18, 0xFF80}, {6, 0x071c}, {34, 0}}, .partsCount = 9},

        {.parts = new image_row_part_t[9]{{33, 0}, {6, 0x071c}, {18, 0}, {7, 0x071c}, {50, 0}, {7, 0x071c}, {18, 0xFF80}, {6, 0x071c}, {35, 0}}, .partsCount = 9},

        {.parts = new image_row_part_t[9]{{34, 0}, {6, 0x071c}, {18, 0}, {8, 0x071c}, {46, 0}, {8, 0x071c}, {19, 0xFF80}, {5, 0x071c}, {36, 0}}, .partsCount = 9},

        {.parts = new image_row_part_t[9]{{34, 0}, {6, 0x071c}, {19, 0}, {8, 0x071c}, {44, 0}, {8, 0x071c}, {19, 0xFF80}, {6, 0x071c}, {36, 0}}, .partsCount = 9},

        {.parts = new image_row_part_t[9]{{35, 0}, {6, 0x071c}, {19, 0}, {9, 0x071c}, {40, 0}, {9, 0x071c}, {19, 0xFF80}, {6, 0x071c}, {37, 0}}, .partsCount = 9},

        {.parts = new image_row_part_t[9]{{36, 0}, {6, 0x071c}, {19, 0}, {10, 0x071c}, {36, 0}, {10, 0x071c}, {19, 0xFF80}, {7, 0x071c}, {37, 0}}, .partsCount = 9},

        {.parts = new image_row_part_t[9]{{36, 0}, {6, 0x071c}, {21, 0}, {10, 0x071c}, {32, 0}, {10, 0x071c}, {21, 0xFF80}, {6, 0x071c}, {38, 0}}, .partsCount = 9},

        {.parts = new image_row_part_t[9]{{37, 0}, {6, 0x071c}, {21, 0}, {11, 0x071c}, {28, 0}, {11, 0x071c}, {21, 0xFF80}, {6, 0x071c}, {39, 0}}, .partsCount = 9},

        {.parts = new image_row_part_t[9]{{38, 0}, {6, 0x071c}, {22, 0}, {12, 0x071c}, {22, 0}, {12, 0x071c}, {22, 0xFF80}, {6, 0x071c}, {40, 0}}, .partsCount = 9},

        {.parts = new image_row_part_t[9]{{38, 0}, {7, 0x071c}, {22, 0}, {16, 0x071c}, {12, 0}, {16, 0x071c}, {22, 0xFF80}, {7, 0x071c}, {40, 0}}, .partsCount = 9},

        {.parts = new image_row_part_t[7]{{39, 0}, {7, 0x071c}, {23, 0}, {40, 0x071c}, {23, 0xFF80}, {7, 0x071c}, {41, 0}}, .partsCount = 7},

        {.parts = new image_row_part_t[7]{{40, 0}, {7, 0x071c}, {25, 0}, {34, 0x071c}, {25, 0xFF80}, {7, 0x071c}, {42, 0}}, .partsCount = 7},

        {.parts = new image_row_part_t[7]{{41, 0}, {7, 0x071c}, {26, 0}, {30, 0x071c}, {26, 0xFF80}, {7, 0x071c}, {43, 0}}, .partsCount = 7},

        {.parts = new image_row_part_t[7]{{42, 0}, {7, 0x071c}, {29, 0}, {23, 0x071c}, {28, 0xFF80}, {7, 0x071c}, {44, 0}}, .partsCount = 7},

        {.parts = new image_row_part_t[8]{{43, 0}, {7, 0x071c}, {31, 0}, {3, 0xFF80}, {11, 0x071c}, {33, 0xFF80}, {7, 0x071c}, {45, 0}}, .partsCount = 8},

        {.parts = new image_row_part_t[6]{{44, 0}, {7, 0x071c}, {29, 0}, {47, 0xFF80}, {7, 0x071c}, {46, 0}}, .partsCount = 6},

        {.parts = new image_row_part_t[6]{{45, 0}, {8, 0x071c}, {27, 0}, {45, 0xFF80}, {8, 0x071c}, {47, 0}}, .partsCount = 6},

        {.parts = new image_row_part_t[6]{{46, 0}, {8, 0x071c}, {26, 0}, {44, 0xFF80}, {8, 0x071c}, {48, 0}}, .partsCount = 6},

        {.parts = new image_row_part_t[6]{{47, 0}, {8, 0x071c}, {25, 0}, {43, 0xFF80}, {8, 0x071c}, {49, 0}}, .partsCount = 6},

        {.parts = new image_row_part_t[6]{{48, 0}, {9, 0x071c}, {23, 0}, {41, 0xFF80}, {9, 0x071c}, {50, 0}}, .partsCount = 6},

        {.parts = new image_row_part_t[6]{{50, 0}, {8, 0x071c}, {22, 0}, {40, 0xFF80}, {8, 0x071c}, {52, 0}}, .partsCount = 6},

        {.parts = new image_row_part_t[6]{{51, 0}, {9, 0x071c}, {20, 0}, {38, 0xFF80}, {9, 0x071c}, {53, 0}}, .partsCount = 6},

        {.parts = new image_row_part_t[6]{{52, 0}, {10, 0x071c}, {18, 0}, {36, 0xFF80}, {10, 0x071c}, {54, 0}}, .partsCount = 6},

        {.parts = new image_row_part_t[6]{{54, 0}, {10, 0x071c}, {16, 0}, {34, 0xFF80}, {10, 0x071c}, {56, 0}}, .partsCount = 6},

        {.parts = new image_row_part_t[6]{{55, 0}, {11, 0x071c}, {14, 0}, {32, 0xFF80}, {11, 0x071c}, {57, 0}}, .partsCount = 6},

        {.parts = new image_row_part_t[6]{{57, 0}, {12, 0x071c}, {11, 0}, {29, 0xFF80}, {12, 0x071c}, {59, 0}}, .partsCount = 6},

        {.parts = new image_row_part_t[6]{{59, 0}, {13, 0x071c}, {8, 0}, {26, 0xFF80}, {13, 0x071c}, {61, 0}}, .partsCount = 6},

        {.parts = new image_row_part_t[6]{{61, 0}, {15, 0x071c}, {4, 0}, {24, 0xFF80}, {13, 0x071c}, {63, 0}}, .partsCount = 6},

        {.parts = new image_row_part_t[6]{{63, 0}, {16, 0x071c}, {1, 0}, {23, 0xFF80}, {12, 0x071c}, {65, 0}}, .partsCount = 6},

        {.parts = new image_row_part_t[7]{{66, 0}, {13, 0x071c}, {1, 0}, {20, 0xFF80}, {1, 0}, {11, 0x071c}, {68, 0}}, .partsCount = 7},

        {.parts = new image_row_part_t[7]{{68, 0}, {11, 0x071c}, {1, 0}, {20, 0xFF80}, {1, 0}, {9, 0x071c}, {70, 0}}, .partsCount = 7},

        {.parts = new image_row_part_t[7]{{71, 0}, {8, 0x071c}, {1, 0}, {20, 0xFF80}, {1, 0}, {6, 0x071c}, {73, 0}}, .partsCount = 7},

        {.parts = new image_row_part_t[7]{{74, 0}, {5, 0x071c}, {1, 0}, {20, 0xFF80}, {1, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 7},

        {.parts = new image_row_part_t[7]{{74, 0}, {5, 0x071c}, {1, 0}, {20, 0xFF80}, {1, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 7},

        {.parts = new image_row_part_t[7]{{74, 0}, {5, 0x071c}, {1, 0}, {20, 0xFF80}, {1, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 7},

        {.parts = new image_row_part_t[7]{{74, 0}, {5, 0x071c}, {1, 0}, {20, 0xFF80}, {1, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 7},

        {.parts = new image_row_part_t[7]{{74, 0}, {5, 0x071c}, {1, 0}, {20, 0xFF80}, {1, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 7},

        {.parts = new image_row_part_t[7]{{74, 0}, {5, 0x071c}, {1, 0}, {20, 0xFF80}, {1, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 7},

        {.parts = new image_row_part_t[7]{{74, 0}, {5, 0x071c}, {1, 0}, {20, 0xFF80}, {1, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 7},

        {.parts = new image_row_part_t[7]{{74, 0}, {5, 0x071c}, {1, 0}, {20, 0xFF80}, {1, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 7},

        {.parts = new image_row_part_t[7]{{74, 0}, {5, 0x071c}, {1, 0}, {20, 0xFF80}, {1, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 7},

        {.parts = new image_row_part_t[7]{{74, 0}, {5, 0x071c}, {1, 0}, {20, 0xFF80}, {1, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 7},

        {.parts = new image_row_part_t[7]{{74, 0}, {5, 0x071c}, {1, 0}, {20, 0xFF80}, {1, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 7},

        {.parts = new image_row_part_t[7]{{74, 0}, {5, 0x071c}, {1, 0}, {20, 0xFF80}, {1, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 7},

        {.parts = new image_row_part_t[7]{{74, 0}, {5, 0x071c}, {1, 0}, {20, 0xFF80}, {1, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 7},

        {.parts = new image_row_part_t[7]{{74, 0}, {5, 0x071c}, {1, 0}, {20, 0xFF80}, {1, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 7},

        {.parts = new image_row_part_t[7]{{74, 0}, {5, 0x071c}, {1, 0}, {20, 0xFF80}, {1, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 7},

        {.parts = new image_row_part_t[7]{{74, 0}, {5, 0x071c}, {1, 0}, {20, 0xFF80}, {1, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 7},

        {.parts = new image_row_part_t[7]{{74, 0}, {5, 0x071c}, {1, 0}, {20, 0xFF80}, {1, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 7},

        {.parts = new image_row_part_t[7]{{74, 0}, {5, 0x071c}, {1, 0}, {20, 0xFF80}, {1, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 7},

        {.parts = new image_row_part_t[7]{{74, 0}, {5, 0x071c}, {1, 0}, {20, 0xFF80}, {1, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 7},

        {.parts = new image_row_part_t[7]{{74, 0}, {5, 0x071c}, {1, 0}, {20, 0xFF80}, {1, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 7},
        {.parts = new image_row_part_t[7]{{74, 0}, {5, 0x071c}, {1, 0}, {20, 0xFF80}, {1, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 7},
        {.parts = new image_row_part_t[7]{{74, 0}, {5, 0x071c}, {1, 0}, {20, 0xFF80}, {1, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 7},
        {.parts = new image_row_part_t[7]{{74, 0}, {5, 0x071c}, {1, 0}, {20, 0xFF80}, {1, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 7},
        {.parts = new image_row_part_t[7]{{74, 0}, {5, 0x071c}, {1, 0}, {20, 0xFF80}, {1, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 7},
        {.parts = new image_row_part_t[7]{{74, 0}, {5, 0x071c}, {1, 0}, {20, 0xFF80}, {1, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 7},
        {.parts = new image_row_part_t[7]{{74, 0}, {5, 0x071c}, {1, 0}, {20, 0xFF80}, {1, 0}, {5, 0x071c}, {74, 0}}, .partsCount = 7}}};

image_t const Images::bridge =
    {
        .h = 180,
        .w = 180,
        .rows = new image_row_t[180]{
            {.parts = new image_row_part_t[1]{{180, 0}}, .partsCount = 1},
            {.parts = new image_row_part_t[1]{{180, 0}}, .partsCount = 1},
            {.parts = new image_row_part_t[1]{{180, 0}}, .partsCount = 1},
            {.parts = new image_row_part_t[1]{{180, 0}}, .partsCount = 1},
            {.parts = new image_row_part_t[1]{{180, 0}}, .partsCount = 1},
            {.parts = new image_row_part_t[1]{{180, 0}}, .partsCount = 1},
            {.parts = new image_row_part_t[1]{{180, 0}}, .partsCount = 1},
            {.parts = new image_row_part_t[1]{{180, 0}}, .partsCount = 1},
            {.parts = new image_row_part_t[1]{{180, 0}}, .partsCount = 1},
            {.parts = new image_row_part_t[1]{{180, 0}}, .partsCount = 1},
            {.parts = new image_row_part_t[1]{{180, 0}}, .partsCount = 1},
            {.parts = new image_row_part_t[1]{{180, 0}}, .partsCount = 1},
            {.parts = new image_row_part_t[1]{{180, 0}}, .partsCount = 1},
            {.parts = new image_row_part_t[1]{{180, 0}}, .partsCount = 1},
            {.parts = new image_row_part_t[1]{{180, 0}}, .partsCount = 1},
            {.parts = new image_row_part_t[1]{{180, 0}}, .partsCount = 1},
            {.parts = new image_row_part_t[1]{{180, 0}}, .partsCount = 1},
            {.parts = new image_row_part_t[12]{{57, 0}, {1, 6372}, {1, 23276}, {1, 21166}, {13, 19119}, {1, 23277}, {1, 6372}, {38, 0}, {1, 6372}, {5, 19119}, {1, 6372}, {60, 0}}, .partsCount = 12},
            {.parts = new image_row_part_t[9]{{57, 0}, {1, 23277}, {16, 31727}, {1, 23245}, {38, 0}, {1, 23276}, {5, 31727}, {1, 23276}, {60, 0}}, .partsCount = 9},
            {.parts = new image_row_part_t[16]{{57, 0}, {1, 23277}, {16, 31727}, {1, 27536}, {1, 6372}, {30, 0}, {1, 6372}, {1, 23276}, {2, 21166}, {1, 23277}, {1, 23276}, {1, 16937}, {1, 35988}, {5, 31727}, {1, 23276}, {60, 0}}, .partsCount = 16},
            {.parts = new image_row_part_t[12]{{57, 0}, {1, 23277}, {17, 31727}, {1, 23276}, {30, 0}, {1, 23276}, {5, 31727}, {1, 29616}, {1, 33876}, {5, 31727}, {1, 23276}, {60, 0}}, .partsCount = 12},
            {.parts = new image_row_part_t[9]{{57, 0}, {1, 23277}, {17, 31727}, {1, 23276}, {30, 0}, {1, 23276}, {12, 31727}, {1, 23276}, {60, 0}}, .partsCount = 9},
            {.parts = new image_row_part_t[14]{{57, 0}, {1, 23277}, {4, 31727}, {1, 27504}, {6, 23276}, {1, 33875}, {5, 31727}, {1, 23276}, {30, 0}, {1, 23276}, {12, 31727}, {1, 33810}, {1, 6372}, {59, 0}}, .partsCount = 14},
            {.parts = new image_row_part_t[16]{{57, 0}, {1, 23277}, {4, 31727}, {1, 21166}, {6, 0}, {1, 23276}, {5, 31727}, {1, 23276}, {30, 0}, {1, 23276}, {13, 31727}, {1, 29616}, {1, 21197}, {1, 23276}, {1, 6372}, {56, 0}}, .partsCount = 16},
            {.parts = new image_row_part_t[16]{{57, 0}, {1, 23277}, {4, 31727}, {1, 21166}, {6, 0}, {1, 23276}, {5, 31727}, {1, 23276}, {30, 0}, {1, 23276}, {16, 31727}, {1, 27536}, {1, 23277}, {1, 23276}, {1, 6372}, {53, 0}}, .partsCount = 16},
            {.parts = new image_row_part_t[16]{{57, 0}, {1, 23277}, {4, 31727}, {1, 21166}, {6, 0}, {1, 23276}, {5, 31727}, {1, 23276}, {30, 0}, {1, 23276}, {4, 31727}, {1, 29616}, {1, 29585}, {13, 31727}, {1, 23276}, {53, 0}}, .partsCount = 16},
            {.parts = new image_row_part_t[23]{{54, 0}, {1, 6372}, {2, 23276}, {1, 31730}, {4, 31727}, {1, 27504}, {6, 23276}, {1, 33875}, {5, 31727}, {1, 33875}, {1, 23276}, {1, 6372}, {28, 0}, {1, 23276}, {4, 31727}, {1, 23313}, {1, 16937}, {1, 23276}, {1, 23277}, {1, 27536}, {10, 31727}, {1, 23276}, {53, 0}}, .partsCount = 23},
            {.parts = new image_row_part_t[20]{{52, 0}, {1, 6372}, {1, 23277}, {1, 27536}, {22, 31727}, {1, 29616}, {1, 21198}, {1, 6372}, {26, 0}, {1, 23276}, {4, 31727}, {1, 21166}, {3, 0}, {1, 6372}, {1, 23276}, {1, 23277}, {1, 27536}, {7, 31727}, {1, 23276}, {53, 0}}, .partsCount = 20},
            {.parts = new image_row_part_t[15]{{52, 0}, {1, 23276}, {26, 31727}, {1, 23277}, {26, 0}, {1, 23276}, {4, 31727}, {1, 21166}, {6, 0}, {1, 6372}, {1, 23277}, {1, 29617}, {5, 31727}, {1, 23276}, {53, 0}}, .partsCount = 15},
            {.parts = new image_row_part_t[21]{{52, 0}, {1, 23276}, {26, 31727}, {1, 29616}, {1, 6372}, {13, 0}, {1, 6372}, {1, 23276}, {2, 23277}, {1, 23276}, {1, 6372}, {6, 0}, {1, 23276}, {4, 31727}, {1, 21166}, {8, 0}, {1, 6372}, {1, 27536}, {4, 31727}, {1, 23276}, {53, 0}}, .partsCount = 21},
            {.parts = new image_row_part_t[20]{{52, 0}, {1, 23276}, {27, 31727}, {1, 23276}, {13, 0}, {1, 23276}, {4, 31727}, {1, 27504}, {1, 23277}, {1, 23276}, {1, 6372}, {3, 0}, {1, 23276}, {4, 31727}, {1, 21166}, {9, 0}, {1, 19119}, {4, 31727}, {1, 23276}, {53, 0}}, .partsCount = 20},
            {.parts = new image_row_part_t[19]{{52, 0}, {1, 23276}, {27, 31727}, {1, 23276}, {13, 0}, {1, 21166}, {7, 31727}, {1, 27504}, {1, 23276}, {1, 6372}, {1, 0}, {1, 23276}, {4, 31727}, {1, 21166}, {9, 0}, {1, 19119}, {4, 31727}, {1, 23276}, {53, 0}}, .partsCount = 19},
            {.parts = new image_row_part_t[21]{{52, 0}, {1, 23276}, {4, 31727}, {1, 27536}, {16, 23276}, {1, 33875}, {5, 31727}, {1, 23276}, {13, 0}, {1, 21166}, {9, 31727}, {1, 29616}, {1, 21198}, {1, 33875}, {4, 31727}, {1, 21166}, {9, 0}, {1, 19119}, {4, 31727}, {1, 23276}, {53, 0}}, .partsCount = 21},
            {.parts = new image_row_part_t[17]{{52, 0}, {1, 23276}, {4, 31727}, {1, 19119}, {16, 0}, {1, 23276}, {5, 31727}, {1, 23276}, {13, 0}, {1, 21166}, {16, 31727}, {1, 21166}, {9, 0}, {1, 19119}, {4, 31727}, {1, 23276}, {53, 0}}, .partsCount = 17},
            {.parts = new image_row_part_t[19]{{52, 0}, {1, 23276}, {4, 31727}, {1, 19119}, {16, 0}, {1, 23276}, {5, 31727}, {1, 23276}, {13, 0}, {1, 21166}, {16, 31727}, {1, 27536}, {1, 23276}, {1, 6372}, {7, 0}, {1, 19119}, {4, 31727}, {1, 23276}, {53, 0}}, .partsCount = 19},
            {.parts = new image_row_part_t[21]{{52, 0}, {1, 23276}, {4, 31727}, {1, 19119}, {16, 0}, {1, 23276}, {5, 31727}, {1, 23276}, {13, 0}, {1, 21166}, {4, 31727}, {1, 29648}, {13, 31727}, {1, 27504}, {2, 23276}, {1, 6372}, {4, 0}, {1, 19119}, {4, 31727}, {1, 23276}, {53, 0}}, .partsCount = 21},
            {.parts = new image_row_part_t[28]{{48, 0}, {1, 6372}, {3, 23276}, {1, 33875}, {4, 31727}, {1, 27536}, {16, 23276}, {1, 33875}, {5, 31727}, {1, 33875}, {2, 23276}, {1, 6372}, {10, 0}, {1, 21166}, {4, 31727}, {1, 35955}, {1, 23276}, {1, 23277}, {1, 29616}, {13, 31727}, {1, 27536}, {2, 23276}, {1, 6372}, {1, 0}, {1, 19119}, {4, 31727}, {1, 23276}, {53, 0}}, .partsCount = 28},
            {.parts = new image_row_part_t[22]{{47, 0}, {1, 6372}, {1, 31730}, {34, 31727}, {1, 27536}, {1, 6372}, {9, 0}, {1, 21166}, {4, 31727}, {1, 23276}, {2, 0}, {1, 6372}, {1, 23276}, {1, 23277}, {1, 27536}, {13, 31727}, {1, 29617}, {1, 23276}, {1, 27536}, {4, 31727}, {1, 23276}, {53, 0}}, .partsCount = 22},
            {.parts = new image_row_part_t[15]{{47, 0}, {1, 23276}, {36, 31727}, {1, 23277}, {9, 0}, {1, 21166}, {4, 31727}, {1, 23276}, {5, 0}, {1, 6372}, {1, 23276}, {1, 27537}, {18, 31727}, {1, 23276}, {53, 0}}, .partsCount = 15},
            {.parts = new image_row_part_t[17]{{47, 0}, {1, 23276}, {36, 31727}, {1, 19118}, {9, 0}, {1, 21166}, {4, 31727}, {1, 23276}, {7, 0}, {1, 6372}, {1, 23276}, {1, 23277}, {1, 27504}, {15, 31727}, {1, 33875}, {1, 6372}, {52, 0}}, .partsCount = 17},
            {.parts = new image_row_part_t[17]{{47, 0}, {1, 23276}, {36, 31727}, {1, 19087}, {9, 0}, {1, 21166}, {4, 31727}, {1, 23276}, {10, 0}, {1, 6372}, {2, 23276}, {1, 27536}, {13, 31727}, {1, 27536}, {2, 23276}, {1, 6372}, {49, 0}}, .partsCount = 17},
            {.parts = new image_row_part_t[18]{{47, 0}, {1, 23276}, {36, 31727}, {1, 19087}, {9, 0}, {1, 21166}, {4, 31727}, {1, 23276}, {13, 0}, {1, 6372}, {1, 23276}, {1, 23277}, {1, 27536}, {13, 31727}, {1, 27537}, {1, 23277}, {1, 6372}, {47, 0}}, .partsCount = 18},
            {.parts = new image_row_part_t[21]{{47, 0}, {1, 23276}, {5, 31727}, {1, 33875}, {25, 23276}, {1, 33875}, {4, 31727}, {1, 19087}, {9, 0}, {1, 21166}, {4, 31727}, {1, 23276}, {16, 0}, {1, 6372}, {1, 23276}, {1, 23246}, {1, 27536}, {12, 31727}, {1, 27536}, {1, 6372}, {46, 0}}, .partsCount = 21},
            {.parts = new image_row_part_t[20]{{47, 0}, {1, 23276}, {5, 31727}, {1, 23276}, {25, 0}, {1, 23276}, {4, 31727}, {1, 19087}, {9, 0}, {1, 21166}, {4, 31727}, {1, 23276}, {19, 0}, {1, 6372}, {1, 23276}, {1, 27537}, {11, 31727}, {1, 27537}, {1, 6372}, {45, 0}}, .partsCount = 20},
            {.parts = new image_row_part_t[19]{{47, 0}, {1, 23276}, {5, 31727}, {1, 23276}, {25, 0}, {1, 23276}, {4, 31727}, {1, 19087}, {9, 0}, {1, 21166}, {4, 31727}, {1, 23276}, {21, 0}, {1, 6372}, {2, 23276}, {1, 27504}, {9, 31727}, {1, 23276}, {45, 0}}, .partsCount = 19},
            {.parts = new image_row_part_t[20]{{47, 0}, {1, 23276}, {5, 31727}, {1, 23276}, {25, 0}, {1, 23276}, {4, 31727}, {1, 19087}, {9, 0}, {1, 21166}, {4, 31727}, {1, 23276}, {24, 0}, {1, 6372}, {1, 23276}, {1, 23277}, {1, 27536}, {6, 31727}, {1, 23276}, {45, 0}}, .partsCount = 20},
            {.parts = new image_row_part_t[26]{{47, 0}, {1, 23276}, {5, 31727}, {1, 23276}, {5, 0}, {1, 6372}, {5, 23276}, {1, 6372}, {13, 0}, {1, 23276}, {4, 31727}, {1, 19087}, {9, 0}, {1, 21166}, {4, 31727}, {1, 23276}, {3, 0}, {1, 6372}, {5, 23276}, {1, 6372}, {17, 0}, {1, 6372}, {1, 33875}, {5, 31727}, {1, 23276}, {45, 0}}, .partsCount = 26},
            {.parts = new image_row_part_t[25]{{47, 0}, {1, 23276}, {5, 31727}, {1, 23276}, {5, 0}, {1, 23276}, {5, 31727}, {1, 23276}, {13, 0}, {1, 23276}, {4, 31727}, {1, 19087}, {9, 0}, {1, 21166}, {4, 31727}, {1, 23276}, {3, 0}, {1, 23276}, {5, 31727}, {1, 23276}, {18, 0}, {1, 23276}, {5, 31727}, {1, 23276}, {45, 0}}, .partsCount = 25},
            {.parts = new image_row_part_t[25]{{47, 0}, {1, 23276}, {5, 31727}, {1, 23276}, {5, 0}, {1, 23276}, {5, 31727}, {1, 23276}, {13, 0}, {1, 23276}, {4, 31727}, {1, 19087}, {9, 0}, {1, 21166}, {4, 31727}, {1, 23276}, {3, 0}, {1, 23276}, {5, 31727}, {1, 23276}, {18, 0}, {1, 23276}, {5, 31727}, {1, 23276}, {45, 0}}, .partsCount = 25},
            {.parts = new image_row_part_t[25]{{47, 0}, {1, 23276}, {5, 31727}, {1, 23276}, {5, 0}, {1, 23276}, {5, 31727}, {1, 23276}, {13, 0}, {1, 23276}, {4, 31727}, {1, 19087}, {9, 0}, {1, 21166}, {4, 31727}, {1, 23276}, {3, 0}, {1, 23276}, {5, 31727}, {1, 23276}, {18, 0}, {1, 23276}, {5, 31727}, {1, 23276}, {45, 0}}, .partsCount = 25},
            {.parts = new image_row_part_t[25]{{47, 0}, {1, 23276}, {5, 31727}, {1, 23276}, {5, 0}, {1, 23276}, {5, 31727}, {1, 23276}, {13, 0}, {1, 23276}, {4, 31727}, {1, 19087}, {9, 0}, {1, 21166}, {4, 31727}, {1, 23276}, {3, 0}, {1, 23276}, {5, 31727}, {1, 23276}, {18, 0}, {1, 23276}, {5, 31727}, {1, 23276}, {45, 0}}, .partsCount = 25},
            {.parts = new image_row_part_t[29]{{47, 0}, {1, 23276}, {5, 31727}, {1, 23276}, {5, 0}, {1, 23276}, {5, 31727}, {1, 23276}, {13, 0}, {1, 23276}, {4, 31727}, {1, 19087}, {9, 0}, {1, 21166}, {4, 31727}, {1, 23276}, {3, 0}, {1, 23276}, {5, 31727}, {1, 23276}, {8, 0}, {1, 6372}, {5, 23276}, {1, 6372}, {3, 0}, {1, 23276}, {5, 31727}, {1, 23276}, {45, 0}}, .partsCount = 29},
            {.parts = new image_row_part_t[29]{{47, 0}, {1, 23276}, {5, 31727}, {1, 23276}, {5, 0}, {1, 6372}, {5, 23276}, {1, 6372}, {13, 0}, {1, 23276}, {4, 31727}, {1, 19087}, {9, 0}, {1, 21166}, {4, 31727}, {1, 23276}, {3, 0}, {1, 6372}, {5, 23276}, {1, 6372}, {8, 0}, {1, 23276}, {5, 31727}, {1, 23276}, {3, 0}, {1, 23276}, {5, 31727}, {1, 23276}, {45, 0}}, .partsCount = 29},
            {.parts = new image_row_part_t[21]{{47, 0}, {1, 23276}, {5, 31727}, {1, 23276}, {25, 0}, {1, 23276}, {4, 31727}, {1, 19087}, {9, 0}, {1, 21166}, {4, 31727}, {1, 23276}, {18, 0}, {1, 23276}, {5, 31727}, {1, 23276}, {3, 0}, {1, 23276}, {5, 31727}, {1, 23276}, {45, 0}}, .partsCount = 21},
            {.parts = new image_row_part_t[21]{{47, 0}, {1, 23276}, {5, 31727}, {1, 23276}, {25, 0}, {1, 23276}, {4, 31727}, {1, 19087}, {9, 0}, {1, 21166}, {4, 31727}, {1, 23276}, {18, 0}, {1, 23276}, {5, 31727}, {1, 23276}, {3, 0}, {1, 23276}, {5, 31727}, {1, 23276}, {45, 0}}, .partsCount = 21},
            {.parts = new image_row_part_t[21]{{47, 0}, {1, 23276}, {5, 31727}, {1, 23276}, {25, 0}, {1, 23276}, {4, 31727}, {1, 19087}, {9, 0}, {1, 21166}, {4, 31727}, {1, 23276}, {18, 0}, {1, 23276}, {5, 31727}, {1, 23276}, {3, 0}, {1, 23276}, {5, 31727}, {1, 23276}, {45, 0}}, .partsCount = 21},
            {.parts = new image_row_part_t[25]{{47, 0}, {1, 23276}, {5, 31727}, {1, 23276}, {15, 0}, {1, 6372}, {5, 23277}, {1, 6372}, {3, 0}, {1, 23276}, {4, 31727}, {1, 19087}, {9, 0}, {1, 21166}, {4, 31727}, {1, 23276}, {18, 0}, {1, 6372}, {5, 19119}, {1, 6372}, {3, 0}, {1, 23276}, {5, 31727}, {1, 23276}, {45, 0}}, .partsCount = 25},
            {.parts = new image_row_part_t[21]{{47, 0}, {1, 23276}, {5, 31727}, {1, 23276}, {15, 0}, {1, 23276}, {5, 31727}, {1, 23276}, {3, 0}, {1, 23276}, {4, 31727}, {1, 19087}, {9, 0}, {1, 21166}, {4, 31727}, {1, 23276}, {28, 0}, {1, 23276}, {5, 31727}, {1, 23276}, {45, 0}}, .partsCount = 21},
            {.parts = new image_row_part_t[21]{{47, 0}, {1, 23276}, {5, 31727}, {1, 23276}, {15, 0}, {1, 23276}, {5, 31727}, {1, 23276}, {3, 0}, {1, 23276}, {4, 31727}, {1, 19087}, {9, 0}, {1, 21166}, {4, 31727}, {1, 23276}, {28, 0}, {1, 23276}, {5, 31727}, {1, 23276}, {45, 0}}, .partsCount = 21},
            {.parts = new image_row_part_t[21]{{47, 0}, {1, 23276}, {5, 31727}, {1, 23276}, {15, 0}, {1, 23276}, {5, 31727}, {1, 23276}, {3, 0}, {1, 23276}, {4, 31727}, {1, 19087}, {9, 0}, {1, 21166}, {4, 31727}, {1, 23276}, {28, 0}, {1, 23276}, {5, 31727}, {1, 23276}, {45, 0}}, .partsCount = 21},
            {.parts = new image_row_part_t[21]{{47, 0}, {1, 23276}, {5, 31727}, {1, 23276}, {15, 0}, {1, 23276}, {5, 31727}, {1, 23276}, {3, 0}, {1, 23276}, {4, 31727}, {1, 19087}, {9, 0}, {1, 21166}, {4, 31727}, {1, 23276}, {28, 0}, {1, 23276}, {5, 31727}, {1, 23276}, {45, 0}}, .partsCount = 21},
            {.parts = new image_row_part_t[21]{{47, 0}, {1, 23276}, {5, 31727}, {1, 23276}, {15, 0}, {1, 6372}, {5, 21166}, {1, 6372}, {3, 0}, {1, 23276}, {4, 31727}, {1, 19087}, {9, 0}, {1, 12711}, {4, 21166}, {1, 6372}, {28, 0}, {1, 23276}, {5, 31727}, {1, 23276}, {45, 0}}, .partsCount = 21},
            {.parts = new image_row_part_t[13]{{47, 0}, {1, 23276}, {5, 31727}, {1, 23276}, {25, 0}, {1, 23276}, {4, 31727}, {1, 19087}, {43, 0}, {1, 23276}, {5, 31727}, {1, 23276}, {45, 0}}, .partsCount = 13},
            {.parts = new image_row_part_t[29]{{27, 0}, {1, 6372}, {5, 23276}, {1, 6372}, {13, 0}, {1, 23276}, {5, 31727}, {1, 23276}, {3, 0}, {1, 6372}, {4, 23276}, {1, 6372}, {16, 0}, {1, 23276}, {4, 31727}, {1, 19087}, {19, 0}, {1, 8452}, {3, 23277}, {1, 8452}, {4, 0}, {1, 6372}, {5, 23276}, {1, 6372}, {8, 0}, {1, 23276}, {5, 31727}, {1, 23276}, {45, 0}}, .partsCount = 29},
            {.parts = new image_row_part_t[33]{{27, 0}, {1, 23276}, {5, 31727}, {1, 23276}, {13, 0}, {1, 23276}, {5, 31727}, {1, 23276}, {3, 0}, {1, 23277}, {4, 31727}, {1, 21166}, {16, 0}, {1, 23276}, {4, 31727}, {1, 19087}, {16, 0}, {1, 8452}, {1, 23277}, {1, 23309}, {1, 27537}, {3, 31727}, {1, 29650}, {1, 8452}, {3, 0}, {1, 23276}, {5, 31727}, {1, 23276}, {8, 0}, {1, 23276}, {5, 31727}, {1, 23276}, {45, 0}}, .partsCount = 33},
            {.parts = new image_row_part_t[31]{{27, 0}, {1, 23276}, {5, 31727}, {1, 23276}, {13, 0}, {1, 23276}, {5, 31727}, {1, 23276}, {3, 0}, {1, 23277}, {4, 31727}, {1, 21166}, {16, 0}, {1, 23276}, {4, 31727}, {1, 19087}, {12, 0}, {1, 8452}, {3, 23277}, {1, 29616}, {7, 31727}, {1, 23277}, {3, 0}, {1, 23276}, {5, 31727}, {1, 23276}, {8, 0}, {1, 23276}, {5, 31727}, {1, 23276}, {45, 0}}, .partsCount = 31},
            {.parts = new image_row_part_t[31]{{27, 0}, {1, 23276}, {5, 31727}, {1, 23276}, {13, 0}, {1, 23276}, {5, 31727}, {1, 23276}, {3, 0}, {1, 23277}, {4, 31727}, {1, 21166}, {16, 0}, {1, 6372}, {4, 23277}, {1, 10598}, {9, 0}, {1, 8452}, {2, 23277}, {1, 29650}, {11, 31727}, {1, 23277}, {3, 0}, {1, 23276}, {5, 31727}, {1, 23276}, {8, 0}, {1, 23276}, {5, 31727}, {1, 23276}, {45, 0}}, .partsCount = 31},
            {.parts = new image_row_part_t[27]{{27, 0}, {1, 23276}, {5, 31727}, {1, 23276}, {13, 0}, {1, 23276}, {5, 31727}, {1, 23276}, {3, 0}, {1, 23277}, {4, 31727}, {1, 21166}, {28, 0}, {1, 8452}, {2, 23277}, {1, 29649}, {14, 31727}, {1, 23277}, {3, 0}, {1, 23276}, {5, 31727}, {1, 23276}, {8, 0}, {1, 23276}, {5, 31727}, {1, 23276}, {45, 0}}, .partsCount = 27},
            {.parts = new image_row_part_t[40]{{27, 0}, {1, 23276}, {5, 31727}, {1, 23276}, {3, 0}, {1, 6372}, {5, 23276}, {1, 6372}, {3, 0}, {1, 23276}, {5, 31727}, {1, 23276}, {3, 0}, {1, 23277}, {4, 31727}, {1, 21166}, {25, 0}, {1, 8452}, {1, 23277}, {1, 23309}, {1, 27537}, {17, 31727}, {1, 23277}, {3, 0}, {1, 23276}, {5, 31727}, {1, 23276}, {8, 0}, {1, 23276}, {5, 31727}, {1, 23276}, {3, 0}, {1, 6372}, {4, 23276}, {1, 6372}, {4, 0}, {1, 6372}, {4, 23276}, {1, 6372}, {26, 0}}, .partsCount = 40},
            {.parts = new image_row_part_t[40]{{27, 0}, {1, 23276}, {5, 31727}, {1, 23276}, {3, 0}, {1, 23276}, {5, 31727}, {1, 23276}, {3, 0}, {1, 6372}, {5, 23276}, {1, 6372}, {3, 0}, {1, 6372}, {4, 23276}, {1, 6372}, {21, 0}, {1, 8452}, {2, 23277}, {1, 23309}, {1, 29616}, {20, 31727}, {1, 23277}, {3, 0}, {1, 6372}, {5, 23276}, {1, 6372}, {8, 0}, {1, 6372}, {5, 23276}, {1, 6372}, {3, 0}, {1, 23277}, {4, 31727}, {1, 21198}, {4, 0}, {1, 19119}, {4, 31727}, {1, 23276}, {26, 0}}, .partsCount = 40},
            {.parts = new image_row_part_t[26]{{27, 0}, {1, 23276}, {5, 31727}, {1, 23276}, {3, 0}, {1, 23276}, {5, 31727}, {1, 23276}, {37, 0}, {1, 8452}, {2, 23277}, {1, 29650}, {17, 31727}, {1, 31763}, {1, 35957}, {5, 31727}, {1, 23277}, {28, 0}, {1, 23277}, {4, 31727}, {1, 21198}, {4, 0}, {1, 19119}, {4, 31727}, {1, 23276}, {26, 0}}, .partsCount = 26},
            {.parts = new image_row_part_t[28]{{27, 0}, {1, 23276}, {5, 31727}, {1, 23276}, {3, 0}, {1, 23276}, {5, 31727}, {1, 23276}, {34, 0}, {1, 8452}, {2, 23277}, {1, 29649}, {16, 31727}, {1, 29616}, {3, 23277}, {1, 16969}, {1, 33876}, {5, 31727}, {1, 23277}, {28, 0}, {1, 23277}, {4, 31727}, {1, 21198}, {4, 0}, {1, 19119}, {4, 31727}, {1, 23276}, {26, 0}}, .partsCount = 28},
            {.parts = new image_row_part_t[30]{{27, 0}, {1, 23276}, {5, 31727}, {1, 23276}, {3, 0}, {1, 23276}, {5, 31727}, {1, 23276}, {31, 0}, {1, 8452}, {1, 23277}, {1, 23309}, {1, 27537}, {16, 31727}, {1, 27537}, {2, 23277}, {1, 8452}, {4, 0}, {1, 23277}, {5, 31727}, {1, 23277}, {28, 0}, {1, 23277}, {4, 31727}, {1, 21198}, {4, 0}, {1, 19119}, {4, 31727}, {1, 23276}, {26, 0}}, .partsCount = 30},
            {.parts = new image_row_part_t[37]{{21, 0}, {1, 6372}, {5, 23276}, {1, 33875}, {5, 31727}, {1, 33875}, {3, 23276}, {1, 33875}, {5, 31727}, {1, 33875}, {17, 23276}, {1, 6372}, {10, 0}, {1, 8452}, {2, 23277}, {1, 29616}, {16, 31727}, {1, 29617}, {2, 23277}, {1, 8452}, {7, 0}, {1, 23277}, {5, 31727}, {1, 23277}, {9, 0}, {1, 6372}, {18, 23276}, {1, 29617}, {4, 31727}, {1, 27537}, {4, 23276}, {1, 27536}, {4, 31727}, {1, 33875}, {3, 23276}, {1, 6372}, {22, 0}}, .partsCount = 37},
            {.parts = new image_row_part_t[24]{{20, 0}, {1, 6372}, {1, 27536}, {39, 31727}, {1, 27536}, {1, 6372}, {8, 0}, {1, 8452}, {1, 31762}, {16, 31727}, {1, 29650}, {2, 23277}, {1, 8452}, {10, 0}, {1, 23277}, {5, 31727}, {1, 23277}, {8, 0}, {1, 6372}, {1, 29649}, {37, 31727}, {1, 27536}, {1, 6372}, {21, 0}}, .partsCount = 24},
            {.parts = new image_row_part_t[19]{{20, 0}, {1, 23276}, {41, 31727}, {1, 23245}, {8, 0}, {1, 23277}, {13, 31727}, {1, 29616}, {3, 23277}, {1, 8452}, {13, 0}, {1, 23277}, {5, 31727}, {1, 23277}, {8, 0}, {1, 23276}, {39, 31727}, {1, 23276}, {21, 0}}, .partsCount = 19},
            {.parts = new image_row_part_t[19]{{20, 0}, {1, 23276}, {41, 31727}, {1, 21166}, {8, 0}, {1, 23277}, {10, 31727}, {1, 27537}, {2, 23277}, {1, 8452}, {17, 0}, {1, 23277}, {5, 31727}, {1, 23277}, {8, 0}, {1, 23276}, {39, 31727}, {1, 23276}, {21, 0}}, .partsCount = 19},
            {.parts = new image_row_part_t[19]{{20, 0}, {1, 23276}, {41, 31727}, {1, 21166}, {8, 0}, {1, 23277}, {7, 31727}, {1, 29617}, {2, 23277}, {1, 8452}, {20, 0}, {1, 23277}, {5, 31727}, {1, 23277}, {8, 0}, {1, 23276}, {39, 31727}, {1, 23276}, {21, 0}}, .partsCount = 19},
            {.parts = new image_row_part_t[21]{{20, 0}, {1, 23276}, {41, 31727}, {1, 21166}, {8, 0}, {1, 23277}, {5, 31727}, {1, 31762}, {1, 23277}, {1, 8452}, {13, 0}, {1, 8452}, {9, 23277}, {1, 31762}, {5, 31727}, {1, 23277}, {8, 0}, {1, 23276}, {39, 31727}, {1, 23276}, {21, 0}}, .partsCount = 21},
            {.parts = new image_row_part_t[25]{{20, 0}, {1, 23276}, {5, 31727}, {1, 33875}, {30, 23276}, {1, 31730}, {4, 31727}, {1, 21166}, {8, 0}, {1, 23277}, {5, 31727}, {1, 23277}, {15, 0}, {1, 23277}, {15, 31727}, {1, 23277}, {8, 0}, {1, 23276}, {5, 31727}, {1, 33875}, {27, 23276}, {1, 33875}, {5, 31727}, {1, 23276}, {21, 0}}, .partsCount = 25},
            {.parts = new image_row_part_t[25]{{20, 0}, {1, 23276}, {5, 31727}, {1, 23276}, {30, 0}, {1, 23277}, {4, 31727}, {1, 21166}, {8, 0}, {1, 23277}, {5, 31727}, {1, 23277}, {15, 0}, {1, 23277}, {15, 31727}, {1, 23277}, {8, 0}, {1, 23276}, {5, 31727}, {1, 23276}, {27, 0}, {1, 23276}, {5, 31727}, {1, 23276}, {21, 0}}, .partsCount = 25},
            {.parts = new image_row_part_t[25]{{20, 0}, {1, 23276}, {5, 31727}, {1, 23276}, {30, 0}, {1, 23277}, {4, 31727}, {1, 21166}, {8, 0}, {1, 23277}, {5, 31727}, {1, 23277}, {15, 0}, {1, 23277}, {15, 31727}, {1, 23277}, {8, 0}, {1, 23276}, {5, 31727}, {1, 23276}, {27, 0}, {1, 23276}, {5, 31727}, {1, 23276}, {21, 0}}, .partsCount = 25},
            {.parts = new image_row_part_t[25]{{20, 0}, {1, 23276}, {5, 31727}, {1, 23276}, {30, 0}, {1, 23277}, {4, 31727}, {1, 21166}, {8, 0}, {1, 23277}, {5, 31727}, {1, 23277}, {15, 0}, {1, 23277}, {15, 31727}, {1, 23277}, {8, 0}, {1, 23276}, {5, 31727}, {1, 23276}, {27, 0}, {1, 23276}, {5, 31727}, {1, 23276}, {21, 0}}, .partsCount = 25},
            {.parts = new image_row_part_t[25]{{20, 0}, {1, 23276}, {5, 31727}, {1, 23276}, {30, 0}, {1, 23277}, {4, 31727}, {1, 21166}, {8, 0}, {1, 23277}, {5, 31727}, {1, 23277}, {15, 0}, {1, 23277}, {15, 31727}, {1, 23277}, {8, 0}, {1, 23276}, {5, 31727}, {1, 23276}, {27, 0}, {1, 23276}, {5, 31727}, {1, 23276}, {21, 0}}, .partsCount = 25},
            {.parts = new image_row_part_t[27]{{20, 0}, {1, 23276}, {5, 31727}, {1, 23276}, {30, 0}, {1, 23277}, {4, 31727}, {1, 21166}, {8, 0}, {1, 23277}, {5, 31727}, {1, 23277}, {15, 0}, {1, 8452}, {9, 23277}, {1, 31762}, {5, 31727}, {1, 23277}, {8, 0}, {1, 23276}, {5, 31727}, {1, 23276}, {27, 0}, {1, 23276}, {5, 31727}, {1, 23276}, {21, 0}}, .partsCount = 27},
            {.parts = new image_row_part_t[29]{{20, 0}, {1, 23276}, {5, 31727}, {1, 33875}, {21, 23276}, {1, 6372}, {8, 0}, {1, 23277}, {4, 31727}, {1, 21166}, {8, 0}, {1, 23277}, {5, 31727}, {1, 23277}, {25, 0}, {1, 23277}, {5, 31727}, {1, 23277}, {8, 0}, {1, 23276}, {5, 31727}, {1, 23276}, {5, 0}, {1, 6372}, {21, 23276}, {1, 33875}, {5, 31727}, {1, 23276}, {21, 0}}, .partsCount = 29},
            {.parts = new image_row_part_t[25]{{20, 0}, {1, 23276}, {27, 31727}, {1, 23276}, {8, 0}, {1, 6372}, {4, 23276}, {1, 6372}, {8, 0}, {1, 23277}, {5, 31727}, {1, 23277}, {25, 0}, {1, 23277}, {5, 31727}, {1, 23277}, {8, 0}, {1, 23276}, {5, 31727}, {1, 23276}, {5, 0}, {1, 23276}, {27, 31727}, {1, 23276}, {21, 0}}, .partsCount = 25},
            {.parts = new image_row_part_t[21]{{20, 0}, {1, 23276}, {27, 31727}, {1, 23276}, {22, 0}, {1, 23277}, {5, 31727}, {1, 23277}, {25, 0}, {1, 23277}, {5, 31727}, {1, 23277}, {8, 0}, {1, 23276}, {5, 31727}, {1, 23276}, {5, 0}, {1, 23276}, {27, 31727}, {1, 23276}, {21, 0}}, .partsCount = 21},
            {.parts = new image_row_part_t[23]{{20, 0}, {1, 23276}, {27, 31727}, {1, 23276}, {22, 0}, {1, 23277}, {5, 31727}, {1, 23277}, {8, 0}, {1, 8452}, {16, 21199}, {1, 27536}, {5, 31727}, {1, 23277}, {8, 0}, {1, 23276}, {5, 31727}, {1, 23276}, {5, 0}, {1, 23276}, {27, 31727}, {1, 23276}, {21, 0}}, .partsCount = 23},
            {.parts = new image_row_part_t[21]{{20, 0}, {1, 23276}, {27, 31727}, {1, 23276}, {22, 0}, {1, 23277}, {5, 31727}, {1, 23277}, {8, 0}, {1, 23277}, {22, 31727}, {1, 23277}, {8, 0}, {1, 23276}, {5, 31727}, {1, 23276}, {5, 0}, {1, 23276}, {27, 31727}, {1, 23276}, {21, 0}}, .partsCount = 21},
            {.parts = new image_row_part_t[25]{{20, 0}, {1, 23276}, {27, 31727}, {1, 23276}, {8, 0}, {1, 6372}, {4, 23276}, {1, 6372}, {8, 0}, {1, 23277}, {5, 31727}, {1, 23277}, {8, 0}, {1, 23277}, {22, 31727}, {1, 23277}, {8, 0}, {1, 23276}, {5, 31727}, {1, 23276}, {5, 0}, {1, 23276}, {27, 31727}, {1, 23276}, {21, 0}}, .partsCount = 25},
            {.parts = new image_row_part_t[29]{{20, 0}, {1, 23276}, {5, 31727}, {1, 33875}, {21, 23276}, {1, 6372}, {8, 0}, {1, 23277}, {4, 31727}, {1, 21166}, {8, 0}, {1, 23277}, {5, 31727}, {1, 23277}, {8, 0}, {1, 23277}, {22, 31727}, {1, 23277}, {8, 0}, {1, 23276}, {5, 31727}, {1, 23276}, {5, 0}, {1, 6372}, {21, 23276}, {1, 33875}, {5, 31727}, {1, 23276}, {21, 0}}, .partsCount = 29},
            {.parts = new image_row_part_t[25]{{20, 0}, {1, 23276}, {5, 31727}, {1, 23276}, {30, 0}, {1, 23277}, {4, 31727}, {1, 21166}, {8, 0}, {1, 23277}, {5, 31727}, {1, 23277}, {8, 0}, {1, 23277}, {22, 31727}, {1, 23277}, {8, 0}, {1, 23276}, {5, 31727}, {1, 23276}, {27, 0}, {1, 23276}, {5, 31727}, {1, 23276}, {21, 0}}, .partsCount = 25},
            {.parts = new image_row_part_t[27]{{20, 0}, {1, 23276}, {5, 31727}, {1, 23276}, {30, 0}, {1, 23277}, {4, 31727}, {1, 21166}, {8, 0}, {1, 23277}, {5, 31727}, {1, 23277}, {8, 0}, {1, 8452}, {16, 23278}, {1, 29617}, {5, 31727}, {1, 23277}, {8, 0}, {1, 23276}, {5, 31727}, {1, 23276}, {27, 0}, {1, 23276}, {5, 31727}, {1, 23276}, {21, 0}}, .partsCount = 27},
            {.parts = new image_row_part_t[25]{{20, 0}, {1, 23276}, {5, 31727}, {1, 23276}, {30, 0}, {1, 23277}, {4, 31727}, {1, 21166}, {8, 0}, {1, 23277}, {5, 31727}, {1, 23277}, {25, 0}, {1, 23277}, {5, 31727}, {1, 23277}, {8, 0}, {1, 23276}, {5, 31727}, {1, 23276}, {27, 0}, {1, 23276}, {5, 31727}, {1, 23276}, {21, 0}}, .partsCount = 25},
            {.parts = new image_row_part_t[29]{{20, 0}, {1, 23276}, {5, 31727}, {1, 33875}, {18, 23276}, {1, 6372}, {11, 0}, {1, 23277}, {4, 31727}, {1, 21166}, {8, 0}, {1, 23277}, {5, 31727}, {1, 23277}, {25, 0}, {1, 23277}, {5, 31727}, {1, 23277}, {8, 0}, {1, 23276}, {5, 31727}, {1, 23276}, {18, 0}, {1, 6372}, {8, 23276}, {1, 33875}, {5, 31727}, {1, 23276}, {21, 0}}, .partsCount = 29},
            {.parts = new image_row_part_t[29]{{20, 0}, {1, 23276}, {24, 31727}, {1, 23276}, {9, 0}, {1, 6372}, {1, 23277}, {1, 27536}, {4, 31727}, {1, 27536}, {1, 23277}, {1, 6372}, {6, 0}, {1, 23277}, {5, 31727}, {1, 23277}, {25, 0}, {1, 23277}, {5, 31727}, {1, 23277}, {8, 0}, {1, 23276}, {5, 31727}, {1, 23276}, {18, 0}, {1, 21166}, {14, 31727}, {1, 23276}, {21, 0}}, .partsCount = 29},
            {.parts = new image_row_part_t[27]{{20, 0}, {1, 23276}, {24, 31727}, {1, 23276}, {8, 0}, {1, 6372}, {1, 27536}, {8, 31727}, {1, 27536}, {1, 6372}, {5, 0}, {1, 23277}, {5, 31727}, {1, 23277}, {25, 0}, {1, 23277}, {5, 31727}, {1, 23277}, {8, 0}, {1, 23276}, {5, 31727}, {1, 23276}, {18, 0}, {1, 21166}, {14, 31727}, {1, 23276}, {21, 0}}, .partsCount = 27},
            {.parts = new image_row_part_t[27]{{20, 0}, {1, 23276}, {24, 31727}, {1, 23276}, {7, 0}, {1, 6372}, {1, 27504}, {10, 31727}, {1, 27536}, {1, 6372}, {4, 0}, {1, 23277}, {5, 31727}, {1, 23277}, {25, 0}, {1, 8452}, {5, 23277}, {1, 8452}, {8, 0}, {1, 6372}, {5, 23276}, {1, 6372}, {18, 0}, {1, 21166}, {14, 31727}, {1, 23276}, {21, 0}}, .partsCount = 27},
            {.parts = new image_row_part_t[19]{{20, 0}, {1, 23276}, {24, 31727}, {1, 23276}, {6, 0}, {1, 6372}, {1, 31762}, {12, 31727}, {1, 29617}, {1, 6372}, {3, 0}, {1, 23277}, {5, 31727}, {1, 23277}, {65, 0}, {1, 21166}, {14, 31727}, {1, 23276}, {21, 0}}, .partsCount = 19},
            {.parts = new image_row_part_t[21]{{20, 0}, {1, 23276}, {24, 31727}, {1, 23276}, {6, 0}, {1, 23276}, {14, 31727}, {1, 23276}, {3, 0}, {1, 23277}, {5, 31727}, {1, 23277}, {53, 0}, {1, 6372}, {5, 23276}, {1, 6372}, {5, 0}, {1, 21166}, {14, 31727}, {1, 23276}, {21, 0}}, .partsCount = 21},
            {.parts = new image_row_part_t[35]{{20, 0}, {1, 23276}, {5, 31727}, {1, 33875}, {18, 23276}, {1, 6372}, {6, 0}, {1, 23276}, {5, 31727}, {1, 29649}, {2, 23276}, {1, 31762}, {5, 31727}, {1, 23277}, {3, 0}, {1, 8452}, {5, 23277}, {1, 8452}, {43, 0}, {1, 6372}, {6, 23276}, {1, 23277}, {1, 21166}, {1, 21167}, {1, 27536}, {5, 31727}, {1, 29584}, {1, 6372}, {4, 0}, {1, 6372}, {8, 23276}, {1, 33875}, {5, 31727}, {1, 23276}, {21, 0}}, .partsCount = 35},
            {.parts = new image_row_part_t[27]{{20, 0}, {1, 23276}, {5, 31727}, {1, 23276}, {25, 0}, {1, 23276}, {4, 31727}, {1, 27536}, {1, 6372}, {2, 0}, {1, 6372}, {1, 27536}, {4, 31727}, {1, 23277}, {45, 0}, {1, 6372}, {3, 23276}, {3, 23277}, {1, 21198}, {1, 27536}, {16, 31727}, {1, 21198}, {13, 0}, {1, 23276}, {5, 31727}, {1, 23276}, {21, 0}}, .partsCount = 27},
            {.parts = new image_row_part_t[27]{{20, 0}, {1, 23276}, {5, 31727}, {1, 23276}, {25, 0}, {1, 23276}, {4, 31727}, {1, 19119}, {4, 0}, {1, 21198}, {4, 31727}, {1, 23277}, {36, 0}, {1, 6372}, {4, 23276}, {1, 23277}, {1, 23245}, {1, 21198}, {1, 21166}, {1, 27536}, {24, 31727}, {1, 21166}, {13, 0}, {1, 23276}, {5, 31727}, {1, 23276}, {21, 0}}, .partsCount = 27},
            {.parts = new image_row_part_t[26]{{20, 0}, {1, 23276}, {5, 31727}, {1, 23276}, {25, 0}, {1, 23276}, {4, 31727}, {1, 19119}, {4, 0}, {1, 21198}, {4, 31727}, {1, 23277}, {27, 0}, {1, 6372}, {4, 23276}, {1, 23277}, {1, 23245}, {2, 21166}, {1, 27536}, {33, 31727}, {1, 21166}, {13, 0}, {1, 23276}, {5, 31727}, {1, 23276}, {21, 0}}, .partsCount = 26},
            {.parts = new image_row_part_t[34]{{20, 0}, {1, 23276}, {5, 31727}, {1, 33875}, {11, 23276}, {1, 6372}, {9, 0}, {1, 6372}, {3, 23276}, {1, 33875}, {4, 31727}, {1, 27536}, {4, 23276}, {1, 27537}, {4, 31727}, {1, 29649}, {13, 23276}, {1, 6372}, {8, 0}, {1, 6372}, {1, 23276}, {1, 23277}, {1, 21166}, {1, 19119}, {1, 29616}, {42, 31727}, {1, 21166}, {4, 0}, {1, 6372}, {8, 23276}, {1, 33875}, {5, 31727}, {1, 23276}, {21, 0}}, .partsCount = 34},
            {.parts = new image_row_part_t[28]{{20, 0}, {1, 23276}, {17, 31727}, {1, 23276}, {8, 0}, {1, 6372}, {1, 27504}, {32, 31727}, {1, 27504}, {1, 6372}, {6, 0}, {1, 6372}, {1, 29584}, {35, 31727}, {1, 27536}, {1, 19119}, {1, 21166}, {1, 23245}, {1, 23277}, {2, 23276}, {1, 33875}, {4, 31727}, {1, 21166}, {4, 0}, {1, 21166}, {14, 31727}, {1, 23276}, {21, 0}}, .partsCount = 28},
            {.parts = new image_row_part_t[26]{{20, 0}, {1, 23276}, {17, 31727}, {1, 23276}, {8, 0}, {1, 23276}, {34, 31727}, {1, 23276}, {6, 0}, {1, 23245}, {27, 31727}, {1, 27536}, {2, 21166}, {1, 23245}, {1, 23277}, {4, 23276}, {1, 6372}, {6, 0}, {1, 23276}, {4, 31727}, {1, 21166}, {4, 0}, {1, 21166}, {14, 31727}, {1, 23276}, {21, 0}}, .partsCount = 26},
            {.parts = new image_row_part_t[25]{{20, 0}, {1, 23276}, {17, 31727}, {1, 23276}, {8, 0}, {1, 23276}, {34, 31727}, {1, 23276}, {6, 0}, {1, 21198}, {19, 31727}, {1, 27536}, {1, 21166}, {3, 23277}, {3, 23276}, {1, 6372}, {15, 0}, {1, 23276}, {4, 31727}, {1, 21166}, {4, 0}, {1, 21166}, {14, 31727}, {1, 23276}, {21, 0}}, .partsCount = 25},
            {.parts = new image_row_part_t[26]{{20, 0}, {1, 23276}, {17, 31727}, {1, 23276}, {8, 0}, {1, 23276}, {34, 31727}, {1, 23276}, {6, 0}, {1, 21198}, {11, 31727}, {1, 27504}, {1, 23277}, {1, 23276}, {1, 23277}, {4, 23276}, {1, 6372}, {23, 0}, {1, 23276}, {4, 31727}, {1, 21166}, {4, 0}, {1, 21166}, {14, 31727}, {1, 23276}, {21, 0}}, .partsCount = 26},
            {.parts = new image_row_part_t[31]{{20, 0}, {1, 23276}, {5, 31727}, {1, 27536}, {11, 21166}, {1, 6372}, {8, 0}, {1, 23276}, {5, 31727}, {1, 27536}, {22, 21166}, {1, 27536}, {5, 31727}, {1, 23276}, {6, 0}, {1, 21198}, {4, 31727}, {1, 29617}, {6, 23276}, {1, 6372}, {31, 0}, {1, 23276}, {4, 31727}, {1, 21166}, {4, 0}, {1, 12711}, {8, 21166}, {1, 27536}, {5, 31727}, {1, 23276}, {21, 0}}, .partsCount = 31},
            {.parts = new image_row_part_t[25]{{20, 0}, {1, 23276}, {5, 31727}, {1, 23276}, {20, 0}, {1, 23276}, {5, 31727}, {1, 23276}, {22, 0}, {1, 23276}, {5, 31727}, {1, 23276}, {6, 0}, {1, 21198}, {4, 31727}, {1, 23277}, {38, 0}, {1, 23276}, {4, 31727}, {1, 21166}, {13, 0}, {1, 23276}, {5, 31727}, {1, 23276}, {21, 0}}, .partsCount = 25},
            {.parts = new image_row_part_t[25]{{20, 0}, {1, 23276}, {5, 31727}, {1, 23276}, {20, 0}, {1, 23276}, {5, 31727}, {1, 23276}, {22, 0}, {1, 23276}, {5, 31727}, {1, 23276}, {6, 0}, {1, 21198}, {4, 31727}, {1, 23277}, {38, 0}, {1, 23276}, {4, 31727}, {1, 21166}, {13, 0}, {1, 23276}, {5, 31727}, {1, 23276}, {21, 0}}, .partsCount = 25},
            {.parts = new image_row_part_t[25]{{20, 0}, {1, 23276}, {5, 31727}, {1, 23276}, {20, 0}, {1, 23276}, {5, 31727}, {1, 23276}, {22, 0}, {1, 23276}, {5, 31727}, {1, 23276}, {6, 0}, {1, 21198}, {4, 31727}, {1, 23277}, {38, 0}, {1, 23276}, {4, 31727}, {1, 21166}, {13, 0}, {1, 23276}, {5, 31727}, {1, 23276}, {21, 0}}, .partsCount = 25},
            {.parts = new image_row_part_t[25]{{20, 0}, {1, 23276}, {5, 31727}, {1, 23276}, {20, 0}, {1, 23276}, {5, 31727}, {1, 23276}, {22, 0}, {1, 23276}, {5, 31727}, {1, 23276}, {6, 0}, {1, 21198}, {4, 31727}, {1, 23277}, {38, 0}, {1, 23276}, {4, 31727}, {1, 21166}, {13, 0}, {1, 23276}, {5, 31727}, {1, 23276}, {21, 0}}, .partsCount = 25},
            {.parts = new image_row_part_t[29]{{20, 0}, {1, 23276}, {5, 31727}, {1, 27504}, {13, 21166}, {1, 10598}, {6, 0}, {1, 23276}, {5, 31727}, {1, 23276}, {22, 0}, {1, 23276}, {5, 31727}, {1, 23276}, {6, 0}, {1, 21198}, {4, 31727}, {1, 27504}, {38, 21166}, {1, 27504}, {4, 31727}, {1, 21166}, {4, 0}, {1, 12711}, {8, 21166}, {1, 27504}, {5, 31727}, {1, 23276}, {21, 0}}, .partsCount = 29},
            {.parts = new image_row_part_t[21]{{20, 0}, {1, 23276}, {19, 31727}, {1, 23277}, {6, 0}, {1, 23276}, {5, 31727}, {1, 23276}, {22, 0}, {1, 23276}, {5, 31727}, {1, 23276}, {6, 0}, {1, 21198}, {48, 31727}, {1, 21166}, {4, 0}, {1, 21166}, {14, 31727}, {1, 23276}, {21, 0}}, .partsCount = 21},
            {.parts = new image_row_part_t[29]{{20, 0}, {1, 23276}, {19, 31727}, {1, 23277}, {6, 0}, {1, 23276}, {5, 31727}, {1, 23276}, {3, 0}, {1, 6372}, {4, 23276}, {1, 6372}, {4, 0}, {1, 6372}, {4, 23276}, {1, 6372}, {3, 0}, {1, 23276}, {5, 31727}, {1, 23276}, {6, 0}, {1, 21198}, {48, 31727}, {1, 21166}, {4, 0}, {1, 21166}, {14, 31727}, {1, 23276}, {21, 0}}, .partsCount = 29},
            {.parts = new image_row_part_t[29]{{20, 0}, {1, 23276}, {19, 31727}, {1, 23277}, {6, 0}, {1, 23276}, {5, 31727}, {1, 23276}, {3, 0}, {1, 23277}, {4, 31727}, {1, 21166}, {4, 0}, {1, 21166}, {4, 31727}, {1, 23276}, {3, 0}, {1, 23276}, {5, 31727}, {1, 23276}, {6, 0}, {1, 23245}, {48, 31727}, {1, 21166}, {4, 0}, {1, 21166}, {14, 31727}, {1, 23276}, {21, 0}}, .partsCount = 29},
            {.parts = new image_row_part_t[30]{{20, 0}, {1, 23276}, {19, 31727}, {1, 23277}, {6, 0}, {1, 23276}, {5, 31727}, {1, 23276}, {3, 0}, {1, 23277}, {4, 31727}, {1, 21166}, {4, 0}, {1, 21166}, {4, 31727}, {1, 23276}, {3, 0}, {1, 23276}, {5, 31727}, {1, 23276}, {6, 0}, {1, 6372}, {1, 29616}, {47, 31727}, {1, 23276}, {4, 0}, {1, 21166}, {14, 31727}, {1, 23276}, {21, 0}}, .partsCount = 30},
            {.parts = new image_row_part_t[42]{{20, 0}, {1, 23276}, {5, 31727}, {1, 31730}, {13, 23277}, {1, 8452}, {6, 0}, {1, 23276}, {5, 31727}, {1, 23276}, {3, 0}, {1, 23277}, {4, 31727}, {1, 21166}, {4, 0}, {1, 21166}, {4, 31727}, {1, 23276}, {3, 0}, {1, 23276}, {5, 31727}, {1, 23276}, {7, 0}, {1, 6372}, {3, 23277}, {1, 27536}, {4, 31727}, {1, 25390}, {28, 8484}, {1, 25390}, {5, 31727}, {1, 31730}, {2, 23277}, {1, 23276}, {1, 6372}, {4, 0}, {1, 8485}, {8, 23277}, {1, 31730}, {5, 31727}, {1, 23276}, {21, 0}}, .partsCount = 42},
            {.parts = new image_row_part_t[33]{{20, 0}, {1, 23276}, {5, 31727}, {1, 23276}, {20, 0}, {1, 23276}, {5, 31727}, {1, 23276}, {3, 0}, {1, 23277}, {4, 31727}, {1, 21166}, {4, 0}, {1, 21166}, {4, 31727}, {1, 23276}, {3, 0}, {1, 23276}, {5, 31727}, {1, 23276}, {11, 0}, {1, 21166}, {4, 31727}, {1, 8484}, {28, 0}, {1, 8484}, {5, 31727}, {1, 23276}, {17, 0}, {1, 23276}, {5, 31727}, {1, 23276}, {21, 0}}, .partsCount = 33},
            {.parts = new image_row_part_t[33]{{20, 0}, {1, 23276}, {5, 31727}, {1, 23276}, {20, 0}, {1, 23276}, {5, 31727}, {1, 23276}, {3, 0}, {1, 23277}, {4, 31727}, {1, 21166}, {4, 0}, {1, 21166}, {4, 31727}, {1, 23276}, {3, 0}, {1, 23276}, {5, 31727}, {1, 23276}, {11, 0}, {1, 21166}, {4, 31727}, {1, 8484}, {28, 0}, {1, 8484}, {5, 31727}, {1, 23276}, {17, 0}, {1, 23276}, {5, 31727}, {1, 23276}, {21, 0}}, .partsCount = 33},
            {.parts = new image_row_part_t[33]{{20, 0}, {1, 23276}, {5, 31727}, {1, 23276}, {20, 0}, {1, 23276}, {5, 31727}, {1, 23276}, {3, 0}, {1, 23277}, {4, 31727}, {1, 21166}, {4, 0}, {1, 21166}, {4, 31727}, {1, 23276}, {3, 0}, {1, 23276}, {5, 31727}, {1, 23276}, {11, 0}, {1, 21166}, {4, 31727}, {1, 8484}, {28, 0}, {1, 8484}, {5, 31727}, {1, 23276}, {17, 0}, {1, 23276}, {5, 31727}, {1, 23276}, {21, 0}}, .partsCount = 33},
            {.parts = new image_row_part_t[45]{{20, 0}, {1, 23276}, {5, 31727}, {1, 33875}, {11, 23276}, {1, 6372}, {8, 0}, {1, 23276}, {5, 31727}, {1, 23276}, {3, 0}, {1, 23277}, {4, 31727}, {1, 21166}, {4, 0}, {1, 21166}, {4, 31727}, {1, 23276}, {3, 0}, {1, 23276}, {5, 31727}, {1, 23276}, {11, 0}, {1, 21166}, {4, 31727}, {1, 8484}, {6, 0}, {1, 4258}, {4, 21162}, {1, 4258}, {4, 0}, {1, 6339}, {4, 19050}, {1, 6339}, {6, 0}, {1, 8484}, {5, 31727}, {1, 23276}, {5, 0}, {1, 6372}, {11, 23276}, {1, 33875}, {5, 31727}, {1, 23276}, {21, 0}}, .partsCount = 45},
            {.parts = new image_row_part_t[41]{{20, 0}, {1, 23276}, {17, 31727}, {1, 23276}, {8, 0}, {1, 23276}, {5, 31727}, {1, 23276}, {3, 0}, {1, 23277}, {4, 31727}, {1, 21166}, {4, 0}, {1, 21166}, {4, 31727}, {1, 23276}, {3, 0}, {1, 23276}, {5, 31727}, {1, 23276}, {11, 0}, {1, 21166}, {4, 31727}, {1, 8484}, {6, 0}, {1, 21162}, {4, 31727}, {1, 16970}, {4, 0}, {1, 16970}, {4, 31727}, {1, 19050}, {6, 0}, {1, 8484}, {5, 31727}, {1, 23276}, {5, 0}, {1, 23276}, {17, 31727}, {1, 23276}, {21, 0}}, .partsCount = 41},
            {.parts = new image_row_part_t[41]{{20, 0}, {1, 23276}, {17, 31727}, {1, 23276}, {8, 0}, {1, 23276}, {5, 31727}, {1, 23276}, {3, 0}, {1, 23277}, {4, 31727}, {1, 21166}, {4, 0}, {1, 21166}, {4, 31727}, {1, 23276}, {3, 0}, {1, 23276}, {5, 31727}, {1, 23276}, {11, 0}, {1, 21166}, {4, 31727}, {1, 8484}, {6, 0}, {1, 21162}, {4, 31727}, {1, 16970}, {4, 0}, {1, 16970}, {4, 31727}, {1, 19050}, {6, 0}, {1, 8484}, {5, 31727}, {1, 23276}, {5, 0}, {1, 23276}, {17, 31727}, {1, 23276}, {21, 0}}, .partsCount = 41},
            {.parts = new image_row_part_t[41]{{20, 0}, {1, 23276}, {17, 31727}, {1, 23276}, {8, 0}, {1, 23276}, {5, 31727}, {1, 23276}, {3, 0}, {1, 23277}, {4, 31727}, {1, 21166}, {4, 0}, {1, 21166}, {4, 31727}, {1, 23276}, {3, 0}, {1, 23276}, {5, 31727}, {1, 23276}, {11, 0}, {1, 21166}, {4, 31727}, {1, 8484}, {6, 0}, {1, 21162}, {4, 31727}, {1, 16970}, {4, 0}, {1, 16970}, {4, 31727}, {1, 19050}, {6, 0}, {1, 8484}, {5, 31727}, {1, 23276}, {5, 0}, {1, 23276}, {17, 31727}, {1, 23276}, {21, 0}}, .partsCount = 41},
            {.parts = new image_row_part_t[41]{{20, 0}, {1, 23276}, {17, 31727}, {1, 23276}, {8, 0}, {1, 23276}, {5, 31727}, {1, 23276}, {3, 0}, {1, 23277}, {4, 31727}, {1, 21166}, {4, 0}, {1, 21166}, {4, 31727}, {1, 23276}, {3, 0}, {1, 23276}, {5, 31727}, {1, 23276}, {11, 0}, {1, 21166}, {4, 31727}, {1, 8484}, {6, 0}, {1, 21162}, {4, 31727}, {1, 16970}, {4, 0}, {1, 16970}, {4, 31727}, {1, 19050}, {6, 0}, {1, 8484}, {5, 31727}, {1, 23276}, {5, 0}, {1, 23276}, {17, 31727}, {1, 23276}, {21, 0}}, .partsCount = 41},
            {.parts = new image_row_part_t[41]{{20, 0}, {1, 23276}, {17, 31727}, {1, 23276}, {8, 0}, {1, 23276}, {5, 31727}, {1, 23276}, {3, 0}, {1, 23277}, {4, 31727}, {1, 21166}, {4, 0}, {1, 21166}, {4, 31727}, {1, 23276}, {3, 0}, {1, 23276}, {5, 31727}, {1, 23276}, {11, 0}, {1, 21166}, {4, 31727}, {1, 8484}, {6, 0}, {1, 21162}, {4, 31727}, {1, 16970}, {4, 0}, {1, 16970}, {4, 31727}, {1, 19050}, {6, 0}, {1, 8484}, {5, 31727}, {1, 23276}, {5, 0}, {1, 23276}, {17, 31727}, {1, 23276}, {21, 0}}, .partsCount = 41},
            {.parts = new image_row_part_t[45]{{20, 0}, {1, 23276}, {5, 31727}, {1, 33875}, {11, 23276}, {1, 6372}, {8, 0}, {1, 23276}, {5, 31727}, {1, 23276}, {3, 0}, {1, 23277}, {4, 31727}, {1, 21166}, {4, 0}, {1, 21166}, {4, 31727}, {1, 23276}, {3, 0}, {1, 23276}, {5, 31727}, {1, 23276}, {11, 0}, {1, 21166}, {4, 31727}, {1, 8484}, {6, 0}, {1, 4258}, {4, 21162}, {1, 4258}, {4, 0}, {1, 6339}, {4, 19050}, {1, 6339}, {6, 0}, {1, 8484}, {5, 31727}, {1, 23276}, {5, 0}, {1, 6372}, {11, 23276}, {1, 33875}, {5, 31727}, {1, 23276}, {21, 0}}, .partsCount = 45},
            {.parts = new image_row_part_t[33]{{20, 0}, {1, 23276}, {5, 31727}, {1, 23276}, {20, 0}, {1, 23276}, {5, 31727}, {1, 23276}, {3, 0}, {1, 23277}, {4, 31727}, {1, 21166}, {4, 0}, {1, 21166}, {4, 31727}, {1, 23276}, {3, 0}, {1, 23276}, {5, 31727}, {1, 23276}, {11, 0}, {1, 21166}, {4, 31727}, {1, 8484}, {28, 0}, {1, 8484}, {5, 31727}, {1, 23276}, {17, 0}, {1, 23276}, {5, 31727}, {1, 23276}, {21, 0}}, .partsCount = 33},
            {.parts = new image_row_part_t[33]{{20, 0}, {1, 23276}, {5, 31727}, {1, 23276}, {20, 0}, {1, 23276}, {5, 31727}, {1, 23276}, {3, 0}, {1, 23277}, {4, 31727}, {1, 21166}, {4, 0}, {1, 21166}, {4, 31727}, {1, 23276}, {3, 0}, {1, 23276}, {5, 31727}, {1, 23276}, {11, 0}, {1, 21166}, {4, 31727}, {1, 8484}, {28, 0}, {1, 8484}, {5, 31727}, {1, 23276}, {17, 0}, {1, 23276}, {5, 31727}, {1, 23276}, {21, 0}}, .partsCount = 33},
            {.parts = new image_row_part_t[33]{{20, 0}, {1, 23276}, {5, 31727}, {1, 23276}, {20, 0}, {1, 23276}, {5, 31727}, {1, 23276}, {3, 0}, {1, 23277}, {4, 31727}, {1, 21166}, {4, 0}, {1, 21166}, {4, 31727}, {1, 23276}, {3, 0}, {1, 23276}, {5, 31727}, {1, 23276}, {11, 0}, {1, 21166}, {4, 31727}, {1, 8484}, {28, 0}, {1, 8484}, {5, 31727}, {1, 23276}, {17, 0}, {1, 23276}, {5, 31727}, {1, 23276}, {21, 0}}, .partsCount = 33},
            {.parts = new image_row_part_t[45]{{20, 0}, {1, 23276}, {5, 31727}, {1, 33875}, {11, 23276}, {1, 6372}, {8, 0}, {1, 23276}, {5, 31727}, {1, 23276}, {3, 0}, {1, 23277}, {4, 31727}, {1, 21166}, {4, 0}, {1, 21166}, {4, 31727}, {1, 23276}, {3, 0}, {1, 23276}, {5, 31727}, {1, 23276}, {11, 0}, {1, 21166}, {4, 31727}, {1, 8484}, {6, 0}, {1, 4258}, {4, 21162}, {1, 4258}, {4, 0}, {1, 4258}, {4, 21162}, {1, 4258}, {6, 0}, {1, 8484}, {5, 31727}, {1, 23276}, {5, 0}, {1, 6372}, {11, 23276}, {1, 33875}, {5, 31727}, {1, 23276}, {21, 0}}, .partsCount = 45},
            {.parts = new image_row_part_t[41]{{20, 0}, {1, 23276}, {17, 31727}, {1, 23276}, {8, 0}, {1, 23276}, {5, 31727}, {1, 23276}, {3, 0}, {1, 23277}, {4, 31727}, {1, 21166}, {4, 0}, {1, 21166}, {4, 31727}, {1, 23276}, {3, 0}, {1, 23276}, {5, 31727}, {1, 23276}, {11, 0}, {1, 21166}, {4, 31727}, {1, 8484}, {6, 0}, {1, 21162}, {4, 31727}, {1, 16970}, {4, 0}, {1, 19018}, {4, 31727}, {1, 21130}, {6, 0}, {1, 8484}, {5, 31727}, {1, 23276}, {5, 0}, {1, 23276}, {17, 31727}, {1, 23276}, {21, 0}}, .partsCount = 41},
            {.parts = new image_row_part_t[41]{{20, 0}, {1, 23276}, {17, 31727}, {1, 23276}, {8, 0}, {1, 23276}, {5, 31727}, {1, 23276}, {3, 0}, {1, 23277}, {4, 31727}, {1, 21166}, {4, 0}, {1, 21166}, {4, 31727}, {1, 23276}, {3, 0}, {1, 23276}, {5, 31727}, {1, 23276}, {11, 0}, {1, 21166}, {4, 31727}, {1, 8484}, {6, 0}, {1, 21162}, {4, 31727}, {1, 16970}, {4, 0}, {1, 19018}, {4, 31727}, {1, 21130}, {6, 0}, {1, 8484}, {5, 31727}, {1, 23276}, {5, 0}, {1, 23276}, {17, 31727}, {1, 23276}, {21, 0}}, .partsCount = 41},
            {.parts = new image_row_part_t[41]{{20, 0}, {1, 23276}, {17, 31727}, {1, 23276}, {8, 0}, {1, 23276}, {5, 31727}, {1, 23276}, {3, 0}, {1, 23277}, {4, 31727}, {1, 21166}, {4, 0}, {1, 21166}, {4, 31727}, {1, 23276}, {3, 0}, {1, 23276}, {5, 31727}, {1, 23276}, {11, 0}, {1, 21166}, {4, 31727}, {1, 8484}, {6, 0}, {1, 21162}, {4, 31727}, {1, 16970}, {4, 0}, {1, 19018}, {4, 31727}, {1, 21130}, {6, 0}, {1, 8484}, {5, 31727}, {1, 23276}, {5, 0}, {1, 23276}, {17, 31727}, {1, 23276}, {21, 0}}, .partsCount = 41},
            {.parts = new image_row_part_t[41]{{20, 0}, {1, 23276}, {17, 31727}, {1, 23276}, {8, 0}, {1, 23276}, {5, 31727}, {1, 23276}, {3, 0}, {1, 23277}, {4, 31727}, {1, 21166}, {4, 0}, {1, 21166}, {4, 31727}, {1, 23276}, {3, 0}, {1, 23276}, {5, 31727}, {1, 23276}, {11, 0}, {1, 21166}, {4, 31727}, {1, 8484}, {6, 0}, {1, 21162}, {4, 31727}, {1, 16970}, {4, 0}, {1, 19018}, {4, 31727}, {1, 21130}, {6, 0}, {1, 8484}, {5, 31727}, {1, 23276}, {5, 0}, {1, 23276}, {17, 31727}, {1, 23276}, {21, 0}}, .partsCount = 41},
            {.parts = new image_row_part_t[41]{{20, 0}, {1, 23276}, {17, 31727}, {1, 23276}, {8, 0}, {1, 23276}, {5, 31727}, {1, 23276}, {3, 0}, {1, 23277}, {4, 31727}, {1, 21166}, {4, 0}, {1, 21166}, {4, 31727}, {1, 23276}, {3, 0}, {1, 23276}, {5, 31727}, {1, 23276}, {11, 0}, {1, 21166}, {4, 31727}, {1, 8484}, {6, 0}, {1, 21162}, {4, 31727}, {1, 16970}, {4, 0}, {1, 19018}, {4, 31727}, {1, 21130}, {6, 0}, {1, 8484}, {5, 31727}, {1, 23276}, {5, 0}, {1, 23276}, {17, 31727}, {1, 23276}, {21, 0}}, .partsCount = 41},
            {.parts = new image_row_part_t[45]{{20, 0}, {1, 23276}, {5, 31727}, {1, 33875}, {11, 23276}, {1, 6372}, {8, 0}, {1, 23276}, {5, 31727}, {1, 23276}, {3, 0}, {1, 23277}, {4, 31727}, {1, 21166}, {4, 0}, {1, 21166}, {4, 31727}, {1, 23276}, {3, 0}, {1, 23276}, {5, 31727}, {1, 23276}, {11, 0}, {1, 21166}, {4, 31727}, {1, 8484}, {6, 0}, {1, 4258}, {4, 21162}, {1, 4258}, {4, 0}, {1, 4258}, {4, 21162}, {1, 4258}, {6, 0}, {1, 8484}, {5, 31727}, {1, 23276}, {5, 0}, {1, 6372}, {11, 23276}, {1, 33875}, {5, 31727}, {1, 23276}, {21, 0}}, .partsCount = 45},
            {.parts = new image_row_part_t[33]{{20, 0}, {1, 23276}, {5, 31727}, {1, 23276}, {20, 0}, {1, 23276}, {5, 31727}, {1, 23276}, {3, 0}, {1, 23277}, {4, 31727}, {1, 21166}, {4, 0}, {1, 21166}, {4, 31727}, {1, 23276}, {3, 0}, {1, 23276}, {5, 31727}, {1, 23276}, {11, 0}, {1, 21166}, {4, 31727}, {1, 8484}, {28, 0}, {1, 8484}, {5, 31727}, {1, 23276}, {17, 0}, {1, 23276}, {5, 31727}, {1, 23276}, {21, 0}}, .partsCount = 33},
            {.parts = new image_row_part_t[33]{{20, 0}, {1, 23276}, {5, 31727}, {1, 23276}, {20, 0}, {1, 23276}, {5, 31727}, {1, 23276}, {3, 0}, {1, 23277}, {4, 31727}, {1, 21166}, {4, 0}, {1, 21166}, {4, 31727}, {1, 23276}, {3, 0}, {1, 23276}, {5, 31727}, {1, 23276}, {11, 0}, {1, 21166}, {4, 31727}, {1, 8484}, {28, 0}, {1, 8484}, {5, 31727}, {1, 23276}, {17, 0}, {1, 23276}, {5, 31727}, {1, 23276}, {21, 0}}, .partsCount = 33},
            {.parts = new image_row_part_t[33]{{20, 0}, {1, 23276}, {5, 31727}, {1, 23276}, {20, 0}, {1, 23276}, {5, 31727}, {1, 23276}, {3, 0}, {1, 23277}, {4, 31727}, {1, 21166}, {4, 0}, {1, 21166}, {4, 31727}, {1, 23276}, {3, 0}, {1, 23276}, {5, 31727}, {1, 23276}, {11, 0}, {1, 21166}, {4, 31727}, {1, 8484}, {28, 0}, {1, 8484}, {5, 31727}, {1, 23276}, {17, 0}, {1, 23276}, {5, 31727}, {1, 23276}, {21, 0}}, .partsCount = 33},
            {.parts = new image_row_part_t[45]{{20, 0}, {1, 23276}, {5, 31727}, {1, 33875}, {13, 23276}, {1, 6372}, {6, 0}, {1, 23276}, {5, 31727}, {1, 23276}, {3, 0}, {1, 23277}, {4, 31727}, {1, 21166}, {4, 0}, {1, 21166}, {4, 31727}, {1, 23276}, {3, 0}, {1, 23276}, {5, 31727}, {1, 23276}, {11, 0}, {1, 21166}, {4, 31727}, {1, 8484}, {6, 0}, {1, 4258}, {4, 21162}, {1, 4258}, {4, 0}, {1, 4258}, {4, 21162}, {1, 4258}, {6, 0}, {1, 8484}, {5, 31727}, {1, 23276}, {5, 0}, {1, 6372}, {11, 23276}, {1, 33875}, {5, 31727}, {1, 23276}, {21, 0}}, .partsCount = 45},
            {.parts = new image_row_part_t[41]{{20, 0}, {1, 23276}, {19, 31727}, {1, 23277}, {6, 0}, {1, 23276}, {5, 31727}, {1, 23276}, {3, 0}, {1, 23277}, {4, 31727}, {1, 21166}, {4, 0}, {1, 21166}, {4, 31727}, {1, 23276}, {3, 0}, {1, 23276}, {5, 31727}, {1, 23276}, {11, 0}, {1, 21166}, {4, 31727}, {1, 8484}, {6, 0}, {1, 21162}, {4, 31727}, {1, 16970}, {4, 0}, {1, 19018}, {4, 31727}, {1, 21130}, {6, 0}, {1, 8484}, {5, 31727}, {1, 23276}, {5, 0}, {1, 23276}, {17, 31727}, {1, 23276}, {21, 0}}, .partsCount = 41},
            {.parts = new image_row_part_t[41]{{20, 0}, {1, 23276}, {19, 31727}, {1, 23277}, {6, 0}, {1, 23276}, {5, 31727}, {1, 23276}, {3, 0}, {1, 23277}, {4, 31727}, {1, 21166}, {4, 0}, {1, 21166}, {4, 31727}, {1, 23276}, {3, 0}, {1, 23276}, {5, 31727}, {1, 23276}, {11, 0}, {1, 21166}, {4, 31727}, {1, 8484}, {6, 0}, {1, 21162}, {4, 31727}, {1, 16970}, {4, 0}, {1, 19018}, {4, 31727}, {1, 21130}, {6, 0}, {1, 8484}, {5, 31727}, {1, 23276}, {5, 0}, {1, 23276}, {17, 31727}, {1, 23276}, {21, 0}}, .partsCount = 41},
            {.parts = new image_row_part_t[41]{{20, 0}, {1, 23276}, {19, 31727}, {1, 23277}, {6, 0}, {1, 23276}, {5, 31727}, {1, 23276}, {3, 0}, {1, 23277}, {4, 31727}, {1, 21166}, {4, 0}, {1, 21166}, {4, 31727}, {1, 23276}, {3, 0}, {1, 23276}, {5, 31727}, {1, 23276}, {11, 0}, {1, 21166}, {4, 31727}, {1, 8484}, {6, 0}, {1, 21162}, {4, 31727}, {1, 16970}, {4, 0}, {1, 19018}, {4, 31727}, {1, 21130}, {6, 0}, {1, 8484}, {5, 31727}, {1, 23276}, {5, 0}, {1, 23276}, {17, 31727}, {1, 23276}, {21, 0}}, .partsCount = 41},
            {.parts = new image_row_part_t[41]{{20, 0}, {1, 23276}, {19, 31727}, {1, 23277}, {6, 0}, {1, 23276}, {5, 31727}, {1, 23276}, {3, 0}, {1, 23277}, {4, 31727}, {1, 21166}, {4, 0}, {1, 21166}, {4, 31727}, {1, 23276}, {3, 0}, {1, 23276}, {5, 31727}, {1, 23276}, {11, 0}, {1, 21166}, {4, 31727}, {1, 8484}, {6, 0}, {1, 21162}, {4, 31727}, {1, 16970}, {4, 0}, {1, 19018}, {4, 31727}, {1, 21130}, {6, 0}, {1, 8484}, {5, 31727}, {1, 23276}, {5, 0}, {1, 23276}, {17, 31727}, {1, 23276}, {21, 0}}, .partsCount = 41},
            {.parts = new image_row_part_t[41]{{20, 0}, {1, 23276}, {19, 31727}, {1, 23277}, {6, 0}, {1, 23276}, {5, 31727}, {1, 23276}, {3, 0}, {1, 23277}, {4, 31727}, {1, 21166}, {4, 0}, {1, 21166}, {4, 31727}, {1, 23276}, {3, 0}, {1, 23276}, {5, 31727}, {1, 23276}, {11, 0}, {1, 21166}, {4, 31727}, {1, 8484}, {6, 0}, {1, 21162}, {4, 31727}, {1, 16970}, {4, 0}, {1, 19018}, {4, 31727}, {1, 21130}, {6, 0}, {1, 8484}, {5, 31727}, {1, 23276}, {5, 0}, {1, 23276}, {17, 31727}, {1, 23276}, {21, 0}}, .partsCount = 41},
            {.parts = new image_row_part_t[45]{{20, 0}, {1, 23276}, {5, 31727}, {1, 33875}, {13, 23276}, {1, 6372}, {6, 0}, {1, 23276}, {5, 31727}, {1, 23276}, {3, 0}, {1, 6372}, {4, 23276}, {1, 6372}, {4, 0}, {1, 6372}, {4, 23276}, {1, 6372}, {3, 0}, {1, 23276}, {5, 31727}, {1, 23276}, {11, 0}, {1, 21166}, {4, 31727}, {1, 8484}, {6, 0}, {1, 4258}, {4, 21162}, {1, 4258}, {4, 0}, {1, 4258}, {4, 21162}, {1, 4258}, {6, 0}, {1, 8484}, {5, 31727}, {1, 23276}, {5, 0}, {1, 6372}, {11, 23276}, {1, 33875}, {5, 31727}, {1, 23276}, {21, 0}}, .partsCount = 45},
            {.parts = new image_row_part_t[25]{{20, 0}, {1, 23276}, {5, 31727}, {1, 23276}, {20, 0}, {1, 23276}, {5, 31727}, {1, 23276}, {22, 0}, {1, 23276}, {5, 31727}, {1, 23276}, {11, 0}, {1, 21166}, {4, 31727}, {1, 8484}, {28, 0}, {1, 8484}, {5, 31727}, {1, 23276}, {17, 0}, {1, 23276}, {5, 31727}, {1, 23276}, {21, 0}}, .partsCount = 25},
            {.parts = new image_row_part_t[25]{{20, 0}, {1, 23276}, {5, 31727}, {1, 23276}, {20, 0}, {1, 23276}, {5, 31727}, {1, 23276}, {22, 0}, {1, 23276}, {5, 31727}, {1, 23276}, {11, 0}, {1, 21166}, {4, 31727}, {1, 8484}, {28, 0}, {1, 8484}, {5, 31727}, {1, 23276}, {17, 0}, {1, 23276}, {5, 31727}, {1, 23276}, {21, 0}}, .partsCount = 25},
            {.parts = new image_row_part_t[25]{{20, 0}, {1, 23276}, {5, 31727}, {1, 23276}, {20, 0}, {1, 23276}, {5, 31727}, {1, 23276}, {22, 0}, {1, 23276}, {5, 31727}, {1, 23276}, {11, 0}, {1, 21166}, {4, 31727}, {1, 8484}, {28, 0}, {1, 8484}, {5, 31727}, {1, 23276}, {17, 0}, {1, 23276}, {5, 31727}, {1, 23276}, {21, 0}}, .partsCount = 25},
            {.parts = new image_row_part_t[25]{{20, 0}, {1, 23276}, {5, 31727}, {1, 23276}, {20, 0}, {1, 23276}, {5, 31727}, {1, 23276}, {22, 0}, {1, 23276}, {5, 31727}, {1, 23276}, {11, 0}, {1, 21166}, {4, 31727}, {1, 8484}, {28, 0}, {1, 8484}, {5, 31727}, {1, 23276}, {17, 0}, {1, 23276}, {5, 31727}, {1, 23276}, {21, 0}}, .partsCount = 25},
            {.parts = new image_row_part_t[25]{{20, 0}, {1, 23276}, {5, 31727}, {1, 23276}, {20, 0}, {1, 23276}, {5, 31727}, {1, 23276}, {22, 0}, {1, 23276}, {5, 31727}, {1, 23276}, {11, 0}, {1, 21166}, {4, 31727}, {1, 8484}, {28, 0}, {1, 8484}, {5, 31727}, {1, 23276}, {17, 0}, {1, 23276}, {5, 31727}, {1, 23276}, {21, 0}}, .partsCount = 25},
            {.parts = new image_row_part_t[29]{{15, 0}, {1, 6372}, {4, 23276}, {1, 33875}, {5, 31727}, {1, 33875}, {20, 23276}, {1, 33875}, {5, 31727}, {1, 33875}, {22, 23276}, {1, 33875}, {5, 31727}, {1, 33875}, {11, 23276}, {1, 27536}, {4, 31727}, {1, 27536}, {28, 8484}, {1, 27536}, {5, 31727}, {1, 33875}, {17, 23276}, {1, 33875}, {5, 31727}, {1, 33875}, {4, 23276}, {1, 6372}, {16, 0}}, .partsCount = 29},
            {.parts = new image_row_part_t[5]{{15, 0}, {1, 23276}, {147, 31727}, {1, 23276}, {16, 0}}, .partsCount = 5},
            {.parts = new image_row_part_t[5]{{15, 0}, {1, 23276}, {147, 31727}, {1, 23276}, {16, 0}}, .partsCount = 5},
            {.parts = new image_row_part_t[5]{{15, 0}, {1, 23276}, {147, 31727}, {1, 23276}, {16, 0}}, .partsCount = 5},
            {.parts = new image_row_part_t[5]{{15, 0}, {1, 23276}, {147, 31727}, {1, 23276}, {16, 0}}, .partsCount = 5},
            {.parts = new image_row_part_t[5]{{15, 0}, {1, 23276}, {147, 31727}, {1, 23276}, {16, 0}}, .partsCount = 5},
            {.parts = new image_row_part_t[5]{{15, 0}, {1, 6372}, {147, 23276}, {1, 6372}, {16, 0}}, .partsCount = 5},
            {.parts = new image_row_part_t[1]{{180, 0}}, .partsCount = 1},
            {.parts = new image_row_part_t[1]{{180, 0}}, .partsCount = 1},
            {.parts = new image_row_part_t[1]{{180, 0}}, .partsCount = 1},
            {.parts = new image_row_part_t[1]{{180, 0}}, .partsCount = 1},
            {.parts = new image_row_part_t[1]{{180, 0}}, .partsCount = 1},
            {.parts = new image_row_part_t[1]{{180, 0}}, .partsCount = 1},
            {.parts = new image_row_part_t[1]{{180, 0}}, .partsCount = 1},
            {.parts = new image_row_part_t[1]{{180, 0}}, .partsCount = 1},
            {.parts = new image_row_part_t[1]{{180, 0}}, .partsCount = 1},
            {.parts = new image_row_part_t[1]{{180, 0}}, .partsCount = 1},
            {.parts = new image_row_part_t[1]{{180, 0}}, .partsCount = 1},
            {.parts = new image_row_part_t[1]{{180, 0}}, .partsCount = 1},
            {.parts = new image_row_part_t[1]{{180, 0}}, .partsCount = 1},
            {.parts = new image_row_part_t[1]{{180, 0}}, .partsCount = 1},
            {.parts = new image_row_part_t[1]{{180, 0}}, .partsCount = 1},
            {.parts = new image_row_part_t[1]{{180, 0}}, .partsCount = 1},
            {.parts = new image_row_part_t[1]{{180, 0}}, .partsCount = 1}}};

image_t const Images::l_join = 
{
.h = 180,
.w = 180,
.rows = new image_row_t[180]
  {
{.parts = new image_row_part_t[7]{{74,0},{4,65376},{1,44320},{22,0},{1,44320},{4,65376},{74,0}}, .partsCount=7},
{.parts = new image_row_part_t[7]{{74,0},{4,65376},{1,44320},{22,0},{1,44320},{4,65376},{74,0}}, .partsCount=7},
{.parts = new image_row_part_t[7]{{74,0},{4,65376},{1,44320},{22,0},{1,44320},{4,65376},{74,0}}, .partsCount=7},
{.parts = new image_row_part_t[7]{{74,0},{4,65376},{1,44320},{22,0},{1,44320},{4,65376},{74,0}}, .partsCount=7},
{.parts = new image_row_part_t[7]{{74,0},{4,65376},{1,44320},{22,0},{1,44320},{4,65376},{74,0}}, .partsCount=7},
{.parts = new image_row_part_t[7]{{74,0},{4,65376},{1,44320},{22,0},{1,44320},{4,65376},{74,0}}, .partsCount=7},
{.parts = new image_row_part_t[7]{{74,0},{4,65376},{1,44320},{22,0},{1,44320},{4,65376},{74,0}}, .partsCount=7},
{.parts = new image_row_part_t[7]{{74,0},{4,65376},{1,44320},{22,0},{1,44320},{4,65376},{74,0}}, .partsCount=7},
{.parts = new image_row_part_t[7]{{74,0},{4,65376},{1,44320},{22,0},{1,44320},{4,65376},{74,0}}, .partsCount=7},
{.parts = new image_row_part_t[7]{{74,0},{4,65376},{1,44320},{22,0},{1,44320},{4,65376},{74,0}}, .partsCount=7},
{.parts = new image_row_part_t[7]{{74,0},{4,65376},{1,44320},{22,0},{1,44320},{4,65376},{74,0}}, .partsCount=7},
{.parts = new image_row_part_t[7]{{74,0},{4,65376},{1,44320},{22,0},{1,44320},{4,65376},{74,0}}, .partsCount=7},
{.parts = new image_row_part_t[7]{{74,0},{4,65376},{1,44320},{22,0},{1,44320},{4,65376},{74,0}}, .partsCount=7},
{.parts = new image_row_part_t[7]{{74,0},{4,65376},{1,44320},{22,0},{1,44320},{4,65376},{74,0}}, .partsCount=7},
{.parts = new image_row_part_t[7]{{74,0},{4,65376},{1,44320},{22,0},{1,44320},{4,65376},{74,0}}, .partsCount=7},
{.parts = new image_row_part_t[7]{{74,0},{4,65376},{1,44320},{22,0},{1,44320},{4,65376},{74,0}}, .partsCount=7},
{.parts = new image_row_part_t[7]{{74,0},{4,65376},{1,44320},{22,0},{1,44320},{4,65376},{74,0}}, .partsCount=7},
{.parts = new image_row_part_t[7]{{74,0},{4,65376},{1,44320},{22,0},{1,44320},{4,65376},{74,0}}, .partsCount=7},
{.parts = new image_row_part_t[7]{{74,0},{4,65376},{1,44320},{22,0},{1,44320},{4,65376},{74,0}}, .partsCount=7},
{.parts = new image_row_part_t[7]{{74,0},{4,65376},{1,44320},{22,0},{1,44320},{4,65376},{74,0}}, .partsCount=7},
{.parts = new image_row_part_t[7]{{74,0},{4,65376},{1,44320},{22,0},{1,44320},{4,65376},{74,0}}, .partsCount=7},
{.parts = new image_row_part_t[7]{{74,0},{4,65376},{1,44320},{22,0},{1,44320},{4,65376},{74,0}}, .partsCount=7},
{.parts = new image_row_part_t[7]{{74,0},{4,65376},{1,44320},{22,0},{1,44320},{4,65376},{74,0}}, .partsCount=7},
{.parts = new image_row_part_t[7]{{74,0},{4,65376},{1,44320},{22,0},{1,44320},{4,65376},{74,0}}, .partsCount=7},
{.parts = new image_row_part_t[7]{{74,0},{4,65376},{1,44320},{22,0},{1,44320},{4,65376},{74,0}}, .partsCount=7},
{.parts = new image_row_part_t[7]{{74,0},{4,65376},{1,44320},{22,0},{1,44320},{4,65376},{74,0}}, .partsCount=7},
{.parts = new image_row_part_t[7]{{74,0},{4,65376},{1,44320},{22,0},{1,44320},{4,65376},{74,0}}, .partsCount=7},
{.parts = new image_row_part_t[7]{{74,0},{4,65376},{1,44320},{22,0},{1,44320},{4,65376},{74,0}}, .partsCount=7},
{.parts = new image_row_part_t[7]{{74,0},{4,65376},{1,44320},{22,0},{1,44320},{4,65376},{74,0}}, .partsCount=7},
{.parts = new image_row_part_t[7]{{74,0},{4,65376},{1,44320},{22,0},{1,44320},{4,65376},{74,0}}, .partsCount=7},
{.parts = new image_row_part_t[7]{{74,0},{4,65376},{1,44320},{22,0},{1,44320},{4,65376},{74,0}}, .partsCount=7},
{.parts = new image_row_part_t[7]{{74,0},{4,65376},{1,44320},{22,0},{1,44320},{4,65376},{74,0}}, .partsCount=7},
{.parts = new image_row_part_t[7]{{74,0},{4,65376},{1,44320},{22,0},{1,44320},{4,65376},{74,0}}, .partsCount=7},
{.parts = new image_row_part_t[7]{{74,0},{4,65376},{1,44320},{22,0},{1,44320},{4,65376},{74,0}}, .partsCount=7},
{.parts = new image_row_part_t[7]{{74,0},{4,65376},{1,44320},{22,0},{1,44320},{4,65376},{74,0}}, .partsCount=7},
{.parts = new image_row_part_t[7]{{74,0},{4,65376},{1,44320},{22,0},{1,44320},{4,65376},{74,0}}, .partsCount=7},
{.parts = new image_row_part_t[7]{{74,0},{4,65376},{1,44320},{22,0},{1,44320},{4,65376},{74,0}}, .partsCount=7},
{.parts = new image_row_part_t[7]{{74,0},{4,65376},{1,44320},{22,0},{1,44320},{4,65376},{74,0}}, .partsCount=7},
{.parts = new image_row_part_t[7]{{74,0},{4,65376},{1,44320},{22,0},{1,44320},{4,65376},{74,0}}, .partsCount=7},
{.parts = new image_row_part_t[7]{{74,0},{4,65376},{1,44320},{22,0},{1,44320},{4,65376},{74,0}}, .partsCount=7},
{.parts = new image_row_part_t[7]{{74,0},{4,65376},{1,44320},{22,0},{1,44320},{4,65376},{74,0}}, .partsCount=7},
{.parts = new image_row_part_t[7]{{74,0},{4,65376},{1,44320},{22,0},{1,44320},{4,65376},{74,0}}, .partsCount=7},
{.parts = new image_row_part_t[7]{{74,0},{4,65376},{1,44320},{22,0},{1,44320},{4,65376},{74,0}}, .partsCount=7},
{.parts = new image_row_part_t[7]{{74,0},{4,65376},{1,44320},{22,0},{1,44320},{4,65376},{74,0}}, .partsCount=7},
{.parts = new image_row_part_t[7]{{74,0},{4,65376},{1,44320},{22,0},{1,44320},{4,65376},{74,0}}, .partsCount=7},
{.parts = new image_row_part_t[7]{{74,0},{4,65376},{1,44320},{22,0},{1,44320},{4,65376},{74,0}}, .partsCount=7},
{.parts = new image_row_part_t[7]{{74,0},{4,65376},{1,44320},{22,0},{1,44320},{4,65376},{74,0}}, .partsCount=7},
{.parts = new image_row_part_t[7]{{74,0},{4,65376},{1,44320},{22,0},{1,44320},{4,65376},{74,0}}, .partsCount=7},
{.parts = new image_row_part_t[7]{{74,0},{4,65376},{1,44320},{22,0},{1,44320},{4,65376},{74,0}}, .partsCount=7},
{.parts = new image_row_part_t[7]{{74,0},{4,65376},{1,44320},{22,0},{1,44320},{4,65376},{74,0}}, .partsCount=7},
{.parts = new image_row_part_t[7]{{74,0},{4,65376},{1,44320},{22,0},{1,44320},{4,65376},{74,0}}, .partsCount=7},
{.parts = new image_row_part_t[7]{{74,0},{4,65376},{1,44320},{22,0},{1,44320},{4,65376},{74,0}}, .partsCount=7},
{.parts = new image_row_part_t[7]{{74,0},{4,65376},{1,44320},{22,0},{1,44320},{4,65376},{74,0}}, .partsCount=7},
{.parts = new image_row_part_t[7]{{74,0},{4,65376},{1,44320},{22,0},{1,44320},{4,65376},{74,0}}, .partsCount=7},
{.parts = new image_row_part_t[7]{{74,0},{4,65376},{1,44320},{22,0},{1,44320},{4,65376},{74,0}}, .partsCount=7},
{.parts = new image_row_part_t[7]{{74,0},{4,65376},{1,44320},{22,0},{1,44320},{4,65376},{74,0}}, .partsCount=7},
{.parts = new image_row_part_t[7]{{74,0},{4,65376},{1,44320},{22,0},{1,44320},{4,65376},{74,0}}, .partsCount=7},
{.parts = new image_row_part_t[7]{{74,0},{4,65376},{1,44320},{22,0},{1,44320},{4,65376},{74,0}}, .partsCount=7},
{.parts = new image_row_part_t[7]{{74,0},{4,65376},{1,44320},{22,0},{1,44320},{4,65376},{74,0}}, .partsCount=7},
{.parts = new image_row_part_t[7]{{74,0},{4,65376},{1,44320},{22,0},{1,44320},{4,65376},{74,0}}, .partsCount=7},
{.parts = new image_row_part_t[7]{{74,0},{4,65376},{1,44320},{22,0},{1,44320},{4,65376},{74,0}}, .partsCount=7},
{.parts = new image_row_part_t[7]{{74,0},{4,65376},{1,44320},{22,0},{1,44320},{4,65376},{74,0}}, .partsCount=7},
{.parts = new image_row_part_t[7]{{74,0},{4,65376},{1,44320},{22,0},{1,44320},{4,65376},{74,0}}, .partsCount=7},
{.parts = new image_row_part_t[7]{{74,0},{4,65376},{1,44320},{22,0},{1,44320},{4,65376},{74,0}}, .partsCount=7},
{.parts = new image_row_part_t[7]{{74,0},{4,65376},{1,44320},{22,0},{1,44320},{4,65376},{74,0}}, .partsCount=7},
{.parts = new image_row_part_t[7]{{74,0},{4,65376},{1,44320},{22,0},{1,44320},{4,65376},{74,0}}, .partsCount=7},
{.parts = new image_row_part_t[7]{{74,0},{4,65376},{1,44320},{22,0},{1,44320},{4,65376},{74,0}}, .partsCount=7},
{.parts = new image_row_part_t[7]{{74,0},{4,65376},{1,44320},{22,0},{1,44320},{4,65376},{74,0}}, .partsCount=7},
{.parts = new image_row_part_t[7]{{74,0},{4,65376},{1,44320},{22,0},{1,44320},{4,65376},{74,0}}, .partsCount=7},
{.parts = new image_row_part_t[7]{{74,0},{4,65376},{1,44320},{22,0},{1,44320},{4,65376},{74,0}}, .partsCount=7},
{.parts = new image_row_part_t[7]{{74,0},{4,65376},{1,44320},{22,0},{1,44320},{4,65376},{74,0}}, .partsCount=7},
{.parts = new image_row_part_t[7]{{74,0},{4,65376},{1,44320},{22,0},{1,44320},{4,65376},{74,0}}, .partsCount=7},
{.parts = new image_row_part_t[7]{{74,0},{4,65376},{1,44320},{22,0},{1,44320},{4,65376},{74,0}}, .partsCount=7},
{.parts = new image_row_part_t[7]{{74,0},{4,65376},{1,44320},{22,0},{1,44320},{4,65376},{74,0}}, .partsCount=7},
{.parts = new image_row_part_t[6]{{78,65376},{1,44320},{22,0},{1,44320},{4,65376},{74,0}}, .partsCount=6},
{.parts = new image_row_part_t[6]{{78,65376},{1,44320},{22,0},{1,44320},{4,65376},{74,0}}, .partsCount=6},
{.parts = new image_row_part_t[6]{{78,65376},{1,44320},{22,0},{1,44320},{4,65376},{74,0}}, .partsCount=6},
{.parts = new image_row_part_t[6]{{78,65376},{1,44320},{22,0},{1,44320},{4,65376},{74,0}}, .partsCount=6},
{.parts = new image_row_part_t[6]{{78,44320},{1,38016},{22,0},{1,44320},{4,65376},{74,0}}, .partsCount=6},
{.parts = new image_row_part_t[4]{{101,0},{1,44320},{4,65376},{74,0}}, .partsCount=4},
{.parts = new image_row_part_t[4]{{101,0},{1,44320},{4,65376},{74,0}}, .partsCount=4},
{.parts = new image_row_part_t[4]{{101,0},{1,44320},{4,65376},{74,0}}, .partsCount=4},
{.parts = new image_row_part_t[4]{{101,0},{1,44320},{4,65376},{74,0}}, .partsCount=4},
{.parts = new image_row_part_t[4]{{101,0},{1,44320},{4,65376},{74,0}}, .partsCount=4},
{.parts = new image_row_part_t[4]{{101,0},{1,44320},{4,65376},{74,0}}, .partsCount=4},
{.parts = new image_row_part_t[4]{{101,0},{1,44320},{4,65376},{74,0}}, .partsCount=4},
{.parts = new image_row_part_t[4]{{101,0},{1,44320},{4,65376},{74,0}}, .partsCount=4},
{.parts = new image_row_part_t[4]{{101,0},{1,44320},{4,65376},{74,0}}, .partsCount=4},
{.parts = new image_row_part_t[4]{{101,0},{1,44320},{4,65376},{74,0}}, .partsCount=4},
{.parts = new image_row_part_t[4]{{101,0},{1,44320},{4,65376},{74,0}}, .partsCount=4},
{.parts = new image_row_part_t[4]{{101,0},{1,44320},{4,65376},{74,0}}, .partsCount=4},
{.parts = new image_row_part_t[4]{{101,0},{1,44320},{4,65376},{74,0}}, .partsCount=4},
{.parts = new image_row_part_t[4]{{101,0},{1,44320},{4,65376},{74,0}}, .partsCount=4},
{.parts = new image_row_part_t[4]{{101,0},{1,44320},{4,65376},{74,0}}, .partsCount=4},
{.parts = new image_row_part_t[4]{{101,0},{1,44320},{4,65376},{74,0}}, .partsCount=4},
{.parts = new image_row_part_t[4]{{101,0},{1,44320},{4,65376},{74,0}}, .partsCount=4},
{.parts = new image_row_part_t[4]{{101,0},{1,44320},{4,65376},{74,0}}, .partsCount=4},
{.parts = new image_row_part_t[4]{{101,0},{1,44320},{4,65376},{74,0}}, .partsCount=4},
{.parts = new image_row_part_t[4]{{101,0},{1,44320},{4,65376},{74,0}}, .partsCount=4},
{.parts = new image_row_part_t[6]{{79,33760},{1,8480},{21,0},{1,44320},{4,65376},{74,0}}, .partsCount=6},
{.parts = new image_row_part_t[6]{{79,65376},{1,33760},{21,0},{1,44320},{4,65376},{74,0}}, .partsCount=6},
{.parts = new image_row_part_t[6]{{79,65376},{1,33760},{21,0},{1,44320},{4,65376},{74,0}}, .partsCount=6},
{.parts = new image_row_part_t[6]{{79,65376},{1,33760},{21,0},{1,44320},{4,65376},{74,0}}, .partsCount=6},
{.parts = new image_row_part_t[6]{{79,65376},{1,33760},{21,0},{1,44320},{4,65376},{74,0}}, .partsCount=6},
{.parts = new image_row_part_t[6]{{79,65376},{1,33760},{21,0},{1,44320},{4,65376},{74,0}}, .partsCount=6},
{.parts = new image_row_part_t[8]{{73,10592},{1,35840},{5,65376},{1,33760},{21,0},{1,44320},{4,65376},{74,0}}, .partsCount=8},
{.parts = new image_row_part_t[8]{{73,0},{1,10592},{5,65376},{1,33760},{21,0},{1,44320},{4,65376},{74,0}}, .partsCount=8},
{.parts = new image_row_part_t[8]{{73,0},{1,10592},{5,65376},{1,33760},{21,0},{1,44320},{4,65376},{74,0}}, .partsCount=8},
{.parts = new image_row_part_t[8]{{73,0},{1,10592},{5,65376},{1,33760},{21,0},{1,44320},{4,65376},{74,0}}, .partsCount=8},
{.parts = new image_row_part_t[8]{{73,0},{1,10592},{5,65376},{1,33760},{21,0},{1,44320},{4,65376},{74,0}}, .partsCount=8},
{.parts = new image_row_part_t[8]{{73,0},{1,10592},{5,65376},{1,33760},{21,0},{1,44320},{4,65376},{74,0}}, .partsCount=8},
{.parts = new image_row_part_t[8]{{73,0},{1,10592},{5,65376},{1,33760},{21,0},{1,44320},{4,65376},{74,0}}, .partsCount=8},
{.parts = new image_row_part_t[8]{{73,0},{1,10592},{5,65376},{1,33760},{21,0},{1,44320},{4,65376},{74,0}}, .partsCount=8},
{.parts = new image_row_part_t[8]{{73,0},{1,10592},{5,65376},{1,33760},{21,0},{1,44320},{4,65376},{74,0}}, .partsCount=8},
{.parts = new image_row_part_t[8]{{73,0},{1,10592},{5,65376},{1,33760},{21,0},{1,44320},{4,65376},{74,0}}, .partsCount=8},
{.parts = new image_row_part_t[8]{{73,0},{1,10592},{5,65376},{1,33760},{21,0},{1,44320},{4,65376},{74,0}}, .partsCount=8},
{.parts = new image_row_part_t[8]{{73,0},{1,10592},{5,65376},{1,33760},{21,0},{1,44320},{4,65376},{74,0}}, .partsCount=8},
{.parts = new image_row_part_t[8]{{73,0},{1,10592},{5,65376},{1,33760},{21,0},{1,44320},{4,65376},{74,0}}, .partsCount=8},
{.parts = new image_row_part_t[8]{{73,0},{1,10592},{5,65376},{1,33760},{21,0},{1,44320},{4,65376},{74,0}}, .partsCount=8},
{.parts = new image_row_part_t[8]{{73,0},{1,10592},{5,65376},{1,33760},{21,0},{1,44320},{4,65376},{74,0}}, .partsCount=8},
{.parts = new image_row_part_t[8]{{73,0},{1,10592},{5,65376},{1,33760},{21,0},{1,44320},{4,65376},{74,0}}, .partsCount=8},
{.parts = new image_row_part_t[8]{{73,0},{1,10592},{5,65376},{1,33760},{21,0},{1,44320},{4,65376},{74,0}}, .partsCount=8},
{.parts = new image_row_part_t[8]{{73,0},{1,10592},{5,65376},{1,33760},{21,0},{1,44320},{4,65376},{74,0}}, .partsCount=8},
{.parts = new image_row_part_t[8]{{73,0},{1,10592},{5,65376},{1,33760},{21,0},{1,44320},{4,65376},{74,0}}, .partsCount=8},
{.parts = new image_row_part_t[8]{{73,0},{1,10592},{5,65376},{1,33760},{21,0},{1,44320},{4,65376},{74,0}}, .partsCount=8},
{.parts = new image_row_part_t[8]{{73,0},{1,10592},{5,65376},{1,33760},{21,0},{1,44320},{4,65376},{74,0}}, .partsCount=8},
{.parts = new image_row_part_t[8]{{73,0},{1,10592},{5,65376},{1,33760},{21,0},{1,44320},{4,65376},{74,0}}, .partsCount=8},
{.parts = new image_row_part_t[8]{{73,0},{1,10592},{5,65376},{1,33760},{21,0},{1,44320},{4,65376},{74,0}}, .partsCount=8},
{.parts = new image_row_part_t[8]{{73,0},{1,10592},{5,65376},{1,33760},{21,0},{1,44320},{4,65376},{74,0}}, .partsCount=8},
{.parts = new image_row_part_t[8]{{73,0},{1,10592},{5,65376},{1,33760},{21,0},{1,44320},{4,65376},{74,0}}, .partsCount=8},
{.parts = new image_row_part_t[8]{{73,0},{1,10592},{5,65376},{1,33760},{21,0},{1,44320},{4,65376},{74,0}}, .partsCount=8},
{.parts = new image_row_part_t[8]{{73,0},{1,10592},{5,65376},{1,33760},{21,0},{1,44320},{4,65376},{74,0}}, .partsCount=8},
{.parts = new image_row_part_t[8]{{73,0},{1,10592},{5,65376},{1,33760},{21,0},{1,44320},{4,65376},{74,0}}, .partsCount=8},
{.parts = new image_row_part_t[8]{{73,0},{1,10592},{5,65376},{1,33760},{21,0},{1,44320},{4,65376},{74,0}}, .partsCount=8},
{.parts = new image_row_part_t[8]{{73,0},{1,10592},{5,65376},{1,33760},{21,0},{1,44320},{4,65376},{74,0}}, .partsCount=8},
{.parts = new image_row_part_t[8]{{73,0},{1,10592},{5,65376},{1,33760},{21,0},{1,44320},{4,65376},{74,0}}, .partsCount=8},
{.parts = new image_row_part_t[8]{{73,0},{1,10592},{5,65376},{1,33760},{21,0},{1,44320},{4,65376},{74,0}}, .partsCount=8},
{.parts = new image_row_part_t[8]{{73,0},{1,10592},{5,65376},{1,33760},{21,0},{1,44320},{4,65376},{74,0}}, .partsCount=8},
{.parts = new image_row_part_t[8]{{73,0},{1,10592},{5,65376},{1,33760},{21,0},{1,44320},{4,65376},{74,0}}, .partsCount=8},
{.parts = new image_row_part_t[8]{{73,0},{1,10592},{5,65376},{1,33760},{21,0},{1,44320},{4,65376},{74,0}}, .partsCount=8},
{.parts = new image_row_part_t[8]{{73,0},{1,10592},{5,65376},{1,33760},{21,0},{1,44320},{4,65376},{74,0}}, .partsCount=8},
{.parts = new image_row_part_t[8]{{73,0},{1,10592},{5,65376},{1,33760},{21,0},{1,44320},{4,65376},{74,0}}, .partsCount=8},
{.parts = new image_row_part_t[8]{{73,0},{1,10592},{5,65376},{1,33760},{21,0},{1,44320},{4,65376},{74,0}}, .partsCount=8},
{.parts = new image_row_part_t[8]{{73,0},{1,10592},{5,65376},{1,33760},{21,0},{1,44320},{4,65376},{74,0}}, .partsCount=8},
{.parts = new image_row_part_t[8]{{73,0},{1,10592},{5,65376},{1,33760},{21,0},{1,44320},{4,65376},{74,0}}, .partsCount=8},
{.parts = new image_row_part_t[8]{{73,0},{1,10592},{5,65376},{1,33760},{21,0},{1,44320},{4,65376},{74,0}}, .partsCount=8},
{.parts = new image_row_part_t[8]{{73,0},{1,10592},{5,65376},{1,33760},{21,0},{1,44320},{4,65376},{74,0}}, .partsCount=8},
{.parts = new image_row_part_t[8]{{73,0},{1,10592},{5,65376},{1,33760},{21,0},{1,44320},{4,65376},{74,0}}, .partsCount=8},
{.parts = new image_row_part_t[8]{{73,0},{1,10592},{5,65376},{1,33760},{21,0},{1,44320},{4,65376},{74,0}}, .partsCount=8},
{.parts = new image_row_part_t[8]{{73,0},{1,10592},{5,65376},{1,33760},{21,0},{1,44320},{4,65376},{74,0}}, .partsCount=8},
{.parts = new image_row_part_t[8]{{73,0},{1,10592},{5,65376},{1,33760},{21,0},{1,44320},{4,65376},{74,0}}, .partsCount=8},
{.parts = new image_row_part_t[8]{{73,0},{1,10592},{5,65376},{1,33760},{21,0},{1,44320},{4,65376},{74,0}}, .partsCount=8},
{.parts = new image_row_part_t[8]{{73,0},{1,10592},{5,65376},{1,33760},{21,0},{1,44320},{4,65376},{74,0}}, .partsCount=8},
{.parts = new image_row_part_t[8]{{73,0},{1,10592},{5,65376},{1,33760},{21,0},{1,44320},{4,65376},{74,0}}, .partsCount=8},
{.parts = new image_row_part_t[8]{{73,0},{1,10592},{5,65376},{1,33760},{21,0},{1,44320},{4,65376},{74,0}}, .partsCount=8},
{.parts = new image_row_part_t[8]{{73,0},{1,10592},{5,65376},{1,33760},{21,0},{1,44320},{4,65376},{74,0}}, .partsCount=8},
{.parts = new image_row_part_t[8]{{73,0},{1,10592},{5,65376},{1,33760},{21,0},{1,44320},{4,65376},{74,0}}, .partsCount=8},
{.parts = new image_row_part_t[8]{{73,0},{1,10592},{5,65376},{1,33760},{21,0},{1,44320},{4,65376},{74,0}}, .partsCount=8},
{.parts = new image_row_part_t[8]{{73,0},{1,10592},{5,65376},{1,33760},{21,0},{1,44320},{4,65376},{74,0}}, .partsCount=8},
{.parts = new image_row_part_t[8]{{73,0},{1,10592},{5,65376},{1,33760},{21,0},{1,44320},{4,65376},{74,0}}, .partsCount=8},
{.parts = new image_row_part_t[8]{{73,0},{1,10592},{5,65376},{1,33760},{21,0},{1,44320},{4,65376},{74,0}}, .partsCount=8},
{.parts = new image_row_part_t[8]{{73,0},{1,10592},{5,65376},{1,33760},{21,0},{1,44320},{4,65376},{74,0}}, .partsCount=8},
{.parts = new image_row_part_t[8]{{73,0},{1,10592},{5,65376},{1,33760},{21,0},{1,44320},{4,65376},{74,0}}, .partsCount=8},
{.parts = new image_row_part_t[8]{{73,0},{1,10592},{5,65376},{1,33760},{21,0},{1,44320},{4,65376},{74,0}}, .partsCount=8},
{.parts = new image_row_part_t[8]{{73,0},{1,10592},{5,65376},{1,33760},{21,0},{1,44320},{4,65376},{74,0}}, .partsCount=8},
{.parts = new image_row_part_t[8]{{73,0},{1,10592},{5,65376},{1,33760},{21,0},{1,44320},{4,65376},{74,0}}, .partsCount=8},
{.parts = new image_row_part_t[8]{{73,0},{1,10592},{5,65376},{1,33760},{21,0},{1,44320},{4,65376},{74,0}}, .partsCount=8},
{.parts = new image_row_part_t[8]{{73,0},{1,10592},{5,65376},{1,33760},{21,0},{1,44320},{4,65376},{74,0}}, .partsCount=8},
{.parts = new image_row_part_t[8]{{73,0},{1,10592},{5,65376},{1,33760},{21,0},{1,44320},{4,65376},{74,0}}, .partsCount=8},
{.parts = new image_row_part_t[8]{{73,0},{1,10592},{5,65376},{1,33760},{21,0},{1,44320},{4,65376},{74,0}}, .partsCount=8},
{.parts = new image_row_part_t[8]{{73,0},{1,10592},{5,65376},{1,33760},{21,0},{1,44320},{4,65376},{74,0}}, .partsCount=8},
{.parts = new image_row_part_t[8]{{73,0},{1,10592},{5,65376},{1,33760},{21,0},{1,44320},{4,65376},{74,0}}, .partsCount=8},
{.parts = new image_row_part_t[8]{{73,0},{1,10592},{5,65376},{1,33760},{21,0},{1,44320},{4,65376},{74,0}}, .partsCount=8},
{.parts = new image_row_part_t[8]{{73,0},{1,10592},{5,65376},{1,33760},{21,0},{1,44320},{4,65376},{74,0}}, .partsCount=8},
{.parts = new image_row_part_t[8]{{73,0},{1,10592},{5,65376},{1,33760},{21,0},{1,44320},{4,65376},{74,0}}, .partsCount=8},
{.parts = new image_row_part_t[8]{{73,0},{1,10592},{5,65376},{1,33760},{21,0},{1,44320},{4,65376},{74,0}}, .partsCount=8},
{.parts = new image_row_part_t[8]{{73,0},{1,10592},{5,65376},{1,33760},{21,0},{1,44320},{4,65376},{74,0}}, .partsCount=8},
{.parts = new image_row_part_t[8]{{73,0},{1,10592},{5,65376},{1,33760},{21,0},{1,44320},{4,65376},{74,0}}, .partsCount=8},
{.parts = new image_row_part_t[8]{{73,0},{1,10592},{5,65376},{1,33760},{21,0},{1,44320},{4,65376},{74,0}}, .partsCount=8},
{.parts = new image_row_part_t[8]{{73,0},{1,10592},{5,65376},{1,33760},{21,0},{1,44320},{4,65376},{74,0}}, .partsCount=8}
  }
};

image_t const Images::r_join = 
{
.h = 180,
.w = 180,
.rows = new image_row_t[180]
  {
{.parts = new image_row_part_t[7]{{74,0},{4,65376},{1,44320},{22,0},{1,44320},{4,65376},{74,0}}, .partsCount=7},
{.parts = new image_row_part_t[7]{{74,0},{4,65376},{1,44320},{22,0},{1,44320},{4,65376},{74,0}}, .partsCount=7},
{.parts = new image_row_part_t[7]{{74,0},{4,65376},{1,44320},{22,0},{1,44320},{4,65376},{74,0}}, .partsCount=7},
{.parts = new image_row_part_t[7]{{74,0},{4,65376},{1,44320},{22,0},{1,44320},{4,65376},{74,0}}, .partsCount=7},
{.parts = new image_row_part_t[7]{{74,0},{4,65376},{1,44320},{22,0},{1,44320},{4,65376},{74,0}}, .partsCount=7},
{.parts = new image_row_part_t[7]{{74,0},{4,65376},{1,44320},{22,0},{1,44320},{4,65376},{74,0}}, .partsCount=7},
{.parts = new image_row_part_t[7]{{74,0},{4,65376},{1,44320},{22,0},{1,44320},{4,65376},{74,0}}, .partsCount=7},
{.parts = new image_row_part_t[7]{{74,0},{4,65376},{1,44320},{22,0},{1,44320},{4,65376},{74,0}}, .partsCount=7},
{.parts = new image_row_part_t[7]{{74,0},{4,65376},{1,44320},{22,0},{1,44320},{4,65376},{74,0}}, .partsCount=7},
{.parts = new image_row_part_t[7]{{74,0},{4,65376},{1,44320},{22,0},{1,44320},{4,65376},{74,0}}, .partsCount=7},
{.parts = new image_row_part_t[7]{{74,0},{4,65376},{1,44320},{22,0},{1,44320},{4,65376},{74,0}}, .partsCount=7},
{.parts = new image_row_part_t[7]{{74,0},{4,65376},{1,44320},{22,0},{1,44320},{4,65376},{74,0}}, .partsCount=7},
{.parts = new image_row_part_t[7]{{74,0},{4,65376},{1,44320},{22,0},{1,44320},{4,65376},{74,0}}, .partsCount=7},
{.parts = new image_row_part_t[7]{{74,0},{4,65376},{1,44320},{22,0},{1,44320},{4,65376},{74,0}}, .partsCount=7},
{.parts = new image_row_part_t[7]{{74,0},{4,65376},{1,44320},{22,0},{1,44320},{4,65376},{74,0}}, .partsCount=7},
{.parts = new image_row_part_t[7]{{74,0},{4,65376},{1,44320},{22,0},{1,44320},{4,65376},{74,0}}, .partsCount=7},
{.parts = new image_row_part_t[7]{{74,0},{4,65376},{1,44320},{22,0},{1,44320},{4,65376},{74,0}}, .partsCount=7},
{.parts = new image_row_part_t[7]{{74,0},{4,65376},{1,44320},{22,0},{1,44320},{4,65376},{74,0}}, .partsCount=7},
{.parts = new image_row_part_t[7]{{74,0},{4,65376},{1,44320},{22,0},{1,44320},{4,65376},{74,0}}, .partsCount=7},
{.parts = new image_row_part_t[7]{{74,0},{4,65376},{1,44320},{22,0},{1,44320},{4,65376},{74,0}}, .partsCount=7},
{.parts = new image_row_part_t[7]{{74,0},{4,65376},{1,44320},{22,0},{1,44320},{4,65376},{74,0}}, .partsCount=7},
{.parts = new image_row_part_t[7]{{74,0},{4,65376},{1,44320},{22,0},{1,44320},{4,65376},{74,0}}, .partsCount=7},
{.parts = new image_row_part_t[7]{{74,0},{4,65376},{1,44320},{22,0},{1,44320},{4,65376},{74,0}}, .partsCount=7},
{.parts = new image_row_part_t[7]{{74,0},{4,65376},{1,44320},{22,0},{1,44320},{4,65376},{74,0}}, .partsCount=7},
{.parts = new image_row_part_t[7]{{74,0},{4,65376},{1,44320},{22,0},{1,44320},{4,65376},{74,0}}, .partsCount=7},
{.parts = new image_row_part_t[7]{{74,0},{4,65376},{1,44320},{22,0},{1,44320},{4,65376},{74,0}}, .partsCount=7},
{.parts = new image_row_part_t[7]{{74,0},{4,65376},{1,44320},{22,0},{1,44320},{4,65376},{74,0}}, .partsCount=7},
{.parts = new image_row_part_t[7]{{74,0},{4,65376},{1,44320},{22,0},{1,44320},{4,65376},{74,0}}, .partsCount=7},
{.parts = new image_row_part_t[7]{{74,0},{4,65376},{1,44320},{22,0},{1,44320},{4,65376},{74,0}}, .partsCount=7},
{.parts = new image_row_part_t[7]{{74,0},{4,65376},{1,44320},{22,0},{1,44320},{4,65376},{74,0}}, .partsCount=7},
{.parts = new image_row_part_t[7]{{74,0},{4,65376},{1,44320},{22,0},{1,44320},{4,65376},{74,0}}, .partsCount=7},
{.parts = new image_row_part_t[7]{{74,0},{4,65376},{1,44320},{22,0},{1,44320},{4,65376},{74,0}}, .partsCount=7},
{.parts = new image_row_part_t[7]{{74,0},{4,65376},{1,44320},{22,0},{1,44320},{4,65376},{74,0}}, .partsCount=7},
{.parts = new image_row_part_t[7]{{74,0},{4,65376},{1,44320},{22,0},{1,44320},{4,65376},{74,0}}, .partsCount=7},
{.parts = new image_row_part_t[7]{{74,0},{4,65376},{1,44320},{22,0},{1,44320},{4,65376},{74,0}}, .partsCount=7},
{.parts = new image_row_part_t[7]{{74,0},{4,65376},{1,44320},{22,0},{1,44320},{4,65376},{74,0}}, .partsCount=7},
{.parts = new image_row_part_t[7]{{74,0},{4,65376},{1,44320},{22,0},{1,44320},{4,65376},{74,0}}, .partsCount=7},
{.parts = new image_row_part_t[7]{{74,0},{4,65376},{1,44320},{22,0},{1,44320},{4,65376},{74,0}}, .partsCount=7},
{.parts = new image_row_part_t[7]{{74,0},{4,65376},{1,44320},{22,0},{1,44320},{4,65376},{74,0}}, .partsCount=7},
{.parts = new image_row_part_t[7]{{74,0},{4,65376},{1,44320},{22,0},{1,44320},{4,65376},{74,0}}, .partsCount=7},
{.parts = new image_row_part_t[7]{{74,0},{4,65376},{1,44320},{22,0},{1,44320},{4,65376},{74,0}}, .partsCount=7},
{.parts = new image_row_part_t[7]{{74,0},{4,65376},{1,44320},{22,0},{1,44320},{4,65376},{74,0}}, .partsCount=7},
{.parts = new image_row_part_t[7]{{74,0},{4,65376},{1,44320},{22,0},{1,44320},{4,65376},{74,0}}, .partsCount=7},
{.parts = new image_row_part_t[7]{{74,0},{4,65376},{1,44320},{22,0},{1,44320},{4,65376},{74,0}}, .partsCount=7},
{.parts = new image_row_part_t[7]{{74,0},{4,65376},{1,44320},{22,0},{1,44320},{4,65376},{74,0}}, .partsCount=7},
{.parts = new image_row_part_t[7]{{74,0},{4,65376},{1,44320},{22,0},{1,44320},{4,65376},{74,0}}, .partsCount=7},
{.parts = new image_row_part_t[7]{{74,0},{4,65376},{1,44320},{22,0},{1,44320},{4,65376},{74,0}}, .partsCount=7},
{.parts = new image_row_part_t[7]{{74,0},{4,65376},{1,44320},{22,0},{1,44320},{4,65376},{74,0}}, .partsCount=7},
{.parts = new image_row_part_t[7]{{74,0},{4,65376},{1,44320},{22,0},{1,44320},{4,65376},{74,0}}, .partsCount=7},
{.parts = new image_row_part_t[7]{{74,0},{4,65376},{1,44320},{22,0},{1,44320},{4,65376},{74,0}}, .partsCount=7},
{.parts = new image_row_part_t[7]{{74,0},{4,65376},{1,44320},{22,0},{1,44320},{4,65376},{74,0}}, .partsCount=7},
{.parts = new image_row_part_t[7]{{74,0},{4,65376},{1,44320},{22,0},{1,44320},{4,65376},{74,0}}, .partsCount=7},
{.parts = new image_row_part_t[7]{{74,0},{4,65376},{1,44320},{22,0},{1,44320},{4,65376},{74,0}}, .partsCount=7},
{.parts = new image_row_part_t[7]{{74,0},{4,65376},{1,44320},{22,0},{1,44320},{4,65376},{74,0}}, .partsCount=7},
{.parts = new image_row_part_t[7]{{74,0},{4,65376},{1,44320},{22,0},{1,44320},{4,65376},{74,0}}, .partsCount=7},
{.parts = new image_row_part_t[7]{{74,0},{4,65376},{1,44320},{22,0},{1,44320},{4,65376},{74,0}}, .partsCount=7},
{.parts = new image_row_part_t[7]{{74,0},{4,65376},{1,44320},{22,0},{1,44320},{4,65376},{74,0}}, .partsCount=7},
{.parts = new image_row_part_t[7]{{74,0},{4,65376},{1,44320},{22,0},{1,44320},{4,65376},{74,0}}, .partsCount=7},
{.parts = new image_row_part_t[7]{{74,0},{4,65376},{1,44320},{22,0},{1,44320},{4,65376},{74,0}}, .partsCount=7},
{.parts = new image_row_part_t[7]{{74,0},{4,65376},{1,44320},{22,0},{1,44320},{4,65376},{74,0}}, .partsCount=7},
{.parts = new image_row_part_t[7]{{74,0},{4,65376},{1,44320},{22,0},{1,44320},{4,65376},{74,0}}, .partsCount=7},
{.parts = new image_row_part_t[7]{{74,0},{4,65376},{1,44320},{22,0},{1,44320},{4,65376},{74,0}}, .partsCount=7},
{.parts = new image_row_part_t[7]{{74,0},{4,65376},{1,44320},{22,0},{1,44320},{4,65376},{74,0}}, .partsCount=7},
{.parts = new image_row_part_t[7]{{74,0},{4,65376},{1,44320},{22,0},{1,44320},{4,65376},{74,0}}, .partsCount=7},
{.parts = new image_row_part_t[7]{{74,0},{4,65376},{1,44320},{22,0},{1,44320},{4,65376},{74,0}}, .partsCount=7},
{.parts = new image_row_part_t[7]{{74,0},{4,65376},{1,44320},{22,0},{1,44320},{4,65376},{74,0}}, .partsCount=7},
{.parts = new image_row_part_t[7]{{74,0},{4,65376},{1,44320},{22,0},{1,44320},{4,65376},{74,0}}, .partsCount=7},
{.parts = new image_row_part_t[7]{{74,0},{4,65376},{1,44320},{22,0},{1,44320},{4,65376},{74,0}}, .partsCount=7},
{.parts = new image_row_part_t[7]{{74,0},{4,65376},{1,44320},{22,0},{1,44320},{4,65376},{74,0}}, .partsCount=7},
{.parts = new image_row_part_t[7]{{74,0},{4,65376},{1,44320},{22,0},{1,44320},{4,65376},{74,0}}, .partsCount=7},
{.parts = new image_row_part_t[7]{{74,0},{4,65376},{1,44320},{22,0},{1,44320},{4,65376},{74,0}}, .partsCount=7},
{.parts = new image_row_part_t[7]{{74,0},{4,65376},{1,44320},{22,0},{1,44320},{4,65376},{74,0}}, .partsCount=7},
{.parts = new image_row_part_t[7]{{74,0},{4,65376},{1,44320},{22,0},{1,44320},{4,65376},{74,0}}, .partsCount=7},
{.parts = new image_row_part_t[7]{{74,0},{4,65376},{1,44320},{22,0},{1,44320},{4,65376},{74,0}}, .partsCount=7},
{.parts = new image_row_part_t[6]{{74,0},{4,65376},{1,44320},{22,0},{1,44320},{78,65376}}, .partsCount=6},
{.parts = new image_row_part_t[6]{{74,0},{4,65376},{1,44320},{22,0},{1,44320},{78,65376}}, .partsCount=6},
{.parts = new image_row_part_t[6]{{74,0},{4,65376},{1,44320},{22,0},{1,44320},{78,65376}}, .partsCount=6},
{.parts = new image_row_part_t[6]{{74,0},{4,65376},{1,44320},{22,0},{1,44320},{78,65376}}, .partsCount=6},
{.parts = new image_row_part_t[6]{{74,0},{4,65376},{1,44320},{22,0},{1,38016},{78,44320}}, .partsCount=6},
{.parts = new image_row_part_t[4]{{74,0},{4,65376},{1,44320},{101,0}}, .partsCount=4},
{.parts = new image_row_part_t[4]{{74,0},{4,65376},{1,44320},{101,0}}, .partsCount=4},
{.parts = new image_row_part_t[4]{{74,0},{4,65376},{1,44320},{101,0}}, .partsCount=4},
{.parts = new image_row_part_t[4]{{74,0},{4,65376},{1,44320},{101,0}}, .partsCount=4},
{.parts = new image_row_part_t[4]{{74,0},{4,65376},{1,44320},{101,0}}, .partsCount=4},
{.parts = new image_row_part_t[4]{{74,0},{4,65376},{1,44320},{101,0}}, .partsCount=4},
{.parts = new image_row_part_t[4]{{74,0},{4,65376},{1,44320},{101,0}}, .partsCount=4},
{.parts = new image_row_part_t[4]{{74,0},{4,65376},{1,44320},{101,0}}, .partsCount=4},
{.parts = new image_row_part_t[4]{{74,0},{4,65376},{1,44320},{101,0}}, .partsCount=4},
{.parts = new image_row_part_t[4]{{74,0},{4,65376},{1,44320},{101,0}}, .partsCount=4},
{.parts = new image_row_part_t[4]{{74,0},{4,65376},{1,44320},{101,0}}, .partsCount=4},
{.parts = new image_row_part_t[4]{{74,0},{4,65376},{1,44320},{101,0}}, .partsCount=4},
{.parts = new image_row_part_t[4]{{74,0},{4,65376},{1,44320},{101,0}}, .partsCount=4},
{.parts = new image_row_part_t[4]{{74,0},{4,65376},{1,44320},{101,0}}, .partsCount=4},
{.parts = new image_row_part_t[4]{{74,0},{4,65376},{1,44320},{101,0}}, .partsCount=4},
{.parts = new image_row_part_t[4]{{74,0},{4,65376},{1,44320},{101,0}}, .partsCount=4},
{.parts = new image_row_part_t[4]{{74,0},{4,65376},{1,44320},{101,0}}, .partsCount=4},
{.parts = new image_row_part_t[4]{{74,0},{4,65376},{1,44320},{101,0}}, .partsCount=4},
{.parts = new image_row_part_t[4]{{74,0},{4,65376},{1,44320},{101,0}}, .partsCount=4},
{.parts = new image_row_part_t[4]{{74,0},{4,65376},{1,44320},{101,0}}, .partsCount=4},
{.parts = new image_row_part_t[6]{{74,0},{4,65376},{1,44320},{21,0},{1,8480},{79,33760}}, .partsCount=6},
{.parts = new image_row_part_t[6]{{74,0},{4,65376},{1,44320},{21,0},{1,33760},{79,65376}}, .partsCount=6},
{.parts = new image_row_part_t[6]{{74,0},{4,65376},{1,44320},{21,0},{1,33760},{79,65376}}, .partsCount=6},
{.parts = new image_row_part_t[6]{{74,0},{4,65376},{1,44320},{21,0},{1,33760},{79,65376}}, .partsCount=6},
{.parts = new image_row_part_t[6]{{74,0},{4,65376},{1,44320},{21,0},{1,33760},{79,65376}}, .partsCount=6},
{.parts = new image_row_part_t[6]{{74,0},{4,65376},{1,44320},{21,0},{1,33760},{79,65376}}, .partsCount=6},
{.parts = new image_row_part_t[8]{{74,0},{4,65376},{1,44320},{21,0},{1,33760},{5,65376},{1,35840},{73,10592}}, .partsCount=8},
{.parts = new image_row_part_t[8]{{74,0},{4,65376},{1,44320},{21,0},{1,33760},{5,65376},{1,10592},{73,0}}, .partsCount=8},
{.parts = new image_row_part_t[8]{{74,0},{4,65376},{1,44320},{21,0},{1,33760},{5,65376},{1,10592},{73,0}}, .partsCount=8},
{.parts = new image_row_part_t[8]{{74,0},{4,65376},{1,44320},{21,0},{1,33760},{5,65376},{1,10592},{73,0}}, .partsCount=8},
{.parts = new image_row_part_t[8]{{74,0},{4,65376},{1,44320},{21,0},{1,33760},{5,65376},{1,10592},{73,0}}, .partsCount=8},
{.parts = new image_row_part_t[8]{{74,0},{4,65376},{1,44320},{21,0},{1,33760},{5,65376},{1,10592},{73,0}}, .partsCount=8},
{.parts = new image_row_part_t[8]{{74,0},{4,65376},{1,44320},{21,0},{1,33760},{5,65376},{1,10592},{73,0}}, .partsCount=8},
{.parts = new image_row_part_t[8]{{74,0},{4,65376},{1,44320},{21,0},{1,33760},{5,65376},{1,10592},{73,0}}, .partsCount=8},
{.parts = new image_row_part_t[8]{{74,0},{4,65376},{1,44320},{21,0},{1,33760},{5,65376},{1,10592},{73,0}}, .partsCount=8},
{.parts = new image_row_part_t[8]{{74,0},{4,65376},{1,44320},{21,0},{1,33760},{5,65376},{1,10592},{73,0}}, .partsCount=8},
{.parts = new image_row_part_t[8]{{74,0},{4,65376},{1,44320},{21,0},{1,33760},{5,65376},{1,10592},{73,0}}, .partsCount=8},
{.parts = new image_row_part_t[8]{{74,0},{4,65376},{1,44320},{21,0},{1,33760},{5,65376},{1,10592},{73,0}}, .partsCount=8},
{.parts = new image_row_part_t[8]{{74,0},{4,65376},{1,44320},{21,0},{1,33760},{5,65376},{1,10592},{73,0}}, .partsCount=8},
{.parts = new image_row_part_t[8]{{74,0},{4,65376},{1,44320},{21,0},{1,33760},{5,65376},{1,10592},{73,0}}, .partsCount=8},
{.parts = new image_row_part_t[8]{{74,0},{4,65376},{1,44320},{21,0},{1,33760},{5,65376},{1,10592},{73,0}}, .partsCount=8},
{.parts = new image_row_part_t[8]{{74,0},{4,65376},{1,44320},{21,0},{1,33760},{5,65376},{1,10592},{73,0}}, .partsCount=8},
{.parts = new image_row_part_t[8]{{74,0},{4,65376},{1,44320},{21,0},{1,33760},{5,65376},{1,10592},{73,0}}, .partsCount=8},
{.parts = new image_row_part_t[8]{{74,0},{4,65376},{1,44320},{21,0},{1,33760},{5,65376},{1,10592},{73,0}}, .partsCount=8},
{.parts = new image_row_part_t[8]{{74,0},{4,65376},{1,44320},{21,0},{1,33760},{5,65376},{1,10592},{73,0}}, .partsCount=8},
{.parts = new image_row_part_t[8]{{74,0},{4,65376},{1,44320},{21,0},{1,33760},{5,65376},{1,10592},{73,0}}, .partsCount=8},
{.parts = new image_row_part_t[8]{{74,0},{4,65376},{1,44320},{21,0},{1,33760},{5,65376},{1,10592},{73,0}}, .partsCount=8},
{.parts = new image_row_part_t[8]{{74,0},{4,65376},{1,44320},{21,0},{1,33760},{5,65376},{1,10592},{73,0}}, .partsCount=8},
{.parts = new image_row_part_t[8]{{74,0},{4,65376},{1,44320},{21,0},{1,33760},{5,65376},{1,10592},{73,0}}, .partsCount=8},
{.parts = new image_row_part_t[8]{{74,0},{4,65376},{1,44320},{21,0},{1,33760},{5,65376},{1,10592},{73,0}}, .partsCount=8},
{.parts = new image_row_part_t[8]{{74,0},{4,65376},{1,44320},{21,0},{1,33760},{5,65376},{1,10592},{73,0}}, .partsCount=8},
{.parts = new image_row_part_t[8]{{74,0},{4,65376},{1,44320},{21,0},{1,33760},{5,65376},{1,10592},{73,0}}, .partsCount=8},
{.parts = new image_row_part_t[8]{{74,0},{4,65376},{1,44320},{21,0},{1,33760},{5,65376},{1,10592},{73,0}}, .partsCount=8},
{.parts = new image_row_part_t[8]{{74,0},{4,65376},{1,44320},{21,0},{1,33760},{5,65376},{1,10592},{73,0}}, .partsCount=8},
{.parts = new image_row_part_t[8]{{74,0},{4,65376},{1,44320},{21,0},{1,33760},{5,65376},{1,10592},{73,0}}, .partsCount=8},
{.parts = new image_row_part_t[8]{{74,0},{4,65376},{1,44320},{21,0},{1,33760},{5,65376},{1,10592},{73,0}}, .partsCount=8},
{.parts = new image_row_part_t[8]{{74,0},{4,65376},{1,44320},{21,0},{1,33760},{5,65376},{1,10592},{73,0}}, .partsCount=8},
{.parts = new image_row_part_t[8]{{74,0},{4,65376},{1,44320},{21,0},{1,33760},{5,65376},{1,10592},{73,0}}, .partsCount=8},
{.parts = new image_row_part_t[8]{{74,0},{4,65376},{1,44320},{21,0},{1,33760},{5,65376},{1,10592},{73,0}}, .partsCount=8},
{.parts = new image_row_part_t[8]{{74,0},{4,65376},{1,44320},{21,0},{1,33760},{5,65376},{1,10592},{73,0}}, .partsCount=8},
{.parts = new image_row_part_t[8]{{74,0},{4,65376},{1,44320},{21,0},{1,33760},{5,65376},{1,10592},{73,0}}, .partsCount=8},
{.parts = new image_row_part_t[8]{{74,0},{4,65376},{1,44320},{21,0},{1,33760},{5,65376},{1,10592},{73,0}}, .partsCount=8},
{.parts = new image_row_part_t[8]{{74,0},{4,65376},{1,44320},{21,0},{1,33760},{5,65376},{1,10592},{73,0}}, .partsCount=8},
{.parts = new image_row_part_t[8]{{74,0},{4,65376},{1,44320},{21,0},{1,33760},{5,65376},{1,10592},{73,0}}, .partsCount=8},
{.parts = new image_row_part_t[8]{{74,0},{4,65376},{1,44320},{21,0},{1,33760},{5,65376},{1,10592},{73,0}}, .partsCount=8},
{.parts = new image_row_part_t[8]{{74,0},{4,65376},{1,44320},{21,0},{1,33760},{5,65376},{1,10592},{73,0}}, .partsCount=8},
{.parts = new image_row_part_t[8]{{74,0},{4,65376},{1,44320},{21,0},{1,33760},{5,65376},{1,10592},{73,0}}, .partsCount=8},
{.parts = new image_row_part_t[8]{{74,0},{4,65376},{1,44320},{21,0},{1,33760},{5,65376},{1,10592},{73,0}}, .partsCount=8},
{.parts = new image_row_part_t[8]{{74,0},{4,65376},{1,44320},{21,0},{1,33760},{5,65376},{1,10592},{73,0}}, .partsCount=8},
{.parts = new image_row_part_t[8]{{74,0},{4,65376},{1,44320},{21,0},{1,33760},{5,65376},{1,10592},{73,0}}, .partsCount=8},
{.parts = new image_row_part_t[8]{{74,0},{4,65376},{1,44320},{21,0},{1,33760},{5,65376},{1,10592},{73,0}}, .partsCount=8},
{.parts = new image_row_part_t[8]{{74,0},{4,65376},{1,44320},{21,0},{1,33760},{5,65376},{1,10592},{73,0}}, .partsCount=8},
{.parts = new image_row_part_t[8]{{74,0},{4,65376},{1,44320},{21,0},{1,33760},{5,65376},{1,10592},{73,0}}, .partsCount=8},
{.parts = new image_row_part_t[8]{{74,0},{4,65376},{1,44320},{21,0},{1,33760},{5,65376},{1,10592},{73,0}}, .partsCount=8},
{.parts = new image_row_part_t[8]{{74,0},{4,65376},{1,44320},{21,0},{1,33760},{5,65376},{1,10592},{73,0}}, .partsCount=8},
{.parts = new image_row_part_t[8]{{74,0},{4,65376},{1,44320},{21,0},{1,33760},{5,65376},{1,10592},{73,0}}, .partsCount=8},
{.parts = new image_row_part_t[8]{{74,0},{4,65376},{1,44320},{21,0},{1,33760},{5,65376},{1,10592},{73,0}}, .partsCount=8},
{.parts = new image_row_part_t[8]{{74,0},{4,65376},{1,44320},{21,0},{1,33760},{5,65376},{1,10592},{73,0}}, .partsCount=8},
{.parts = new image_row_part_t[8]{{74,0},{4,65376},{1,44320},{21,0},{1,33760},{5,65376},{1,10592},{73,0}}, .partsCount=8},
{.parts = new image_row_part_t[8]{{74,0},{4,65376},{1,44320},{21,0},{1,33760},{5,65376},{1,10592},{73,0}}, .partsCount=8},
{.parts = new image_row_part_t[8]{{74,0},{4,65376},{1,44320},{21,0},{1,33760},{5,65376},{1,10592},{73,0}}, .partsCount=8},
{.parts = new image_row_part_t[8]{{74,0},{4,65376},{1,44320},{21,0},{1,33760},{5,65376},{1,10592},{73,0}}, .partsCount=8},
{.parts = new image_row_part_t[8]{{74,0},{4,65376},{1,44320},{21,0},{1,33760},{5,65376},{1,10592},{73,0}}, .partsCount=8},
{.parts = new image_row_part_t[8]{{74,0},{4,65376},{1,44320},{21,0},{1,33760},{5,65376},{1,10592},{73,0}}, .partsCount=8},
{.parts = new image_row_part_t[8]{{74,0},{4,65376},{1,44320},{21,0},{1,33760},{5,65376},{1,10592},{73,0}}, .partsCount=8},
{.parts = new image_row_part_t[8]{{74,0},{4,65376},{1,44320},{21,0},{1,33760},{5,65376},{1,10592},{73,0}}, .partsCount=8},
{.parts = new image_row_part_t[8]{{74,0},{4,65376},{1,44320},{21,0},{1,33760},{5,65376},{1,10592},{73,0}}, .partsCount=8},
{.parts = new image_row_part_t[8]{{74,0},{4,65376},{1,44320},{21,0},{1,33760},{5,65376},{1,10592},{73,0}}, .partsCount=8},
{.parts = new image_row_part_t[8]{{74,0},{4,65376},{1,44320},{21,0},{1,33760},{5,65376},{1,10592},{73,0}}, .partsCount=8},
{.parts = new image_row_part_t[8]{{74,0},{4,65376},{1,44320},{21,0},{1,33760},{5,65376},{1,10592},{73,0}}, .partsCount=8},
{.parts = new image_row_part_t[8]{{74,0},{4,65376},{1,44320},{21,0},{1,33760},{5,65376},{1,10592},{73,0}}, .partsCount=8},
{.parts = new image_row_part_t[8]{{74,0},{4,65376},{1,44320},{21,0},{1,33760},{5,65376},{1,10592},{73,0}}, .partsCount=8},
{.parts = new image_row_part_t[8]{{74,0},{4,65376},{1,44320},{21,0},{1,33760},{5,65376},{1,10592},{73,0}}, .partsCount=8},
{.parts = new image_row_part_t[8]{{74,0},{4,65376},{1,44320},{21,0},{1,33760},{5,65376},{1,10592},{73,0}}, .partsCount=8},
{.parts = new image_row_part_t[8]{{74,0},{4,65376},{1,44320},{21,0},{1,33760},{5,65376},{1,10592},{73,0}}, .partsCount=8},
{.parts = new image_row_part_t[8]{{74,0},{4,65376},{1,44320},{21,0},{1,33760},{5,65376},{1,10592},{73,0}}, .partsCount=8},
{.parts = new image_row_part_t[8]{{74,0},{4,65376},{1,44320},{21,0},{1,33760},{5,65376},{1,10592},{73,0}}, .partsCount=8},
{.parts = new image_row_part_t[8]{{74,0},{4,65376},{1,44320},{21,0},{1,33760},{5,65376},{1,10592},{73,0}}, .partsCount=8},
{.parts = new image_row_part_t[8]{{74,0},{4,65376},{1,44320},{21,0},{1,33760},{5,65376},{1,10592},{73,0}}, .partsCount=8},
{.parts = new image_row_part_t[8]{{74,0},{4,65376},{1,44320},{21,0},{1,33760},{5,65376},{1,10592},{73,0}}, .partsCount=8},
{.parts = new image_row_part_t[8]{{74,0},{4,65376},{1,44320},{21,0},{1,33760},{5,65376},{1,10592},{73,0}}, .partsCount=8}
  }
};

image_t const Images::town = 
{
.h = 180,
.w = 180,
.rows = new image_row_t[180]
  {
{.parts = new image_row_part_t[1]{{180,0}}, .partsCount=1},
{.parts = new image_row_part_t[1]{{180,0}}, .partsCount=1},
{.parts = new image_row_part_t[1]{{180,0}}, .partsCount=1},
{.parts = new image_row_part_t[1]{{180,0}}, .partsCount=1},
{.parts = new image_row_part_t[1]{{180,0}}, .partsCount=1},
{.parts = new image_row_part_t[1]{{180,0}}, .partsCount=1},
{.parts = new image_row_part_t[1]{{180,0}}, .partsCount=1},
{.parts = new image_row_part_t[1]{{180,0}}, .partsCount=1},
{.parts = new image_row_part_t[1]{{180,0}}, .partsCount=1},
{.parts = new image_row_part_t[1]{{180,0}}, .partsCount=1},
{.parts = new image_row_part_t[1]{{180,0}}, .partsCount=1},
{.parts = new image_row_part_t[1]{{180,0}}, .partsCount=1},
{.parts = new image_row_part_t[1]{{180,0}}, .partsCount=1},
{.parts = new image_row_part_t[1]{{180,0}}, .partsCount=1},
{.parts = new image_row_part_t[1]{{180,0}}, .partsCount=1},
{.parts = new image_row_part_t[1]{{180,0}}, .partsCount=1},
{.parts = new image_row_part_t[1]{{180,0}}, .partsCount=1},
{.parts = new image_row_part_t[12]{{57,0},{1,6372},{1,23276},{1,21166},{13,19119},{1,23277},{1,6372},{38,0},{1,6372},{5,19119},{1,6372},{60,0}}, .partsCount=12},
{.parts = new image_row_part_t[9]{{57,0},{1,23277},{16,31727},{1,23245},{38,0},{1,23276},{5,31727},{1,23276},{60,0}}, .partsCount=9},
{.parts = new image_row_part_t[16]{{57,0},{1,23277},{16,31727},{1,27536},{1,6372},{30,0},{1,6372},{1,23276},{2,21166},{1,23277},{1,23276},{1,16937},{1,35988},{5,31727},{1,23276},{60,0}}, .partsCount=16},
{.parts = new image_row_part_t[12]{{57,0},{1,23277},{17,31727},{1,23276},{30,0},{1,23276},{5,31727},{1,29616},{1,33876},{5,31727},{1,23276},{60,0}}, .partsCount=12},
{.parts = new image_row_part_t[9]{{57,0},{1,23277},{17,31727},{1,23276},{30,0},{1,23276},{12,31727},{1,23276},{60,0}}, .partsCount=9},
{.parts = new image_row_part_t[14]{{57,0},{1,23277},{4,31727},{1,27504},{6,23276},{1,33875},{5,31727},{1,23276},{30,0},{1,23276},{12,31727},{1,33810},{1,6372},{59,0}}, .partsCount=14},
{.parts = new image_row_part_t[16]{{57,0},{1,23277},{4,31727},{1,21166},{6,0},{1,23276},{5,31727},{1,23276},{30,0},{1,23276},{13,31727},{1,29616},{1,21197},{1,23276},{1,6372},{56,0}}, .partsCount=16},
{.parts = new image_row_part_t[16]{{57,0},{1,23277},{4,31727},{1,21166},{6,0},{1,23276},{5,31727},{1,23276},{30,0},{1,23276},{16,31727},{1,27536},{1,23277},{1,23276},{1,6372},{53,0}}, .partsCount=16},
{.parts = new image_row_part_t[16]{{57,0},{1,23277},{4,31727},{1,21166},{6,0},{1,23276},{5,31727},{1,23276},{30,0},{1,23276},{4,31727},{1,29616},{1,29585},{13,31727},{1,23276},{53,0}}, .partsCount=16},
{.parts = new image_row_part_t[23]{{54,0},{1,6372},{2,23276},{1,31730},{4,31727},{1,27504},{6,23276},{1,33875},{5,31727},{1,33875},{1,23276},{1,6372},{28,0},{1,23276},{4,31727},{1,23313},{1,16937},{1,23276},{1,23277},{1,27536},{10,31727},{1,23276},{53,0}}, .partsCount=23},
{.parts = new image_row_part_t[20]{{52,0},{1,6372},{1,23277},{1,27536},{22,31727},{1,29616},{1,21198},{1,6372},{26,0},{1,23276},{4,31727},{1,21166},{3,0},{1,6372},{1,23276},{1,23277},{1,27536},{7,31727},{1,23276},{53,0}}, .partsCount=20},
{.parts = new image_row_part_t[15]{{52,0},{1,23276},{26,31727},{1,23277},{26,0},{1,23276},{4,31727},{1,21166},{6,0},{1,6372},{1,23277},{1,29617},{5,31727},{1,23276},{53,0}}, .partsCount=15},
{.parts = new image_row_part_t[21]{{52,0},{1,23276},{26,31727},{1,29616},{1,6372},{13,0},{1,6372},{1,23276},{2,23277},{1,23276},{1,6372},{6,0},{1,23276},{4,31727},{1,21166},{8,0},{1,6372},{1,27536},{4,31727},{1,23276},{53,0}}, .partsCount=21},
{.parts = new image_row_part_t[20]{{52,0},{1,23276},{27,31727},{1,23276},{13,0},{1,23276},{4,31727},{1,27504},{1,23277},{1,23276},{1,6372},{3,0},{1,23276},{4,31727},{1,21166},{9,0},{1,19119},{4,31727},{1,23276},{53,0}}, .partsCount=20},
{.parts = new image_row_part_t[19]{{52,0},{1,23276},{27,31727},{1,23276},{13,0},{1,21166},{7,31727},{1,27504},{1,23276},{1,6372},{1,0},{1,23276},{4,31727},{1,21166},{9,0},{1,19119},{4,31727},{1,23276},{53,0}}, .partsCount=19},
{.parts = new image_row_part_t[21]{{52,0},{1,23276},{4,31727},{1,27536},{16,23276},{1,33875},{5,31727},{1,23276},{13,0},{1,21166},{9,31727},{1,29616},{1,21198},{1,33875},{4,31727},{1,21166},{9,0},{1,19119},{4,31727},{1,23276},{53,0}}, .partsCount=21},
{.parts = new image_row_part_t[17]{{52,0},{1,23276},{4,31727},{1,19119},{16,0},{1,23276},{5,31727},{1,23276},{13,0},{1,21166},{16,31727},{1,21166},{9,0},{1,19119},{4,31727},{1,23276},{53,0}}, .partsCount=17},
{.parts = new image_row_part_t[19]{{52,0},{1,23276},{4,31727},{1,19119},{16,0},{1,23276},{5,31727},{1,23276},{13,0},{1,21166},{16,31727},{1,27536},{1,23276},{1,6372},{7,0},{1,19119},{4,31727},{1,23276},{53,0}}, .partsCount=19},
{.parts = new image_row_part_t[21]{{52,0},{1,23276},{4,31727},{1,19119},{16,0},{1,23276},{5,31727},{1,23276},{13,0},{1,21166},{4,31727},{1,29648},{13,31727},{1,27504},{2,23276},{1,6372},{4,0},{1,19119},{4,31727},{1,23276},{53,0}}, .partsCount=21},
{.parts = new image_row_part_t[28]{{48,0},{1,6372},{3,23276},{1,33875},{4,31727},{1,27536},{16,23276},{1,33875},{5,31727},{1,33875},{2,23276},{1,6372},{10,0},{1,21166},{4,31727},{1,35955},{1,23276},{1,23277},{1,29616},{13,31727},{1,27536},{2,23276},{1,6372},{1,0},{1,19119},{4,31727},{1,23276},{53,0}}, .partsCount=28},
{.parts = new image_row_part_t[22]{{47,0},{1,6372},{1,31730},{34,31727},{1,27536},{1,6372},{9,0},{1,21166},{4,31727},{1,23276},{2,0},{1,6372},{1,23276},{1,23277},{1,27536},{13,31727},{1,29617},{1,23276},{1,27536},{4,31727},{1,23276},{53,0}}, .partsCount=22},
{.parts = new image_row_part_t[15]{{47,0},{1,23276},{36,31727},{1,23277},{9,0},{1,21166},{4,31727},{1,23276},{5,0},{1,6372},{1,23276},{1,27537},{18,31727},{1,23276},{53,0}}, .partsCount=15},
{.parts = new image_row_part_t[17]{{47,0},{1,23276},{36,31727},{1,19118},{9,0},{1,21166},{4,31727},{1,23276},{7,0},{1,6372},{1,23276},{1,23277},{1,27504},{15,31727},{1,33875},{1,6372},{52,0}}, .partsCount=17},
{.parts = new image_row_part_t[17]{{47,0},{1,23276},{36,31727},{1,19087},{9,0},{1,21166},{4,31727},{1,23276},{10,0},{1,6372},{2,23276},{1,27536},{13,31727},{1,27536},{2,23276},{1,6372},{49,0}}, .partsCount=17},
{.parts = new image_row_part_t[18]{{47,0},{1,23276},{36,31727},{1,19087},{9,0},{1,21166},{4,31727},{1,23276},{13,0},{1,6372},{1,23276},{1,23277},{1,27536},{13,31727},{1,27537},{1,23277},{1,6372},{47,0}}, .partsCount=18},
{.parts = new image_row_part_t[21]{{47,0},{1,23276},{5,31727},{1,33875},{25,23276},{1,33875},{4,31727},{1,19087},{9,0},{1,21166},{4,31727},{1,23276},{16,0},{1,6372},{1,23276},{1,23246},{1,27536},{12,31727},{1,27536},{1,6372},{46,0}}, .partsCount=21},
{.parts = new image_row_part_t[20]{{47,0},{1,23276},{5,31727},{1,23276},{25,0},{1,23276},{4,31727},{1,19087},{9,0},{1,21166},{4,31727},{1,23276},{19,0},{1,6372},{1,23276},{1,27537},{11,31727},{1,27537},{1,6372},{45,0}}, .partsCount=20},
{.parts = new image_row_part_t[19]{{47,0},{1,23276},{5,31727},{1,23276},{25,0},{1,23276},{4,31727},{1,19087},{9,0},{1,21166},{4,31727},{1,23276},{21,0},{1,6372},{2,23276},{1,27504},{9,31727},{1,23276},{45,0}}, .partsCount=19},
{.parts = new image_row_part_t[20]{{47,0},{1,23276},{5,31727},{1,23276},{25,0},{1,23276},{4,31727},{1,19087},{9,0},{1,21166},{4,31727},{1,23276},{24,0},{1,6372},{1,23276},{1,23277},{1,27536},{6,31727},{1,23276},{45,0}}, .partsCount=20},
{.parts = new image_row_part_t[26]{{47,0},{1,23276},{5,31727},{1,23276},{5,0},{1,6372},{5,23276},{1,6372},{13,0},{1,23276},{4,31727},{1,19087},{9,0},{1,21166},{4,31727},{1,23276},{3,0},{1,6372},{5,23276},{1,6372},{17,0},{1,6372},{1,33875},{5,31727},{1,23276},{45,0}}, .partsCount=26},
{.parts = new image_row_part_t[25]{{47,0},{1,23276},{5,31727},{1,23276},{5,0},{1,23276},{5,31727},{1,23276},{13,0},{1,23276},{4,31727},{1,19087},{9,0},{1,21166},{4,31727},{1,23276},{3,0},{1,23276},{5,31727},{1,23276},{18,0},{1,23276},{5,31727},{1,23276},{45,0}}, .partsCount=25},
{.parts = new image_row_part_t[25]{{47,0},{1,23276},{5,31727},{1,23276},{5,0},{1,23276},{5,31727},{1,23276},{13,0},{1,23276},{4,31727},{1,19087},{9,0},{1,21166},{4,31727},{1,23276},{3,0},{1,23276},{5,31727},{1,23276},{18,0},{1,23276},{5,31727},{1,23276},{45,0}}, .partsCount=25},
{.parts = new image_row_part_t[25]{{47,0},{1,23276},{5,31727},{1,23276},{5,0},{1,23276},{5,31727},{1,23276},{13,0},{1,23276},{4,31727},{1,19087},{9,0},{1,21166},{4,31727},{1,23276},{3,0},{1,23276},{5,31727},{1,23276},{18,0},{1,23276},{5,31727},{1,23276},{45,0}}, .partsCount=25},
{.parts = new image_row_part_t[25]{{47,0},{1,23276},{5,31727},{1,23276},{5,0},{1,23276},{5,31727},{1,23276},{13,0},{1,23276},{4,31727},{1,19087},{9,0},{1,21166},{4,31727},{1,23276},{3,0},{1,23276},{5,31727},{1,23276},{18,0},{1,23276},{5,31727},{1,23276},{45,0}}, .partsCount=25},
{.parts = new image_row_part_t[29]{{47,0},{1,23276},{5,31727},{1,23276},{5,0},{1,23276},{5,31727},{1,23276},{13,0},{1,23276},{4,31727},{1,19087},{9,0},{1,21166},{4,31727},{1,23276},{3,0},{1,23276},{5,31727},{1,23276},{8,0},{1,6372},{5,23276},{1,6372},{3,0},{1,23276},{5,31727},{1,23276},{45,0}}, .partsCount=29},
{.parts = new image_row_part_t[29]{{47,0},{1,23276},{5,31727},{1,23276},{5,0},{1,6372},{5,23276},{1,6372},{13,0},{1,23276},{4,31727},{1,19087},{9,0},{1,21166},{4,31727},{1,23276},{3,0},{1,6372},{5,23276},{1,6372},{8,0},{1,23276},{5,31727},{1,23276},{3,0},{1,23276},{5,31727},{1,23276},{45,0}}, .partsCount=29},
{.parts = new image_row_part_t[21]{{47,0},{1,23276},{5,31727},{1,23276},{25,0},{1,23276},{4,31727},{1,19087},{9,0},{1,21166},{4,31727},{1,23276},{18,0},{1,23276},{5,31727},{1,23276},{3,0},{1,23276},{5,31727},{1,23276},{45,0}}, .partsCount=21},
{.parts = new image_row_part_t[21]{{47,0},{1,23276},{5,31727},{1,23276},{25,0},{1,23276},{4,31727},{1,19087},{9,0},{1,21166},{4,31727},{1,23276},{18,0},{1,23276},{5,31727},{1,23276},{3,0},{1,23276},{5,31727},{1,23276},{45,0}}, .partsCount=21},
{.parts = new image_row_part_t[21]{{47,0},{1,23276},{5,31727},{1,23276},{25,0},{1,23276},{4,31727},{1,19087},{9,0},{1,21166},{4,31727},{1,23276},{18,0},{1,23276},{5,31727},{1,23276},{3,0},{1,23276},{5,31727},{1,23276},{45,0}}, .partsCount=21},
{.parts = new image_row_part_t[25]{{47,0},{1,23276},{5,31727},{1,23276},{15,0},{1,6372},{5,23277},{1,6372},{3,0},{1,23276},{4,31727},{1,19087},{9,0},{1,21166},{4,31727},{1,23276},{18,0},{1,6372},{5,19119},{1,6372},{3,0},{1,23276},{5,31727},{1,23276},{45,0}}, .partsCount=25},
{.parts = new image_row_part_t[21]{{47,0},{1,23276},{5,31727},{1,23276},{15,0},{1,23276},{5,31727},{1,23276},{3,0},{1,23276},{4,31727},{1,19087},{9,0},{1,21166},{4,31727},{1,23276},{28,0},{1,23276},{5,31727},{1,23276},{45,0}}, .partsCount=21},
{.parts = new image_row_part_t[21]{{47,0},{1,23276},{5,31727},{1,23276},{15,0},{1,23276},{5,31727},{1,23276},{3,0},{1,23276},{4,31727},{1,19087},{9,0},{1,21166},{4,31727},{1,23276},{28,0},{1,23276},{5,31727},{1,23276},{45,0}}, .partsCount=21},
{.parts = new image_row_part_t[21]{{47,0},{1,23276},{5,31727},{1,23276},{15,0},{1,23276},{5,31727},{1,23276},{3,0},{1,23276},{4,31727},{1,19087},{9,0},{1,21166},{4,31727},{1,23276},{28,0},{1,23276},{5,31727},{1,23276},{45,0}}, .partsCount=21},
{.parts = new image_row_part_t[21]{{47,0},{1,23276},{5,31727},{1,23276},{15,0},{1,23276},{5,31727},{1,23276},{3,0},{1,23276},{4,31727},{1,19087},{9,0},{1,21166},{4,31727},{1,23276},{28,0},{1,23276},{5,31727},{1,23276},{45,0}}, .partsCount=21},
{.parts = new image_row_part_t[21]{{47,0},{1,23276},{5,31727},{1,23276},{15,0},{1,6372},{5,21166},{1,6372},{3,0},{1,23276},{4,31727},{1,19087},{9,0},{1,12711},{4,21166},{1,6372},{28,0},{1,23276},{5,31727},{1,23276},{45,0}}, .partsCount=21},
{.parts = new image_row_part_t[13]{{47,0},{1,23276},{5,31727},{1,23276},{25,0},{1,23276},{4,31727},{1,19087},{43,0},{1,23276},{5,31727},{1,23276},{45,0}}, .partsCount=13},
{.parts = new image_row_part_t[29]{{27,0},{1,6372},{5,23276},{1,6372},{13,0},{1,23276},{5,31727},{1,23276},{3,0},{1,6372},{4,23276},{1,6372},{16,0},{1,23276},{4,31727},{1,19087},{19,0},{1,8452},{3,23277},{1,8452},{4,0},{1,6372},{5,23276},{1,6372},{8,0},{1,23276},{5,31727},{1,23276},{45,0}}, .partsCount=29},
{.parts = new image_row_part_t[33]{{27,0},{1,23276},{5,31727},{1,23276},{13,0},{1,23276},{5,31727},{1,23276},{3,0},{1,23277},{4,31727},{1,21166},{16,0},{1,23276},{4,31727},{1,19087},{16,0},{1,8452},{1,23277},{1,23309},{1,27537},{3,31727},{1,29650},{1,8452},{3,0},{1,23276},{5,31727},{1,23276},{8,0},{1,23276},{5,31727},{1,23276},{45,0}}, .partsCount=33},
{.parts = new image_row_part_t[31]{{27,0},{1,23276},{5,31727},{1,23276},{13,0},{1,23276},{5,31727},{1,23276},{3,0},{1,23277},{4,31727},{1,21166},{16,0},{1,23276},{4,31727},{1,19087},{12,0},{1,8452},{3,23277},{1,29616},{7,31727},{1,23277},{3,0},{1,23276},{5,31727},{1,23276},{8,0},{1,23276},{5,31727},{1,23276},{45,0}}, .partsCount=31},
{.parts = new image_row_part_t[31]{{27,0},{1,23276},{5,31727},{1,23276},{13,0},{1,23276},{5,31727},{1,23276},{3,0},{1,23277},{4,31727},{1,21166},{16,0},{1,6372},{4,23277},{1,10598},{9,0},{1,8452},{2,23277},{1,29650},{11,31727},{1,23277},{3,0},{1,23276},{5,31727},{1,23276},{8,0},{1,23276},{5,31727},{1,23276},{45,0}}, .partsCount=31},
{.parts = new image_row_part_t[27]{{27,0},{1,23276},{5,31727},{1,23276},{13,0},{1,23276},{5,31727},{1,23276},{3,0},{1,23277},{4,31727},{1,21166},{28,0},{1,8452},{2,23277},{1,29649},{14,31727},{1,23277},{3,0},{1,23276},{5,31727},{1,23276},{8,0},{1,23276},{5,31727},{1,23276},{45,0}}, .partsCount=27},
{.parts = new image_row_part_t[40]{{27,0},{1,23276},{5,31727},{1,23276},{3,0},{1,6372},{5,23276},{1,6372},{3,0},{1,23276},{5,31727},{1,23276},{3,0},{1,23277},{4,31727},{1,21166},{25,0},{1,8452},{1,23277},{1,23309},{1,27537},{17,31727},{1,23277},{3,0},{1,23276},{5,31727},{1,23276},{8,0},{1,23276},{5,31727},{1,23276},{3,0},{1,6372},{4,23276},{1,6372},{4,0},{1,6372},{4,23276},{1,6372},{26,0}}, .partsCount=40},
{.parts = new image_row_part_t[40]{{27,0},{1,23276},{5,31727},{1,23276},{3,0},{1,23276},{5,31727},{1,23276},{3,0},{1,6372},{5,23276},{1,6372},{3,0},{1,6372},{4,23276},{1,6372},{21,0},{1,8452},{2,23277},{1,23309},{1,29616},{20,31727},{1,23277},{3,0},{1,6372},{5,23276},{1,6372},{8,0},{1,6372},{5,23276},{1,6372},{3,0},{1,23277},{4,31727},{1,21198},{4,0},{1,19119},{4,31727},{1,23276},{26,0}}, .partsCount=40},
{.parts = new image_row_part_t[26]{{27,0},{1,23276},{5,31727},{1,23276},{3,0},{1,23276},{5,31727},{1,23276},{37,0},{1,8452},{2,23277},{1,29650},{17,31727},{1,31763},{1,35957},{5,31727},{1,23277},{28,0},{1,23277},{4,31727},{1,21198},{4,0},{1,19119},{4,31727},{1,23276},{26,0}}, .partsCount=26},
{.parts = new image_row_part_t[28]{{27,0},{1,23276},{5,31727},{1,23276},{3,0},{1,23276},{5,31727},{1,23276},{34,0},{1,8452},{2,23277},{1,29649},{16,31727},{1,29616},{3,23277},{1,16969},{1,33876},{5,31727},{1,23277},{28,0},{1,23277},{4,31727},{1,21198},{4,0},{1,19119},{4,31727},{1,23276},{26,0}}, .partsCount=28},
{.parts = new image_row_part_t[30]{{27,0},{1,23276},{5,31727},{1,23276},{3,0},{1,23276},{5,31727},{1,23276},{31,0},{1,8452},{1,23277},{1,23309},{1,27537},{16,31727},{1,27537},{2,23277},{1,8452},{4,0},{1,23277},{5,31727},{1,23277},{28,0},{1,23277},{4,31727},{1,21198},{4,0},{1,19119},{4,31727},{1,23276},{26,0}}, .partsCount=30},
{.parts = new image_row_part_t[37]{{21,0},{1,6372},{5,23276},{1,33875},{5,31727},{1,33875},{3,23276},{1,33875},{5,31727},{1,33875},{17,23276},{1,6372},{10,0},{1,8452},{2,23277},{1,29616},{16,31727},{1,29617},{2,23277},{1,8452},{7,0},{1,23277},{5,31727},{1,23277},{9,0},{1,6372},{18,23276},{1,29617},{4,31727},{1,27537},{4,23276},{1,27536},{4,31727},{1,33875},{3,23276},{1,6372},{22,0}}, .partsCount=37},
{.parts = new image_row_part_t[24]{{20,0},{1,6372},{1,27536},{39,31727},{1,27536},{1,6372},{8,0},{1,8452},{1,31762},{16,31727},{1,29650},{2,23277},{1,8452},{10,0},{1,23277},{5,31727},{1,23277},{8,0},{1,6372},{1,29649},{37,31727},{1,27536},{1,6372},{21,0}}, .partsCount=24},
{.parts = new image_row_part_t[19]{{20,0},{1,23276},{41,31727},{1,23245},{8,0},{1,23277},{13,31727},{1,29616},{3,23277},{1,8452},{13,0},{1,23277},{5,31727},{1,23277},{8,0},{1,23276},{39,31727},{1,23276},{21,0}}, .partsCount=19},
{.parts = new image_row_part_t[19]{{20,0},{1,23276},{41,31727},{1,21166},{8,0},{1,23277},{10,31727},{1,27537},{2,23277},{1,8452},{17,0},{1,23277},{5,31727},{1,23277},{8,0},{1,23276},{39,31727},{1,23276},{21,0}}, .partsCount=19},
{.parts = new image_row_part_t[19]{{20,0},{1,23276},{41,31727},{1,21166},{8,0},{1,23277},{7,31727},{1,29617},{2,23277},{1,8452},{20,0},{1,23277},{5,31727},{1,23277},{8,0},{1,23276},{39,31727},{1,23276},{21,0}}, .partsCount=19},
{.parts = new image_row_part_t[21]{{20,0},{1,23276},{41,31727},{1,21166},{8,0},{1,23277},{5,31727},{1,31762},{1,23277},{1,8452},{13,0},{1,8452},{9,23277},{1,31762},{5,31727},{1,23277},{8,0},{1,23276},{39,31727},{1,23276},{21,0}}, .partsCount=21},
{.parts = new image_row_part_t[25]{{20,0},{1,23276},{5,31727},{1,33875},{30,23276},{1,31730},{4,31727},{1,21166},{8,0},{1,23277},{5,31727},{1,23277},{15,0},{1,23277},{15,31727},{1,23277},{8,0},{1,23276},{5,31727},{1,33875},{27,23276},{1,33875},{5,31727},{1,23276},{21,0}}, .partsCount=25},
{.parts = new image_row_part_t[25]{{20,0},{1,23276},{5,31727},{1,23276},{30,0},{1,23277},{4,31727},{1,21166},{8,0},{1,23277},{5,31727},{1,23277},{15,0},{1,23277},{15,31727},{1,23277},{8,0},{1,23276},{5,31727},{1,23276},{27,0},{1,23276},{5,31727},{1,23276},{21,0}}, .partsCount=25},
{.parts = new image_row_part_t[25]{{20,0},{1,23276},{5,31727},{1,23276},{30,0},{1,23277},{4,31727},{1,21166},{8,0},{1,23277},{5,31727},{1,23277},{15,0},{1,23277},{15,31727},{1,23277},{8,0},{1,23276},{5,31727},{1,23276},{27,0},{1,23276},{5,31727},{1,23276},{21,0}}, .partsCount=25},
{.parts = new image_row_part_t[25]{{20,0},{1,23276},{5,31727},{1,23276},{30,0},{1,23277},{4,31727},{1,21166},{8,0},{1,23277},{5,31727},{1,23277},{15,0},{1,23277},{15,31727},{1,23277},{8,0},{1,23276},{5,31727},{1,23276},{27,0},{1,23276},{5,31727},{1,23276},{21,0}}, .partsCount=25},
{.parts = new image_row_part_t[25]{{20,0},{1,23276},{5,31727},{1,23276},{30,0},{1,23277},{4,31727},{1,21166},{8,0},{1,23277},{5,31727},{1,23277},{15,0},{1,23277},{15,31727},{1,23277},{8,0},{1,23276},{5,31727},{1,23276},{27,0},{1,23276},{5,31727},{1,23276},{21,0}}, .partsCount=25},
{.parts = new image_row_part_t[27]{{20,0},{1,23276},{5,31727},{1,23276},{30,0},{1,23277},{4,31727},{1,21166},{8,0},{1,23277},{5,31727},{1,23277},{15,0},{1,8452},{9,23277},{1,31762},{5,31727},{1,23277},{8,0},{1,23276},{5,31727},{1,23276},{27,0},{1,23276},{5,31727},{1,23276},{21,0}}, .partsCount=27},
{.parts = new image_row_part_t[29]{{20,0},{1,23276},{5,31727},{1,33875},{21,23276},{1,6372},{8,0},{1,23277},{4,31727},{1,21166},{8,0},{1,23277},{5,31727},{1,23277},{25,0},{1,23277},{5,31727},{1,23277},{8,0},{1,23276},{5,31727},{1,23276},{5,0},{1,6372},{21,23276},{1,33875},{5,31727},{1,23276},{21,0}}, .partsCount=29},
{.parts = new image_row_part_t[25]{{20,0},{1,23276},{27,31727},{1,23276},{8,0},{1,6372},{4,23276},{1,6372},{8,0},{1,23277},{5,31727},{1,23277},{25,0},{1,23277},{5,31727},{1,23277},{8,0},{1,23276},{5,31727},{1,23276},{5,0},{1,23276},{27,31727},{1,23276},{21,0}}, .partsCount=25},
{.parts = new image_row_part_t[21]{{20,0},{1,23276},{27,31727},{1,23276},{22,0},{1,23277},{5,31727},{1,23277},{25,0},{1,23277},{5,31727},{1,23277},{8,0},{1,23276},{5,31727},{1,23276},{5,0},{1,23276},{27,31727},{1,23276},{21,0}}, .partsCount=21},
{.parts = new image_row_part_t[23]{{20,0},{1,23276},{27,31727},{1,23276},{22,0},{1,23277},{5,31727},{1,23277},{8,0},{1,8452},{16,21199},{1,27536},{5,31727},{1,23277},{8,0},{1,23276},{5,31727},{1,23276},{5,0},{1,23276},{27,31727},{1,23276},{21,0}}, .partsCount=23},
{.parts = new image_row_part_t[21]{{20,0},{1,23276},{27,31727},{1,23276},{22,0},{1,23277},{5,31727},{1,23277},{8,0},{1,23277},{22,31727},{1,23277},{8,0},{1,23276},{5,31727},{1,23276},{5,0},{1,23276},{27,31727},{1,23276},{21,0}}, .partsCount=21},
{.parts = new image_row_part_t[25]{{20,0},{1,23276},{27,31727},{1,23276},{8,0},{1,6372},{4,23276},{1,6372},{8,0},{1,23277},{5,31727},{1,23277},{8,0},{1,23277},{22,31727},{1,23277},{8,0},{1,23276},{5,31727},{1,23276},{5,0},{1,23276},{27,31727},{1,23276},{21,0}}, .partsCount=25},
{.parts = new image_row_part_t[29]{{20,0},{1,23276},{5,31727},{1,33875},{21,23276},{1,6372},{8,0},{1,23277},{4,31727},{1,21166},{8,0},{1,23277},{5,31727},{1,23277},{8,0},{1,23277},{22,31727},{1,23277},{8,0},{1,23276},{5,31727},{1,23276},{5,0},{1,6372},{21,23276},{1,33875},{5,31727},{1,23276},{21,0}}, .partsCount=29},
{.parts = new image_row_part_t[25]{{20,0},{1,23276},{5,31727},{1,23276},{30,0},{1,23277},{4,31727},{1,21166},{8,0},{1,23277},{5,31727},{1,23277},{8,0},{1,23277},{22,31727},{1,23277},{8,0},{1,23276},{5,31727},{1,23276},{27,0},{1,23276},{5,31727},{1,23276},{21,0}}, .partsCount=25},
{.parts = new image_row_part_t[27]{{20,0},{1,23276},{5,31727},{1,23276},{30,0},{1,23277},{4,31727},{1,21166},{8,0},{1,23277},{5,31727},{1,23277},{8,0},{1,8452},{16,23278},{1,29617},{5,31727},{1,23277},{8,0},{1,23276},{5,31727},{1,23276},{27,0},{1,23276},{5,31727},{1,23276},{21,0}}, .partsCount=27},
{.parts = new image_row_part_t[25]{{20,0},{1,23276},{5,31727},{1,23276},{30,0},{1,23277},{4,31727},{1,21166},{8,0},{1,23277},{5,31727},{1,23277},{25,0},{1,23277},{5,31727},{1,23277},{8,0},{1,23276},{5,31727},{1,23276},{27,0},{1,23276},{5,31727},{1,23276},{21,0}}, .partsCount=25},
{.parts = new image_row_part_t[29]{{20,0},{1,23276},{5,31727},{1,33875},{18,23276},{1,6372},{11,0},{1,23277},{4,31727},{1,21166},{8,0},{1,23277},{5,31727},{1,23277},{25,0},{1,23277},{5,31727},{1,23277},{8,0},{1,23276},{5,31727},{1,23276},{18,0},{1,6372},{8,23276},{1,33875},{5,31727},{1,23276},{21,0}}, .partsCount=29},
{.parts = new image_row_part_t[29]{{20,0},{1,23276},{24,31727},{1,23276},{9,0},{1,6372},{1,23277},{1,27536},{4,31727},{1,27536},{1,23277},{1,6372},{6,0},{1,23277},{5,31727},{1,23277},{25,0},{1,23277},{5,31727},{1,23277},{8,0},{1,23276},{5,31727},{1,23276},{18,0},{1,21166},{14,31727},{1,23276},{21,0}}, .partsCount=29},
{.parts = new image_row_part_t[27]{{20,0},{1,23276},{24,31727},{1,23276},{8,0},{1,6372},{1,27536},{8,31727},{1,27536},{1,6372},{5,0},{1,23277},{5,31727},{1,23277},{25,0},{1,23277},{5,31727},{1,23277},{8,0},{1,23276},{5,31727},{1,23276},{18,0},{1,21166},{14,31727},{1,23276},{21,0}}, .partsCount=27},
{.parts = new image_row_part_t[27]{{20,0},{1,23276},{24,31727},{1,23276},{7,0},{1,6372},{1,27504},{10,31727},{1,27536},{1,6372},{4,0},{1,23277},{5,31727},{1,23277},{25,0},{1,8452},{5,23277},{1,8452},{8,0},{1,6372},{5,23276},{1,6372},{18,0},{1,21166},{14,31727},{1,23276},{21,0}}, .partsCount=27},
{.parts = new image_row_part_t[19]{{20,0},{1,23276},{24,31727},{1,23276},{6,0},{1,6372},{1,31762},{12,31727},{1,29617},{1,6372},{3,0},{1,23277},{5,31727},{1,23277},{65,0},{1,21166},{14,31727},{1,23276},{21,0}}, .partsCount=19},
{.parts = new image_row_part_t[21]{{20,0},{1,23276},{24,31727},{1,23276},{6,0},{1,23276},{14,31727},{1,23276},{3,0},{1,23277},{5,31727},{1,23277},{53,0},{1,6372},{5,23276},{1,6372},{5,0},{1,21166},{14,31727},{1,23276},{21,0}}, .partsCount=21},
{.parts = new image_row_part_t[35]{{20,0},{1,23276},{5,31727},{1,33875},{18,23276},{1,6372},{6,0},{1,23276},{5,31727},{1,29649},{2,23276},{1,31762},{5,31727},{1,23277},{3,0},{1,8452},{5,23277},{1,8452},{43,0},{1,6372},{6,23276},{1,23277},{1,21166},{1,21167},{1,27536},{5,31727},{1,29584},{1,6372},{4,0},{1,6372},{8,23276},{1,33875},{5,31727},{1,23276},{21,0}}, .partsCount=35},
{.parts = new image_row_part_t[27]{{20,0},{1,23276},{5,31727},{1,23276},{25,0},{1,23276},{4,31727},{1,27536},{1,6372},{2,0},{1,6372},{1,27536},{4,31727},{1,23277},{45,0},{1,6372},{3,23276},{3,23277},{1,21198},{1,27536},{16,31727},{1,21198},{13,0},{1,23276},{5,31727},{1,23276},{21,0}}, .partsCount=27},
{.parts = new image_row_part_t[27]{{20,0},{1,23276},{5,31727},{1,23276},{25,0},{1,23276},{4,31727},{1,19119},{4,0},{1,21198},{4,31727},{1,23277},{36,0},{1,6372},{4,23276},{1,23277},{1,23245},{1,21198},{1,21166},{1,27536},{24,31727},{1,21166},{13,0},{1,23276},{5,31727},{1,23276},{21,0}}, .partsCount=27},
{.parts = new image_row_part_t[26]{{20,0},{1,23276},{5,31727},{1,23276},{25,0},{1,23276},{4,31727},{1,19119},{4,0},{1,21198},{4,31727},{1,23277},{27,0},{1,6372},{4,23276},{1,23277},{1,23245},{2,21166},{1,27536},{33,31727},{1,21166},{13,0},{1,23276},{5,31727},{1,23276},{21,0}}, .partsCount=26},
{.parts = new image_row_part_t[34]{{20,0},{1,23276},{5,31727},{1,33875},{11,23276},{1,6372},{9,0},{1,6372},{3,23276},{1,33875},{4,31727},{1,27536},{4,23276},{1,27537},{4,31727},{1,29649},{13,23276},{1,6372},{8,0},{1,6372},{1,23276},{1,23277},{1,21166},{1,19119},{1,29616},{42,31727},{1,21166},{4,0},{1,6372},{8,23276},{1,33875},{5,31727},{1,23276},{21,0}}, .partsCount=34},
{.parts = new image_row_part_t[28]{{20,0},{1,23276},{17,31727},{1,23276},{8,0},{1,6372},{1,27504},{32,31727},{1,27504},{1,6372},{6,0},{1,6372},{1,29584},{35,31727},{1,27536},{1,19119},{1,21166},{1,23245},{1,23277},{2,23276},{1,33875},{4,31727},{1,21166},{4,0},{1,21166},{14,31727},{1,23276},{21,0}}, .partsCount=28},
{.parts = new image_row_part_t[26]{{20,0},{1,23276},{17,31727},{1,23276},{8,0},{1,23276},{34,31727},{1,23276},{6,0},{1,23245},{27,31727},{1,27536},{2,21166},{1,23245},{1,23277},{4,23276},{1,6372},{6,0},{1,23276},{4,31727},{1,21166},{4,0},{1,21166},{14,31727},{1,23276},{21,0}}, .partsCount=26},
{.parts = new image_row_part_t[25]{{20,0},{1,23276},{17,31727},{1,23276},{8,0},{1,23276},{34,31727},{1,23276},{6,0},{1,21198},{19,31727},{1,27536},{1,21166},{3,23277},{3,23276},{1,6372},{15,0},{1,23276},{4,31727},{1,21166},{4,0},{1,21166},{14,31727},{1,23276},{21,0}}, .partsCount=25},
{.parts = new image_row_part_t[26]{{20,0},{1,23276},{17,31727},{1,23276},{8,0},{1,23276},{34,31727},{1,23276},{6,0},{1,21198},{11,31727},{1,27504},{1,23277},{1,23276},{1,23277},{4,23276},{1,6372},{23,0},{1,23276},{4,31727},{1,21166},{4,0},{1,21166},{14,31727},{1,23276},{21,0}}, .partsCount=26},
{.parts = new image_row_part_t[31]{{20,0},{1,23276},{5,31727},{1,27536},{11,21166},{1,6372},{8,0},{1,23276},{5,31727},{1,27536},{22,21166},{1,27536},{5,31727},{1,23276},{6,0},{1,21198},{4,31727},{1,29617},{6,23276},{1,6372},{31,0},{1,23276},{4,31727},{1,21166},{4,0},{1,12711},{8,21166},{1,27536},{5,31727},{1,23276},{21,0}}, .partsCount=31},
{.parts = new image_row_part_t[25]{{20,0},{1,23276},{5,31727},{1,23276},{20,0},{1,23276},{5,31727},{1,23276},{22,0},{1,23276},{5,31727},{1,23276},{6,0},{1,21198},{4,31727},{1,23277},{38,0},{1,23276},{4,31727},{1,21166},{13,0},{1,23276},{5,31727},{1,23276},{21,0}}, .partsCount=25},
{.parts = new image_row_part_t[25]{{20,0},{1,23276},{5,31727},{1,23276},{20,0},{1,23276},{5,31727},{1,23276},{22,0},{1,23276},{5,31727},{1,23276},{6,0},{1,21198},{4,31727},{1,23277},{38,0},{1,23276},{4,31727},{1,21166},{13,0},{1,23276},{5,31727},{1,23276},{21,0}}, .partsCount=25},
{.parts = new image_row_part_t[25]{{20,0},{1,23276},{5,31727},{1,23276},{20,0},{1,23276},{5,31727},{1,23276},{22,0},{1,23276},{5,31727},{1,23276},{6,0},{1,21198},{4,31727},{1,23277},{38,0},{1,23276},{4,31727},{1,21166},{13,0},{1,23276},{5,31727},{1,23276},{21,0}}, .partsCount=25},
{.parts = new image_row_part_t[25]{{20,0},{1,23276},{5,31727},{1,23276},{20,0},{1,23276},{5,31727},{1,23276},{22,0},{1,23276},{5,31727},{1,23276},{6,0},{1,21198},{4,31727},{1,23277},{38,0},{1,23276},{4,31727},{1,21166},{13,0},{1,23276},{5,31727},{1,23276},{21,0}}, .partsCount=25},
{.parts = new image_row_part_t[29]{{20,0},{1,23276},{5,31727},{1,27504},{13,21166},{1,10598},{6,0},{1,23276},{5,31727},{1,23276},{22,0},{1,23276},{5,31727},{1,23276},{6,0},{1,21198},{4,31727},{1,27504},{38,21166},{1,27504},{4,31727},{1,21166},{4,0},{1,12711},{8,21166},{1,27504},{5,31727},{1,23276},{21,0}}, .partsCount=29},
{.parts = new image_row_part_t[21]{{20,0},{1,23276},{19,31727},{1,23277},{6,0},{1,23276},{5,31727},{1,23276},{22,0},{1,23276},{5,31727},{1,23276},{6,0},{1,21198},{48,31727},{1,21166},{4,0},{1,21166},{14,31727},{1,23276},{21,0}}, .partsCount=21},
{.parts = new image_row_part_t[29]{{20,0},{1,23276},{19,31727},{1,23277},{6,0},{1,23276},{5,31727},{1,23276},{3,0},{1,6372},{4,23276},{1,6372},{4,0},{1,6372},{4,23276},{1,6372},{3,0},{1,23276},{5,31727},{1,23276},{6,0},{1,21198},{48,31727},{1,21166},{4,0},{1,21166},{14,31727},{1,23276},{21,0}}, .partsCount=29},
{.parts = new image_row_part_t[29]{{20,0},{1,23276},{19,31727},{1,23277},{6,0},{1,23276},{5,31727},{1,23276},{3,0},{1,23277},{4,31727},{1,21166},{4,0},{1,21166},{4,31727},{1,23276},{3,0},{1,23276},{5,31727},{1,23276},{6,0},{1,23245},{48,31727},{1,21166},{4,0},{1,21166},{14,31727},{1,23276},{21,0}}, .partsCount=29},
{.parts = new image_row_part_t[30]{{20,0},{1,23276},{19,31727},{1,23277},{6,0},{1,23276},{5,31727},{1,23276},{3,0},{1,23277},{4,31727},{1,21166},{4,0},{1,21166},{4,31727},{1,23276},{3,0},{1,23276},{5,31727},{1,23276},{6,0},{1,6372},{1,29616},{47,31727},{1,23276},{4,0},{1,21166},{14,31727},{1,23276},{21,0}}, .partsCount=30},
{.parts = new image_row_part_t[42]{{20,0},{1,23276},{5,31727},{1,31730},{13,23277},{1,8452},{6,0},{1,23276},{5,31727},{1,23276},{3,0},{1,23277},{4,31727},{1,21166},{4,0},{1,21166},{4,31727},{1,23276},{3,0},{1,23276},{5,31727},{1,23276},{7,0},{1,6372},{3,23277},{1,27536},{4,31727},{1,25390},{28,8484},{1,25390},{5,31727},{1,31730},{2,23277},{1,23276},{1,6372},{4,0},{1,8485},{8,23277},{1,31730},{5,31727},{1,23276},{21,0}}, .partsCount=42},
{.parts = new image_row_part_t[33]{{20,0},{1,23276},{5,31727},{1,23276},{20,0},{1,23276},{5,31727},{1,23276},{3,0},{1,23277},{4,31727},{1,21166},{4,0},{1,21166},{4,31727},{1,23276},{3,0},{1,23276},{5,31727},{1,23276},{11,0},{1,21166},{4,31727},{1,8484},{28,0},{1,8484},{5,31727},{1,23276},{17,0},{1,23276},{5,31727},{1,23276},{21,0}}, .partsCount=33},
{.parts = new image_row_part_t[33]{{20,0},{1,23276},{5,31727},{1,23276},{20,0},{1,23276},{5,31727},{1,23276},{3,0},{1,23277},{4,31727},{1,21166},{4,0},{1,21166},{4,31727},{1,23276},{3,0},{1,23276},{5,31727},{1,23276},{11,0},{1,21166},{4,31727},{1,8484},{28,0},{1,8484},{5,31727},{1,23276},{17,0},{1,23276},{5,31727},{1,23276},{21,0}}, .partsCount=33},
{.parts = new image_row_part_t[33]{{20,0},{1,23276},{5,31727},{1,23276},{20,0},{1,23276},{5,31727},{1,23276},{3,0},{1,23277},{4,31727},{1,21166},{4,0},{1,21166},{4,31727},{1,23276},{3,0},{1,23276},{5,31727},{1,23276},{11,0},{1,21166},{4,31727},{1,8484},{28,0},{1,8484},{5,31727},{1,23276},{17,0},{1,23276},{5,31727},{1,23276},{21,0}}, .partsCount=33},
{.parts = new image_row_part_t[45]{{20,0},{1,23276},{5,31727},{1,33875},{11,23276},{1,6372},{8,0},{1,23276},{5,31727},{1,23276},{3,0},{1,23277},{4,31727},{1,21166},{4,0},{1,21166},{4,31727},{1,23276},{3,0},{1,23276},{5,31727},{1,23276},{11,0},{1,21166},{4,31727},{1,8484},{6,0},{1,4258},{4,21162},{1,4258},{4,0},{1,6339},{4,19050},{1,6339},{6,0},{1,8484},{5,31727},{1,23276},{5,0},{1,6372},{11,23276},{1,33875},{5,31727},{1,23276},{21,0}}, .partsCount=45},
{.parts = new image_row_part_t[41]{{20,0},{1,23276},{17,31727},{1,23276},{8,0},{1,23276},{5,31727},{1,23276},{3,0},{1,23277},{4,31727},{1,21166},{4,0},{1,21166},{4,31727},{1,23276},{3,0},{1,23276},{5,31727},{1,23276},{11,0},{1,21166},{4,31727},{1,8484},{6,0},{1,21162},{4,31727},{1,16970},{4,0},{1,16970},{4,31727},{1,19050},{6,0},{1,8484},{5,31727},{1,23276},{5,0},{1,23276},{17,31727},{1,23276},{21,0}}, .partsCount=41},
{.parts = new image_row_part_t[41]{{20,0},{1,23276},{17,31727},{1,23276},{8,0},{1,23276},{5,31727},{1,23276},{3,0},{1,23277},{4,31727},{1,21166},{4,0},{1,21166},{4,31727},{1,23276},{3,0},{1,23276},{5,31727},{1,23276},{11,0},{1,21166},{4,31727},{1,8484},{6,0},{1,21162},{4,31727},{1,16970},{4,0},{1,16970},{4,31727},{1,19050},{6,0},{1,8484},{5,31727},{1,23276},{5,0},{1,23276},{17,31727},{1,23276},{21,0}}, .partsCount=41},
{.parts = new image_row_part_t[41]{{20,0},{1,23276},{17,31727},{1,23276},{8,0},{1,23276},{5,31727},{1,23276},{3,0},{1,23277},{4,31727},{1,21166},{4,0},{1,21166},{4,31727},{1,23276},{3,0},{1,23276},{5,31727},{1,23276},{11,0},{1,21166},{4,31727},{1,8484},{6,0},{1,21162},{4,31727},{1,16970},{4,0},{1,16970},{4,31727},{1,19050},{6,0},{1,8484},{5,31727},{1,23276},{5,0},{1,23276},{17,31727},{1,23276},{21,0}}, .partsCount=41},
{.parts = new image_row_part_t[41]{{20,0},{1,23276},{17,31727},{1,23276},{8,0},{1,23276},{5,31727},{1,23276},{3,0},{1,23277},{4,31727},{1,21166},{4,0},{1,21166},{4,31727},{1,23276},{3,0},{1,23276},{5,31727},{1,23276},{11,0},{1,21166},{4,31727},{1,8484},{6,0},{1,21162},{4,31727},{1,16970},{4,0},{1,16970},{4,31727},{1,19050},{6,0},{1,8484},{5,31727},{1,23276},{5,0},{1,23276},{17,31727},{1,23276},{21,0}}, .partsCount=41},
{.parts = new image_row_part_t[41]{{20,0},{1,23276},{17,31727},{1,23276},{8,0},{1,23276},{5,31727},{1,23276},{3,0},{1,23277},{4,31727},{1,21166},{4,0},{1,21166},{4,31727},{1,23276},{3,0},{1,23276},{5,31727},{1,23276},{11,0},{1,21166},{4,31727},{1,8484},{6,0},{1,21162},{4,31727},{1,16970},{4,0},{1,16970},{4,31727},{1,19050},{6,0},{1,8484},{5,31727},{1,23276},{5,0},{1,23276},{17,31727},{1,23276},{21,0}}, .partsCount=41},
{.parts = new image_row_part_t[45]{{20,0},{1,23276},{5,31727},{1,33875},{11,23276},{1,6372},{8,0},{1,23276},{5,31727},{1,23276},{3,0},{1,23277},{4,31727},{1,21166},{4,0},{1,21166},{4,31727},{1,23276},{3,0},{1,23276},{5,31727},{1,23276},{11,0},{1,21166},{4,31727},{1,8484},{6,0},{1,4258},{4,21162},{1,4258},{4,0},{1,6339},{4,19050},{1,6339},{6,0},{1,8484},{5,31727},{1,23276},{5,0},{1,6372},{11,23276},{1,33875},{5,31727},{1,23276},{21,0}}, .partsCount=45},
{.parts = new image_row_part_t[33]{{20,0},{1,23276},{5,31727},{1,23276},{20,0},{1,23276},{5,31727},{1,23276},{3,0},{1,23277},{4,31727},{1,21166},{4,0},{1,21166},{4,31727},{1,23276},{3,0},{1,23276},{5,31727},{1,23276},{11,0},{1,21166},{4,31727},{1,8484},{28,0},{1,8484},{5,31727},{1,23276},{17,0},{1,23276},{5,31727},{1,23276},{21,0}}, .partsCount=33},
{.parts = new image_row_part_t[33]{{20,0},{1,23276},{5,31727},{1,23276},{20,0},{1,23276},{5,31727},{1,23276},{3,0},{1,23277},{4,31727},{1,21166},{4,0},{1,21166},{4,31727},{1,23276},{3,0},{1,23276},{5,31727},{1,23276},{11,0},{1,21166},{4,31727},{1,8484},{28,0},{1,8484},{5,31727},{1,23276},{17,0},{1,23276},{5,31727},{1,23276},{21,0}}, .partsCount=33},
{.parts = new image_row_part_t[33]{{20,0},{1,23276},{5,31727},{1,23276},{20,0},{1,23276},{5,31727},{1,23276},{3,0},{1,23277},{4,31727},{1,21166},{4,0},{1,21166},{4,31727},{1,23276},{3,0},{1,23276},{5,31727},{1,23276},{11,0},{1,21166},{4,31727},{1,8484},{28,0},{1,8484},{5,31727},{1,23276},{17,0},{1,23276},{5,31727},{1,23276},{21,0}}, .partsCount=33},
{.parts = new image_row_part_t[45]{{20,0},{1,23276},{5,31727},{1,33875},{11,23276},{1,6372},{8,0},{1,23276},{5,31727},{1,23276},{3,0},{1,23277},{4,31727},{1,21166},{4,0},{1,21166},{4,31727},{1,23276},{3,0},{1,23276},{5,31727},{1,23276},{11,0},{1,21166},{4,31727},{1,8484},{6,0},{1,4258},{4,21162},{1,4258},{4,0},{1,4258},{4,21162},{1,4258},{6,0},{1,8484},{5,31727},{1,23276},{5,0},{1,6372},{11,23276},{1,33875},{5,31727},{1,23276},{21,0}}, .partsCount=45},
{.parts = new image_row_part_t[41]{{20,0},{1,23276},{17,31727},{1,23276},{8,0},{1,23276},{5,31727},{1,23276},{3,0},{1,23277},{4,31727},{1,21166},{4,0},{1,21166},{4,31727},{1,23276},{3,0},{1,23276},{5,31727},{1,23276},{11,0},{1,21166},{4,31727},{1,8484},{6,0},{1,21162},{4,31727},{1,16970},{4,0},{1,19018},{4,31727},{1,21130},{6,0},{1,8484},{5,31727},{1,23276},{5,0},{1,23276},{17,31727},{1,23276},{21,0}}, .partsCount=41},
{.parts = new image_row_part_t[41]{{20,0},{1,23276},{17,31727},{1,23276},{8,0},{1,23276},{5,31727},{1,23276},{3,0},{1,23277},{4,31727},{1,21166},{4,0},{1,21166},{4,31727},{1,23276},{3,0},{1,23276},{5,31727},{1,23276},{11,0},{1,21166},{4,31727},{1,8484},{6,0},{1,21162},{4,31727},{1,16970},{4,0},{1,19018},{4,31727},{1,21130},{6,0},{1,8484},{5,31727},{1,23276},{5,0},{1,23276},{17,31727},{1,23276},{21,0}}, .partsCount=41},
{.parts = new image_row_part_t[41]{{20,0},{1,23276},{17,31727},{1,23276},{8,0},{1,23276},{5,31727},{1,23276},{3,0},{1,23277},{4,31727},{1,21166},{4,0},{1,21166},{4,31727},{1,23276},{3,0},{1,23276},{5,31727},{1,23276},{11,0},{1,21166},{4,31727},{1,8484},{6,0},{1,21162},{4,31727},{1,16970},{4,0},{1,19018},{4,31727},{1,21130},{6,0},{1,8484},{5,31727},{1,23276},{5,0},{1,23276},{17,31727},{1,23276},{21,0}}, .partsCount=41},
{.parts = new image_row_part_t[41]{{20,0},{1,23276},{17,31727},{1,23276},{8,0},{1,23276},{5,31727},{1,23276},{3,0},{1,23277},{4,31727},{1,21166},{4,0},{1,21166},{4,31727},{1,23276},{3,0},{1,23276},{5,31727},{1,23276},{11,0},{1,21166},{4,31727},{1,8484},{6,0},{1,21162},{4,31727},{1,16970},{4,0},{1,19018},{4,31727},{1,21130},{6,0},{1,8484},{5,31727},{1,23276},{5,0},{1,23276},{17,31727},{1,23276},{21,0}}, .partsCount=41},
{.parts = new image_row_part_t[41]{{20,0},{1,23276},{17,31727},{1,23276},{8,0},{1,23276},{5,31727},{1,23276},{3,0},{1,23277},{4,31727},{1,21166},{4,0},{1,21166},{4,31727},{1,23276},{3,0},{1,23276},{5,31727},{1,23276},{11,0},{1,21166},{4,31727},{1,8484},{6,0},{1,21162},{4,31727},{1,16970},{4,0},{1,19018},{4,31727},{1,21130},{6,0},{1,8484},{5,31727},{1,23276},{5,0},{1,23276},{17,31727},{1,23276},{21,0}}, .partsCount=41},
{.parts = new image_row_part_t[45]{{20,0},{1,23276},{5,31727},{1,33875},{11,23276},{1,6372},{8,0},{1,23276},{5,31727},{1,23276},{3,0},{1,23277},{4,31727},{1,21166},{4,0},{1,21166},{4,31727},{1,23276},{3,0},{1,23276},{5,31727},{1,23276},{11,0},{1,21166},{4,31727},{1,8484},{6,0},{1,4258},{4,21162},{1,4258},{4,0},{1,4258},{4,21162},{1,4258},{6,0},{1,8484},{5,31727},{1,23276},{5,0},{1,6372},{11,23276},{1,33875},{5,31727},{1,23276},{21,0}}, .partsCount=45},
{.parts = new image_row_part_t[33]{{20,0},{1,23276},{5,31727},{1,23276},{20,0},{1,23276},{5,31727},{1,23276},{3,0},{1,23277},{4,31727},{1,21166},{4,0},{1,21166},{4,31727},{1,23276},{3,0},{1,23276},{5,31727},{1,23276},{11,0},{1,21166},{4,31727},{1,8484},{28,0},{1,8484},{5,31727},{1,23276},{17,0},{1,23276},{5,31727},{1,23276},{21,0}}, .partsCount=33},
{.parts = new image_row_part_t[33]{{20,0},{1,23276},{5,31727},{1,23276},{20,0},{1,23276},{5,31727},{1,23276},{3,0},{1,23277},{4,31727},{1,21166},{4,0},{1,21166},{4,31727},{1,23276},{3,0},{1,23276},{5,31727},{1,23276},{11,0},{1,21166},{4,31727},{1,8484},{28,0},{1,8484},{5,31727},{1,23276},{17,0},{1,23276},{5,31727},{1,23276},{21,0}}, .partsCount=33},
{.parts = new image_row_part_t[33]{{20,0},{1,23276},{5,31727},{1,23276},{20,0},{1,23276},{5,31727},{1,23276},{3,0},{1,23277},{4,31727},{1,21166},{4,0},{1,21166},{4,31727},{1,23276},{3,0},{1,23276},{5,31727},{1,23276},{11,0},{1,21166},{4,31727},{1,8484},{28,0},{1,8484},{5,31727},{1,23276},{17,0},{1,23276},{5,31727},{1,23276},{21,0}}, .partsCount=33},
{.parts = new image_row_part_t[45]{{20,0},{1,23276},{5,31727},{1,33875},{13,23276},{1,6372},{6,0},{1,23276},{5,31727},{1,23276},{3,0},{1,23277},{4,31727},{1,21166},{4,0},{1,21166},{4,31727},{1,23276},{3,0},{1,23276},{5,31727},{1,23276},{11,0},{1,21166},{4,31727},{1,8484},{6,0},{1,4258},{4,21162},{1,4258},{4,0},{1,4258},{4,21162},{1,4258},{6,0},{1,8484},{5,31727},{1,23276},{5,0},{1,6372},{11,23276},{1,33875},{5,31727},{1,23276},{21,0}}, .partsCount=45},
{.parts = new image_row_part_t[41]{{20,0},{1,23276},{19,31727},{1,23277},{6,0},{1,23276},{5,31727},{1,23276},{3,0},{1,23277},{4,31727},{1,21166},{4,0},{1,21166},{4,31727},{1,23276},{3,0},{1,23276},{5,31727},{1,23276},{11,0},{1,21166},{4,31727},{1,8484},{6,0},{1,21162},{4,31727},{1,16970},{4,0},{1,19018},{4,31727},{1,21130},{6,0},{1,8484},{5,31727},{1,23276},{5,0},{1,23276},{17,31727},{1,23276},{21,0}}, .partsCount=41},
{.parts = new image_row_part_t[41]{{20,0},{1,23276},{19,31727},{1,23277},{6,0},{1,23276},{5,31727},{1,23276},{3,0},{1,23277},{4,31727},{1,21166},{4,0},{1,21166},{4,31727},{1,23276},{3,0},{1,23276},{5,31727},{1,23276},{11,0},{1,21166},{4,31727},{1,8484},{6,0},{1,21162},{4,31727},{1,16970},{4,0},{1,19018},{4,31727},{1,21130},{6,0},{1,8484},{5,31727},{1,23276},{5,0},{1,23276},{17,31727},{1,23276},{21,0}}, .partsCount=41},
{.parts = new image_row_part_t[41]{{20,0},{1,23276},{19,31727},{1,23277},{6,0},{1,23276},{5,31727},{1,23276},{3,0},{1,23277},{4,31727},{1,21166},{4,0},{1,21166},{4,31727},{1,23276},{3,0},{1,23276},{5,31727},{1,23276},{11,0},{1,21166},{4,31727},{1,8484},{6,0},{1,21162},{4,31727},{1,16970},{4,0},{1,19018},{4,31727},{1,21130},{6,0},{1,8484},{5,31727},{1,23276},{5,0},{1,23276},{17,31727},{1,23276},{21,0}}, .partsCount=41},
{.parts = new image_row_part_t[41]{{20,0},{1,23276},{19,31727},{1,23277},{6,0},{1,23276},{5,31727},{1,23276},{3,0},{1,23277},{4,31727},{1,21166},{4,0},{1,21166},{4,31727},{1,23276},{3,0},{1,23276},{5,31727},{1,23276},{11,0},{1,21166},{4,31727},{1,8484},{6,0},{1,21162},{4,31727},{1,16970},{4,0},{1,19018},{4,31727},{1,21130},{6,0},{1,8484},{5,31727},{1,23276},{5,0},{1,23276},{17,31727},{1,23276},{21,0}}, .partsCount=41},
{.parts = new image_row_part_t[41]{{20,0},{1,23276},{19,31727},{1,23277},{6,0},{1,23276},{5,31727},{1,23276},{3,0},{1,23277},{4,31727},{1,21166},{4,0},{1,21166},{4,31727},{1,23276},{3,0},{1,23276},{5,31727},{1,23276},{11,0},{1,21166},{4,31727},{1,8484},{6,0},{1,21162},{4,31727},{1,16970},{4,0},{1,19018},{4,31727},{1,21130},{6,0},{1,8484},{5,31727},{1,23276},{5,0},{1,23276},{17,31727},{1,23276},{21,0}}, .partsCount=41},
{.parts = new image_row_part_t[45]{{20,0},{1,23276},{5,31727},{1,33875},{13,23276},{1,6372},{6,0},{1,23276},{5,31727},{1,23276},{3,0},{1,6372},{4,23276},{1,6372},{4,0},{1,6372},{4,23276},{1,6372},{3,0},{1,23276},{5,31727},{1,23276},{11,0},{1,21166},{4,31727},{1,8484},{6,0},{1,4258},{4,21162},{1,4258},{4,0},{1,4258},{4,21162},{1,4258},{6,0},{1,8484},{5,31727},{1,23276},{5,0},{1,6372},{11,23276},{1,33875},{5,31727},{1,23276},{21,0}}, .partsCount=45},
{.parts = new image_row_part_t[25]{{20,0},{1,23276},{5,31727},{1,23276},{20,0},{1,23276},{5,31727},{1,23276},{22,0},{1,23276},{5,31727},{1,23276},{11,0},{1,21166},{4,31727},{1,8484},{28,0},{1,8484},{5,31727},{1,23276},{17,0},{1,23276},{5,31727},{1,23276},{21,0}}, .partsCount=25},
{.parts = new image_row_part_t[25]{{20,0},{1,23276},{5,31727},{1,23276},{20,0},{1,23276},{5,31727},{1,23276},{22,0},{1,23276},{5,31727},{1,23276},{11,0},{1,21166},{4,31727},{1,8484},{28,0},{1,8484},{5,31727},{1,23276},{17,0},{1,23276},{5,31727},{1,23276},{21,0}}, .partsCount=25},
{.parts = new image_row_part_t[25]{{20,0},{1,23276},{5,31727},{1,23276},{20,0},{1,23276},{5,31727},{1,23276},{22,0},{1,23276},{5,31727},{1,23276},{11,0},{1,21166},{4,31727},{1,8484},{28,0},{1,8484},{5,31727},{1,23276},{17,0},{1,23276},{5,31727},{1,23276},{21,0}}, .partsCount=25},
{.parts = new image_row_part_t[25]{{20,0},{1,23276},{5,31727},{1,23276},{20,0},{1,23276},{5,31727},{1,23276},{22,0},{1,23276},{5,31727},{1,23276},{11,0},{1,21166},{4,31727},{1,8484},{28,0},{1,8484},{5,31727},{1,23276},{17,0},{1,23276},{5,31727},{1,23276},{21,0}}, .partsCount=25},
{.parts = new image_row_part_t[25]{{20,0},{1,23276},{5,31727},{1,23276},{20,0},{1,23276},{5,31727},{1,23276},{22,0},{1,23276},{5,31727},{1,23276},{11,0},{1,21166},{4,31727},{1,8484},{28,0},{1,8484},{5,31727},{1,23276},{17,0},{1,23276},{5,31727},{1,23276},{21,0}}, .partsCount=25},
{.parts = new image_row_part_t[29]{{15,0},{1,6372},{4,23276},{1,33875},{5,31727},{1,33875},{20,23276},{1,33875},{5,31727},{1,33875},{22,23276},{1,33875},{5,31727},{1,33875},{11,23276},{1,27536},{4,31727},{1,27536},{28,8484},{1,27536},{5,31727},{1,33875},{17,23276},{1,33875},{5,31727},{1,33875},{4,23276},{1,6372},{16,0}}, .partsCount=29},
{.parts = new image_row_part_t[5]{{15,0},{1,23276},{147,31727},{1,23276},{16,0}}, .partsCount=5},
{.parts = new image_row_part_t[5]{{15,0},{1,23276},{147,31727},{1,23276},{16,0}}, .partsCount=5},
{.parts = new image_row_part_t[5]{{15,0},{1,23276},{147,31727},{1,23276},{16,0}}, .partsCount=5},
{.parts = new image_row_part_t[5]{{15,0},{1,23276},{147,31727},{1,23276},{16,0}}, .partsCount=5},
{.parts = new image_row_part_t[5]{{15,0},{1,23276},{147,31727},{1,23276},{16,0}}, .partsCount=5},
{.parts = new image_row_part_t[5]{{15,0},{1,6372},{147,23276},{1,6372},{16,0}}, .partsCount=5},
{.parts = new image_row_part_t[1]{{180,0}}, .partsCount=1},
{.parts = new image_row_part_t[1]{{180,0}}, .partsCount=1},
{.parts = new image_row_part_t[1]{{180,0}}, .partsCount=1},
{.parts = new image_row_part_t[1]{{180,0}}, .partsCount=1},
{.parts = new image_row_part_t[1]{{180,0}}, .partsCount=1},
{.parts = new image_row_part_t[1]{{180,0}}, .partsCount=1},
{.parts = new image_row_part_t[1]{{180,0}}, .partsCount=1},
{.parts = new image_row_part_t[1]{{180,0}}, .partsCount=1},
{.parts = new image_row_part_t[1]{{180,0}}, .partsCount=1},
{.parts = new image_row_part_t[1]{{180,0}}, .partsCount=1},
{.parts = new image_row_part_t[1]{{180,0}}, .partsCount=1},
{.parts = new image_row_part_t[1]{{180,0}}, .partsCount=1},
{.parts = new image_row_part_t[1]{{180,0}}, .partsCount=1},
{.parts = new image_row_part_t[1]{{180,0}}, .partsCount=1},
{.parts = new image_row_part_t[1]{{180,0}}, .partsCount=1},
{.parts = new image_row_part_t[1]{{180,0}}, .partsCount=1},
{.parts = new image_row_part_t[1]{{180,0}}, .partsCount=1}
  }
};
