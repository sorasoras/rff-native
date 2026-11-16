#include "tc_rt.h"

s32 fn_80210f48(s32 param_1, u32 param_r4, u32 param_r5, u32 param_r7, u32 param_r8)
{
    u32 r3 = 0, r31 = 0;
    TcArgs a = {0};
    a.r[0] = (u32)param_1;
    a.r[1] = param_r4;
    a.r[2] = param_r5;
    a.r[4] = param_r7;
    a.r[5] = param_r8;
    r3 = tc_call(0x8007d808u, &a);
    r31 = r3;
    if (r3 != 0u) {
        a.r[0] = (u32)param_1 + 0x1a0u;
        a.r[1] = rd32((u32)param_1 + 0x70u);
        (void)tc_call(0x80051534u, &a);
    }
    return (s32)r31;
}
