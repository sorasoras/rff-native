#include "tc_rt.h"

void fn_801e6e88(s32 param_1)
{
    u32 r4 = 0;
    TcArgs a = {0};
    a.r[0] = (u32)param_1;
    (void)tc_call(0x80152200u, &a);
    a.r[0] = 0x80486da8u;
    a.r[1] = (u32)param_1;
    (void)tc_call(0x800bca34u, &a);
    r4 = rd32((u32)param_1 + 0x150u);
    wr8(r4 - 0x7fb79ba4u, (u8)((u32)rd8(r4 - 0x7fb79ba4u) | 4u));
    wr32((u32)param_1 + 0x148u, rd32((u32)param_1 + 0x148u) | 0x80000000u);
    wr32(0x8057118cu, rd32(0x8057118cu) & 0xfffdffffu);
    return;
}
