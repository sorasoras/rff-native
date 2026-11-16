#include "tc_rt.h"

void fn_8028d2a4(u32 param_1, u32 param_2)
{
    u32 r0 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0;
    r8 = (u32)rd8(param_2 + 1u);
    r7 = (u32)rd8(param_2 + 2u);
    r6 = (u32)rd8(param_2 + 3u);
    r5 = (u32)rd8(param_2 + 4u);
    r0 = (u32)rd8(param_2 + 5u);
    wr8(param_1, rd8(param_2));
    wr8(param_1 + 1u, (u8)r8);
    wr8(param_1 + 2u, (u8)r7);
    wr8(param_1 + 3u, (u8)r6);
    wr8(param_1 + 4u, (u8)r5);
    wr8(param_1 + 5u, (u8)r0);
    return;
}
