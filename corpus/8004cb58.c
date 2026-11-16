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

void fn_8004cb58(f32 param_1, f32 param_2, f32 param_3, f32 param_4, f32 param_5, f32 param_6, s32 param_7, s32 param_8)
{
    u32 r31 = 0, t4 = 0, t8 = 0, t12 = 0, t16 = 0, t20 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f3 = 0.0, f4 = 0.0, f5 = 0.0, f6 = 0.0, f7 = 0.0;
    TcArgs a = {0};
    (void)param_1;
    (void)param_2;
    (void)param_3;
    (void)param_4;
    (void)param_5;
    (void)param_6;
    r31 = (((u32)param_7 << 2u) & 0xfffffffcu) - (u32)param_7;
    if ((u32)param_8 != 0u) {
        f1 = px_pack((f64)rdf32((u32)param_8), (f64)rdf32((u32)param_8));
        wrf32d(0x803c6348u, px_hi(f1));
        wrf32d(0x803c6348u, px_lo(f1));
        t4 = (u32)param_8 + 8u;
        f2 = px_pack((f64)rdf32(t4), (f64)rdf32(t4));
        wrf32d(0x803c6350u, px_hi(f2));
        wrf32d(0x803c6350u, px_lo(f2));
        t8 = (u32)param_8 + 0x10u;
        f3 = px_pack((f64)rdf32(t8), (f64)rdf32(t8));
        wrf32d(0x803c6358u, px_hi(f3));
        wrf32d(0x803c6358u, px_lo(f3));
        t12 = (u32)param_8 + 0x18u;
        f4 = px_pack((f64)rdf32(t12), (f64)rdf32(t12));
        wrf32d(0x803c6360u, px_hi(f4));
        wrf32d(0x803c6360u, px_lo(f4));
        t16 = (u32)param_8 + 0x20u;
        f5 = px_pack((f64)rdf32(t16), (f64)rdf32(t16));
        wrf32d(0x803c6368u, px_hi(f5));
        wrf32d(0x803c6368u, px_lo(f5));
        t20 = (u32)param_8 + 0x28u;
        f6 = px_pack((f64)rdf32(t20), (f64)rdf32(t20));
        wrf32d(0x803c6370u, px_hi(f6));
        wrf32d(0x803c6370u, px_lo(f6));
    } else {
        f7 = (f64)rdf32(0x805721d8u);
        f0 = (f64)rdf32(0x805721c8u);
        wrf32d(0x803c6348u, f7);
        wrf32d(0x803c6358u, f0);
        wrf32d(0x803c6368u, f0);
        wrf32d(0x803c634cu, f0);
        wrf32d(0x803c635cu, f7);
        wrf32d(0x803c636cu, f0);
        wrf32d(0x803c6350u, f0);
        wrf32d(0x803c6360u, f0);
        wrf32d(0x803c6370u, f7);
        wrf32d(0x803c6354u, f0);
        wrf32d(0x803c6364u, f0);
        wrf32d(0x803c6374u, f0);
    }
    a.r[0] = 0x803c6348u;
    a.r[1] = r31;
    (void)tc_call(0x802544a0u, &a);
    a.r[0] = r31;
    (void)tc_call(0x80254548u, &a);
    return;
}
