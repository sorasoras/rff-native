#include "tc_rt.h"

static f32 px_w2f(u32 x)
{
    union { f32 f; u32 w; } v;
    v.w = x;
    return v.f;
}

void fn_80100d00(u32 param_1)
{
    u32 r12 = 0;
    f64 f0 = 0.0, f1 = 0.0;
    r12 = rd32(param_1);
    f1 = (f64)px_w2f(rd32(r12 + 0xa0u));
    f0 = (f64)px_w2f(rd32(r12 + 0xb0u));
    wrf32d(param_1 + 0xcu, (f64)px_w2f(rd32(r12 + 0x90u)));
    wrf32d(param_1 + 0x10u, f1);
    wrf32d(param_1 + 0x14u, f0);
    return;
}
