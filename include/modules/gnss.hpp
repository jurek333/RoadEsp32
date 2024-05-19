#pragma once
#include "common/system.hpp"
#include "protocols/i2cPort.hpp"

#define GNS_I2C_ADDR 0x20

namespace RouteEsp32::modules
{
    using namespace RouteEsp32::data;
    using namespace RouteEsp32::protocols;

    typedef enum
    {
        eGPS = 1,
        eBeiDou,
        eGPS_BeiDou,
        eGLONASS,
        eGPS_GLONASS,
        eBeiDou_GLONASS,
        eGPS_BeiDou_GLONASS,
    } gnss_mode_t;

    class Gnss
    {
    public:
        void Init(I2CPort *i2c)
        {
            _i2c = i2c;

            _deviceId = _i2c->AddDevice(GNS_I2C_ADDR);
            EnablePower();
            SetGnss(gnss_mode_t::eGPS_BeiDou_GLONASS);
        }

    private:
        I2CPort *_i2c;
        i2c_device_id_t _deviceId;

        class Cmds
        {
        public:
            static const uint8_t YearH = 0;
            static const uint8_t YearL = 1;
            static const uint8_t Month = 2;
            static const uint8_t Date = 3;
            static const uint8_t Hour = 4;
            static const uint8_t Minute = 5;
            static const uint8_t SECOND = 6;
            static const uint8_t Lat1 = 7;
            static const uint8_t LAT_2 = 8;
            static const uint8_t LAT_X_24 = 9;
            static const uint8_t LAT_X_16 = 10;
            static const uint8_t LAT_X_8 = 11;
            static const uint8_t LonDis = 12;
            static const uint8_t Lon1 = 13;
            static const uint8_t LON_2 = 14;
            static const uint8_t LON_X_24 = 15;
            static const uint8_t LON_X_16 = 16;
            static const uint8_t LON_X_8 = 17;
            static const uint8_t LatDis = 18;
            static const uint8_t UsedSatelites = 19;
            static const uint8_t ALT_H = 20;
            static const uint8_t ALT_L = 21;
            static const uint8_t ALT_X = 22;
            static const uint8_t SOG_H = 23;
            static const uint8_t SOG_L = 24;
            static const uint8_t SOG_X = 25;
            static const uint8_t COG_H = 26;
            static const uint8_t COG_L = 27;
            static const uint8_t COG_X = 28;
            static const uint8_t START_GET = 29;
            static const uint8_t ID = 30;
            static const uint8_t DATA_LEN_H = 31;
            static const uint8_t DATA_LEN_L = 32;
            static const uint8_t ALL_DATA = 33;
            static const uint8_t GnssMode = 34;
            static const uint8_t SleepMode = 35;
            static const uint8_t RgbMode = 36;

            static const uint8_t RgbOn = 0x05;
            static const uint8_t RgbOff = 0x02;
        };

    public:
        inline void SetGnss(gnss_mode_t mode)
        {
            _i2c->WriteDevice(_deviceId, Gnss::Cmds::GnssMode);
            _i2c->WriteDevice(_deviceId, mode);
            RtosSystem::Wait(50);
        }

        inline void EnablePower()
        {
            _i2c->WriteDevice(_deviceId, Gnss::Cmds::SleepMode);
            _i2c->WriteDevice(_deviceId, 0);
        }

        inline void SetRgbOn()
        {
            _i2c->WriteDevice(_deviceId, Gnss::Cmds::RgbMode);
            _i2c->WriteDevice(_deviceId, Gnss::Cmds::RgbOn);
            RtosSystem::Wait(50);
        }

        inline uint8_t GetAmountOfSatelites()
        {
            _i2c->WriteDevice(_deviceId, Gnss::Cmds::UsedSatelites);
            uint8_t result;
            _i2c->ReadDevice(_deviceId, &result, 1);
            return result;
        }

        inline void ReadReg(uint8_t reg, uint8_t *buff, size_t buffSize)
        {
            _i2c->WriteDevice(_deviceId, reg);
            _i2c->ReadDevice(_deviceId, buff, buffSize);
        }

