#include "tc_rt.h"

void fn_80164d64(u32 param_1, u32 param_2, s32 param_3)
{
    u32 r0 = 0;
    TcArgs a = {0};
    if ((u32)param_3 == 5u) {
        wr32(param_1 + 0x124u, 3u);
        return;
    }
    if ((u32)param_3 == 6u) {
        r0 = rd32(param_1 + 0x74u);
        wr32(param_1 + 0x120u, 4u);
        r0 = r0 | 0x80000000u;
        wr32(param_1 + 0x74u, r0);
        a.r[0] = param_1;
        a.r[1] = 1u;
        a.r[2] = (u32)param_3;
        a.f[0] = 0.0;
        (void)tc_call(rd32(rd32(param_1) + 0x88u), &a);
        return;
    }
    a.r[0] = param_1;
    a.r[1] = param_2;
    a.r[2] = (u32)param_3;
    (void)tc_call(0x800da6bcu, &a);
    return;
}
