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

f64 fn_802f0118(s32 param_1, s32 param_2, s32 param_3)
{
    u32 t6 = 0, t9 = 0, t17 = 0, t22 = 0, t27 = 0, t30 = 0, t35 = 0, t43 = 0, t48 = 0, t49 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f3 = 0.0, f4 = 0.0, f5 = 0.0, f6 = 0.0, f7 = 0.0, f8 = 0.0, f9 = 0.0, f10 = 0.0;
    f2 = px_pack((f64)rdf32((u32)param_2), (f64)rdf32((u32)param_2));
    f0 = px_pack((f64)rdf32((u32)param_3), (f64)rdf32((u32)param_3));
    t6 = (u32)param_2 + 8u;
    f3 = px_pack((f64)rdf32(t6), (f64)rdf32(t6));
    t9 = (u32)param_2 + 0x10u;
    f4 = px_pack((f64)rdf32(t9), (f64)rdf32(t9));
    f8 = px_pack((f64)(f32)px_pmul(px_hi(f2), px_hi(f0)), (f64)(f32)px_pmul(px_lo(f2), px_lo(f0)));
    f1 = px_pack((f64)rdf32((u32)param_3 + 8u), 1.0);
    t17 = (u32)param_2 + 0x18u;
    f5 = px_pack((f64)rdf32(t17), (f64)rdf32(t17));
    f9 = px_pack((f64)(f32)px_pfma(px_hi(f3), px_hi(f1), px_hi(f8)), (f64)(f32)px_pfma(px_lo(f3), px_lo(f1), px_lo(f8)));
    t22 = (u32)param_2 + 0x20u;
    f6 = px_pack((f64)rdf32(t22), (f64)rdf32(t22));
    f8 = px_pack((f64)(f32)px_pmul(px_hi(f4), px_hi(f0)), (f64)(f32)px_pmul(px_lo(f4), px_lo(f0)));
    t27 = (u32)param_2 + 0x28u;
    f7 = px_pack((f64)rdf32(t27), (f64)rdf32(t27));
    t30 = (u32)param_1 + 8u;
    wrf32d(t30, px_hi(f3));
    wrf32d(t30, px_lo(f3));
    f10 = px_pack((f64)(f32)px_padd(px_hi(f9), px_lo(0.0)), px_lo(f9));
    f9 = px_pack((f64)(f32)px_pfma(px_hi(f5), px_hi(f1), px_hi(f8)), (f64)(f32)px_pfma(px_lo(f5), px_lo(f1), px_lo(f8)));
    t35 = (u32)param_1 + 0x18u;
    wrf32d(t35, px_hi(f5));
    wrf32d(t35, px_lo(f5));
    f8 = px_pack((f64)(f32)px_pmul(px_hi(f6), px_hi(f0)), (f64)(f32)px_pmul(px_lo(f6), px_lo(f0)));
    wrf32d((u32)param_1 + 0xcu, px_hi(f10));
    f10 = px_pack((f64)(f32)px_padd(px_hi(f9), px_lo(f10)), px_lo(f9));
    f9 = px_pack((f64)(f32)px_pfma(px_hi(f7), px_hi(f1), px_hi(f8)), (f64)(f32)px_pfma(px_lo(f7), px_lo(f1), px_lo(f8)));
    t43 = (u32)param_1 + 0x28u;
    wrf32d(t43, px_hi(f7));
    wrf32d(t43, px_lo(f7));
    wrf32d((u32)param_1 + 0x1cu, px_hi(f10));
    f10 = px_pack((f64)(f32)px_padd(px_hi(f9), px_lo(f10)), px_lo(f9));
    wrf32d((u32)param_1, px_hi(f2));
    wrf32d((u32)param_1, px_lo(f2));
    t48 = (u32)param_1 + 0x10u;
    wrf32d(t48, px_hi(f4));
    wrf32d(t48, px_lo(f4));
    t49 = (u32)param_1 + 0x20u;
    wrf32d(t49, px_hi(f6));
    wrf32d(t49, px_lo(f6));
    wrf32d((u32)param_1 + 0x2cu, px_hi(f10));
    return f1;
}
