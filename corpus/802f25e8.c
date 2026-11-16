#include "tc_rt.h"

s32 fn_802f25e8(u32 param_1, s32 param_2, s32 param_3)
{
    u32 c0lt = 0, r0 = 0, r3 = 0, r4 = 0;
    r3 = param_1;
    if (param_1 != 0u) {
        r3 = param_1 - 0x80000000u;
    }
    c0lt = param_3 < 2;
    r0 = 0u;
    if ((u32)param_3 != 2u) {
        if (c0lt) {
            if (param_3 >= 1) {
                r0 = (u32)param_2 - ((r3 >> 1u) & 0x7fffffffu);
                return (s32)r0;
            }
            return (s32)r0;
        }
        if (param_3 >= 4) {
            return (s32)r0;
        }
        r4 = (u32)param_2 - ((r3 << 1u) & 0xfffffffeu);
        r0 = (r4 & 0xfu) + (((r4 >> 4u) & 0xfffffffu) * 0xeu) - 2u;
        return (s32)r0;
    }
    r0 = (u32)param_2 - r3;
    return (s32)r0;
}
