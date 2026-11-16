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

static f64 px_pmg00(f64 a, f64 b)
{
    return px_b2f((px_f2b(a) & 0xffffffff00000000ull) | (px_f2b(b) >> 32));
}

static f64 px_pmg01(f64 a, f64 b)
{
    return px_b2f((px_f2b(a) & 0xffffffff00000000ull) | (px_f2b(b) & 0xffffffffull));
}

f64 fn_80320d7c(s32 param_1, s32 param_2, s32 param_3)
{
    u32 c0eq = 0, t11 = 0, t14 = 0, t17 = 0, t20 = 0, t23 = 0;
    f64 f0 = 0.0, f1 = tc_argf(0u), f2 = tc_argf(1u), f3 = tc_argf(2u), f4 = tc_argf(3u), f5 = tc_argf(4u), f6 = tc_argf(5u), f7 = tc_argf(6u), f8 = tc_argf(7u), t1 = 0.0, t9 = 0.0, t12 = 0.0;
    f64 t15 = 0.0, t18 = 0.0, t21 = 0.0, t24 = 0.0;
    t1 = (f64)rdf32((u32)param_3);
    f0 = px_pack(t1, (f64)rdf32((u32)param_3));
    f8 = (f64)rdf32(0x805779c4u);
    f6 = px_pack((f64)(f32)px_psub(px_hi(f0), px_hi(f0)), (f64)(f32)px_psub(px_lo(f0), px_lo(f0)));
    f1 = px_pack((f64)rdf32((u32)param_3 + 8u), 1.0);
    t9 = (f64)rdf32((u32)param_2);
    f2 = px_pack(t9, (f64)rdf32((u32)param_2));
    t11 = (u32)param_2 + 8u;
    t12 = (f64)rdf32(t11);
    f3 = px_pack(t12, (f64)rdf32(t11));
    if (px_hi(f0) == px_hi(f6)) {
        f0 = px_pmg01(f8, f0);
    }
    t14 = (u32)param_2 + 0x10u;
    t15 = (f64)rdf32(t14);
    f4 = px_pack(t15, (f64)rdf32(t14));
    t17 = (u32)param_2 + 0x18u;
    t18 = (f64)rdf32(t17);
    f5 = px_pack(t18, (f64)rdf32(t17));
    if (px_lo(f0) == px_lo(f6)) {
        f0 = px_pmg00(f0, f8);
    }
    c0eq = px_hi(f1) == px_hi(f6);
    t20 = (u32)param_2 + 0x20u;
    t21 = (f64)rdf32(t20);
    f6 = px_pack(t21, (f64)rdf32(t20));
    t23 = (u32)param_2 + 0x28u;
    t24 = (f64)rdf32(t23);
    f7 = px_pack(t24, (f64)rdf32(t23));
    if (c0eq) {
        f1 = px_pmg01(f8, f1);
    }
    f2 = px_pack((f64)(f32)px_pmul(px_hi(f2), px_hi(f0)), (f64)(f32)px_pmul(px_lo(f2), px_lo(f0)));
    f4 = px_pack((f64)(f32)px_pmul(px_hi(f4), px_hi(f0)), (f64)(f32)px_pmul(px_lo(f4), px_lo(f0)));
    f6 = px_pack((f64)(f32)px_pmul(px_hi(f6), px_hi(f0)), (f64)(f32)px_pmul(px_lo(f6), px_lo(f0)));
    f3 = px_pack((f64)(f32)px_pmul(px_hi(f3), px_hi(f1)), (f64)(f32)px_pmul(px_lo(f3), px_lo(f1)));
    wrf32d((u32)param_1, px_lo(f2));
    f5 = px_pack((f64)(f32)px_pmul(px_hi(f5), px_hi(f1)), (f64)(f32)px_pmul(px_lo(f5), px_lo(f1)));
    f7 = px_pack((f64)(f32)px_pmul(px_hi(f7), px_hi(f1)), (f64)(f32)px_pmul(px_lo(f7), px_lo(f1)));
    wrf32d((u32)param_1 + 0x10u, px_lo(f4));
    wrf32d((u32)param_1 + 8u, px_lo(f3));
    wrf32d((u32)param_1 + 0x20u, px_lo(f6));
    wrf32d((u32)param_1 + 0x18u, px_lo(f5));
    wrf32d((u32)param_1 + 0x28u, px_lo(f7));
    return f1;
}
