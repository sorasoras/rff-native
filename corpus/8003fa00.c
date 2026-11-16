#include "tc_rt.h"

void fn_8003fa00(s32 param_1, u32 param_2, u32 param_3)
{
    u32 r3 = 0, r29 = 0, r30 = 0, r31 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    a.r[0] = (u32)param_1;
    a.r[1] = param_2;
    r3 = tc_call(0x8003f91cu, &a);
    r31 = r3;
    f1 = tc_callf(0x8004b024u, &a);
    r30 = rd32((u32)param_1 + 0x18u);
    r29 = 0u;
    while ((s32)r29 < (s32)(s8)rd8((u32)param_1 + 0x17u)) {
        a.r[0] = (u32)param_1;
        a.r[1] = r30;
        a.r[2] = param_3;
        a.r[3] = r31;
        a.f[0] = f1;
        f1 = tc_callf(rd32(r30 + 8u), &a);
        r29 = r29 + 1u;
        r30 = r30 + 0x10u;
    }
    (void)tc_call(0x8004b0d0u, &a);
    return;
}
