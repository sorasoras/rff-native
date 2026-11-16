#include "tc_rt.h"

void fn_802214ec(s32 param_1, u32 param_r4, u32 param_r5, u32 param_r6, u32 param_r7)
{
    u32 r5 = 0;
    TcArgs a = {0};
    a.r[0] = (u32)param_1;
    a.r[1] = param_r4;
    a.r[2] = param_r5;
    a.r[3] = param_r6;
    a.r[4] = param_r7;
    (void)tc_call(0x800afb38u, &a);
    r5 = rd32((u32)param_1 + 0x150u);
    wr8(r5 - 0x7fb79ba4u, (u8)((u32)rd8(r5 - 0x7fb79ba4u) | 4u));
    return;
}
