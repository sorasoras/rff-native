#include "tc_rt.h"

static f32 px_w2f(u32 x)
{
    union { f32 f; u32 w; } v;
    v.w = x;
    return v.f;
}

void fn_8008b0c0(f64 param_1, u32 param_2)
{
    u32 r0 = 0, r5 = 0;
    f64 f1 = 0.0, f3 = 0.0, f4 = 0.0, f31 = 0.0;
    TcArgs a = {0};
    r5 = rd32(param_2);
    r0 = rd32(param_2 + 8u);
    a.f[0] = param_1;
    f1 = tc_callf(0x80262704u, &a);
    f31 = (f64)(f32)f1;
    a.f[0] = param_1;
    f1 = tc_callf(0x80262b10u, &a);
    f4 = (f64)(f32)f1;
    f1 = (f64)px_w2f(r0);
    f3 = (f64)px_w2f(r5);
    wrf32d(param_2, ppc_fmadds(f3, f31, (f64)(f32)(f1 * f4)));
    wrf32d(param_2 + 8u, ppc_fmadds(f3, -f4, (f64)(f32)(f1 * f31)));
    return;
}
