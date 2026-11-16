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

f64 fn_80030b04(s32 param_1, u32 param_r4, u32 param_r5)
{
    u32 r3 = 0, t4 = 0, t7 = 0, t8 = 0, t11 = 0, t12 = 0, t15 = 0, t16 = 0, t19 = 0, t20 = 0, t23 = 0;
    f64 f1 = 0.0, f2 = 0.0, f3 = 0.0, f4 = 0.0, f5 = 0.0, f6 = 0.0;
    TcArgs a = {0};
    a.r[0] = (u32)param_1;
    a.r[1] = param_r4;
    a.r[2] = param_r5;
    (void)tc_call(0x800309e0u, &a);
    r3 = (u32)param_1 + 0x68u;
    wr8((u32)param_1 + 0x36u, 1u);
    wr32((u32)param_1 + 0x4cu, r3);
    f1 = px_pack((f64)rdf32((u32)param_1), (f64)rdf32((u32)param_1));
    wrf32d(r3, px_hi(f1));
    wrf32d(r3, px_lo(f1));
    t4 = (u32)param_1 + 8u;
    f2 = px_pack((f64)rdf32(t4), (f64)rdf32(t4));
    t7 = r3 + 8u;
    wrf32d(t7, px_hi(f2));
    wrf32d(t7, px_lo(f2));
    t8 = (u32)param_1 + 0x10u;
    f3 = px_pack((f64)rdf32(t8), (f64)rdf32(t8));
    t11 = r3 + 0x10u;
    wrf32d(t11, px_hi(f3));
    wrf32d(t11, px_lo(f3));
    t12 = (u32)param_1 + 0x18u;
    f4 = px_pack((f64)rdf32(t12), (f64)rdf32(t12));
    t15 = r3 + 0x18u;
    wrf32d(t15, px_hi(f4));
    wrf32d(t15, px_lo(f4));
    t16 = (u32)param_1 + 0x20u;
    f5 = px_pack((f64)rdf32(t16), (f64)rdf32(t16));
    t19 = r3 + 0x20u;
    wrf32d(t19, px_hi(f5));
    wrf32d(t19, px_lo(f5));
    t20 = (u32)param_1 + 0x28u;
    f6 = px_pack((f64)rdf32(t20), (f64)rdf32(t20));
    t23 = r3 + 0x28u;
    wrf32d(t23, px_hi(f6));
    wrf32d(t23, px_lo(f6));
    return f1;
}
