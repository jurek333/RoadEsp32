#pragma once

namespace RouteEsp32::screens
{
    class ContextHandler
    {
    public:
        virtual ~ContextHandler() {}
        virtual void Init() {}
        virtual void Loop() {}
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