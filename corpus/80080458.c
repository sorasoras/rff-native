#include "tc_rt.h"

u32 fn_80080458(s32 param_1, s32 param_2)
{
    u32 r0 = 0, r5 = 0;
    r5 = rd32((u32)param_1 + 0x1d4u);
    r0 = rd32((u32)param_1 + 0x1d8u) + (u32)param_2;
    if (r0 < r5) {
        r5 = r0;
    }
    wr32((u32)param_1 + 0x1d8u, r5);
    return r5;
}
