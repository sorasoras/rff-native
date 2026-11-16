#include "tc_rt.h"

void fn_8015196c(u32 param_1, s32 param_2)
{
    u32 r3 = 0;
    (void)param_1;
    r3 = rd32((u32)param_2 + 0xf78u);
    r3 = r3 ^ (r3 & 0x10000u);
    wr32((u32)param_2 + 0x9cu, rd32((u32)param_2 + 0x9cu) & 0xfbffffffu);
    wr32((u32)param_2 + 0xf78u, r3 ^ (r3 & 0x4000u));
    return;
}
