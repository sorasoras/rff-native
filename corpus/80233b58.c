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

static f64 px_pfnm(f64 x)
{
    return x != x ? x : -x;
}

static f64 px_sfma(f64 a, f64 c, f64 b)
{
    f64 s = a * c + b;
    if (s != s) {
        if (a != a) return px_pq(a);
        if (b != b) return px_pq(b);
        if (c != c) return px_pq(c);
        return px_b2f(0x7ff8000000000000ull);
    }
    return s;
}

static f64 px_sfms(f64 a, f64 c, f64 b)
{
    f64 s = a * c - b;
    if (s != s) {
        if (a != a) return px_pq(a);
        if (b != b) return px_pq(b);
        if (c != c) return px_pq(c);
        return px_b2f(0x7ff8000000000000ull);
    }
    return s;
}

static f64 px_pneg(f64 b)
{
    return px_b2f(px_f2b(b) ^ 0x8000000080000000ull);
}

static f64 px_pmg00(f64 a, f64 b)
{
    return px_b2f((px_f2b(a) & 0xffffffff00000000ull) | (px_f2b(b) & 0xffffffffull));
}

f64 fn_80233b58(f64 param_1, f64 param_2, s32 param_3, s32 param_4)
{
    u32 t38 = 0, t43 = 0, t44 = 0, t45 = 0, t46 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f3 = 0.0, f4 = 0.0, f5 = 0.0, f6 = 0.0, f7 = 0.0, f9 = 0.0, f10 = 0.0, f11 = 0.0, f12 = 0.0;
    f3 = px_pack((f64)rdf32((u32)param_4), (f64)rdf32((u32)param_4));
    f11 = (f64)(f32)param_2;
    f10 = (f64)rdf32(0x80576b58u);
    f12 = (f64)(f32)param_1;
    f4 = px_pack((f64)(f32)px_pmul(px_hi(f3), px_hi(f3)), (f64)(f32)px_pmul(px_lo(f3), px_lo(f3)));
    f2 = (f64)rdf32((u32)param_4 + 8u);
    f1 = (f64)(f32)px_psub(f10, f10);
    f0 = (f64)(f32)px_psub((f64)(f32)px_padd(f10, f10), f11);
    f11 = px_pmg00(f11, f11);
    f6 = px_pack((f64)(f32)px_padd(px_hi(px_pack((f64)(f32)px_pfma(px_hi(f2), px_hi(f2), px_hi(f4)), (f64)(f32)px_pfma(px_lo(f2), px_lo(f2), px_lo(f4)))), px_lo(f2)), px_lo(f4));
    f7 = ppc_frsqrte(f6);
    f7 = (f64)(f32)px_pmul(px_pfnm((f64)(f32)px_sfms((f64)(f32)px_pmul(f7, f7), f6, (f64)rdf32(0x80576b5cu))), (f64)(f32)px_pmul(f7, f10));
    f3 = px_pack((f64)(f32)px_pmul(px_hi(f3), px_hi(f7)), (f64)(f32)px_pmul(px_lo(f3), px_hi(f7)));
    f2 = px_pack((f64)(f32)px_pmul(px_hi(f2), px_hi(f7)), (f64)(f32)px_pmul(px_lo(f2), px_hi(f7)));
    f6 = px_pack((f64)(f32)px_pmul(px_hi(f3), px_hi(f0)), (f64)(f32)px_pmul(px_lo(f3), px_hi(f0)));
    f7 = px_pack((f64)(f32)px_pmul(px_hi(f2), px_hi(f0)), (f64)(f32)px_pmul(px_lo(f2), px_hi(f0)));
    f10 = px_pack((f64)(f32)px_pmul(px_hi(f3), px_hi(f12)), (f64)(f32)px_pmul(px_lo(f3), px_hi(f12)));
    f5 = px_pack((f64)(f32)px_pmul(px_hi(f6), px_lo(f3)), (f64)(f32)px_pmul(px_lo(f6), px_lo(f3)));
    f4 = px_pack((f64)(f32)px_pmul(px_hi(f6), px_hi(f3)), (f64)(f32)px_pmul(px_lo(f6), px_hi(f3)));
    f6 = px_pack((f64)(f32)px_pmul(px_hi(f6), px_hi(f2)), (f64)(f32)px_pmul(px_lo(f6), px_hi(f2)));
    f3 = px_pneg(f10);
    f4 = px_pack((f64)(f32)px_padd(px_hi(f4), px_lo(px_pfnm((f64)(f32)px_sfms(f2, f12, f5)))), px_lo(f11));
    f0 = px_pack((f64)(f32)px_padd(px_hi(f3), px_lo(f1)), px_lo(f6));
    f7 = px_pack((f64)(f32)px_pmul(px_hi(f7), px_hi(f2)), (f64)(f32)px_pmul(px_lo(f7), px_hi(f2)));
    f9 = px_pack((f64)(f32)px_padd(px_hi(f6), px_lo(f1)), px_lo(f10));
    wrf32d((u32)param_3, px_hi(f4));
    wrf32d((u32)param_3, px_lo(f4));
    f3 = px_pack((f64)(f32)px_padd(px_hi(f6), px_lo(f6)), px_lo(f3));
    f5 = px_pack(px_hi(f5), (f64)(f32)px_padd(px_hi(f11), px_lo((f64)(f32)px_sfma(f2, f12, f5))));
    t38 = (u32)param_3 + 0x18u;
    wrf32d(t38, px_hi(f0));
    wrf32d(t38, px_lo(f0));
    f7 = px_pack((f64)(f32)px_padd(px_hi(f7), px_lo(f1)), px_lo(f11));
    f6 = px_pack(px_hi(f6), (f64)(f32)px_padd(px_hi(f10), px_lo(f3)));
    t43 = (u32)param_3 + 8u;
    wrf32d(t43, px_hi(f9));
    wrf32d(t43, px_lo(f9));
    t44 = (u32)param_3 + 0x10u;
    wrf32d(t44, px_hi(f5));
    wrf32d(t44, px_lo(f5));
    t45 = (u32)param_3 + 0x20u;
    wrf32d(t45, px_hi(f6));
    wrf32d(t45, px_lo(f6));
    t46 = (u32)param_3 + 0x28u;
    wrf32d(t46, px_hi(f7));
    wrf32d(t46, px_lo(f7));
    return f1;
}
