#include "tc_rt.h"

static f64 px_fdiv(f64 a, f64 b)
{
    return a / b;
}

u32 fn_801afa98(u32 param_1)
{
    u32 r3 = 0, r31 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f31 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdfd0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wrf64(0x817fdff0u, 0.0);
    wrf32d(0x817fdff8u, 0.0);
    wrf32d(0x817fdffcu, 0.0);
    wr32(0x817fdfecu, 0u);
    wr32(0x817fdfe8u, 0u);
    wr32(0x817fdfdcu, rd32(param_1 + 0x150u));
    wr32(0x817fdfd8u, 0xau);
    a.r[0] = 0x817fdfd8u;
    a.r[1] = 4u;
    f1 = tc_callf(0x8014a130u, &a);
    f31 = (f64)(f32)px_fdiv(f1, (f64)rdf32(0x80575b24u));
    a.r[0] = param_1;
    a.r[1] = tc_lastr4();
    a.f[0] = f1;
    a.f[1] = 0.0;
    f1 = tc_callf(rd32(rd32(param_1) + 0x2cu), &a);
    a.f[0] = f1;
    a.r[0] = 0xa0u;
    a.r[1] = 5u;
    r3 = tc_call(0x8017748cu, &a);
    r31 = r3;
    if (r3 != 0u) {
        a.r[0] = r3;
        f1 = tc_callf(0x801af464u, &a);
        a.r[0] = param_1;
        a.r[1] = tc_lastr4();
        a.f[0] = f1;
        a.f[1] = 0.0;
        r3 = tc_call(rd32(rd32(param_1) + 0x28u), &a);
        f2 = (f64)rdf32(r3);
        wrf32d(r31 + 0x100u, f2);
        f1 = (f64)rdf32(r3 + 4u);
        wrf32d(r31 + 0x104u, f1);
        f0 = (f64)rdf32(r3 + 8u);
        wrf32d(r31 + 0x108u, f0);
        wrf32d(r31 + 8u, f2);
        wrf32d(r31 + 0xcu, f1);
        wrf32d(r31 + 0x10u, f0);
        wr32(r31 + 0x124u, 0x408047u);
        a.r[0] = r31;
        a.r[1] = param_1;
        (void)tc_call(0x80177d54u, &a);
        a.r[0] = 0x817fdfdcu;
        r3 = tc_call(0x80149604u, &a);
        r3 = r3 ^ 0x80000000u;
        wr32(0x817fdfe4u, r3);
        f1 = rdf64(0x80575ae8u);
        wr32(0x817fdfe0u, 0x43300000u);
        f0 = (f64)(f32)(f31 * (f64)(f32)(rdf64(0x817fdfe0u) - f1));
        wrf32d(r31 + 0x130u, f0);
        wrf32d(r31 + 0x24u, f0);
        a.r[0] = 0x804b9da0u;
        a.r[1] = 0x24cfu;
        (void)tc_call(0x8010a75cu, &a);
    }
    return 0u;
}
