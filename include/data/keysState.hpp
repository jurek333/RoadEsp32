#pragma once
#include <cstdint>
#include <cstddef>

namespace RoadEsp32::Data
{
    struct KeysState
    {
        static constexpr uint8_t BothBtnTresholdCycles = 5;
        static constexpr uint8_t NextKeyMask = 0b00000010;
        static constexpr uint8_t PrevKeyMask = 0b00000001;

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
                auto bothKeyMask = NextKeyMask | PrevKeyMask;
                if (bothKeyMask == (bothKeyMask & PressedKeys))
                {
                    ++BothBtnCount;
                    if (BothBtnCount > BothBtnTresholdCycles)
                    {
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
                if (!(ReleasedKeys & (PrevKeyMask | NextKeyMask)))
                    return false;

                LockBothPressed = false;
                BothBtnCount = 0;
                PressedKeys &= ~(PrevKeyMask | NextKeyMask);
                ReleasedKeys &= ~(PrevKeyMask | NextKeyMask);
            }
            return result;
        }
    };
}