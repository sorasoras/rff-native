#include "tc_rt.h"

void fn_802070d4(s32 param_1)
{
    u32 r4 = 0;
    TcArgs a = {0};
    a.r[0] = (u32)param_1;
    (void)tc_call(0x80150d14u, &a);
    r4 = rd32((u32)param_1 + 0x150u);
    wr8(r4 - 0x7fb79ba4u, (u8)((u32)rd8(r4 - 0x7fb79ba4u) | 8u));
    wr32((u32)param_1 + 0x148u, rd32((u32)param_1 + 0x148u) | 0x200000u);
    return;
}
