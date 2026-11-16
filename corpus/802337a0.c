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

static f64 px_pfma(f64 a, f64 c, f64 b)
{
    f64 s = a * c + b;
    if (s != s) {
        if (a != a) return px_pq(a);
        if (b != b) return px_pq(b);
        if (c != c) return px_pq(c);
        return px_b2f(0x7ff8000000000000ull);
    }
    u64 bits = px_f2b(s);
    if ((bits & 0x1fffffffull) == 0x10000000ull) {
        f64 ap = b - s, bp = s + ap, da = a * c + ap, db = b - bp, err = da + db;
        if (err != 0.0) { if ((err > 0.0) == (s > 0.0)) bits += 1; else bits -= 1; }
    }
    return px_b2f(bits);
}

f64 fn_802337a0(s32 param_1, s32 param_2, s32 param_3)
{
    u32 t6 = 0, t9 = 0, t14 = 0, t24 = 0, t29 = 0, t34 = 0, t39 = 0, t44 = 0, t49 = 0, t52 = 0, t70 = 0, t73 = 0;
    u32 t80 = 0, t83 = 0, t86 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f3 = 0.0, f4 = 0.0, f5 = 0.0, f6 = 0.0, f7 = 0.0, f8 = 0.0, f9 = 0.0, f10 = 0.0, f11 = 0.0;
    f64 f12 = 0.0, f13 = 0.0, f14 = 0.0, f15 = 0.0, f31 = 0.0;
    f0 = px_pack((f64)rdf32((u32)param_1), (f64)rdf32((u32)param_1));
    f6 = px_pack((f64)rdf32((u32)param_2), (f64)rdf32((u32)param_2));
    t6 = (u32)param_2 + 8u;
    f7 = px_pack((f64)rdf32(t6), (f64)rdf32(t6));
    t9 = (u32)param_2 + 0x10u;
    f8 = px_pack((f64)rdf32(t9), (f64)rdf32(t9));
    f12 = px_pack((f64)(f32)px_pmul(px_hi(f6), px_hi(f0)), (f64)(f32)px_pmul(px_lo(f6), px_hi(f0)));
    t14 = (u32)param_1 + 0x10u;
    f2 = px_pack((f64)rdf32(t14), (f64)rdf32(t14));
    f13 = px_pack((f64)(f32)px_pmul(px_hi(f7), px_hi(f0)), (f64)(f32)px_pmul(px_lo(f7), px_hi(f0)));
    f31 = px_pack((f64)rdf32(0x80570ab8u), (f64)rdf32(0x80570ab8u));
    f14 = px_pack((f64)(f32)px_pmul(px_hi(f6), px_hi(f2)), (f64)(f32)px_pmul(px_lo(f6), px_hi(f2)));
    t24 = (u32)param_2 + 0x18u;
    f9 = px_pack((f64)rdf32(t24), (f64)rdf32(t24));
    f15 = px_pack((f64)(f32)px_pmul(px_hi(f7), px_hi(f2)), (f64)(f32)px_pmul(px_lo(f7), px_hi(f2)));
    t29 = (u32)param_1 + 8u;
    f1 = px_pack((f64)rdf32(t29), (f64)rdf32(t29));
    f12 = px_pack((f64)(f32)px_pfma(px_hi(f8), px_lo(f0), px_hi(f12)), (f64)(f32)px_pfma(px_lo(f8), px_lo(f0), px_lo(f12)));
    t34 = (u32)param_1 + 0x18u;
    f3 = px_pack((f64)rdf32(t34), (f64)rdf32(t34));
    f14 = px_pack((f64)(f32)px_pfma(px_hi(f8), px_lo(f2), px_hi(f14)), (f64)(f32)px_pfma(px_lo(f8), px_lo(f2), px_lo(f14)));
    t39 = (u32)param_2 + 0x20u;
    f10 = px_pack((f64)rdf32(t39), (f64)rdf32(t39));
    f13 = px_pack((f64)(f32)px_pfma(px_hi(f9), px_lo(f0), px_hi(f13)), (f64)(f32)px_pfma(px_lo(f9), px_lo(f0), px_lo(f13)));
    t44 = (u32)param_2 + 0x28u;
    f11 = px_pack((f64)rdf32(t44), (f64)rdf32(t44));
    f15 = px_pack((f64)(f32)px_pfma(px_hi(f9), px_lo(f2), px_hi(f15)), (f64)(f32)px_pfma(px_lo(f9), px_lo(f2), px_lo(f15)));
    t49 = (u32)param_1 + 0x20u;
    f4 = px_pack((f64)rdf32(t49), (f64)rdf32(t49));
    t52 = (u32)param_1 + 0x28u;
    f5 = px_pack((f64)rdf32(t52), (f64)rdf32(t52));
    f12 = px_pack((f64)(f32)px_pfma(px_hi(f10), px_hi(f1), px_hi(f12)), (f64)(f32)px_pfma(px_lo(f10), px_hi(f1), px_lo(f12)));
    f13 = px_pack((f64)(f32)px_pfma(px_hi(f11), px_hi(f1), px_hi(f13)), (f64)(f32)px_pfma(px_lo(f11), px_hi(f1), px_lo(f13)));
    f14 = px_pack((f64)(f32)px_pfma(px_hi(f10), px_hi(f3), px_hi(f14)), (f64)(f32)px_pfma(px_lo(f10), px_hi(f3), px_lo(f14)));
    f15 = px_pack((f64)(f32)px_pfma(px_hi(f11), px_hi(f3), px_hi(f15)), (f64)(f32)px_pfma(px_lo(f11), px_hi(f3), px_lo(f15)));
    wrf32d((u32)param_3, px_hi(f12));
    wrf32d((u32)param_3, px_lo(f12));
    f2 = px_pack((f64)(f32)px_pmul(px_hi(f6), px_hi(f4)), (f64)(f32)px_pmul(px_lo(f6), px_hi(f4)));
    f13 = px_pack((f64)(f32)px_pfma(px_hi(f31), px_lo(f1), px_hi(f13)), (f64)(f32)px_pfma(px_lo(f31), px_lo(f1), px_lo(f13)));
    f0 = px_pack((f64)(f32)px_pmul(px_hi(f7), px_hi(f4)), (f64)(f32)px_pmul(px_lo(f7), px_hi(f4)));
    t70 = (u32)param_3 + 0x10u;
    wrf32d(t70, px_hi(f14));
    wrf32d(t70, px_lo(f14));
    f15 = px_pack((f64)(f32)px_pfma(px_hi(f31), px_lo(f3), px_hi(f15)), (f64)(f32)px_pfma(px_lo(f31), px_lo(f3), px_lo(f15)));
    t73 = (u32)param_3 + 8u;
    wrf32d(t73, px_hi(f13));
    wrf32d(t73, px_lo(f13));
    f2 = px_pack((f64)(f32)px_pfma(px_hi(f8), px_lo(f4), px_hi(f2)), (f64)(f32)px_pfma(px_lo(f8), px_lo(f4), px_lo(f2)));
    f0 = px_pack((f64)(f32)px_pfma(px_hi(f9), px_lo(f4), px_hi(f0)), (f64)(f32)px_pfma(px_lo(f9), px_lo(f4), px_lo(f0)));
    f2 = px_pack((f64)(f32)px_pfma(px_hi(f10), px_hi(f5), px_hi(f2)), (f64)(f32)px_pfma(px_lo(f10), px_hi(f5), px_lo(f2)));
    t80 = (u32)param_3 + 0x18u;
    wrf32d(t80, px_hi(f15));
    wrf32d(t80, px_lo(f15));
    f0 = px_pack((f64)(f32)px_pfma(px_hi(f11), px_hi(f5), px_hi(f0)), (f64)(f32)px_pfma(px_lo(f11), px_hi(f5), px_lo(f0)));
    t83 = (u32)param_3 + 0x20u;
    wrf32d(t83, px_hi(f2));
    wrf32d(t83, px_lo(f2));
    f0 = px_pack((f64)(f32)px_pfma(px_hi(f31), px_lo(f5), px_hi(f0)), (f64)(f32)px_pfma(px_lo(f31), px_lo(f5), px_lo(f0)));
    t86 = (u32)param_3 + 0x28u;
    wrf32d(t86, px_hi(f0));
    wrf32d(t86, px_lo(f0));
    return f1;
}
