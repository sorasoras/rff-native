#include "tc_rt.h"

u32 fn_802478dc(u32 param_1)
{
    u32 r3 = 0, r4 = 0, r30 = 0, r31 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    r3 = tc_call(0x8022c2b0u, &a);
    r30 = r3;
    wr32(param_1 + 0x34u, rd32(param_1 + 0x34u) | 1u);
    a.r[0] = param_1;
    r3 = tc_call(0x80247d04u, &a);
    if (r3 == 0u) {
        r3 = tc_call(0x8022c2b0u, &a);
        f1 = tc_lastf();
        r4 = tc_lastr4();
        r31 = r3;
        r3 = rd32(param_1);
        wr32(param_1 + 0x34u, rd32(param_1 + 0x34u) | 1u);
        if (r3 != 0u) {
            a.r[0] = r3;
            a.r[1] = r4;
            a.f[0] = f1;
            f1 = tc_callf(rd32(0x80570b7cu), &a);
            r4 = tc_lastr4();
            wr32(param_1, 0u);
        }
        r3 = rd32(param_1 + 4u);
        if (r3 != 0u) {
            a.r[0] = r3;
            a.r[1] = r4;
            a.f[0] = f1;
            f1 = tc_callf(rd32(0x80570b7cu), &a);
            r4 = tc_lastr4();
            wr32(param_1 + 4u, 0u);
        }
        r3 = rd32(param_1 + 8u);
        if (r3 != 0u) {
            a.r[0] = r3;
            a.r[1] = r4;
            a.f[0] = f1;
            (void)tc_call(rd32(0x80570b7cu), &a);
            wr32(param_1 + 8u, 0u);
        }
        a.r[0] = r31;
        (void)tc_call(0x8022c2d8u, &a);
        a.r[0] = r30;
        (void)tc_call(0x8022c2d8u, &a);
        r3 = 0u;
    } else {
        wr32(param_1 + 0x34u, (rd32(param_1 + 0x34u) | 2u) & 0xfffffffeu);
        a.r[0] = r30;
        (void)tc_call(0x8022c2d8u, &a);
        r3 = 1u;
    }
    return r3;
}
