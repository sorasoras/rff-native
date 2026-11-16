#include "tc_rt.h"

void fn_8008b508(u32 param_1, u32 param_2)
{
    u32 r0 = 0, r5 = 0;
    r5 = (u32)rd8(param_2 + 2u);
    r0 = (u32)rd8(param_2 + 3u);
    wr16(param_1, rd16(param_2));
    wr8(param_1 + 2u, (u8)r5);
    wr8(param_1 + 3u, (u8)r0);
    return;
}
