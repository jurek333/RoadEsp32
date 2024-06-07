#pragma once
#include <cstdint>
#include <math.h>
#include "data/routes/direction.hpp"

using namespace RoadEsp32::Data::Routes;

template <typename T>
static bool AreEqual(T f1, T f2)
{
    return (std::fabs(f1 - f2) <= std::numeric_limits<T>::epsilon() * std::fmax(std::fabs(f1), std::fabs(f2)));
}

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
        double longitude;
        double longitudeDegree;

        const double Pi_180 = M_PI/180.0;

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
            longitude = lon.longitude;
            longitudeDegree = lon.longitudeDegree;
        }

        double CalculateKilometerDistanceTo(const GpsCoordinates &destination)
        {
            auto distance = std::acos(
                                std::sin(destination.Lat * Pi_180) * std::sin(latitude * Pi_180) 
                                + std::cos(destination.Lat * Pi_180) * std::cos(latitude * Pi_180) * std::cos((destination.Lon - longitude) * Pi_180)
                            ) * 6371;
            return distance;
        }
        double CalculateBearingAngle(const GpsCoordinates &destination)
        {
            auto x = std::cos(destination.Lat * Pi_180) * std::sin((destination.Lon - longitude) * Pi_180);
            auto y = std::cos(latitude * Pi_180) * std::sin(destination.Lat * Pi_180) 
            - std::sin(latitude * Pi_180) * std::cos(destination.Lat * Pi_180) * std::cos((destination.Lon - longitude) * Pi_180);
            return std::atan2(x, y);
        }
    };

    struct GpsPointing
    {
        GpsCoordinates Destination;

        double DistanceInKm;
        double DirectionAngle;
        double DirectionAngleDegrees;

        bool AreCalculationsDone;
        bool IsDestinationPresent;

        void SetDistanceAndAngle(double distanceInKm, double directionAngle)
        {
            DistanceInKm = distanceInKm;
            DirectionAngle = directionAngle;
            DirectionAngleDegrees = directionAngle * 180.0 / M_PI;

            AreCalculationsDone = true;
        }

        void SetDestination(const GpsCoordinates &destination)
        {
            Destination = destination;
            Clean();

            if (AreEqual(Destination.Lat, 0.0) && AreEqual(Destination.Lon, 0.0))
            {
                IsDestinationPresent = false;
            }
            else
            {
                IsDestinationPresent = true;
            }
        }

    private:
        void Clean()
        {
            DirectionAngle = 0.0;
            DirectionAngleDegrees = 0.0;
            DistanceInKm = 0.0;
            AreCalculationsDone = false;
        }
    };

    struct GpsData
    {
        GpsPointing GpsDirections;
        GpsPosition Coordinates;
        GpsTime DateTime;
        double Speed;
        double Course;
        double Altitude;
        uint8_t Satelites;
    };
}