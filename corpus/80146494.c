#include "tc_rt.h"

static f32 px_w2f(u32 x)
{
    union { f32 f; u32 w; } v;
    v.w = x;
    return v.f;
}

void fn_80146494(u32 param_1)
{
    u32 r0 = 0, r3 = 0, r4 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f3 = 0.0, f4 = 0.0, f30 = 0.0, f31 = 0.0;
    TcArgs a = {0};
    f1 = (f64)rdf32(0x805745e0u);
    wrf32d(param_1 + 0xa30u, (f64)rdf32(0x804890d4u));
    wrf32d(param_1 + 0xa34u, (f64)rdf32(0x804890d8u));
    wrf32d(param_1 + 0xa38u, (f64)rdf32(0x804890dcu));
    r3 = param_1 + 0xa30u;
    a.f[0] = f1;
    a.r[0] = r3;
    a.r[1] = r3;
    f1 = tc_callf(0x802343c8u, &a);
    a.r[0] = param_1;
    a.r[1] = tc_lastr4();
    a.r[2] = 0u;
    a.f[0] = f1;
    a.f[1] = 0.0;
    a.f[2] = 0.0;
    a.f[3] = 0.0;
    f1 = tc_callf(rd32(rd32(param_1) + 0x2cu), &a);
    f31 = f1;
    r0 = rd32(param_1 + 0xa38u);
    wr32(0x817fdfc8u, rd32(param_1 + 0xa30u));
    a.f[0] = f1;
    f1 = tc_callf(0x80262704u, &a);
    f30 = (f64)(f32)f1;
    a.f[0] = f31;
    f1 = tc_callf(0x80262b10u, &a);
    f4 = (f64)(f32)f1;
    f1 = (f64)px_w2f(r0);
    f3 = (f64)rdf32(0x817fdfc8u);
    f0 = (f64)(f32)(f1 * f30);
    f2 = (f64)(f32)(f1 * f4);
    f1 = -f4;
    f2 = ppc_fmadds(f3, f30, f2);
    f0 = ppc_fmadds(f3, f1, f0);
    wrf32d(param_1 + 0xa30u, f2);
    wrf32d(param_1 + 0xa38u, f0);
    a.r[0] = param_1;
    a.r[1] = tc_lastr4();
    a.r[2] = 0u;
    a.f[0] = f1;
    a.f[1] = f2;
    a.f[2] = f3;
    a.f[3] = f4;
    r3 = tc_call(rd32(rd32(param_1) + 0x28u), &a);
    r4 = r3;
    r3 = param_1 + 0xa30u;
    a.r[0] = r3;
    a.r[1] = r4;
    a.r[2] = r3;
    (void)tc_call(0x80234380u, &a);
    a.f[0] = (f64)rdf32(param_1 + 0xa30u);
    a.f[1] = (f64)rdf32(param_1 + 0xa38u);
    a.r[0] = (rd32(0x80471a18u) * 0x4150u) - 0x7fb92738u;
    a.r[1] = param_1 + 0xa40u;
    a.r[2] = rd32(param_1 + 0xbcu);
    r3 = tc_call(0x8008b9e0u, &a);
    wr32(param_1 + 0xa44u, r3);
    return;
}
