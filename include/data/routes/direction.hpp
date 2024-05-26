#pragma once

#include <string>
#include <vector>

namespace RouteEsp32::data::routes
{

    enum DirectionType
    {
        crossing,
        round,
        right_join,
        left_join,
        t_join,
        town,
        bridge,
        end
    };
    enum Directions
    {
        left,
        right,
        ahead,
        turnBack
    };
    enum PointType
    {
        unknow,
        church,
        cross,
        shrine
    };
    struct Point
    {
        PointType Type;
        uint16_t Position;
    };
    struct GpsCoordinates
    {
        double Lat;
        double Lon;
    };

    struct Direction
    {
        DirectionType Type;
        uint8_t Exit;
        Directions Dir;
        std::string Name;
        std::string RoadName;
        float Distance;
        std::string DirSign;
        std::vector<Point> Points;
        GpsCoordinates Gps;
    };
}