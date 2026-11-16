#include "tc_rt.h"

void fn_8019016c(u32 param_r3)
{
    u32 r3 = 0, r5 = 0, r6 = 0, r28 = 0, r29 = 0, r30 = 0, r31 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    a.r[0] = param_r3;
    (void)tc_call(0x80190488u, &a);
    r3 = tc_call(0x800545e4u, &a);
    f1 = tc_lastf();
    a.f[0] = f1;
    a.f[1] = 0.0;
    a.f[2] = 0.0;
    a.f[3] = 0.0;
    a.f[4] = 0.0;
    a.f[5] = 0.0;
    a.f[6] = 0.0;
    a.f[7] = 0.0;
    a.r[0] = r3;
    a.r[1] = 0x6c0u;
    a.r[2] = 1u;
    a.r[3] = 0u;
    a.r[4] = 0xffffffffu;
    r3 = tc_call(0x80050dd4u, &a);
    r30 = r3;
    a.r[0] = r3;
    r3 = tc_call(0x80045be0u, &a);
    a.r[0] = r3;
    a.r[1] = 0u;
    r3 = tc_call(0x8004bf2cu, &a);
    wr32(param_r3 + 0x4fcu, r3);
    r3 = tc_call(0x800545e4u, &a);
    r6 = r3;
    if (rd32(r3 + 0x10u) != 0u) {
        r5 = rd32(r3 + 0xcu);
        r3 = rd32(r3);
        r6 = r6 + 0x18u;
        a.r[0] = r3;
        a.r[1] = r30;
        a.r[2] = r5;
        a.r[3] = r6;
        (void)tc_call(0x80040e98u, &a);
    } else {
        if (rd32(r3 + 0x20u) != 0u) {
            r3 = r3 + 0x24u;
            a.r[0] = r3;
            a.r[1] = r30;
            (void)tc_call(0x80094ec0u, &a);
        } else {
            r5 = rd32(r3 + 0xcu);
            r3 = rd32(r3);
            r6 = r6 + 0x18u;
            a.r[0] = r3;
            a.r[1] = r30;
            a.r[2] = r5;
            a.r[3] = r6;
            (void)tc_call(0x80040e98u, &a);
        }
    }
    r29 = rd32(param_r3 + 0x4fcu);
    r31 = param_r3;
    r30 = param_r3 + 0x24cu;
    r28 = 0u;
    do {
        a.r[0] = param_r3;
        a.r[1] = r30;
        a.r[2] = r29;
        a.r[3] = (ppc_cntlzw(r28) >> 5u) & 0x7ffffffu;
        a.r[4] = 1u;
        a.f[0] = (f64)rdf32(r31 + 0x49cu);
        a.f[1] = (f64)rdf32(r31 + 0x4a0u);
        a.f[2] = (f64)rdf32(r31 + 0x4a4u);
        a.f[3] = (f64)rdf32(r31 + 0x4a8u);
        a.f[4] = (f64)rdf32(r31 + 0x4acu);
        a.f[5] = (f64)rdf32(r31 + 0x4b0u);
        (void)tc_call(rd32(rd32(param_r3) + 0x28u), &a);
        r28 = r28 + 1u;
        r30 = r30 + 0x94u;
        r31 = r31 + 0x18u;
    } while ((s32)r28 < 4);
    return;
}
