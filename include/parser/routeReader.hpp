#pragma once

#include <map>
#include "modules/disk.hpp"
#include "parser/jsonParser.hpp"
#include "data/routes/direction.hpp"

using namespace RouteEsp32::modules;
using namespace RouteEsp32::data::routes;

namespace RouteEsp32::parser
{
    class RouteReader
    {
    private:
        JsonParser *parser;

        static std::map<std::string, PointType> const PointTypesMap;
        static std::map<std::string, DirectionType> const DirectionTypesMap;
        static std::map<std::string, Directions> const DirectionsMap;

        template <typename T>
        bool Find(const std::string &val, const std::map<std::string, T> &dict, T &foundObject)
        {
            auto res = dict.find(val);
            if (res == dict.end())
                return false;
            foundObject = res->second;
            return true;
        }

        void ReadPoint(Direction &resultDirection)
        {
            static const std::string typeProperty("type");
            static const std::string positionProperty("position");

            Point point;
            std::string value;

            parser->GoToNext(JsonParserStates::Object);
            auto state = parser->CurrentElement();
            for (int readCount = 0; state != JsonParserStates::Array && readCount < 2; ++readCount)
            {
                auto property = parser->ReadPropertyName();
                if (property == typeProperty)
                {
                    value = parser->ReadStringValue();
                    if (!Find(value, PointTypesMap, point.Type))
                        point.Type = PointType::unknow;
                }
                else if (property == positionProperty)
                {
                    point.Position = static_cast<uint16_t>(parser->ReadIntValue());
                }
                if (parser->StillInProperty())
                    parser->JumpOverCurrentState();

                state = parser->CurrentElement();
            }
            resultDirection.Points.push_back(point);
        }

        static std::map<std::string, bool (RouteReader::*)(Direction &)> const PropertiesOfDirection;

        bool ReadType(Direction &resultDirection)
        {
            auto value = parser->ReadStringValue();
            if (!Find(value, DirectionTypesMap, resultDirection.Type))
            {
                parser->JumpOverCurrentState();
                return false;
            }
            return true;
        }
        bool ReadDir(Direction &resultDirection)
        {
            auto value = parser->ReadStringValue();
            if (!Find(value, DirectionsMap, resultDirection.Dir))
            {
                parser->JumpOverCurrentState(); // property val
                return false;
            }
            return true;
        }
        bool ReadExit(Direction &resultDirection)
        {
            resultDirection.Exit = static_cast<uint8_t>(parser->ReadIntValue());
            return true;
        }
        bool ReadName(Direction &resultDirection)
        {
            resultDirection.Name = parser->ReadStringValue();
            return true;
        }
        bool ReadRoadName(Direction &resultDirection)
        {
            resultDirection.RoadName = parser->ReadStringValue();
            return true;
        }
        bool ReadDistance(Direction &resultDirection)
        {
            resultDirection.Distance = parser->ReadFloatValue();
            return true;
        }
        bool ReadDirSign(Direction &resultDirection)
        {
            resultDirection.DirSign = parser->ReadStringValue();
            return true;
        }
        bool ReadPoints(Direction &resultDirection)
        {
            if (parser->GoToNext(JsonParserStates::Array))
            {
                auto pointsState = parser->CurrentElement();
                while (pointsState == JsonParserStates::Array)
                {
                    ReadPoint(resultDirection);
                    pointsState = parser->Probe();
                }
            }
            return true;
        }
        bool ReadGps(Direction &resultDirection)
        {
            std::string property;
            for (int i = 0; i < 2; ++i)
            {
                property = parser->ReadPropertyName();
                if (property == std::string("lat"))
                {
                    resultDirection.Gps.Lat = parser->ReadDoubleValue();
                }
                else
                {
                    resultDirection.Gps.Lon = parser->ReadDoubleValue();
                }
            }
            return true;
        }

    public:
        RouteReader(Disk *sd, SdCardFileHandler routeFileHnd)
        {
            parser = new JsonParser(sd, routeFileHnd);
        }

        bool StartReading()
        {
            if (!parser->StartReadingObject("/road/directions"))
                return false;
            return parser->GoToNext(JsonParserStates::Array);
        }
        bool ReadNextDirection(Direction &resultDirection)
        {
            std::string value;

            if (!parser->GoToNext(JsonParserStates::Object))
                return false;

            auto state = parser->CurrentElement();
            for (int readCount = 0; state != JsonParserStates::Array && readCount < 9; ++readCount)
            {
                auto property = parser->ReadPropertyName();
                auto fun = PropertiesOfDirection.find(property);
                if (fun == PropertiesOfDirection.end())
                {
                    parser->JumpOverCurrentState();
                    continue;
                }
                auto method = fun->second;
                if (!(this->*method)(resultDirection))
                {
                    return false;
                }
                if (parser->StillInProperty())
                    parser->JumpOverCurrentState();
                state = parser->CurrentElement();
            }
            return true;
        }
    };

    const std::map<std::string, bool (RouteReader::*)(Direction &)> RouteReader::PropertiesOfDirection = {
        {"type", &RouteReader::ReadType},
        {"exit", &RouteReader::ReadExit},
        {"dir", &RouteReader::ReadDir},
        {"name", &RouteReader::ReadName},
        {"roadName", &RouteReader::ReadRoadName},
        {"distance", &RouteReader::ReadDistance},
        {"dirSign", &RouteReader::ReadDirSign},
        {"points", &RouteReader::ReadPoints},
        {"gps", &RouteReader::ReadGps}};

    const std::map<std::string, PointType>
        RouteReader::PointTypesMap = {
            {"church", PointType::church},
            {"cross", PointType::cross},
            {"shrine", PointType::shrine}};

    const std::map<std::string, DirectionType> RouteReader::DirectionTypesMap = {
        {"crossing", DirectionType::crossing},
        {"round", DirectionType::round},
        {"right_join", DirectionType::right_join},
        {"left_join", DirectionType::left_join},
        {"t_join", DirectionType::t_join},
        {"town", DirectionType::town},
        {"bridge", DirectionType::bridge},
        {"end", DirectionType::end},
    };
    const std::map<std::string, Directions> RouteReader::DirectionsMap = {
        {"ahead", Directions::ahead},
        {"left", Directions::left},
        {"right", Directions::right},
        {"turnBack", Directions::turnBack}};
}
