#include "tc_rt.h"

void fn_801cbce4(s32 param_1)
{
    u32 r3 = 0;
    TcArgs a = {0};
    r3 = tc_call(0x802f08ccu, &a);
    a.r[0] = r3;
    a.r[1] = rd32(rd32((u32)param_1 + 0x20u) + 0x2b8u);
    a.r[2] = 0x64u;
    (void)tc_call(0x802f13f4u, &a);
    return;
}
