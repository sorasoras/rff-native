#include "tc_rt.h"

void fn_80306cf0(u32 param_r3)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r28 = 0, r29 = 0, r30 = 0, r31 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdfd0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdfecu, 0u);
    wr32(0x817fdff0u, 0u);
    wr32(0x817fdff4u, 0u);
    wr32(0x817fdff8u, 0u);
    wr32(0x817fdffcu, 0u);
    for (;;) {
        a.r[0] = param_r3 + 0x320u;
        a.r[1] = 0x817fdfd8u;
        a.r[2] = 1u;
        f1 = tc_callf(0x8022cb74u, &a);
        r4 = tc_lastr4();
        r0 = rd32(0x817fdfd8u);
        if (r0 != 1u) {
            if (r0 == 2u) break;
        } else {
            r28 = param_r3 + 0x354u;
            a.r[0] = r28;
            f1 = tc_callf(0x8022d56cu, &a);
            r4 = tc_lastr4();
            r31 = rd32(param_r3 + 0x37cu);
            r30 = param_r3 + 0x37cu;
            while (r31 != r30) {
                r3 = r31;
                r31 = rd32(r31);
                a.r[0] = r3;
                a.r[1] = r4;
                a.r[2] = 0u;
                a.f[0] = f1;
                f1 = tc_callf(rd32(rd32(r3 + 8u) + 0xcu), &a);
                r4 = tc_lastr4();
            }
            r3 = tc_call(0x802302b4u, &a);
            r29 = r3;
            r3 = tc_call(0x802f46b8u, &a);
            a.r[0] = r3;
            (void)tc_call(0x802f4cc0u, &a);
            r3 = tc_call(0x802f08ccu, &a);
            a.r[0] = r3;
            f1 = tc_callf(0x802f0ae8u, &a);
            r4 = tc_lastr4();
            r30 = rd32(param_r3 + 0x388u);
            r31 = param_r3 + 0x388u;
            while (r30 != r31) {
                r3 = r30;
                r30 = rd32(r30);
                a.r[0] = r3;
                a.r[1] = r4;
                a.r[2] = 0u;
                a.f[0] = f1;
                f1 = tc_callf(rd32(rd32(r3 + 8u) + 0xcu), &a);
                r4 = tc_lastr4();
            }
            r3 = tc_call(0x802f74ecu, &a);
            a.r[0] = r3;
            (void)tc_call(0x802f7668u, &a);
            (void)tc_call(0x8030e918u, &a);
            r3 = tc_call(0x8030de70u, &a);
            a.r[0] = r3;
            (void)tc_call(0x8030e26cu, &a);
            r3 = tc_call(0x802302b4u, &a);
            f1 = tc_lastf();
            r4 = tc_lastr4();
            r30 = rd32(param_r3 + 0x37cu);
            wr32(param_r3 + 0x390u, r3 - r29);
            r31 = param_r3 + 0x37cu;
            while (r30 != r31) {
                r3 = r30;
                r30 = rd32(r30);
                a.r[0] = r3;
                a.r[1] = r4;
                a.r[2] = 0u;
                a.f[0] = f1;
                f1 = tc_callf(rd32(rd32(r3 + 8u) + 0x10u), &a);
                r4 = tc_lastr4();
            }
            a.r[0] = r28;
            (void)tc_call(0x8022d648u, &a);
        }
    }
    r30 = rd32(param_r3 + 0x388u);
    r31 = param_r3 + 0x388u;
    while (r30 != r31) {
        r3 = r30;
        r30 = rd32(r30);
        a.r[0] = r3;
        a.r[1] = r4;
        a.r[2] = 0u;
        a.f[0] = f1;
        f1 = tc_callf(rd32(rd32(r3 + 8u) + 0x14u), &a);
        r4 = tc_lastr4();
    }
    return;
}
