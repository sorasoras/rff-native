#include "tc_rt.h"

void fn_800c951c(s32 param_1, u32 param_2)
{
    u32 r0 = 0, r4 = 0;
    r0 = param_2 & 7u;
    r4 = (u32)param_1 + ((param_2 >> 3u) & 0x1fffffffu);
    r0 = ((r0 & 0x20u) != 0u) ? 0u : (1u << (r0 & 0x1fu));
    r0 = r0 & 0xffu;
    r0 = (u32)rd8(r4 + 0x150u) | r0;
    wr8(r4 + 0x150u, (u8)r0);
    return;
}
