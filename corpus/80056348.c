#include "tc_rt.h"

static f32 px_w2f(u32 x)
{
    union { f32 f; u32 w; } v;
    v.w = x;
    return v.f;
}

void fn_80056348(u32 param_1, u32 param_2, u32 param_3)
{
    u32 r0 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0;
    f64 f1 = 0.0, f2 = 0.0, f3 = 0.0, f4 = 0.0, f5 = 0.0, f29 = 0.0, f30 = 0.0, f31 = 0.0;
    TcArgs a = {0};
    f5 = (f64)rdf32(0x80572344u);
    wrf32d(param_3, (f64)rdf32(param_1 + 0x1b8u));
    f4 = (f64)rdf32(0x80572358u);
    wrf32d(param_3 + 4u, (f64)rdf32(param_1 + 0x1bcu));
    wrf32d(param_3 + 8u, (f64)rdf32(param_1 + 0x1c0u));
    wrf32d(param_2, (f64)rdf32(param_1 + 0x1c4u));
    f30 = (f64)rdf32(param_1 + 0x1c8u);
    r7 = rd32(param_2);
    wrf32d(param_2 + 4u, f30);
    r6 = rd32(param_2 + 4u);
    wrf32d(param_2 + 8u, (f64)rdf32(param_1 + 0x1ccu));
    r10 = rd32(param_3);
    r9 = rd32(param_3 + 4u);
    r8 = rd32(param_3 + 8u);
    r0 = rd32(param_2 + 8u);
    f29 = (f64)rdf32(param_3 + 4u);
    f3 = (f64)rdf32(param_1 + 0x144u);
    f31 = (f64)rdf32(param_1 + 0x138u);
    wrf32d(param_3 + 4u, f5);
    wrf32d(param_2 + 4u, f5);
    wr32(0x817fdf90u, r9);
    wr32(0x817fdf84u, r6);
    wrf32d(param_3, (f64)px_w2f(r10));
    wrf32d(param_3 + 4u, f5);
    wrf32d(param_3 + 8u, (f64)px_w2f(r8));
    f2 = (f64)rdf32(param_1 + 0x1f4u);
    wrf32d(0x817fdf84u, f5);
    wrf32d(0x817fdf90u, f5);
    a.f[0] = f29;
    a.f[1] = f2;
    a.f[2] = f3;
    a.f[3] = f4;
    f1 = tc_callf(0x80054ee0u, &a);
    wrf32d(param_3 + 4u, f1);
    wrf32d(param_2, (f64)px_w2f(r7));
    f4 = (f64)rdf32(0x80572358u);
    wrf32d(param_2 + 4u, (f64)px_w2f(ppc_single_bits(f5)));
    wrf32d(param_2 + 8u, (f64)px_w2f(r0));
    a.f[0] = f30;
    a.f[1] = (f64)rdf32(param_1 + 0x1f8u);
    a.f[2] = f31;
    a.f[3] = f4;
    f1 = tc_callf(0x80054ee0u, &a);
    wrf32d(param_2 + 4u, f1);
    f4 = (f64)rdf32(0x817fdf90u);
    f1 = (f64)rdf32(0x817fdf84u);
    wrf32d(param_1 + 0x1dcu, (f64)px_w2f(r10));
    wrf32d(param_1 + 0x1e0u, f4);
    wrf32d(param_1 + 0x1e4u, (f64)px_w2f(r8));
    wrf32d(param_1 + 0x1e8u, (f64)px_w2f(r7));
    wrf32d(param_1 + 0x1ecu, f1);
    wrf32d(param_1 + 0x1f0u, (f64)px_w2f(r0));
    wrf32d(param_1 + 0x1f4u, f29);
    wrf32d(param_1 + 0x1f8u, f30);
    return;
}
