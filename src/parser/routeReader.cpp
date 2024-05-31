#include "parser/routeReader.hpp"

using namespace RoadEsp32::Parser;

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