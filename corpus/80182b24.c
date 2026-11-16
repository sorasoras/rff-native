#include "tc_rt.h"

void fn_80182b24(u32 param_1)
{
    u32 r0 = 0, r3 = 0, r4 = 0;
    f64 f0 = 0.0, f1 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdfc0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    if (rd32(param_1 + 0x188u) != 0u) {
        a.r[0] = param_1;
        a.r[1] = 1u;
        (void)tc_call(0x80182cbcu, &a);
    }
    f0 = (f64)rdf32(0x805750b8u);
    wrf32d(0x817fdfe8u, f0);
    wrf32d(0x817fdfe4u, f0);
    wrf32d(0x817fdfe0u, f0);
    a.r[0] = param_1;
    a.r[1] = 0x817fdfe0u;
    (void)tc_call(0x80182d38u, &a);
    a.f[0] = (f64)rdf32(0x805750bcu);
    a.r[0] = 0xf1u;
    a.r[1] = 0x817fdfe0u;
    a.r[2] = 0x804b15c0u;
    a.r[3] = 0x804890c8u;
    r3 = tc_call(0x800d7768u, &a);
    f1 = tc_lastf();
    r4 = tc_lastr4();
    wr32(param_1 + 0x188u, r3);
    if (r3 != 0u) {
        a.r[0] = param_1;
        a.r[1] = r4;
        a.r[2] = 0u;
        a.r[3] = 0u;
        a.f[0] = f1;
        f1 = tc_callf(rd32(rd32(param_1) + 0x2cu), &a);
        f0 = (f64)rdf32(0x805750b8u);
        wrf32d(0x817fdfd8u, f1);
        wrf32d(0x817fdfd4u, f0);
        r3 = rd32(0x817fdfd8u);
        wrf32d(0x817fdfdcu, f0);
        r0 = rd32(0x817fdfdcu);
        wr32(0x817fdfc8u, rd32(0x817fdfd4u));
        wr32(0x817fdfccu, r3);
        wr32(0x817fdfd0u, r0);
        a.r[0] = rd32(param_1 + 0x188u);
        a.r[1] = 0x817fdfc8u;
        (void)tc_call(0x801582b4u, &a);
    }
    return;
}
