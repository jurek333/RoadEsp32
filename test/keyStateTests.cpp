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
  auto prevPressed = keyState.ReadKey();
  TEST_ASSERT_TRUE(prevPressed == KeysState::Keys::BtnPrev);
}

void test_both_btns_pressed_for_5_cycles()
{
  KeysState keyState{};
  keyState.UpdateState(0x01);
  for (int i = 0; i < 6; ++i)
    keyState.UpdateState(0x03);

  keyState.UpdateState(0x02);
  auto pressed = keyState.ReadKey();
  UNITY_TEST_ASSERT(pressed == KeysState::Keys::BothBtns, __LINE__, "1st Both Key should be TRUE");

  keyState.UpdateState(0x00);
  pressed = keyState.ReadKey();
  UNITY_TEST_ASSERT(pressed == KeysState::Keys::None, __LINE__, "2nd Prev Key should be FALSE");
}

void test_both_btns_pressed_for_less_than_5_cycles()
{
  KeysState keyState{};
  keyState.UpdateState(0x01);
  for (int i = 0; i < 4; ++i)
    keyState.UpdateState(0x03);

  keyState.UpdateState(0x02);
  auto pressed = keyState.ReadKey();
  TEST_ASSERT_TRUE(pressed == KeysState::Keys::BtnPrev);
  pressed = keyState.ReadKey();
  TEST_ASSERT_TRUE(pressed == KeysState::Keys::None);
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