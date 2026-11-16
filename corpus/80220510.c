#include "tc_rt.h"

void fn_80220510(s32 param_1)
{
    u32 r3 = 0, r30 = 0, r31 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    r30 = 0u;
    r31 = (u32)param_1;
    while ((s32)r30 < (s32)rd32((u32)param_1 + 0xcu)) {
        a.r[0] = rd32(r31 + 0x2cu);
        f1 = tc_callf(0x800fe9bcu, &a);
        a.f[0] = f1;
        a.f[1] = 0.0;
        a.f[2] = 0.0;
        a.f[3] = 0.0;
        a.f[4] = 0.0;
        a.f[5] = 0.0;
        a.f[6] = 0.0;
        a.f[7] = 0.0;
        a.r[0] = rd32((u32)param_1 + 0xbacu);
        a.r[3] = 0u;
        a.r[4] = 0u;
        a.r[5] = 0u;
        a.r[6] = 0u;
        a.r[7] = 0u;
        r3 = tc_call(0x801ebe1cu, &a);
        a.r[0] = r3;
        a.r[1] = rd32(r31 + 0x84u);
        f1 = tc_callf(0x801ed110u, &a);
        a.f[0] = f1;
        a.f[1] = 0.0;
        a.f[2] = 0.0;
        a.f[3] = 0.0;
        a.f[4] = 0.0;
        a.f[5] = 0.0;
        a.f[6] = 0.0;
        a.f[7] = 0.0;
        a.r[0] = rd32((u32)param_1 + 0xbacu);
        a.r[3] = 0u;
        a.r[4] = 0u;
        a.r[5] = 0u;
        a.r[6] = 0u;
        a.r[7] = 0u;
        r3 = tc_call(0x801ebe1cu, &a);
        a.r[0] = r3;
        a.r[1] = rd32(r31 + 0x80u);
        (void)tc_call(0x801ec6bcu, &a);
        r31 = r31 + 0x5cu;
        r30 = r30 + 1u;
    }
    return;
}
