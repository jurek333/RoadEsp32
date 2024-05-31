#pragma once
#include <cstdint>

namespace RoadEsp32::Data
{
    struct GpsTime
    {
        uint16_t year{2024};
        uint8_t month{05};
        uint8_t date{01};
        uint8_t hour{0};
        uint8_t minute{0};
        uint8_t second{0};
    };

    struct GpsPosition
    {
        uint8_t lonDDD;
        uint8_t lonMM;
        uint32_t lonMMMMM;
        char lonDirection;
        uint8_t latDD;
        uint8_t latMM;
        uint32_t latMMMMM;
        char latDirection;
        double latitude;
        double latitudeDegree;
        double lonitude;
        double lonitudeDegree;

        void UpdateLatitude(GpsPosition &lat)
        {
            latDD = lat.latDD;
            latMM = lat.latMM;
            latMMMMM = lat.latMMMMM;
            latDirection = lat.latDirection;
            latitude = lat.latitude;
            latitudeDegree = lat.latitudeDegree;
        }
        void UpdateLongitude(GpsPosition &lon)
        {
            lonDDD = lon.lonDDD;
            lonMM = lon.lonMM;
            lonMMMMM = lon.lonMMMMM;
            lonDirection = lon.lonDirection;
            lonitude = lon.lonitude;
            lonitudeDegree = lon.lonitudeDegree;
        }
    };

    struct GpsData
    {
        GpsPosition Coordinates;
        GpsTime DateTime;
        double Speed;
        double Course;
        double Altitude;
        uint8_t Satelites;
    };
}