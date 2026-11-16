#include "tc_rt.h"

void fn_80168a28(u32 param_1, s32 param_2)
{
    u32 r3 = 0, r5 = 0;
    (void)param_1;
    r5 = rd32((u32)param_2 + 0xf78u);
    r3 = rd32((u32)param_2 + 0x9cu);
    wr8((u32)param_2 + 0x368u, 1u);
    r5 = r5 ^ (r5 & 1u);
    r3 = r3 & 0xfbffffffu;
    wr32((u32)param_2 + 0x9cu, r3);
    wr32((u32)param_2 + 0xf78u, r5 ^ (r5 & 0x10000u));
    return;
}
