#include "tc_rt.h"

static f32 px_w2f(u32 x)
{
    union { f32 f; u32 w; } v;
    v.w = x;
    return v.f;
}

static f64 px_fdiv(f64 a, f64 b)
{
    return a / b;
}

void fn_80055b70(s32 param_1, u32 param_2, u32 param_3, u32 param_4)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r6 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f3 = 0.0, f4 = 0.0, f28 = 0.0, f29 = 0.0, f30 = 0.0, f31 = 0.0;
    TcArgs a = {0};
    wrf32d(param_4, (f64)rdf32(0x80489140u));
    wrf32d(param_4 + 4u, (f64)rdf32(0x80489144u));
    wrf32d(param_4 + 8u, (f64)rdf32(0x80489148u));
    a.f[0] = -(f64)rdf32((u32)param_1 + 0x230u);
    a.r[0] = param_4;
    a.r[1] = param_4;
    (void)tc_call(0x802343c8u, &a);
    r0 = rd32(param_4 + 8u);
    f31 = (f64)(f32)px_fdiv((f64)(f32)((f64)rdf32(0x80572348u) * (f64)rdf32((u32)param_1 + 0x234u)), (f64)rdf32(0x80572380u));
    wr32(0x817fdf70u, rd32(param_4));
    a.f[0] = f31;
    f1 = tc_callf(0x80262704u, &a);
    f30 = (f64)(f32)f1;
    a.f[0] = f31;
    f1 = tc_callf(0x80262b10u, &a);
    f4 = (f64)(f32)f1;
    f1 = (f64)px_w2f(r0);
    f3 = (f64)rdf32(0x817fdf70u);
    f0 = (f64)(f32)(f1 * f30);
    f2 = (f64)(f32)(f1 * f4);
    f1 = -f4;
    f2 = ppc_fmadds(f3, f30, f2);
    f0 = ppc_fmadds(f3, f1, f0);
    wrf32d(param_4, f2);
    wrf32d(param_4 + 8u, f0);
    wrf32d(param_2, f2);
    wrf32d(param_2 + 4u, (f64)rdf32(param_4 + 4u));
    wrf32d(param_2 + 8u, (f64)rdf32(param_4 + 8u));
    r3 = rd32((u32)param_1 + 0x1b4u);
    a.r[0] = r3;
    a.r[1] = tc_lastr4();
    a.r[2] = 0u;
    a.r[3] = 0u;
    a.r[4] = 0u;
    a.r[5] = 0u;
    a.r[6] = 0u;
    a.r[7] = 0u;
    a.f[0] = f1;
    a.f[1] = f2;
    a.f[2] = f3;
    a.f[3] = f4;
    a.f[4] = 0.0;
    r3 = tc_call(rd32(rd32(r3) + 0x28u), &a);
    wrf32d(param_3, (f64)rdf32(r3));
    wrf32d(param_3 + 4u, (f64)rdf32(r3 + 4u));
    wrf32d(param_3 + 8u, (f64)rdf32(r3 + 8u));
    a.r[0] = param_2;
    a.r[1] = param_3;
    a.r[2] = param_2;
    f1 = tc_callf(0x80234380u, &a);
    r3 = rd32((u32)param_1 + 0x1b4u);
    a.r[0] = r3;
    a.r[1] = tc_lastr4();
    a.r[2] = 0u;
    a.r[3] = 0u;
    a.r[4] = 0u;
    a.r[5] = 0u;
    a.r[6] = 0u;
    a.r[7] = 0u;
    a.f[0] = f1;
    a.f[1] = 0.0;
    a.f[2] = 0.0;
    a.f[3] = 0.0;
    a.f[4] = 0.0;
    r3 = tc_call(rd32(rd32(r3) + 0x28u), &a);
    f1 = (f64)rdf32(r3 + 4u);
    wrf32d(param_3 + 4u, (f64)(f32)((f64)rdf32((u32)param_1 + 0x1d4u) + f1));
    r3 = rd32((u32)param_1 + 0x1b4u);
    a.r[0] = r3;
    a.r[1] = tc_lastr4();
    a.r[2] = 0u;
    a.r[3] = 0u;
    a.r[4] = 0u;
    a.r[5] = 0u;
    a.r[6] = 0u;
    a.r[7] = 0u;
    a.f[0] = f1;
    a.f[1] = 0.0;
    a.f[2] = 0.0;
    a.f[3] = 0.0;
    a.f[4] = 0.0;
    r3 = tc_call(rd32(rd32(r3) + 0x28u), &a);
    f0 = (f64)rdf32(0x80572344u);
    r0 = rd32(param_2 + 8u);
    f31 = (f64)(f32)((f64)rdf32((u32)param_1 + 0x1d4u) + (f64)(f32)((f64)rdf32((u32)param_1 + 0x228u) + (f64)rdf32(r3 + 4u)));
    f28 = (f64)rdf32(0x80572358u);
    wr32(0x817fdf7cu, rd32(param_2));
    wrf32d(param_2 + 4u, f31);
    f29 = (f64)rdf32(param_3 + 4u);
    r6 = rd32(param_3);
    r4 = rd32(param_3 + 8u);
    f3 = (f64)rdf32((u32)param_1 + 0x144u);
    f30 = (f64)rdf32((u32)param_1 + 0x138u);
    wrf32d(param_3 + 4u, f0);
    wrf32d(param_2 + 4u, f0);
    a.f[0] = f29;
    a.f[1] = (f64)rdf32((u32)param_1 + 0x1f4u);
    a.f[2] = f3;
    a.f[3] = f28;
    f1 = tc_callf(0x80054ee0u, &a);
    wrf32d(param_3 + 4u, f1);
    a.f[0] = f31;
    a.f[1] = (f64)rdf32((u32)param_1 + 0x1f8u);
    a.f[2] = f30;
    a.f[3] = f28;
    f1 = tc_callf(0x80054ee0u, &a);
    wrf32d(param_2 + 4u, f1);
    f2 = (f64)rdf32(0x817fdf7cu);
    wrf32d((u32)param_1 + 0x1dcu, (f64)px_w2f(r6));
    wrf32d((u32)param_1 + 0x1e0u, (f64)px_w2f(ppc_single_bits(f0)));
    wrf32d((u32)param_1 + 0x1e4u, (f64)px_w2f(r4));
    wrf32d((u32)param_1 + 0x1e8u, f2);
    wrf32d((u32)param_1 + 0x1ecu, (f64)px_w2f(ppc_single_bits(f0)));
    wrf32d((u32)param_1 + 0x1f0u, (f64)px_w2f(r0));
    wrf32d((u32)param_1 + 0x1f4u, f29);
    wrf32d((u32)param_1 + 0x1f8u, f31);
    return;
}
