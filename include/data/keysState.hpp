#pragma once
#include <cstdint>
#include <cstddef>

#define NextKeyMask 0b00000010
#define PrevKeyMask 0b00000001

namespace RouteEsp32::data
{
    struct KeysState
    {
        static constexpr uint8_t BothBtnTresholdCycles = 5;

        uint8_t PressedKeys;
        uint8_t ReleasedKeys;

        bool LockBothPressed;
        uint8_t BothBtnCount;

        enum Keys : uint16_t
        {
            None = 0,
            BtnNext = 1,
            BtnPrev = 2,
            BothBtns = 4
        };

        void UpdateState(uint8_t newState) noexcept
        {
            ReleasedKeys |= PressedKeys & ~newState;
            PressedKeys = newState;
            
            if (!LockBothPressed)
            {
                if (3 == (3 & PressedKeys))
                {
                    ++BothBtnCount;
                    if (BothBtnCount > BothBtnTresholdCycles){
                        LockBothPressed = true;
                    }
                }
                else
                {
                    BothBtnCount = 0;
                }
            }
        }
        Keys ReadKey() noexcept
        {
            if (ReadBothKeysState())
                return Keys::BothBtns;
            if (ReadKeyNextState())
                return Keys::BtnNext;
            if (ReadKeyPrevState())
                return Keys::BtnPrev;

            return Keys::None;
        }

    private:
        bool ReadKeyNextState() noexcept
        {
            if (LockBothPressed)
                return false;
            bool result = 0 != (ReleasedKeys & NextKeyMask);
            ReleasedKeys &= ~NextKeyMask;
            return result;
        }
        bool ReadKeyPrevState() noexcept
        {
            if (LockBothPressed)
                return false;
            bool result = ReleasedKeys & PrevKeyMask;
            ReleasedKeys &= ~PrevKeyMask;
            return result;
        }
        bool ReadBothKeysState()
        {
            bool result = LockBothPressed;
            if (LockBothPressed)
            {
                LockBothPressed = false;
                BothBtnCount = 0;
                PressedKeys &= ~(PrevKeyMask | NextKeyMask);
                ReleasedKeys &= ~(PrevKeyMask | NextKeyMask);
            }
            return result;
        }
    };
}