#include "tc_rt.h"

static f64 px_fdiv(f64 a, f64 b)
{
    return a / b;
}

void fn_801c1ab8(u32 param_1, s32 param_2, u32 param_3)
{
    u32 r0 = 0, r3 = 0;
    f64 f1 = 0.0, f3 = 0.0, f31 = 0.0, t4 = 0.0, t6 = 0.0, t12 = 0.0, t14 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdfb0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wrf64(0x817fdff0u, 0.0);
    wrf32d(0x817fdff8u, 0.0);
    wrf32d(0x817fdffcu, 0.0);
    wr32(0x817fdfecu, 0u);
    wr32(0x817fdfe8u, 0u);
    wr32(0x817fdfe4u, 0u);
    a.r[0] = param_1;
    a.r[1] = (u32)param_2;
    a.r[2] = param_3;
    a.r[3] = 0u;
    a.r[4] = 0u;
    a.r[5] = 0u;
    a.f[0] = 0.0;
    a.f[1] = 0.0;
    a.f[2] = 0.0;
    (void)tc_call(rd32(rd32(param_1) + 0xcu), &a);
    wr32(0x805713a0u, rd32(0x805713a0u) + 1u);
    wrf32d(param_1 + 0xe8u, (f64)rdf32(param_3));
    wrf32d(param_1 + 0xecu, (f64)rdf32(param_3 + 4u));
    wrf32d(param_1 + 0xf0u, (f64)rdf32(param_3 + 8u));
    wr32(param_1 + 0xf4u, 0xb4u);
    wr32(0x817fdfbcu, 0x47u);
    wr32(0x817fdfb8u, 8u);
    a.r[0] = 0x817fdfb8u;
    a.r[1] = 2u;
    f1 = tc_callf(0x8014a130u, &a);
    f31 = (f64)(f32)px_fdiv(f1, (f64)rdf32(0x80575ce0u));
    t4 = (f64)rdf32((u32)param_2 + 4u);
    t6 = (f64)rdf32((u32)param_2 + 8u);
    wrf32d(0x817fdfccu, (f64)rdf32((u32)param_2));
    wrf32d(0x817fdfd0u, t4);
    wrf32d(0x817fdfd4u, t6);
    a.r[0] = 0x817fdfbcu;
    r3 = tc_call(0x80149604u, &a);
    r3 = r3 ^ 0x80000000u;
    wr32(0x817fdfdcu, r3);
    f3 = rdf64(0x80575ce8u);
    wr32(0x817fdfd8u, 0x43300000u);
    a.f[0] = (f64)rdf32(0x80575cf8u);
    a.f[1] = (f64)(f32)(f31 * (f64)(f32)(rdf64(0x817fdfd8u) - f3));
    a.r[0] = param_1;
    a.r[1] = 1u;
    a.r[2] = 0x817fdfccu;
    a.r[3] = 0u;
    a.r[4] = 0u;
    a.r[5] = 0x408085u;
    (void)tc_call(0x8006f570u, &a);
    wr32(param_1 + 0x64u, rd32(param_1 + 0x64u) & 0xdfffffffu);
    t12 = (f64)rdf32((u32)param_2 + 4u);
    t14 = (f64)rdf32((u32)param_2 + 8u);
    wrf32d(0x817fdfc0u, (f64)rdf32((u32)param_2));
    wrf32d(0x817fdfc4u, t12);
    wrf32d(0x817fdfc8u, t14);
    a.f[0] = (f64)rdf32(0x80575cd8u);
    a.r[0] = 0x8fu;
    a.r[1] = 0x817fdfc0u;
    a.r[2] = 0x804b15c0u;
    a.r[3] = 0x804890c8u;
    r3 = tc_call(0x800d7768u, &a);
    wr32(param_1 + 0xe4u, r3);
    a.r[0] = 0x804b9da0u;
    a.r[1] = 0x2460u;
    r3 = tc_call(0x8010a75cu, &a);
    r0 = rd32(param_1 + 0x48u);
    wr32(param_1 + 0xf8u, r3);
    if (r0 == 0u) {
        a.r[0] = param_1;
        (void)tc_call(0x8006ff58u, &a);
    }
    return;
}
