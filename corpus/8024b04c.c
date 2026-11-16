#include "tc_rt.h"

void fn_8024b04c(s32 param_1, u32 param_2)
{
    u32 r3 = 0;
    r3 = rd32(0x80571918u) + (rd32((u32)param_1 + 0x18u) * 0x70u);
    wr32(r3 + 8u, param_2);
    wr32(r3 + 4u, rd32(r3 + 4u) | 0x10000000u);
    return;
}
