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

f64 fn_80054710(s32 param_1)
{
    u32 t0 = 0, t6 = 0, t8 = 0, t14 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f3 = 0.0, f4 = 0.0, f5 = 0.0, f6 = 0.0, f7 = 0.0, f8 = 0.0, f9 = 0.0;
    f9 = (f64)rdf32(0x80572310u);
    wr32(0x80571100u, 0u);
    f8 = (f64)rdf32(0x80572318u);
    f7 = (f64)rdf32(0x80572314u);
    f6 = (f64)rdf32(0x8057231cu);
    f5 = (f64)rdf32(0x80572320u);
    f4 = (f64)rdf32(0x80572324u);
    f3 = (f64)rdf32(0x80572328u);
    f0 = (f64)rdf32(0x8057232cu);
    wrf32d((u32)param_1 + 4u, f9);
    wrf32d((u32)param_1 + 8u, f9);
    wrf32d((u32)param_1 + 0xcu, f8);
    wrf32d((u32)param_1 + 0x10u, f9);
    wrf32d((u32)param_1 + 0x14u, f9);
    wrf32d((u32)param_1 + 0x18u, f9);
    wrf32d((u32)param_1 + 0x1cu, f9);
    wrf32d((u32)param_1 + 0x20u, f7);
    wrf32d((u32)param_1 + 0x24u, f9);
    wrf32d((u32)param_1 + 0x14cu, f6);
    wr16((u32)param_1 + 0xd8u, 0x2000u);
    wr16((u32)param_1 + 0xdau, 0u);
    wrf32d((u32)param_1 + 0xe0u, f5);
    wrf32d((u32)param_1 + 0xe4u, f4);
    wr32((u32)param_1 + 0xf8u, 0u);
    wr16((u32)param_1 + 0xf0u, 0u);
    wr16((u32)param_1 + 0xf2u, 0u);
    wr16((u32)param_1 + 0xf4u, 0x280u);
    wr16((u32)param_1 + 0xf6u, 0x1e0u);
    wrf32d((u32)param_1 + 0xfcu, f3);
    wrf32d((u32)param_1 + 0xdcu, f0);
    t0 = (u32)param_1 + 4u;
    f1 = px_pack((f64)rdf32(t0), (f64)rdf32(t0));
    f2 = px_pack((f64)rdf32((u32)param_1 + 0xcu), 1.0);
    t6 = (u32)param_1 + 0x134u;
    wrf32d(t6, px_hi(f1));
    wrf32d(t6, px_lo(f1));
    wrf32d((u32)param_1 + 0x13cu, px_hi(f2));
    t8 = (u32)param_1 + 0x10u;
    f1 = px_pack((f64)rdf32(t8), (f64)rdf32(t8));
    f2 = px_pack((f64)rdf32((u32)param_1 + 0x18u), 1.0);
    t14 = (u32)param_1 + 0x140u;
    wrf32d(t14, px_hi(f1));
    wrf32d(t14, px_lo(f1));
    wrf32d((u32)param_1 + 0x148u, px_hi(f2));
    f0 = (f64)rdf32(0x80572330u);
    wrf32d((u32)param_1 + 0x150u, f4);
    wrf32d((u32)param_1 + 0x154u, f0);
    wr8((u32)param_1 + 0x158u, 0x50u);
    wr8((u32)param_1 + 0x159u, 0x50u);
    wr8((u32)param_1 + 0x15au, 0x50u);
    wr32((u32)param_1 + 0x15cu, 2u);
    wr32((u32)param_1 + 0x160u, 1u);
    return f1;
}
