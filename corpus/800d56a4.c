#include "tc_rt.h"

void fn_800d56a4(s32 param_1, s32 param_2)
{
    u32 r0 = 0;
    r0 = rd32((u32)param_1 + 0x4b4u);
    if (param_2 < (s32)r0) {
        r0 = (u32)param_2;
    }
    wr32((u32)param_1 + 0x4b0u, r0);
    return;
}
