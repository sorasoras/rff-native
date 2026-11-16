#include "tc_rt.h"

void fn_80097798(s32 param_1)
{
    u32 r3 = 0, r30 = 0, r31 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    a.r[0] = (u32)param_1;
    a.r[1] = 1u;
    (void)tc_call(0x8009a64cu, &a);
    a.r[0] = rd32((u32)param_1 + 0x60u);
    (void)tc_call(0x80213958u, &a);
    r3 = tc_call(0x801567a0u, &a);
    f1 = tc_lastf();
    a.r[0] = r3;
    a.r[1] = tc_lastr4();
    a.r[2] = 0u;
    a.r[3] = 0u;
    a.f[0] = f1;
    (void)tc_call(rd32(rd32(r3) + 0xcu), &a);
    a.r[0] = rd32((u32)param_1 + 0x4cu);
    (void)tc_call(0x800abcb4u, &a);
    a.r[0] = 0xffffffffu;
    a.r[1] = 0xffffffffu;
    r3 = tc_call(0x800a74e4u, &a);
    if (r3 == 7u) {
        r31 = 1u;
        do {
            a.r[0] = r31;
            r3 = tc_call(0x800a4500u, &a);
            if (r3 != 0u) {
                a.r[0] = r31;
                (void)tc_call(0x800a4490u, &a);
            }
            r31 = r31 + 1u;
        } while ((s32)r31 < 33);
    }
    wr32(rd32((u32)param_1 + 0x2cu) + 0x50u, 0u);
    a.r[0] = rd32((u32)param_1 + 0x2cu);
    f1 = tc_callf(0x8011bbf0u, &a);
    r30 = (u32)rd8(0x8049912au);
    if (r30 != 0x21u) {
        r3 = tc_call(0x80097da4u, &a);
        r3 = rd32(r3);
        a.r[0] = r3;
        a.r[1] = r30;
        f1 = tc_callf(0x800a2d20u, &a);
    }
    a.f[0] = f1;
    a.f[1] = 0.0;
    a.f[2] = 0.0;
    a.f[3] = 0.0;
    a.f[4] = 0.0;
    a.f[5] = 0.0;
    a.f[6] = 0.0;
    a.f[7] = 0.0;
    a.r[0] = 0u;
    a.r[1] = 0x19u;
    a.r[2] = 0x80097758u;
    a.r[3] = 0u;
    a.r[4] = 0u;
    a.r[5] = 0u;
    a.r[6] = 0u;
    a.r[7] = 0u;
    f1 = tc_callf(0x800a70b0u, &a);
    a.f[0] = f1;
    a.f[1] = 0.0;
    a.f[2] = 0.0;
    a.f[3] = 0.0;
    a.f[4] = 0.0;
    a.f[5] = 0.0;
    a.f[6] = 0.0;
    a.f[7] = 0.0;
    a.r[0] = 2u;
    a.r[1] = 0x19u;
    a.r[2] = 0x80097758u;
    a.r[3] = 0u;
    a.r[4] = 0u;
    a.r[5] = 0u;
    a.r[6] = 0u;
    a.r[7] = 0u;
    f1 = tc_callf(0x800a70b0u, &a);
    if (r30 != 0x21u) {
        a.f[0] = f1;
        a.f[1] = 0.0;
        a.f[2] = 0.0;
        a.f[3] = 0.0;
        a.f[4] = 0.0;
        a.f[5] = 0.0;
        a.f[6] = 0.0;
        a.f[7] = 0.0;
        a.r[0] = 1u;
        a.r[1] = 0x19u;
        a.r[2] = 0x80097758u;
        a.r[3] = 0u;
        a.r[4] = 0u;
        a.r[5] = 0u;
        a.r[6] = 0u;
        a.r[7] = 0u;
        (void)tc_call(0x800a70b0u, &a);
    }
    wr32(rd32((u32)param_1 + 0x4cu) + 0x48u, 0u);
    a.r[0] = (u32)param_1;
    a.r[1] = 0u;
    (void)tc_call(0x8009a64cu, &a);
    return;
}
