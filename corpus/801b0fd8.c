#include "tc_rt.h"

void fn_801b0fd8(u32 param_1)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r5 = 0, r12 = 0, r31 = 0;
    f64 f0 = 0.0, f1 = 0.0, f31 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdfc0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wrf64(0x817fdff0u, 0.0);
    wrf32d(0x817fdff8u, 0.0);
    wrf32d(0x817fdffcu, 0.0);
    f0 = (f64)rdf32(0x80575b78u);
    wr32(0x817fdfecu, 0u);
    wrf32d(0x817fdfdcu, f0);
    wrf32d(0x817fdfd8u, f0);
    wrf32d(0x817fdfd4u, f0);
    a.r[0] = 0x817fdfd4u;
    a.r[1] = param_1;
    f1 = tc_callf(0x801b0ef0u, &a);
    f31 = f1;
    r3 = tc_call(0x801b0c80u, &a);
    f1 = tc_lastf();
    r4 = tc_lastr4();
    r31 = r3;
    if (r3 != 0u) {
        a.r[0] = r3;
        a.r[1] = r4;
        a.r[2] = 0u;
        a.f[0] = f1;
        r3 = tc_call(rd32(rd32(r3) + 0x28u), &a);
        f1 = tc_lastf();
        r5 = rd32(r3);
        wr32(0x817fdfccu, rd32(r3 + 4u));
        r0 = rd32(r3 + 8u);
        f0 = (f64)rdf32(0x817fdfccu);
        wr32(0x817fdfc8u, r5);
        wrf32d(0x817fdfd8u, f0);
        r12 = rd32(r31);
        wr32(0x817fdfd0u, r0);
        r12 = rd32(r12 + 0x1cu);
        a.r[0] = r31;
        a.r[1] = 0x817fdfd4u;
        a.r[2] = r5;
        a.f[0] = f1;
        (void)tc_call(r12, &a);
        a.r[0] = r31;
        a.r[1] = tc_lastr4();
        a.r[2] = 0u;
        a.f[0] = f31;
        (void)tc_call(rd32(rd32(r31) + 0x24u), &a);
        a.r[0] = r31;
        a.r[1] = 1u;
        (void)tc_call(0x80182cbcu, &a);
    }
    return;
}
