#include "tc_rt.h"

static f32 px_w2f(u32 x)
{
    union { f32 f; u32 w; } v;
    v.w = x;
    return v.f;
}

void fn_80100f50(u32 param_1)
{
    u32 r31 = 0;
    f64 f0 = 0.0;
    r31 = rd32(param_1);
    f0 = (f64)px_w2f(rd32(r31 + 0x98u));
    wrf32d(param_1 + 0x18u, (f64)px_w2f(rd32(r31 + 0x84u)));
    wrf32d(param_1 + 0x1cu, f0);
    return;
}
