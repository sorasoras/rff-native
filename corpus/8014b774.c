#include "tc_rt.h"

void fn_8014b774(s32 param_1, u32 param_r4)
{
    u32 r3 = 0, r4 = 0, r5 = 0;
    TcArgs a = {0};
    r5 = rd32((u32)param_1 + 0x170u);
    if (r5 == 1u) {
        a.r[0] = (u32)param_1;
        a.r[1] = param_r4;
        r3 = tc_call(0x8014b6f4u, &a);
        r4 = r3;
    } else {
        r4 = (u32)((s32)~((r5 - 2u) | (2u - r5)) >> 31) & 6u;
    }
    if (rd32((u32)param_1 + 0x168u) != r4) {
        a.r[0] = (u32)param_1;
        a.r[1] = r4;
        (void)tc_call(0x8014b494u, &a);
    }
    return;
}