        inline GpsPosition GetLon()
        {
            GpsPosition data;
            uint8_t _sendData[10] = {0};
            ReadReg(Cmds::Lon1, _sendData, 6);

            data.lonDDD = _sendData[0];
            data.lonMM = _sendData[1];
            data.lonMMMMM = ((uint32_t)_sendData[2] << 16) | ((uint32_t)_sendData[3] << 8) | ((uint32_t)_sendData[4]);
            data.lonitude = (double)data.lonDDD * 100.0 + ((double)data.lonMM) + ((double)data.lonMMMMM / 100000.0);
            data.lonitudeDegree = (double)data.lonDDD + (double)data.lonMM / 60.0 + (double)data.lonMMMMM / 100000.0 / 60.0;

            ReadReg(Cmds::LonDis, _sendData, 1);
            data.lonDirection = _sendData[0];
            return data;
        }

        inline GpsPosition GetLat()
        {
            GpsPosition data;
            uint8_t _sendData[10] = {0};
            ReadReg(Cmds::Lat1, _sendData, 6);
            data.latDD = _sendData[0];
            data.latMM = _sendData[1];
            data.latMMMMM = ((uint32_t)_sendData[2] << 16) | ((uint32_t)_sendData[3] << 8) | ((uint32_t)_sendData[4]);
            data.latitude = (double)data.latDD * 100.0 + ((double)data.latMM) + ((double)data.latMMMMM / 100000.0);
            data.latitudeDegree = (double)data.latDD + (double)data.latMM / 60.0 + (double)data.latMMMMM / 100000.0 / 60.0;

            ReadReg(Cmds::LatDis, _sendData, 1);
            data.latDirection = _sendData[0];
            return data;
        }

        GpsTime GetDate()
        {
            GpsTime data;
            uint8_t _sendData[10] = {0};
            ReadReg(Cmds::YearH, _sendData, 4);
            data.year = ((uint16_t)_sendData[0] << 8) | _sendData[1];
            data.month = _sendData[2];
            data.date = _sendData[3];
            return data;
        }

        GpsTime GetUTC()
        {
            GpsTime data;
            uint8_t _sendData[10] = {0};
            ReadReg(Cmds::Hour, _sendData, 3);
            data.hour = _sendData[0];
            data.minute = _sendData[1];
            data.second = _sendData[2];
            return data;
        }

        double GetAlt()
        {
            double high;
            uint8_t _sendData[10] = {0};
            ReadReg(Cmds::ALT_H, _sendData, 3);
            if (_sendData[0] & 0x80)
            {
                high = (double)((uint16_t)(_sendData[0] & 0x7F) << 8 | _sendData[1]) + (double)_sendData[2] / 100.0;
            }
            else
            {
                high = (double)((uint16_t)(_sendData[0] & 0x7F) << 8 | _sendData[1]) + (double)_sendData[2] / 100.0;
            }
            return high;
        }

        double getSpeed()
        {
            double speed;
            uint8_t _sendData[10] = {0};

            ReadReg(Cmds::SOG_H, _sendData, 3);
            if (_sendData[0] & 0x80)
            {
                speed = (double)((uint16_t)(_sendData[0] & 0x7F) << 8 | _sendData[1]) + (double)_sendData[2] / 100.0;
            }
            else
            {
                speed = (double)((uint16_t)(_sendData[0] & 0x7F) << 8 | _sendData[1]) + (double)_sendData[2] / 100.0;
            }
            return speed;
        }

        double GetCourse()
        {
            double cog;
            uint8_t _sendData[10] = {0};

            ReadReg(Cmds::COG_H, _sendData, 3);
            if (_sendData[0] & 0x80)
            {
                cog = (double)((uint16_t)(_sendData[0] & 0x7F) << 8 | _sendData[1]) + (double)_sendData[2] / 100.0;
            }
            else
            {
                cog = (double)((uint16_t)(_sendData[0] & 0x7F) << 8 | _sendData[1]) + (double)_sendData[2] / 100.0;
            }
            return cog;
        }
    };
}