#include "tc_rt.h"

void fn_801309d0(s32 param_1)
{
    u32 r0 = 0, r3 = 0, r30 = 0, r31 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    r0 = rd32((u32)param_1 + 0x2cu);
    if (r0 != 0u) {
        a.r[0] = r0;
        (void)tc_call(0x800fe9bcu, &a);
    }
    a.r[0] = (u32)param_1 + 0x3cu;
    (void)tc_call(0x80163f60u, &a);
    a.r[0] = rd32((u32)param_1 + 0x864u);
    f1 = tc_callf(0x800fe9bcu, &a);
    r3 = rd32((u32)param_1 + 0x860u);
    if (r3 != 0u) {
        a.r[0] = r3;
        f1 = tc_callf(0x800fe9bcu, &a);
    }
    r3 = rd32((u32)param_1 + 0x34u);
    if (r3 != 0u) {
        a.r[0] = r3;
        f1 = tc_callf(0x800fe9bcu, &a);
    }
    if (((u32)rd8(rd32(rd32((u32)param_1 + 0x2cu) + 0x10u) + 0xbbu) & 1u) != 0u) {
        r31 = (u32)param_1 + 0x5a8u;
        r30 = 0u;
        do {
            a.f[0] = f1;
            a.f[1] = 0.0;
            a.f[2] = 0.0;
            a.f[3] = 0.0;
            a.f[4] = 0.0;
            a.f[5] = 0.0;
            a.f[6] = 0.0;
            a.f[7] = 0.0;
            a.r[0] = r31;
            a.r[3] = 0u;
            a.r[4] = 0u;
            a.r[5] = 0u;
            a.r[6] = 0u;
            a.r[7] = 0u;
            f1 = tc_callf(0x8020f08cu, &a);
            r30 = r30 + 1u;
            r31 = r31 + 0x38u;
        } while ((s32)r30 < 4);
        a.r[0] = (u32)param_1 + 0x7ecu;
        (void)tc_call(0x801e64d0u, &a);
    }
    return;
}
