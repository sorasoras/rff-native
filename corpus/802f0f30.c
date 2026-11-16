#include "tc_rt.h"

void fn_802f0f30(s32 param_1, u32 param_2)
{
    u32 r3 = 0, r31 = 0;
    TcArgs a = {0};
    r3 = tc_call(0x8022c2b0u, &a);
    r31 = r3;
    a.r[0] = (u32)param_1 + 8u;
    a.r[1] = param_2;
    (void)tc_call(0x802debd0u, &a);
    a.r[0] = r31;
    (void)tc_call(0x8022c2d8u, &a);
    return;
}
