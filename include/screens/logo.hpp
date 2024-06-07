#pragma once
#include "common/system.hpp"
#include "modules/lcds/lcd.hpp"
#include "screens/contextHandler.hpp"

namespace RoadEsp32::Screens
{
    using namespace RoadEsp32::Modules;
    using namespace RoadEsp32::Modules::Lcds;
    using namespace RoadEsp32::Data::Images;

    class Logo : public ContextHandler
    {
    public:
        Logo(Lcd *lcd) { _lcd = lcd; }
        void Init()
        {
            _lcd->Clean(0x0000);
            _lcd->SetCurrentEffect(_lcd->Effects.GradientShine);
        }
        DoneAction Loop()
        {
            RtosSystem::Wait(50);
            _lcd->Tick();
            _lcd->MonoImage(50, 82, &Imgs::Logos::logo, RoadEsp32::Modules::mapColor(0xD1332B), 14);

            return DoneAction::None;
        }
        ContextHandler::ContextType Context() { return ContextHandler::ContextType::Intro; }

    private:
        Lcd *_lcd;
    };
}