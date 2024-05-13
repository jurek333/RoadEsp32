#pragma once
#include "esp_adc/adc_oneshot.h"

namespace RouteEsp32::modules
{
    class PowerMonitor
    {
    public:
        PowerMonitor(adc_channel_t adcChannel);
        void init();
        void dispose();

        int ReadRaw();

    private:
        adc_channel_t _adcChannel;
        adc_oneshot_unit_handle_t _adcHandle;
    };
}