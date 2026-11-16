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

static f64 px_pack(f64 a, f64 b)
{
    return px_b2f(((u64)ppc_single_bits(a) << 32) | (u64)ppc_single_bits(b));
}

f64 fn_8023376c(s32 param_1, s32 param_2)
{
    u32 t4 = 0, t7 = 0, t8 = 0, t11 = 0, t12 = 0, t15 = 0, t16 = 0, t19 = 0, t20 = 0, t23 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f3 = 0.0, f4 = 0.0, f5 = 0.0;
    f0 = px_pack((f64)rdf32((u32)param_1), (f64)rdf32((u32)param_1));
    wrf32d((u32)param_2, px_hi(f0));
    wrf32d((u32)param_2, px_lo(f0));
    t4 = (u32)param_1 + 8u;
    f1 = px_pack((f64)rdf32(t4), (f64)rdf32(t4));
    t7 = (u32)param_2 + 8u;
    wrf32d(t7, px_hi(f1));
    wrf32d(t7, px_lo(f1));
    t8 = (u32)param_1 + 0x10u;
    f2 = px_pack((f64)rdf32(t8), (f64)rdf32(t8));
    t11 = (u32)param_2 + 0x10u;
    wrf32d(t11, px_hi(f2));
    wrf32d(t11, px_lo(f2));
    t12 = (u32)param_1 + 0x18u;
    f3 = px_pack((f64)rdf32(t12), (f64)rdf32(t12));
    t15 = (u32)param_2 + 0x18u;
    wrf32d(t15, px_hi(f3));
    wrf32d(t15, px_lo(f3));
    t16 = (u32)param_1 + 0x20u;
    f4 = px_pack((f64)rdf32(t16), (f64)rdf32(t16));
    t19 = (u32)param_2 + 0x20u;
    wrf32d(t19, px_hi(f4));
    wrf32d(t19, px_lo(f4));
    t20 = (u32)param_1 + 0x28u;
    f5 = px_pack((f64)rdf32(t20), (f64)rdf32(t20));
    t23 = (u32)param_2 + 0x28u;
    wrf32d(t23, px_hi(f5));
    wrf32d(t23, px_lo(f5));
    return f1;
}
