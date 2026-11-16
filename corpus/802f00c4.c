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

static f64 px_pq(f64 x)
{
    u64 b = px_f2b(x);
    if ((b & 0x7ff0000000000000ull) == 0x7ff0000000000000ull && (b & 0x000fffffffffffffull) != 0)
        return px_b2f(b | 0x0008000000000000ull);
    return x;
}

static f64 px_pmul(f64 a, f64 c)
{
    f64 r = a * c;
    if (r != r) {
        if (a != a) return px_pq(a);
        if (c != c) return px_pq(c);
        return px_b2f(0x7ff8000000000000ull);
    }
    return r;
}

f64 fn_802f00c4(s32 param_1, s32 param_2, s32 param_3)
{
    u32 t6 = 0, t9 = 0, t21 = 0, t24 = 0, t27 = 0, t37 = 0, t38 = 0, t39 = 0, t40 = 0, t41 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f3 = 0.0, f4 = 0.0, f5 = 0.0, f6 = 0.0;
    f0 = px_pack((f64)rdf32((u32)param_3), (f64)rdf32((u32)param_3));
    f2 = px_pack((f64)rdf32((u32)param_2), (f64)rdf32((u32)param_2));
    t6 = (u32)param_2 + 0x10u;
    f4 = px_pack((f64)rdf32(t6), (f64)rdf32(t6));
    t9 = (u32)param_2 + 0x20u;
    f5 = px_pack((f64)rdf32(t9), (f64)rdf32(t9));
    f2 = px_pack((f64)(f32)px_pmul(px_hi(f2), px_hi(f0)), (f64)(f32)px_pmul(px_lo(f2), px_lo(f0)));
    f4 = px_pack((f64)(f32)px_pmul(px_hi(f4), px_hi(f0)), (f64)(f32)px_pmul(px_lo(f4), px_lo(f0)));
    f1 = px_pack((f64)rdf32((u32)param_3 + 8u), 1.0);
    f5 = px_pack((f64)(f32)px_pmul(px_hi(f5), px_hi(f0)), (f64)(f32)px_pmul(px_lo(f5), px_lo(f0)));
    t21 = (u32)param_2 + 8u;
    f3 = px_pack((f64)rdf32(t21), (f64)rdf32(t21));
    t24 = (u32)param_2 + 0x18u;
    f0 = px_pack((f64)rdf32(t24), (f64)rdf32(t24));
    t27 = (u32)param_2 + 0x28u;
    f6 = px_pack((f64)rdf32(t27), (f64)rdf32(t27));
    f3 = px_pack((f64)(f32)px_pmul(px_hi(f3), px_hi(f1)), (f64)(f32)px_pmul(px_lo(f3), px_lo(f1)));
    wrf32d((u32)param_1, px_hi(f2));
    wrf32d((u32)param_1, px_lo(f2));
    f0 = px_pack((f64)(f32)px_pmul(px_hi(f0), px_hi(f1)), (f64)(f32)px_pmul(px_lo(f0), px_lo(f1)));
    f6 = px_pack((f64)(f32)px_pmul(px_hi(f6), px_hi(f1)), (f64)(f32)px_pmul(px_lo(f6), px_lo(f1)));
    t37 = (u32)param_1 + 0x10u;
    wrf32d(t37, px_hi(f4));
    wrf32d(t37, px_lo(f4));
    t38 = (u32)param_1 + 8u;
    wrf32d(t38, px_hi(f3));
    wrf32d(t38, px_lo(f3));
    t39 = (u32)param_1 + 0x18u;
    wrf32d(t39, px_hi(f0));
    wrf32d(t39, px_lo(f0));
    t40 = (u32)param_1 + 0x20u;
    wrf32d(t40, px_hi(f5));
    wrf32d(t40, px_lo(f5));
    t41 = (u32)param_1 + 0x28u;
    wrf32d(t41, px_hi(f6));
    wrf32d(t41, px_lo(f6));
    return f1;
}
