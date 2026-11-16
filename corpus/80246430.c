#include "tc_rt.h"

void fn_80246430(s32 param_1, u32 param_2)
{
    u32 r0 = 0, r3 = 0;
    TcArgs a = {0};
    r3 = tc_call(0x8022c2b0u, &a);
    r0 = rd32((u32)param_1 + 0x1cu);
    wr16((u32)param_1 + 0xa2u, (u16)((param_2 >> 0x10u) & 0xffffu));
    r0 = r0 | 0x4000u;
    wr16((u32)param_1 + 0xa4u, (u16)param_2);
    wr32((u32)param_1 + 0x1cu, r0);
    a.r[0] = r3;
    (void)tc_call(0x8022c2d8u, &a);
    return;
}
