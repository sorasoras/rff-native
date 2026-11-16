#include "tc_rt.h"

void fn_800802f8(s32 param_1, s32 param_2, s32 param_3, u32 param_4, u32 param_5)
{
    TcArgs a = {0};
    wr32((u32)param_3 + 0x320u, (u32)param_1);
    wr32(rd32((u32)param_1 + 0x324u) + (((u32)param_2 << 2u) & 0xfffffffcu), (u32)param_3);
    a.r[0] = (u32)param_3;
    a.r[1] = (u32)param_1;
    a.r[2] = param_4;
    a.r[3] = param_5;
    (void)tc_call(0x800651d4u, &a);
    wr32((u32)param_3 + 0x9cu, rd32((u32)param_3 + 0x9cu) | 0x22000000u);
    return;
}
