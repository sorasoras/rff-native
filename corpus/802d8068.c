#include "tc_rt.h"

void fn_802d8068(s32 param_1, u32 param_2)
{
    u32 r0 = 0, r3 = 0, r5 = 0;
    r5 = rd32((u32)param_1 + 0x14u);
    r3 = (u32)rd8(param_2 + 1u);
    wr8(r5 + 4u, rd8(param_2));
    r0 = (u32)rd8(param_2 + 2u);
    wr8(r5 + 5u, (u8)r3);
    wr8(r5 + 6u, (u8)r0);
    return;
}
