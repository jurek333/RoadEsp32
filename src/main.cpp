#include <freertos/FreeRTOS.h>
#include <freertos/task.h>
#include "sensors.hpp"
#include "routeEsp32.hpp"

using namespace RouteEsp32::data;

SharedData SharedSpace{};

void SensorTaskLoop(void *parameters)
{
    //ESP_LOGI("sensors", "Shared buffer addr: %p", parameters);
    RouteEsp32::Sensors sensors{(SharedData *)parameters};

    sensors.Init();

    while (!sensors.FinishLoop)
    {
        sensors.Loop();
    }
}

char mainTag[5] = "main";

extern "C" void app_main()
{
    //ESP_LOGI(mainTag, "RouteEsp32");
    SharedSpace.Semaphore = xSemaphoreCreateMutex();
    //ESP_LOGI(mainTag, "Semaphore created.");
    TaskHandle_t sensorsTaskHnd;
    xTaskCreatePinnedToCore(SensorTaskLoop, "sensors", 4096,
                            (void *)&SharedSpace, 8, &sensorsTaskHnd, 1);

    RouteEsp32::RouteBook route{};
    route.Setup(&SharedSpace);

    while (!route.FinishLoop)
    {
        route.EventLoop();
    }

    vTaskDelete(sensorsTaskHnd);
}
