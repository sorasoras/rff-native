#include "tc_rt.h"

void fn_801581cc(u32 param_1, u32 param_2)
{
    u32 r0 = 0, r3 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f3 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdfb0u, 0x817fe000u);
    f2 = (f64)rdf32(param_2 + 8u);
    wr32(0x817fe004u, 0x817ff000u);
    f1 = (f64)rdf32(param_2 + 4u);
    f0 = (f64)rdf32(param_2);
    wr32(0x817fdffcu, 0u);
    wrf32d(0x817fdfbcu, f1);
    wrf32d(0x817fdfb8u, f0);
    wrf32d(0x817fdfc0u, f2);
    a.r[0] = 0x817fdfc8u;
    (void)tc_call(0x80233740u, &a);
    a.r[0] = param_1;
    r3 = tc_call(0x80321010u, &a);
    r0 = rd32(r3 + 0x58u);
    f1 = (f64)rdf32(0x817fdfb8u);
    wr32(0x817fdfc8u, rd32(r3 + 0x54u));
    f2 = (f64)rdf32(0x817fdfbcu);
    wr32(0x817fdfccu, r0);
    f3 = (f64)rdf32(0x817fdfc0u);
    r0 = rd32(r3 + 0x60u);
    wr32(0x817fdfd0u, rd32(r3 + 0x5cu));
    wr32(0x817fdfd4u, r0);
    r0 = rd32(r3 + 0x68u);
    wr32(0x817fdfd8u, rd32(r3 + 0x64u));
    wr32(0x817fdfdcu, r0);
    r0 = rd32(r3 + 0x70u);
    wr32(0x817fdfe0u, rd32(r3 + 0x6cu));
    wr32(0x817fdfe4u, r0);
    r0 = rd32(r3 + 0x78u);
    wr32(0x817fdfe8u, rd32(r3 + 0x74u));
    wr32(0x817fdfecu, r0);
    r0 = rd32(r3 + 0x80u);
    wr32(0x817fdff0u, rd32(r3 + 0x7cu));
    wr32(0x817fdff4u, r0);
    a.f[0] = f1;
    a.f[1] = f2;
    a.f[2] = f3;
    a.r[0] = 0x817fdfc8u;
    a.r[1] = 0x817fdfc8u;
    (void)tc_call(0x80233cb8u, &a);
    a.r[0] = param_1;
    r3 = tc_call(0x80321010u, &a);
    if (r3 != 0u) {
        a.r[0] = param_1;
        r3 = tc_call(0x80321010u, &a);
        a.r[0] = r3;
        a.r[1] = 0x817fdfc8u;
        (void)tc_call(0x80311368u, &a);
    }
    return;
}
