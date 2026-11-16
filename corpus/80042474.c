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

static f64 px_padd(f64 a, f64 b)
{
    f64 r = a + b;
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

f64 fn_80042474(s32 param_1, s32 param_2, s32 param_3)
{
    u32 t11 = 0, t16 = 0, t21 = 0, t29 = 0, t34 = 0;
    f64 f0 = 0.0, f1 = tc_argf(0u), f2 = tc_argf(1u), f3 = tc_argf(2u), f4 = tc_argf(3u), f5 = tc_argf(4u), f6 = tc_argf(5u), f8 = tc_argf(7u), f9 = 0.0, f10 = 0.0, f11 = 0.0, t1 = 0.0;
    f64 t4 = 0.0, t12 = 0.0, t17 = 0.0, t22 = 0.0, t30 = 0.0, t35 = 0.0;
    t1 = (f64)rdf32((u32)param_3);
    f0 = px_pack(t1, (f64)rdf32((u32)param_3));
    t4 = (f64)rdf32((u32)param_2);
    f2 = px_pack(t4, (f64)rdf32((u32)param_2));
    f1 = px_pack((f64)rdf32((u32)param_3 + 8u), 1.0);
    f4 = px_pack((f64)(f32)px_pmul(px_hi(f2), px_hi(f0)), (f64)(f32)px_pmul(px_lo(f2), px_lo(f0)));
    t11 = (u32)param_2 + 8u;
    t12 = (f64)rdf32(t11);
    f3 = px_pack(t12, (f64)rdf32(t11));
    f5 = px_pack((f64)(f32)px_pfma(px_hi(f3), px_hi(f1), px_hi(f4)), (f64)(f32)px_pfma(px_lo(f3), px_lo(f1), px_lo(f4)));
    t16 = (u32)param_2 + 0x10u;
    t17 = (f64)rdf32(t16);
    f8 = px_pack(t17, (f64)rdf32(t16));
    f6 = px_pack((f64)(f32)px_padd(px_hi(f5), px_lo(tc_argf(5u))), px_lo(f5));
    t21 = (u32)param_2 + 0x18u;
    t22 = (f64)rdf32(t21);
    f9 = px_pack(t22, (f64)rdf32(t21));
    f10 = px_pack((f64)(f32)px_pmul(px_hi(f8), px_hi(f0)), (f64)(f32)px_pmul(px_lo(f8), px_lo(f0)));
    wrf32d((u32)param_1, px_hi(f6));
    f11 = px_pack((f64)(f32)px_pfma(px_hi(f9), px_hi(f1), px_hi(f10)), (f64)(f32)px_pfma(px_lo(f9), px_lo(f1), px_lo(f10)));
    t29 = (u32)param_2 + 0x20u;
    t30 = (f64)rdf32(t29);
    f2 = px_pack(t30, (f64)rdf32(t29));
    t34 = (u32)param_2 + 0x28u;
    t35 = (f64)rdf32(t34);
    f3 = px_pack(t35, (f64)rdf32(t34));
    f4 = px_pack((f64)(f32)px_pmul(px_hi(f2), px_hi(f0)), (f64)(f32)px_pmul(px_lo(f2), px_lo(f0)));
    wrf32d((u32)param_1 + 4u, px_hi(px_pack((f64)(f32)px_padd(px_hi(f11), px_lo(0.0)), px_lo(f11))));
    f5 = px_pack((f64)(f32)px_pfma(px_hi(f3), px_hi(f1), px_hi(f4)), (f64)(f32)px_pfma(px_lo(f3), px_lo(f1), px_lo(f4)));
    f6 = px_pack((f64)(f32)px_padd(px_hi(f5), px_lo(f6)), px_lo(f5));
    wrf32d((u32)param_1 + 8u, px_hi(f6));
    return f1;
}
