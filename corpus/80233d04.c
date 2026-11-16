#include "tc_rt.h"

static u64 px_f2b(f64 x)
{
    union { f64 d; u64 b; } v;
    v.d = x;
    return v.b;
}

static f32 px_w2f(u32 x)
{
    union { f32 f; u32 w; } v;
    v.w = x;
    return v.f;
}

static f64 px_hi(f64 x)
{
    return (f64)px_w2f((u32)(px_f2b(x) >> 32));
}

static f64 px_lo(f64 x)
{
    return (f64)px_w2f((u32)px_f2b(x));
}

void fn_80233d04(f64 param_1, f64 param_2, f64 param_3, u32 param_4)
{
    u32 t0 = 0, t1 = 0, t2 = 0, t3 = 0;
    f64 f0 = 0.0;
    f0 = (f64)rdf32(0x80576b54u);
    wrf32d(param_4, param_1);
    t0 = param_4 + 4u;
    wrf32d(t0, px_hi(f0));
    wrf32d(t0, px_lo(f0));
    t1 = param_4 + 0xcu;
    wrf32d(t1, px_hi(f0));
    wrf32d(t1, px_lo(f0));
    wrf32d(param_4 + 0x14u, param_2);
    t2 = param_4 + 0x18u;
    wrf32d(t2, px_hi(f0));
    wrf32d(t2, px_lo(f0));
    t3 = param_4 + 0x20u;
    wrf32d(t3, px_hi(f0));
    wrf32d(t3, px_lo(f0));
    wrf32d(param_4 + 0x28u, param_3);
    wrf32d(param_4 + 0x2cu, f0);
    return;
}
