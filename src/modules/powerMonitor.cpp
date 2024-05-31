#include "modules/powerMonitor.hpp"

#include "soc/adc_channel.h"
#include "esp_err.h"

using namespace RoadEsp32::Modules;

PowerMonitor::PowerMonitor(adc_channel_t adcChannel)
{
    _adcChannel = adcChannel;
}

void PowerMonitor::Init()
{
    adc_oneshot_unit_init_cfg_t config = {
        .unit_id = ADC_UNIT_1,
        .ulp_mode = ADC_ULP_MODE_DISABLE};
    ESP_ERROR_CHECK(adc_oneshot_new_unit(&config, &_adcHandle));

    adc_oneshot_chan_cfg_t channConfig = {
        .atten = ADC_ATTEN_DB_12,
        .bitwidth = ADC_BITWIDTH_DEFAULT};
    ESP_ERROR_CHECK(adc_oneshot_config_channel(_adcHandle, _adcChannel, &channConfig));
}

void PowerMonitor::Dispose()
{
    ESP_ERROR_CHECK(adc_oneshot_del_unit(_adcHandle));
}

int PowerMonitor::ReadRaw()
{
    int value;
    ESP_ERROR_CHECK(adc_oneshot_read(_adcHandle, _adcChannel, &value));
    return value;
}