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

static f64 px_lo(f64 x)
{
    return (f64)px_w2f((u32)px_f2b(x));
}

static f64 px_pack(f64 a, f64 b)
{
    return px_b2f(((u64)ppc_single_bits(a) << 32) | (u64)ppc_single_bits(b));
}

f64 fn_802544f0(s32 param_1, u32 param_r4)
{
    u32 t3 = 0, t6 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f3 = 0.0, f4 = 0.0, f5 = 0.0, t1 = 0.0, t4 = 0.0, t7 = 0.0;
    wr8(0xcc008000u, 0x10u);
    wr32(0xcc008000u, (((param_r4 << 2u) & 0xfffffffcu) - param_r4 + 0x400u) | 0x80000u);
    t1 = (f64)rdf32((u32)param_1);
    f5 = px_pack(t1, (f64)rdf32((u32)param_1));
    f4 = (f64)rdf32((u32)param_1 + 8u);
    t3 = (u32)param_1 + 0x10u;
    t4 = (f64)rdf32(t3);
    f3 = px_pack(t4, (f64)rdf32(t3));
    f2 = (f64)rdf32((u32)param_1 + 0x18u);
    t6 = (u32)param_1 + 0x20u;
    t7 = (f64)rdf32(t6);
    f1 = px_pack(t7, (f64)rdf32(t6));
    f0 = (f64)rdf32((u32)param_1 + 0x28u);
    wrf32d(0xcc008000u, px_lo(f5));
    wrf32d(0xcc008000u, f4);
    wrf32d(0xcc008000u, px_lo(f3));
    wrf32d(0xcc008000u, f2);
    wrf32d(0xcc008000u, px_lo(f1));
    wrf32d(0xcc008000u, f0);
    return f1;
}
