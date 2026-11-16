#include "tc_rt.h"

void fn_802f6f30(u32 param_1)
{
    u32 r3 = 0, r4 = 0, r31 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    a.r[0] = param_1;
    a.r[1] = 0u;
    a.r[2] = 0u;
    a.f[0] = 0.0;
    r3 = tc_call(rd32(rd32(param_1) + 0x24u), &a);
    f1 = tc_lastf();
    r31 = r3;
    a.r[0] = r3;
    a.r[1] = tc_lastr4();
    a.r[2] = 0u;
    a.f[0] = f1;
    r3 = tc_call(rd32(rd32(r3) + 0x18u), &a);
    f1 = tc_lastf();
    r4 = tc_lastr4();
    if (r3 != 0u) {
        if ((u32)rd8(param_1 + 0x7bu) != 0u) {
            wrf32d(r31 + 4u, (f64)rdf32(0x805775acu));
        }
        a.r[0] = r31;
        a.r[1] = r4;
        a.r[2] = 0u;
        a.f[0] = f1;
        f1 = tc_callf(rd32(rd32(r31) + 0x10u), &a);
        r4 = tc_lastr4();
    }
    wr32(param_1 + 0x90u, 0xffffffffu);
    a.r[0] = param_1;
    a.r[1] = r4;
    a.r[2] = 0u;
    a.f[0] = f1;
    r3 = tc_call(rd32(rd32(param_1) + 0x24u), &a);
    f1 = tc_lastf();
    r4 = tc_lastr4();
    wr32(r3 + 0xccu, 0xffffffffu);
    r3 = rd32(param_1 + 8u);
    if (r3 != 0u) {
        a.r[0] = r3;
        f1 = tc_callf(0x8030571cu, &a);
        r4 = tc_lastr4();
    }
    r3 = rd32(param_1 + 0xcu);
    if (r3 != 0u) {
        a.r[0] = r3;
        f1 = tc_callf(0x8030571cu, &a);
        r4 = tc_lastr4();
    }
    a.r[0] = param_1;
    a.r[1] = r4;
    a.r[2] = 0u;
    a.f[0] = f1;
    r3 = tc_call(rd32(rd32(param_1) + 0x18u), &a);
    f1 = tc_lastf();
    r4 = tc_lastr4();
    if (r3 != 0u) {
        a.r[0] = param_1;
        a.r[1] = r4;
        a.r[2] = 0u;
        a.f[0] = f1;
        f1 = tc_callf(rd32(rd32(param_1) + 0x1cu), &a);
    }
    if (rd32(param_1 + 4u) != 0u) {
        a.r[0] = rd32(param_1 + 0x10u);
        a.r[1] = param_1;
        f1 = tc_callf(0x803063dcu, &a);
    }
    r3 = rd32(param_1 + 0x10u);
    if (r3 != 0u) {
        a.r[0] = r3;
        a.r[1] = param_1;
        f1 = tc_callf(0x803060d0u, &a);
    }
    r3 = rd32(param_1 + 0x18u);
    if (r3 != 0u) {
        a.r[0] = r3;
        a.r[1] = param_1;
        f1 = tc_callf(0x802f93b4u, &a);
    }
    r3 = rd32(param_1 + 0x24u);
    if (r3 != 0u) {
        a.r[0] = r3;
        a.r[1] = rd32(param_1 + 0x28u);
        a.r[2] = param_1;
        a.f[0] = f1;
        (void)tc_call(rd32(rd32(r3) + 0x10u), &a);
        wr32(param_1 + 0x28u, 0u);
    }
    wr8(param_1 + 0x79u, 0u);
    wr8(param_1 + 0x7bu, 0u);
    return;
}
