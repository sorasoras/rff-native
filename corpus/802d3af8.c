#include "tc_rt.h"

void fn_802d3af8(u32 param_1, s32 param_2, s32 param_3)
{
    u32 r0 = 0, r4 = 0, r5 = 0, r7 = 0;
    r7 = (u32)param_2 + (((u32)param_3 << 2u) & 0xfffffffcu);
    r5 = (u32)rd8(r7 + 0xe5u);
    r4 = (u32)rd8(r7 + 0xe6u);
    r0 = (u32)rd8(r7 + 0xe7u);
    wr8(param_1, rd8(r7 + 0xe4u));
    wr8(param_1 + 1u, (u8)r5);
    wr8(param_1 + 2u, (u8)r4);
    wr8(param_1 + 3u, (u8)r0);
    return;
}
