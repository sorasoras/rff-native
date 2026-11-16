#include "tc_rt.h"

static f32 px_w2f(u32 x)
{
    union { f32 f; u32 w; } v;
    v.w = x;
    return v.f;
}

void fn_802e45a4(u32 param_1, s32 param_2)
{
    u32 r3 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f3 = 0.0;
    TcArgs a = {0};
    f0 = (f64)rdf32(0x80577458u);
    wrf32d(param_1, f0);
    wrf32d(param_1 + 4u, f0);
    wrf32d(param_1 + 8u, f0);
    wrf32d(param_1 + 0xcu, f0);
    a.r[0] = (u32)param_2;
    r3 = tc_call(0x802e5074u, &a);
    f3 = (f64)px_w2f(r3);
    f1 = (f64)(f32)(f3 + (f64)rdf32((u32)param_2 + 0x4cu));
    f0 = (f64)rdf32((u32)param_2 + 0x50u);
    f2 = (f64)px_w2f(tc_lastr4());
    wrf32d(param_1, f3);
    f0 = (f64)(f32)(f2 - f0);
    wrf32d(param_1 + 4u, f2);
    wrf32d(param_1 + 8u, f1);
    wrf32d(param_1 + 0xcu, f0);
    return;
}
