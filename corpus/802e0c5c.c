#include "tc_rt.h"

void fn_802e0c5c(u32 param_1, u32 param_2, u32 param_3)
{
    u32 r0 = 0, r4 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0;
    r10 = (u32)rd8(param_2 + 1u);
    r9 = (u32)rd8(param_2 + 2u);
    r8 = (u32)rd8(param_2 + 3u);
    r7 = (u32)rd8(param_3);
    r6 = (u32)rd8(param_3 + 1u);
    r4 = (u32)rd8(param_3 + 2u);
    r0 = (u32)rd8(param_3 + 3u);
    wr8(param_1, rd8(param_2));
    wr8(param_1 + 1u, (u8)r10);
    wr8(param_1 + 2u, (u8)r9);
    wr8(param_1 + 3u, (u8)r8);
    wr8(param_1 + 4u, (u8)r7);
    wr8(param_1 + 5u, (u8)r6);
    wr8(param_1 + 6u, (u8)r4);
    wr8(param_1 + 7u, (u8)r0);
    return;
}
