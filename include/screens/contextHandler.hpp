#pragma once

namespace RouteEsp32::screens
{
    enum DoneAction : uint8_t
    {
        None = 0,
        Selected,
        Exit,
        Changed
    };

    class ContextHandler
    {
    public:
        virtual ~ContextHandler() {}
        virtual void Init() {}
        virtual DoneAction Loop() { return DoneAction::None; }
        enum ContextType : uint8_t
        {
            None = 0,
            Intro = 1,
            Menu,
            Navigation,
            Gps
        };

        virtual ContextType Context() { return ContextType::None; }
    };
}