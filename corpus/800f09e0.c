#include "tc_rt.h"

static f32 px_w2f(u32 x)
{
    union { f32 f; u32 w; } v;
    v.w = x;
    return v.f;
}

void fn_800f09e0(u32 param_1, s32 param_2)
{
    u32 r0 = 0, r3 = 0, r4 = 0;
    f64 f0 = 0.0, f1 = 0.0, f3 = 0.0, f4 = 0.0, f30 = 0.0, f31 = 0.0;
    TcArgs a = {0};
    f1 = (f64)rdf32(0x80573ad8u);
    f0 = (f64)rdf32(0x80573af8u);
    wrf32d(param_1, f1);
    wrf32d(param_1 + 4u, f1);
    wrf32d(param_1 + 8u, f0);
    r3 = rd32((u32)param_2 + 0x18u);
    a.r[0] = r3;
    a.r[1] = (u32)param_2;
    a.f[0] = f1;
    a.f[1] = 0.0;
    a.f[2] = 0.0;
    a.f[3] = 0.0;
    f1 = tc_callf(rd32(rd32(r3) + 0x2cu), &a);
    r4 = rd32(param_1);
    f31 = f1;
    r0 = rd32(param_1 + 8u);
    a.f[0] = f1;
    f1 = tc_callf(0x80262704u, &a);
    f30 = (f64)(f32)f1;
    a.f[0] = f31;
    f1 = tc_callf(0x80262b10u, &a);
    f4 = (f64)(f32)f1;
    f1 = (f64)px_w2f(r0);
    f3 = (f64)px_w2f(r4);
    wrf32d(param_1, ppc_fmadds(f3, f30, (f64)(f32)(f1 * f4)));
    wrf32d(param_1 + 8u, ppc_fmadds(f3, -f4, (f64)(f32)(f1 * f30)));
    a.f[0] = (f64)rdf32((u32)param_2 + 0x20u);
    a.r[0] = param_1;
    a.r[1] = param_1;
    (void)tc_call(0x802343c8u, &a);
    return;
}
