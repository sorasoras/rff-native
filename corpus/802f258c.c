#include "tc_rt.h"

void fn_802f258c(s32 param_1)
{
    u32 r3 = 0, r30 = 0, r31 = 0;
    TcArgs a = {0};
    r3 = tc_call(0x8022c2b0u, &a);
    r30 = rd32((u32)param_1 + 0x14u);
    r31 = r3;
    wr32(r30, 0u);
    wr32(r30 + 4u, 0u);
    r3 = tc_call(0x802f46b8u, &a);
    a.r[0] = r3;
    a.r[1] = r30;
    (void)tc_call(0x802f4c2cu, &a);
    a.r[0] = r31;
    (void)tc_call(0x8022c2d8u, &a);
    return;
}
