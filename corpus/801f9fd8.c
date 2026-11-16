#include "tc_rt.h"

void fn_801f9fd8(u32 param_1)
{
    u32 r3 = 0, r4 = 0, r31 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    r31 = rd32(param_1 + 0x18u);
    if (r31 != 0u) {
        a.r[0] = 0u;
        r3 = tc_call(0x801b3a7cu, &a);
        a.r[0] = r3;
        a.r[1] = r31;
        f1 = tc_callf(0x801b3a38u, &a);
        r4 = tc_lastr4();
        wr32(param_1 + 0x18u, 0u);
    }
    r3 = rd32(param_1);
    if (r3 != 0u) {
        a.r[0] = r3;
        a.r[1] = r4;
        a.f[0] = f1;
        f1 = tc_callf(rd32(rd32(r3 + 0xc8u) + 0x10u), &a);
        r4 = tc_lastr4();
        r3 = rd32(param_1);
        if (r3 != 0u) {
            a.r[0] = r3;
            a.r[1] = 1u;
            a.f[0] = f1;
            f1 = tc_callf(rd32(rd32(r3 + 0xc8u) + 8u), &a);
            r4 = tc_lastr4();
        }
        wr32(param_1, 0u);
    }
    r3 = rd32(param_1 + 4u);
    if (r3 != 0u) {
        a.r[0] = r3;
        a.r[1] = r4;
        a.f[0] = f1;
        f1 = tc_callf(rd32(rd32(r3 + 0xc8u) + 0x10u), &a);
        r4 = tc_lastr4();
        r3 = rd32(param_1 + 4u);
        if (r3 != 0u) {
            a.r[0] = r3;
            a.r[1] = 1u;
            a.f[0] = f1;
            f1 = tc_callf(rd32(rd32(r3 + 0xc8u) + 8u), &a);
            r4 = tc_lastr4();
        }
        wr32(param_1 + 4u, 0u);
    }
    r3 = rd32(param_1 + 8u);
    if (r3 != 0u) {
        a.r[0] = r3;
        a.r[1] = r4;
        a.f[0] = f1;
        f1 = tc_callf(rd32(rd32(r3 + 0xc8u) + 0x10u), &a);
        r4 = tc_lastr4();
        r3 = rd32(param_1 + 8u);
        if (r3 != 0u) {
            a.r[0] = r3;
            a.r[1] = 1u;
            a.f[0] = f1;
            f1 = tc_callf(rd32(rd32(r3 + 0xc8u) + 8u), &a);
            r4 = tc_lastr4();
        }
        wr32(param_1 + 8u, 0u);
    }
    r3 = rd32(param_1 + 0xcu);
    if (r3 != 0u) {
        a.r[0] = r3;
        a.r[1] = r4;
        a.f[0] = f1;
        f1 = tc_callf(rd32(rd32(r3 + 0xc8u) + 0x10u), &a);
        r4 = tc_lastr4();
        r3 = rd32(param_1 + 0xcu);
        if (r3 != 0u) {
            a.r[0] = r3;
            a.r[1] = 1u;
            a.f[0] = f1;
            f1 = tc_callf(rd32(rd32(r3 + 0xc8u) + 8u), &a);
            r4 = tc_lastr4();
        }
        wr32(param_1 + 0xcu, 0u);
    }
    r3 = rd32(param_1 + 0x10u);
    if (r3 != 0u) {
        a.r[0] = r3;
        a.r[1] = r4;
        a.f[0] = f1;
        f1 = tc_callf(rd32(rd32(r3 + 0xc8u) + 0x10u), &a);
        r3 = rd32(param_1 + 0x10u);
        if (r3 != 0u) {
            a.r[0] = r3;
            a.r[1] = 1u;
            a.f[0] = f1;
            (void)tc_call(rd32(rd32(r3 + 0xc8u) + 8u), &a);
        }
        wr32(param_1 + 0x10u, 0u);
    }
    return;
}
