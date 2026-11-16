#include "tc_rt.h"

void fn_802eb55c(u32 param_1, u32 param_2)
{
    u32 r0 = 0, r5 = 0, r6 = 0;
    r6 = (u32)rd8(param_2 + 1u);
    r5 = (u32)rd8(param_2 + 2u);
    r0 = (u32)rd8(param_2 + 3u);
    wr8(param_1, rd8(param_2));
    wr8(param_1 + 1u, (u8)r6);
    wr8(param_1 + 2u, (u8)r5);
    wr8(param_1 + 3u, (u8)r0);
    return;
}
