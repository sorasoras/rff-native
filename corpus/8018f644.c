#include "tc_rt.h"

u32 fn_8018f644(s32 param_1, s32 param_2)
{
    u32 r3 = 0;
    r3 = rd32((u32)param_1 + 0x500u);
    if (param_2 < (s32)(r3 + 0x28u)) {
        return 0u;
    }
    if (param_2 < (s32)(r3 + 0x50u)) {
        return 1u;
    }
    if (param_2 < (s32)(r3 + 0x78u)) {
        return 2u;
    }
    if (param_2 < (s32)(r3 + 0xa0u)) {
        return 3u;
    }
    if (param_2 < (s32)(r3 + 0xc8u)) {
        return 4u;
    }
    if (param_2 < (s32)(r3 + 0xd4u)) {
        return 5u;
    }
    if (param_2 < (s32)(r3 + 0xecu)) {
        return 6u;
    }
    if (param_2 < (s32)(r3 + 0x120u)) {
        return 7u;
    }
    if (param_2 < (s32)(r3 + 0x124u)) {
        return 8u;
    }
    return 0xffffffffu;
}
