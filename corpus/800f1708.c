#include "tc_rt.h"

void fn_800f1708(f64 param_1, s32 param_2)
{
    u32 r4 = 0, r5 = 0;
    r5 = rd32((u32)param_2 + 0x1cu);
    r4 = rd32((u32)param_2 + 0x18u);
    wr32((u32)param_2 + 0x1cu, r5 | (r5 ^ 0x8000u));
    wr8(r4 + 0x358u, (u8)((u32)rd8(r4 + 0x358u) | 0x20u));
    wrf32d((u32)param_2 + 0x7cu, param_1);
    return;
}
