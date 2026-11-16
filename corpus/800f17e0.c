#include "tc_rt.h"

void fn_800f17e0(s32 param_1)
{
    u32 r4 = 0, r5 = 0;
    r5 = rd32((u32)param_1 + 0x1cu);
    r4 = rd32((u32)param_1 + 0x18u);
    wr32((u32)param_1 + 0x1cu, r5 ^ (r5 & 0x8000u));
    wr8(r4 + 0x358u, (u8)((u32)rd8(r4 + 0x358u) & 0xffffffdfu));
    return;
}
