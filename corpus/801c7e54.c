#include "tc_rt.h"

static f64 px_fdiv(f64 a, f64 b)
{
    return a / b;
}

void fn_801c7e54(u32 param_1)
{
    u32 r3 = 0, r4 = 0, r30 = 0;
    f64 f1 = 0.0, f2 = 0.0, f3 = 0.0, f31 = 0.0;
    TcArgs a = {0};
    wr32(param_1 + 0x158u, 0u);
    r30 = rd32(param_1 + 0x78u);
    a.r[0] = 0x8046ae40u;
    a.r[1] = rd32(param_1 + 0xf8u);
    a.r[2] = 0u;
    r3 = tc_call(0x8013ec7cu, &a);
    a.f[0] = (f64)rdf32(0x80575dc4u);
    a.r[0] = r30;
    a.r[1] = r3;
    a.r[2] = 0u;
    (void)tc_call(0x80035740u, &a);
    f31 = (f64)rdf32(rd32(r30 + 0x48u) + 0x18u);
    f1 = tc_callf(0x80040a00u, &a);
    r4 = tc_lastr4();
    f3 = (f64)rdf32(0x80575dc8u);
    f2 = (f64)(f32)px_fdiv(f31, f3);
    f1 = (f64)(f32)(f3 * f1);
    f1 = (f64)(f32)(f2 * f1);
    wrf32d(r30 + 0x54u, (f64)(f32)((f64)rdf32(r30 + 0x58u) * f1));
    if ((param_1 + 0x80u) != 0u) {
        wr32(param_1 + 0x98u, 0u);
    }
    a.r[0] = param_1;
    a.r[1] = r4;
    a.r[2] = 0u;
    a.f[0] = f1;
    a.f[1] = f2;
    a.f[2] = f3;
    r3 = tc_call(rd32(rd32(param_1) + 0x28u), &a);
    wrf32d(param_1 + 0x130u, (f64)rdf32(r3 + 4u));
    return;
}
