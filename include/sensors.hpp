#pragma once

#include "data/sharedData.hpp"
#include "screens/contextHandler.hpp"
#include "modules/kbrd.hpp"
#include "modules/gnss.hpp"
#include "modules/powerMonitor.hpp"

#include "soc/adc_channel.h"

namespace RouteEsp32
{
    using namespace RouteEsp32::data;
    using namespace RouteEsp32::modules;
    using namespace RouteEsp32::protocols;

    class Sensors
    {
    public:
        Sensors(SharedData *sharedBuffer);
        ~Sensors();

        void Init();
        void Loop();

        bool FinishLoop = false;

    private:
        SharedData *_buffer;
        I2CPort _i2c;
        Kbrd _kbrd;
        Gnss _gps;
        PowerMonitor _power{(adc_channel_t)ADC1_GPIO3_CHANNEL};

        void ReadTimeInLoop();
        void ReadPositionInLoop();
        void ReadMovementInLoop();
        void ReadGpsStatusInLoop();
        void ReadPowerLvl();

        static const uint8_t subMethodsCount = 4;
        int sensorMethodInd;
        void (Sensors::*gpsMethods[subMethodsCount])(){
            &Sensors::ReadTimeInLoop, &Sensors::ReadPositionInLoop, &Sensors::ReadMovementInLoop, &Sensors::ReadGpsStatusInLoop};
    };
}