#include "sensors.hpp"

using namespace RouteEsp32;
using namespace RouteEsp32::data;
using namespace RouteEsp32::modules;

Sensors::Sensors(SharedData *sharedBuffer) {
    _buffer = sharedBuffer;
    sensorMethodInd = 0;
    _buffer->GpsSharedData.DateTime.hour = 24;
}

Sensors::~Sensors() {
    _i2c.RemoveDevices();
    _i2c.CloseBus();
}

void Sensors::Init() {
    _i2c.Init();
    _kbrd.Init(&_i2c);
    _gps.Init(&_i2c);
    _power.Init();
}

void Sensors::ReadTimeInLoop() {
    auto time = _gps.GetUTC();
    auto oldHour = _buffer->GpsSharedData.DateTime.hour;
    
    _buffer->GpsSharedData.DateTime.hour = time.hour;
    _buffer->GpsSharedData.DateTime.minute = time.minute;
    _buffer->GpsSharedData.DateTime.second = time.second;
    if(oldHour <= time.hour)
        return;
    auto day = _gps.GetDate();
    _buffer->GpsSharedData.DateTime.year = day.year;
    _buffer->GpsSharedData.DateTime.month = day.month;
    _buffer->GpsSharedData.DateTime.date = day.date;
}

void Sensors::ReadMovementInLoop() {
    auto s = _gps.getSpeed();
    auto dir = _gps.GetCourse();
    _buffer->GpsSharedData.Speed = s;
    _buffer->GpsSharedData.Course = dir;
}

void Sensors::ReadPositionInLoop() {
    auto lon = _gps.GetLon();
    auto lat = _gps.GetLat();
    auto a = _gps.GetAlt();

    _buffer->GpsSharedData.Altitude = a;
    _buffer->GpsSharedData.Coordinates.UpdateLatitude(lat);
    _buffer->GpsSharedData.Coordinates.UpdateLongitude(lon);
}

void Sensors::ReadGpsStatusInLoop(){
    auto n = _gps.GetAmountOfSatelites();
    _buffer->GpsSharedData.Satelites = n;
}

void Sensors::ReadPowerLvl() {
    auto val = _power.ReadRaw();
    _buffer->batteryLvl = val;
}

void Sensors::Loop() {
    (this->*gpsMethods[sensorMethodInd])();
    ++sensorMethodInd;
    sensorMethodInd %= Sensors::subMethodsCount;
    ReadPowerLvl();

    auto keys = _kbrd.ReadKey();
    _buffer->SharedKeyState.SecUpdateState(keys, _buffer->Semaphore);

    vTaskDelay(100/portTICK_PERIOD_MS);
}