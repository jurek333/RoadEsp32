#include "unity.h"
#include "keyStateTests.hpp"
#include "jsonParserTests.hpp"
#include "readRouteTests.hpp"

void setUp(void)
{
  // set stuff up here
}

void tearDown(void)
{
  // clean stuff up here
}

int runUnityTests(void)
{
  UNITY_BEGIN();
  
  KbrdTests();
  JsonParserTests();
  RouteReaderTests();
  
  return UNITY_END();
}

/**
 * For ESP-IDF framework
 */
int main(int argc, char **argv)
{
  runUnityTests();
}