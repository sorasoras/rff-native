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

static f64 px_pmg00(f64 a, f64 b)
{
    return px_b2f((px_f2b(a) & 0xffffffff00000000ull) | (px_f2b(b) >> 32));
}

static f64 px_pmg11(f64 a, f64 b)
{
    return px_b2f(((px_f2b(a) & 0xffffffffull) << 32) | (px_f2b(b) & 0xffffffffull));
}

void fn_80234170(s32 param_1, s32 param_2, s32 param_3, s32 param_4)
{
    u32 ctr = 0, r4 = 0, r5 = 0, t3 = 0, t6 = 0, t9 = 0, t12 = 0, t15 = 0;
    f64 f0 = 0.0, f1 = tc_argf(0u), f2 = tc_argf(1u), f3 = tc_argf(2u), f4 = tc_argf(3u), f5 = tc_argf(4u), f6 = tc_argf(5u), f7 = tc_argf(6u), f8 = tc_argf(7u), f9 = 0.0, f10 = 0.0, f11 = 0.0;
    f64 f12 = 0.0, f13 = 0.0, t1 = 0.0, t4 = 0.0, t7 = 0.0, t10 = 0.0, t13 = 0.0, t16 = 0.0, t19 = 0.0, t31 = 0.0;
    t1 = (f64)rdf32((u32)param_1);
    f13 = px_pack(t1, (f64)rdf32((u32)param_1));
    t3 = (u32)param_1 + 0x10u;
    t4 = (f64)rdf32(t3);
    f12 = px_pack(t4, (f64)rdf32(t3));
    t6 = (u32)param_1 + 8u;
    t7 = (f64)rdf32(t6);
    f11 = px_pack(t7, (f64)rdf32(t6));
    f0 = px_pmg00(f13, f12);
    r5 = (u32)param_3 - 4u;
    t9 = (u32)param_1 + 0x18u;
    t10 = (f64)rdf32(t9);
    f10 = px_pack(t10, (f64)rdf32(t9));
    f1 = px_pmg11(f13, f12);
    ctr = (u32)param_4 - 1u;
    t12 = (u32)param_1 + 0x20u;
    t13 = (f64)rdf32(t12);
    f4 = px_pack(t13, (f64)rdf32(t12));
    f2 = px_pmg00(f11, f10);
    t15 = (u32)param_1 + 0x28u;
    t16 = (f64)rdf32(t15);
    f5 = px_pack(t16, (f64)rdf32(t15));
    f3 = px_pmg11(f11, f10);
    t19 = (f64)rdf32((u32)param_2);
    f6 = px_pack(t19, (f64)rdf32((u32)param_2));
    r4 = (u32)param_2 + 8u;
    f7 = px_pack((f64)rdf32(r4), 1.0);
    f8 = px_pack((f64)(f32)px_pfma(px_hi(f0), px_hi(f6), px_hi(f3)), (f64)(f32)px_pfma(px_lo(f0), px_hi(f6), px_lo(f3)));
    f9 = px_pack((f64)(f32)px_pmul(px_hi(f4), px_hi(f6)), (f64)(f32)px_pmul(px_lo(f4), px_lo(f6)));
    f8 = px_pack((f64)(f32)px_pfma(px_hi(f1), px_lo(f6), px_hi(f8)), (f64)(f32)px_pfma(px_lo(f1), px_lo(f6), px_lo(f8)));
    f10 = px_pack((f64)(f32)px_pfma(px_hi(f5), px_hi(f7), px_hi(f9)), (f64)(f32)px_pfma(px_lo(f5), px_lo(f7), px_lo(f9)));
    do {
        r4 = r4 + 4u;
        t31 = (f64)rdf32(r4);
        f6 = px_pack(t31, (f64)rdf32(r4 + 4u));
        f12 = px_pack((f64)(f32)px_pfma(px_hi(f2), px_hi(f7), px_hi(f8)), (f64)(f32)px_pfma(px_lo(f2), px_hi(f7), px_lo(f8)));
        r4 = r4 + 8u;
        f7 = px_pack((f64)rdf32(r4), 1.0);
        f13 = px_pack((f64)(f32)px_padd(px_hi(f10), px_lo(f9)), px_lo(f10));
        f8 = px_pack((f64)(f32)px_pfma(px_hi(f0), px_hi(f6), px_hi(f3)), (f64)(f32)px_pfma(px_lo(f0), px_hi(f6), px_lo(f3)));
        f9 = px_pack((f64)(f32)px_pmul(px_hi(f4), px_hi(f6)), (f64)(f32)px_pmul(px_lo(f4), px_lo(f6)));
        r5 = r5 + 4u;
        wrf32d(r5, px_hi(f12));
        wrf32d(r5 + 4u, px_lo(f12));
        f8 = px_pack((f64)(f32)px_pfma(px_hi(f1), px_lo(f6), px_hi(f8)), (f64)(f32)px_pfma(px_lo(f1), px_lo(f6), px_lo(f8)));
        r5 = r5 + 8u;
        wrf32d(r5, px_hi(f13));
        f10 = px_pack((f64)(f32)px_pfma(px_hi(f5), px_hi(f7), px_hi(f9)), (f64)(f32)px_pfma(px_lo(f5), px_lo(f7), px_lo(f9)));
        ctr = ctr - 1u;
    } while (ctr != 0u);
    f12 = px_pack((f64)(f32)px_pfma(px_hi(f2), px_hi(f7), px_hi(f8)), (f64)(f32)px_pfma(px_lo(f2), px_hi(f7), px_lo(f8)));
    r5 = r5 + 4u;
    wrf32d(r5, px_hi(f12));
    wrf32d(r5 + 4u, px_lo(f12));
    r5 = r5 + 8u;
    wrf32d(r5, px_hi(px_pack((f64)(f32)px_padd(px_hi(f10), px_lo(f9)), px_lo(f10))));
    return;
}
