#include "tc_rt.h"

static f64 px_fdiv(f64 a, f64 b)
{
    return a / b;
}

void fn_80175dac(s32 param_1)
{
    u32 r3 = 0, r31 = 0;
    f64 f1 = 0.0, f3 = 0.0, f31 = 0.0;
    TcArgs a = {0};
    a.r[0] = (u32)param_1;
    (void)tc_call(0x80175e44u, &a);
    r31 = rd32((u32)param_1 + 0x78u);
    a.r[0] = 0x8046ae40u;
    a.r[1] = rd32((u32)param_1 + 0xf8u);
    a.r[2] = 0u;
    r3 = tc_call(0x8013ec7cu, &a);
    a.f[0] = (f64)rdf32(0x80574f50u);
    a.r[0] = r31;
    a.r[1] = r3;
    a.r[2] = 0u;
    (void)tc_call(0x80035740u, &a);
    f31 = (f64)rdf32(rd32(r31 + 0x48u) + 0x18u);
    f1 = tc_callf(0x80040a00u, &a);
    f3 = (f64)rdf32(0x80574f58u);
    f1 = (f64)(f32)(f3 * f1);
    f1 = (f64)(f32)((f64)(f32)px_fdiv(f31, f3) * f1);
    wrf32d(r31 + 0x54u, (f64)(f32)((f64)rdf32(r31 + 0x58u) * f1));
    return;
}
