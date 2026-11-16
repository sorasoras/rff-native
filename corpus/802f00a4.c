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

void fn_802f00a4(s32 param_1)
{
    u32 t1 = 0, t2 = 0, t3 = 0, t4 = 0, t5 = 0;
    f64 f0 = 0.0;
    f0 = (f64)rdf32(0x80577528u);
    wrf32d((u32)param_1, px_hi(f0));
    wrf32d((u32)param_1, px_lo(f0));
    t1 = (u32)param_1 + 8u;
    wrf32d(t1, px_hi(f0));
    wrf32d(t1, px_lo(f0));
    t2 = (u32)param_1 + 0x10u;
    wrf32d(t2, px_hi(f0));
    wrf32d(t2, px_lo(f0));
    t3 = (u32)param_1 + 0x18u;
    wrf32d(t3, px_hi(f0));
    wrf32d(t3, px_lo(f0));
    t4 = (u32)param_1 + 0x20u;
    wrf32d(t4, px_hi(f0));
    wrf32d(t4, px_lo(f0));
    t5 = (u32)param_1 + 0x28u;
    wrf32d(t5, px_hi(f0));
    wrf32d(t5, px_lo(f0));
    return;
}
