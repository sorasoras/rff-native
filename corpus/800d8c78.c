#include "tc_rt.h"

static f32 px_w2f(u32 x)
{
    union { f32 f; u32 w; } v;
    v.w = x;
    return v.f;
}

void fn_800d8c78(u32 param_1)
{
    u32 r6 = 0;
    f64 f0 = 0.0, f1 = 0.0;
    r6 = (rd32(0x805710e0u) * 0x6d0u) - 0x7fc2e738u;
    f1 = (f64)px_w2f(rd32(r6 + 0x138u));
    f0 = (f64)px_w2f(rd32(r6 + 0x13cu));
    wrf32d(param_1, (f64)px_w2f(rd32(r6 + 0x134u)));
    wrf32d(param_1 + 4u, f1);
    wrf32d(param_1 + 8u, f0);
    return;
}
