#include "common/system.hpp"
#include "sensors.hpp"
#include <esp_log.h>
#include <math.h>

using namespace RoadEsp32;
using namespace RoadEsp32::Data;
using namespace RoadEsp32::Modules;

Sensors::Sensors(SharedData *sharedBuffer)
{
    _buffer = sharedBuffer;
    sensorMethodInd = 0;
    _buffer->GpsSharedData.DateTime.hour = 24;
}

Sensors::~Sensors()
{
    _i2c.RemoveDevices();
    _i2c.CloseBus();
}

void Sensors::Init()
{
    _i2c.Init();
    if (_kbrd.Init(&_i2c) != ESP_OK)
        ESP_LOGE("sensors", "Keyboard init failed; key input disabled");
    _gps.Init(&_i2c);
    _power.Init();
}

void Sensors::ReadTimeInLoop()
{
    auto time = _gps.GetUTC();
    bool rolledOver;
    {
        SharedData::GpsLock lock(_buffer);
        if (!lock)
            return;
        auto &dt = _buffer->GpsSharedData.DateTime;
        rolledOver = dt.hour > time.hour;
        dt.hour = time.hour;
        dt.minute = time.minute;
        dt.second = time.second;
    }
    if (!rolledOver)
        return;
    auto day = _gps.GetDate();
    SharedData::GpsLock lock(_buffer);
    if (!lock)
        return;
    auto &dt = _buffer->GpsSharedData.DateTime;
    dt.year = day.year;
    dt.month = day.month;
    dt.date = day.date;
}

void Sensors::ReadMovementInLoop()
{
    auto s = _gps.getSpeed();
    auto dir = _gps.GetCourse();
    SharedData::GpsLock lock(_buffer);
    if (!lock)
        return;
    _buffer->GpsSharedData.Speed = s;
    _buffer->GpsSharedData.Course = dir;
}

void Sensors::ReadPositionInLoop()
{
    auto lon = _gps.GetLon();
    auto lat = _gps.GetLat();
    auto a = _gps.GetAlt();

    SharedData::GpsLock lock(_buffer);
    if (!lock)
        return;
    auto &gps = _buffer->GpsSharedData;
    gps.Altitude = a;
    gps.Coordinates.UpdateLatitude(lat);
    gps.Coordinates.UpdateLongitude(lon);

    if (!gps.GpsDirections.IsDestinationPresent)
        return;

    auto kmDist = gps.Coordinates.CalculateKilometerDistanceTo(gps.GpsDirections.Destination);
    auto bearingAngle = gps.Coordinates.CalculateBearingAngle(gps.GpsDirections.Destination);
    gps.GpsDirections.SetDistanceAndAngle(kmDist, bearingAngle);
}

void Sensors::ReadGpsStatusInLoop()
{
    auto n = _gps.GetAmountOfSatelites();
    SharedData::GpsLock lock(_buffer);
    if (!lock)
        return;
    _buffer->GpsSharedData.Satelites = n;
}

void Sensors::ReadPowerLvl()
{
    constexpr int max = 2350;
    constexpr int min = 1750;
    auto val = _power.ReadRaw();
    // Single int32 store: atomic on ESP32, so no lock needed.
    _buffer->batteryLvl = std::max(0, ((val-min)*100)/(max-min));
}

void Sensors::Loop()
{
    (this->*gpsMethods[sensorMethodInd])();
    ++sensorMethodInd;
    sensorMethodInd %= Sensors::subMethodsCount;
    ReadPowerLvl();

    auto keys = _kbrd.ReadKey();
    _buffer->SharedKeyState.SecUpdateState(keys, _buffer->Semaphore);

    RtosSystem::Wait(100);
}