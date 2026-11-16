#include "tc_rt.h"

void fn_801420d4(u32 param_1)
{
    u32 r3 = 0, r5 = 0, r6 = 0, r30 = 0, r31 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
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
    a.r[1] = 0x376u;
    a.r[2] = 0xffffffffu;
    a.r[3] = 0u;
    a.r[4] = 0xffffffffu;
    r3 = tc_call(0x80050dd4u, &a);
    wr32(param_1, r3);
    a.r[0] = r3;
    r3 = tc_call(0x80037914u, &a);
    wr32(param_1, r3);
    r31 = param_1;
    r30 = 0u;
    do {
        a.r[0] = rd32(param_1);
        a.r[1] = r30;
        r3 = tc_call(0x80037988u, &a);
        wr32(r31 + 8u, r3);
        a.r[0] = r3;
        a.r[1] = 0u;
        r3 = tc_call(0x800510bcu, &a);
        r30 = r30 + 1u;
        wr32(r31 + 0x18u, r3);
        r31 = r31 + 4u;
    } while ((s32)r30 < 4);
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
    a.r[1] = 0x557u;
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
    wr32(param_1 + 0x60u, r3);
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
    return;
}
