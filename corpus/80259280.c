#include "tc_rt.h"

u32 fn_80259280(s32 param_1, s32 param_2, s32 param_3)
{
    u32 r3 = 0, r4 = 0, r5 = 0;
    r4 = (u32)param_2 & 0xffu;
    r3 = (u32)param_1 - 1u;
    r5 = (u32)param_3 + 1u;
    for (;;) {
        r5 = r5 - 1u;
        if (r5 == 0u) break;
        r3 = r3 + 1u;
        if ((u32)rd8(r3) == r4) {
            return r3;
        }
    }
    return 0u;
}
