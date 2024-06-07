#pragma once

#include "data/sharedData.hpp"
#include "screens/contextHandler.hpp"
#include "modules/lcds/lcd.hpp"
#include "modules/disk.hpp"
#include "modules/sdcard.hpp"
#include "parser/routeReader.hpp"
#include "common/palleteColors.hpp"

#include "esp_log.h"

namespace RoadEsp32::Screens
{
    using namespace RoadEsp32::Data;
    using namespace RoadEsp32::Modules;
    using namespace RoadEsp32::Modules::Lcds;
    using namespace RoadEsp32::Parser;
    using namespace RoadEsp32::Common;

    struct LastValues
    {
        uint8_t LastBtrLvl{255};
        uint8_t LastSatelites{255};
        uint8_t LastMinute{255};
    };

    class Navigate : public ContextHandler
    {
    public:
        Navigate(Lcd *lcd, SdCard *sd)
        {
            _lcd = lcd;
            _sd = sd;
            _reader = nullptr;
        }
        void Init();
        DoneAction Loop();
        void SetSharedBuffer(SharedData *buffer)
        {
            this->_sharedBuffer = buffer;
        }
        ContextHandler::ContextType Context()
        {
            return ContextHandler::ContextType::Navigation;
        }
        bool ReadFile(const std::string &path)
        {
            ESP_LOGI("nav", "Open file: %s", path.c_str());
            _navFileHandler = _sd->OpenFile(path, FileOpenMode::Open4Read);
            if (FileHandlerExtnsions::IsEmpty(_navFileHandler))
            {
                return false;
            }
            ESP_LOGI("nav", "Got filehandler %d", _navFileHandler);
            _reader = new RouteReader(_sd, _navFileHandler);
            return _reader->StartReading();
        }
        void CloseRoute()
        {
            delete _reader;
            _reader = nullptr;
            _sd->CloseFile(_navFileHandler);
            FileHandlerExtnsions::ClearHandler(_navFileHandler);

            _dirIndex = 0;
            _directions.clear();
        }

    private:
        SharedData *_sharedBuffer;
        Lcd *_lcd;
        SdCard *_sd;
        SdCardFileHandler _navFileHandler;
        RouteReader *_reader;

        LastValues _lasts;

        std::vector<Direction> _directions;
        size_t _dirIndex{0};

        void ShowTime();
        void ShowBattery();
        void ShowSatelites();
        void ShowDirection(Direction &dir);
        void PrintGpsDirections()
        {
            if (_sharedBuffer->GpsSharedData.GpsDirections.IsDestinationPresent)
            {
                _lcd->Rect(40, 25, 3, 3, PalleteColors::RoadBackground);
            } else {
                _lcd->Rect(40, 25, 3, 3, PalleteColors::ScreenBackground);
            }

            if (!_sharedBuffer->GpsSharedData.GpsDirections.IsDestinationPresent || !_sharedBuffer->GpsSharedData.GpsDirections.AreCalculationsDone)
            {
                return;
            }
            auto gps = &_sharedBuffer->GpsSharedData.GpsDirections;
            //_lcd->Print(5, 90, (float)gps->Destination.Lat, &Font16, PalleteColors::MainText, PalleteColors::ScreenBackground);
            //_lcd->Print(125, 90, (float)gps->Destination.Lon, &Font16, PalleteColors::MainText, PalleteColors::ScreenBackground);

            _lcd->Print(5, 92, static_cast<float>(std::round(gps->DistanceInKm)), &Font16, PalleteColors::MainText, PalleteColors::ScreenBackground);
            //_lcd->Print(5, 138, (float)(gps->DirectionAngle - _sharedBuffer->GpsSharedData.Course), &Font16, PalleteColors::MainText, PalleteColors::ScreenBackground);
            //_lcd->Print(5, 154, (float)(gps->DirectionAngleDegrees), &Font16, PalleteColors::MainText, PalleteColors::ScreenBackground);
        }
        void PrintNames(Direction &dir)
        {
            uint16_t yOff = 54;
            if (!dir.RoadName.empty())
                _lcd->PrintCenteredLine(yOff, dir.RoadName.c_str(),
                                        &Font35, PalleteColors::RoadForeground, PalleteColors::RoadBackground);
            else if (!dir.Name.empty())
                _lcd->PrintCenteredLine(yOff, dir.Name.c_str(),
                                        &Font35, PalleteColors::NameForeground, PalleteColors::NameBackground);
            else if (!dir.DirSign.empty())
                _lcd->PrintCenteredLine(yOff, dir.DirSign.c_str(),
                                        &Font35, PalleteColors::RoadForeground, PalleteColors::RoadBackground);
            else
                _lcd->PrintCenteredLine(yOff, " ",
                                        &Font35, PalleteColors::ScreenBackground, PalleteColors::ScreenBackground);
            _lcd->Tick();
        }
        DoneAction HandleButtons();
        bool ReadSection();
    };
}