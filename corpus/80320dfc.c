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

static f64 px_psub(f64 a, f64 b)
{
    f64 r = a - b;
    if (r != r) {
        if (a != a) return px_pq(a);
        if (b != b) return px_pq(b);
        return px_b2f(0x7ff8000000000000ull);
    }
    return r;
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

void fn_80320dfc(s32 param_1, u32 param_2, s32 param_3)
{
    u32 t3 = 0, t6 = 0, t9 = 0, t12 = 0, t15 = 0, t31 = 0, t32 = 0, t33 = 0, t34 = 0, t35 = 0;
    f64 f2 = 0.0, f4 = 0.0, f5 = 0.0, f6 = 0.0, f7 = 0.0, f8 = 0.0, f9 = 0.0, f10 = 0.0, f11 = 0.0, f12 = 0.0, f13 = 0.0;
    f9 = (f64)rdf32(param_2);
    f12 = (f64)rdf32(0x805779f0u);
    f10 = (f64)rdf32(param_2 + 4u);
    f13 = (f64)(f32)px_psub(f12, f12);
    f11 = (f64)rdf32(param_2 + 8u);
    f4 = px_pack((f64)rdf32((u32)param_3), (f64)rdf32((u32)param_3));
    t3 = (u32)param_3 + 8u;
    f5 = px_pack((f64)rdf32(t3), (f64)rdf32(t3));
    if (f9 == f13) {
        f9 = f12;
    }
    t6 = (u32)param_3 + 0x10u;
    f6 = px_pack((f64)rdf32(t6), (f64)rdf32(t6));
    t9 = (u32)param_3 + 0x18u;
    f7 = px_pack((f64)rdf32(t9), (f64)rdf32(t9));
    if (f10 == f13) {
        f10 = f12;
    }
    t12 = (u32)param_3 + 0x20u;
    f8 = px_pack((f64)rdf32(t12), (f64)rdf32(t12));
    t15 = (u32)param_3 + 0x28u;
    f2 = px_pack((f64)rdf32(t15), (f64)rdf32(t15));
    if (f11 == f13) {
        f11 = f12;
    }
    f4 = px_pack((f64)(f32)px_pmul(px_hi(f4), px_hi(f9)), (f64)(f32)px_pmul(px_lo(f4), px_hi(f9)));
    f5 = px_pack((f64)(f32)px_pmul(px_hi(f5), px_hi(f9)), (f64)(f32)px_pmul(px_lo(f5), px_hi(f9)));
    f6 = px_pack((f64)(f32)px_pmul(px_hi(f6), px_hi(f10)), (f64)(f32)px_pmul(px_lo(f6), px_hi(f10)));
    f7 = px_pack((f64)(f32)px_pmul(px_hi(f7), px_hi(f10)), (f64)(f32)px_pmul(px_lo(f7), px_hi(f10)));
    wrf32d((u32)param_1, px_hi(f4));
    wrf32d((u32)param_1, px_lo(f4));
    f8 = px_pack((f64)(f32)px_pmul(px_hi(f8), px_hi(f11)), (f64)(f32)px_pmul(px_lo(f8), px_hi(f11)));
    f2 = px_pack((f64)(f32)px_pmul(px_hi(f2), px_hi(f11)), (f64)(f32)px_pmul(px_lo(f2), px_hi(f11)));
    t31 = (u32)param_1 + 8u;
    wrf32d(t31, px_hi(f5));
    wrf32d(t31, px_lo(f5));
    t32 = (u32)param_1 + 0x10u;
    wrf32d(t32, px_hi(f6));
    wrf32d(t32, px_lo(f6));
    t33 = (u32)param_1 + 0x18u;
    wrf32d(t33, px_hi(f7));
    wrf32d(t33, px_lo(f7));
    t34 = (u32)param_1 + 0x20u;
    wrf32d(t34, px_hi(f8));
    wrf32d(t34, px_lo(f8));
    t35 = (u32)param_1 + 0x28u;
    wrf32d(t35, px_hi(f2));
    wrf32d(t35, px_lo(f2));
    return;
}
