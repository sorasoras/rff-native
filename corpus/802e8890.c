#include "tc_rt.h"

void fn_802e8890(s32 param_1, s32 param_2, u32 param_3)
{
    u32 r0 = 0, r3 = 0, r4 = 0;
    r4 = (u32)param_1 + (((u32)param_2 << 2u) & 0xfffffffcu);
    r0 = (u32)rd8(param_3 + 1u);
    wr8(r4 + 0xe8u, rd8(param_3));
    r3 = (u32)rd8(param_3 + 2u);
    wr8(r4 + 0xe9u, (u8)r0);
    r0 = (u32)rd8(param_3 + 3u);
    wr8(r4 + 0xeau, (u8)r3);
    wr8(r4 + 0xebu, (u8)r0);
    return;
}
