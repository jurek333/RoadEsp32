#pragma once
#include "data/sharedData.hpp"
#include "modules/lcds/lcd.hpp"
#include "screens/contextHandler.hpp"

namespace RoadEsp32::Screens
{
    using namespace RoadEsp32::Data;
    using namespace RoadEsp32::Modules;
    using namespace RoadEsp32::Screens::Lcds;

    struct GpsContent {
        double Altitude {1024.5654};
        double Course {361.0};
        double Speed {123.66754};
        uint8_t SatNo {255};
        uint8_t Minute {255};
    };

    class Gps : public ContextHandler
    {
    public:
        Gps(Lcd *lcd)
        {
            _lcd = lcd;
        }
        void Init();
        DoneAction Loop();
        void SetSharedBuffer(SharedData *buffer)
        {
            this->_sharedBuffer = buffer;
        }
        ContextHandler::ContextType Context() { return ContextHandler::ContextType::Gps; }

    private:
        SharedData *_sharedBuffer;
        Lcd *_lcd;

        GpsContent _showingValues;

        DoneAction HandleButton();
        void ShowSatelites();
        void ShowTime();
        void ShowNav();
    };
}