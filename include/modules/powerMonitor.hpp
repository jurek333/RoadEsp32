#pragma once
#include "esp_adc/adc_oneshot.h"

namespace RoadEsp32::Modules
{
    class PowerMonitor
    {
    public:
        PowerMonitor(adc_channel_t adcChannel);
        void Init();
        void Dispose();

        int ReadRaw();

    private:
        adc_channel_t _adcChannel;
        adc_oneshot_unit_handle_t _adcHandle;
    };
}