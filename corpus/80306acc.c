#include "tc_rt.h"

void fn_80306acc(void)
{
    u32 r3 = 0, r4 = 0, r31 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    if ((u32)(s8)rd8(0x80571dc8u) == 0u) {
        wr32(0x8055fd6cu, 0u);
        wr32(0x8055fd70u, 0u);
        wr32(0x8055fd78u, 0u);
        wr32(0x8055fd7cu, 0u);
        wr32(0x8055fd40u, 0u);
        wr32(0x8055fd5cu, 0u);
        wr32(0x8055fd60u, 0u);
        wr32(0x8055fd68u, 0u);
        wr32(0x8055fd6cu, 0x8055fd6cu);
        wr32(0x8055fd70u, 0x8055fd6cu);
        wr32(0x8055fd74u, 0u);
        wr32(0x8055fd78u, 0x8055fd78u);
        wr32(0x8055fd7cu, 0x8055fd78u);
        wr8(0x8055fd84u, 0u);
        a.r[0] = 0x8055fd10u;
        a.r[1] = 0x8055fd30u;
        a.r[2] = 4u;
        (void)tc_call(0x8022ca4cu, &a);
        a.r[0] = 0x8055fd08u;
        (void)tc_call(0x8022efd4u, &a);
        a.r[0] = 0x8055fd44u;
        (void)tc_call(0x8022d534u, &a);
        a.r[0] = 0x8055f9f0u;
        a.r[1] = 0x80306924u;
        a.r[2] = 0x8055f9e0u;
        (void)tc_call(0x802551b8u, &a);
        wr8(0x80571dc8u, 1u);
    }
    a.r[0] = 0x8055fd10u;
    a.r[1] = 1u;
    a.r[2] = 0u;
    f1 = tc_callf(0x8022caacu, &a);
    r4 = tc_lastr4();
    r31 = rd32(0x8055fd78u);
    while (r31 != 0x8055fd78u) {
        r3 = r31;
        r31 = rd32(r31);
        a.r[0] = r3;
        a.r[1] = r4;
        a.r[2] = 0u;
        a.r[3] = 0u;
        a.r[4] = 0u;
        a.f[0] = f1;
        f1 = tc_callf(rd32(rd32(r3 + 8u) + 0x10u), &a);
        r4 = tc_lastr4();
    }
    r3 = tc_call(0x8030de70u, &a);
    a.r[0] = r3;
    (void)tc_call(0x8030e31cu, &a);
    return;
}
