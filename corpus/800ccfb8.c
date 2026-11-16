#include "tc_rt.h"

void fn_800ccfb8(s32 param_1, u32 param_2, u32 param_3)
{
    u32 r3 = 0;
    TcArgs a = {0};
    a.r[0] = (u32)param_1;
    a.r[1] = param_2;
    a.r[2] = param_3;
    a.r[3] = 0u;
    a.r[4] = 0u;
    a.f[0] = 0.0;
    r3 = tc_call(rd32(rd32((u32)param_1 + 0x10a4u) + 8u), &a);
    a.r[0] = (u32)param_1;
    a.r[1] = r3;
    a.r[2] = 0u;
    a.r[3] = 0u;
    a.r[4] = param_3;
    (void)tc_call(0x800cd330u, &a);
    return;
}
