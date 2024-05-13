#include "unity.h"
#include "data/keysState.hpp"

using namespace RouteEsp32::data;

void setUp(void)
{
  // set stuff up here
}

void tearDown(void)
{
  // clean stuff up here
}

void test_prev_btn_pressed_and_released()
{
  KeysState keyState{};
  keyState.UpdateState(0x01);
  keyState.UpdateState(0x00);
  auto prevPressed = keyState.ReadKeyPrevState();
  TEST_ASSERT_TRUE(prevPressed);
}

void test_both_btns_pressed_for_5_cycles()
{
  KeysState keyState{};
  keyState.UpdateState(0x01);
  for (int i = 0; i < 6; ++i)
    keyState.UpdateState(0x03);

  keyState.UpdateState(0x02);
  auto prevPressed = keyState.ReadKeyPrevState();
  UNITY_TEST_ASSERT(!prevPressed, __LINE__, "1st Prev Key should be FALSE");
  auto nextPressed = keyState.ReadKeyNextState();
  UNITY_TEST_ASSERT(!nextPressed, __LINE__, "1st Next Key should be FALSE");
  auto bothPressed = keyState.ReadBothKeysState();
  UNITY_TEST_ASSERT(bothPressed, __LINE__, "1st Both Key should be TRUE");

  keyState.UpdateState(0x00);
  prevPressed = keyState.ReadKeyPrevState();
  UNITY_TEST_ASSERT(!prevPressed, __LINE__, "2nd Prev Key should be FALSE");
  nextPressed = keyState.ReadKeyNextState();
  UNITY_TEST_ASSERT(!nextPressed, __LINE__, "2nd Next Key should be FALSE");
  bothPressed = keyState.ReadBothKeysState();
  UNITY_TEST_ASSERT(!bothPressed, __LINE__, "2nd Both Key should be FALSE");
}

void test_both_btns_pressed_for_less_than_5_cycles()
{
  KeysState keyState{};
  keyState.UpdateState(0x01);
  for (int i = 0; i < 4; ++i)
    keyState.UpdateState(0x03);

  keyState.UpdateState(0x02);
  auto prevPressed = keyState.ReadKeyPrevState();
  auto nextPressed = keyState.ReadKeyNextState();
  auto bothPressed = keyState.ReadBothKeysState();

  TEST_ASSERT_TRUE(prevPressed);
  TEST_ASSERT_FALSE(nextPressed);
  TEST_ASSERT_FALSE(bothPressed);
}

int runUnityTests(void)
{
  UNITY_BEGIN();
  RUN_TEST(test_prev_btn_pressed_and_released);
  RUN_TEST(test_both_btns_pressed_for_5_cycles);
  RUN_TEST(test_both_btns_pressed_for_less_than_5_cycles);
  return UNITY_END();
}

/**
 * For ESP-IDF framework
 */
int main(int argc, char **argv)
{
  runUnityTests();
}