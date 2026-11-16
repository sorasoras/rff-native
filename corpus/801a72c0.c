#include "tc_rt.h"

void fn_801a72c0(u32 param_1, s32 param_2)
{
    u32 r3 = 0;
    (void)param_1;
    r3 = rd32((u32)param_2 + 0xf78u);
    wr32((u32)param_2 + 0xf78u, r3 ^ (r3 & 8u));
    return;
}
