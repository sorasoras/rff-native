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

f64 fn_80233d2c(f64 param_1, f64 param_2, f64 param_3, s32 param_4, s32 param_5)
{
    u32 t3 = 0, t8 = 0, t13 = 0, t18 = 0, t24 = 0, t27 = 0, t30 = 0, t33 = 0, t34 = 0, t35 = 0;
    f64 f1 = 0.0, f2 = 0.0, f3 = 0.0, f4 = 0.0, f5 = 0.0, f6 = 0.0, f7 = 0.0, f8 = 0.0;
    f1 = (f64)(f32)param_1;
    f4 = px_pack((f64)rdf32((u32)param_4), (f64)rdf32((u32)param_4));
    f2 = (f64)(f32)param_2;
    t3 = (u32)param_4 + 8u;
    f5 = px_pack((f64)rdf32(t3), (f64)rdf32(t3));
    f3 = (f64)(f32)param_3;
    f4 = px_pack((f64)(f32)px_pmul(px_hi(f4), px_hi(f1)), (f64)(f32)px_pmul(px_lo(f4), px_hi(f1)));
    t8 = (u32)param_4 + 0x10u;
    f6 = px_pack((f64)rdf32(t8), (f64)rdf32(t8));
    f5 = px_pack((f64)(f32)px_pmul(px_hi(f5), px_hi(f1)), (f64)(f32)px_pmul(px_lo(f5), px_hi(f1)));
    t13 = (u32)param_4 + 0x18u;
    f7 = px_pack((f64)rdf32(t13), (f64)rdf32(t13));
    f6 = px_pack((f64)(f32)px_pmul(px_hi(f6), px_hi(f2)), (f64)(f32)px_pmul(px_lo(f6), px_hi(f2)));
    t18 = (u32)param_4 + 0x20u;
    f8 = px_pack((f64)rdf32(t18), (f64)rdf32(t18));
    wrf32d((u32)param_5, px_hi(f4));
    wrf32d((u32)param_5, px_lo(f4));
    f7 = px_pack((f64)(f32)px_pmul(px_hi(f7), px_hi(f2)), (f64)(f32)px_pmul(px_lo(f7), px_hi(f2)));
    t24 = (u32)param_4 + 0x28u;
    f2 = px_pack((f64)rdf32(t24), (f64)rdf32(t24));
    t27 = (u32)param_5 + 8u;
    wrf32d(t27, px_hi(f5));
    wrf32d(t27, px_lo(f5));
    f8 = px_pack((f64)(f32)px_pmul(px_hi(f8), px_hi(f3)), (f64)(f32)px_pmul(px_lo(f8), px_hi(f3)));
    t30 = (u32)param_5 + 0x10u;
    wrf32d(t30, px_hi(f6));
    wrf32d(t30, px_lo(f6));
    f2 = px_pack((f64)(f32)px_pmul(px_hi(f2), px_hi(f3)), (f64)(f32)px_pmul(px_lo(f2), px_hi(f3)));
    t33 = (u32)param_5 + 0x18u;
    wrf32d(t33, px_hi(f7));
    wrf32d(t33, px_lo(f7));
    t34 = (u32)param_5 + 0x20u;
    wrf32d(t34, px_hi(f8));
    wrf32d(t34, px_lo(f8));
    t35 = (u32)param_5 + 0x28u;
    wrf32d(t35, px_hi(f2));
    wrf32d(t35, px_lo(f2));
    return f1;
}
