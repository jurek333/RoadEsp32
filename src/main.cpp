#include <freertos/FreeRTOS.h>
#include <freertos/task.h>
#include "sensors.hpp"
#include "routeEsp32.hpp"

using namespace RouteEsp32::data;

SharedData SharedSpace{};

void SensorTaskLoop(void *parameters)
{
    RouteEsp32::Sensors sensors{(SharedData *)parameters};

    sensors.Init();
    while (!sensors.FinishLoop)
    {
        sensors.Loop();
    }
}

extern "C" void app_main()
{
    SharedSpace.Semaphore = xSemaphoreCreateMutex();
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
