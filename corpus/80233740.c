#include "tc_rt.h"

static u64 px_f2b(f64 x)
{
    union { f64 d; u64 b; } v;
    v.d = x;
    return v.b;
}

static f64 px_b2f(u64 x)
{
    union { f64 d; u64 b; } v;
    v.b = x;
    return v.d;
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

static f64 px_pmg01(f64 a, f64 b)
{
    return px_b2f((px_f2b(a) & 0xffffffff00000000ull) | (px_f2b(b) << 32));
}

static f64 px_pmg10(f64 a, f64 b)
{
    return px_b2f((px_f2b(a) << 32) | (px_f2b(b) & 0xffffffffull));
}

f64 fn_80233740(s32 param_1)
{
    u32 t0 = 0, t1 = 0, t2 = 0, t3 = 0, t5 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0;
    f0 = (f64)rdf32(0x80576b54u);
    f1 = (f64)rdf32(0x80576b50u);
    t0 = (u32)param_1 + 8u;
    wrf32d(t0, px_hi(f0));
    wrf32d(t0, px_lo(f0));
    f2 = px_pmg10(f1, f0);
    f1 = px_pmg01(f0, f1);
    t1 = (u32)param_1 + 0x18u;
    wrf32d(t1, px_hi(f0));
    wrf32d(t1, px_lo(f0));
    t2 = (u32)param_1 + 0x20u;
    wrf32d(t2, px_hi(f0));
    wrf32d(t2, px_lo(f0));
    t3 = (u32)param_1 + 0x10u;
    wrf32d(t3, px_hi(f1));
    wrf32d(t3, px_lo(f1));
    wrf32d((u32)param_1, px_hi(f2));
    wrf32d((u32)param_1, px_lo(f2));
    t5 = (u32)param_1 + 0x28u;
    wrf32d(t5, px_hi(f2));
    wrf32d(t5, px_lo(f2));
    return f1;
}
