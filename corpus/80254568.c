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

f64 fn_80254568(s32 param_1, u32 param_2, s32 param_3)
{
    u32 r4 = 0, r7 = 0, t3 = 0, t6 = 0, t9 = 0, t12 = 0, t15 = 0, t27 = 0, t30 = 0, t33 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f3 = 0.0, f4 = 0.0, f5 = 0.0;
    if (param_2 >= 0x40u) {
        r7 = (((param_2 - 0x40u) << 2u) & 0xfffffffcu) + 0x500u;
    } else {
        r7 = (param_2 << 2u) & 0xfffffffcu;
    }
    if ((u32)param_3 == 1u) {
        r4 = 8u;
    } else {
        r4 = 0xcu;
    }
    wr8(0xcc008000u, 0x10u);
    wr32(0xcc008000u, r7 | (((r4 - 1u) << 0x10u) & 0xffff0000u));
    if ((u32)param_3 == 0u) {
        f5 = px_pack((f64)rdf32((u32)param_1), (f64)rdf32((u32)param_1));
        t3 = (u32)param_1 + 8u;
        f4 = px_pack((f64)rdf32(t3), (f64)rdf32(t3));
        t6 = (u32)param_1 + 0x10u;
        f3 = px_pack((f64)rdf32(t6), (f64)rdf32(t6));
        t9 = (u32)param_1 + 0x18u;
        f2 = px_pack((f64)rdf32(t9), (f64)rdf32(t9));
        t12 = (u32)param_1 + 0x20u;
        f1 = px_pack((f64)rdf32(t12), (f64)rdf32(t12));
        t15 = (u32)param_1 + 0x28u;
        f0 = px_pack((f64)rdf32(t15), (f64)rdf32(t15));
        wrf32d(0xcc008000u, px_hi(f5));
        wrf32d(0xcc008000u, px_lo(f5));
        wrf32d(0xcc008000u, px_hi(f4));
        wrf32d(0xcc008000u, px_lo(f4));
        wrf32d(0xcc008000u, px_hi(f3));
        wrf32d(0xcc008000u, px_lo(f3));
        wrf32d(0xcc008000u, px_hi(f2));
        wrf32d(0xcc008000u, px_lo(f2));
        wrf32d(0xcc008000u, px_hi(f1));
        wrf32d(0xcc008000u, px_lo(f1));
        wrf32d(0xcc008000u, px_hi(f0));
        wrf32d(0xcc008000u, px_lo(f0));
        return f1;
    }
    f3 = px_pack((f64)rdf32((u32)param_1), (f64)rdf32((u32)param_1));
    t27 = (u32)param_1 + 8u;
    f2 = px_pack((f64)rdf32(t27), (f64)rdf32(t27));
    t30 = (u32)param_1 + 0x10u;
    f1 = px_pack((f64)rdf32(t30), (f64)rdf32(t30));
    t33 = (u32)param_1 + 0x18u;
    f0 = px_pack((f64)rdf32(t33), (f64)rdf32(t33));
    wrf32d(0xcc008000u, px_hi(f3));
    wrf32d(0xcc008000u, px_lo(f3));
    wrf32d(0xcc008000u, px_hi(f2));
    wrf32d(0xcc008000u, px_lo(f2));
    wrf32d(0xcc008000u, px_hi(f1));
    wrf32d(0xcc008000u, px_lo(f1));
    wrf32d(0xcc008000u, px_hi(f0));
    wrf32d(0xcc008000u, px_lo(f0));
    return f1;
}
