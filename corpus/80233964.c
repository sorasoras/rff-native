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

static f64 px_pfms(f64 a, f64 c, f64 b)
{
    f64 nb = -b, s = a * c + nb;
    if (s != s) {
        if (a != a) return px_pq(a);
        if (b != b) return px_pq(b);
        if (c != c) return px_pq(c);
        return px_b2f(0x7ff8000000000000ull);
    }
    u64 bits = px_f2b(s);
    if ((bits & 0x1fffffffull) == 0x10000000ull) {
        f64 ap = nb - s, bp = s + ap, da = a * c + ap, db = nb - bp, err = da + db;
        if (err != 0.0) { if ((err > 0.0) == (s > 0.0)) bits += 1; else bits -= 1; }
    }
    return px_b2f(bits);
}

static f64 px_pfnm(f64 x)
{
    return x != x ? x : -x;
}

static f64 px_pmg10(f64 a, f64 b)
{
    return px_b2f(((px_f2b(a) & 0xffffffffull) << 32) | (px_f2b(b) >> 32));
}

u32 fn_80233964(s32 param_1, s32 param_2)
{
    u32 t3 = 0, t9 = 0, t15 = 0;
    f64 f0 = 0.0, f1 = tc_argf(0u), f2 = tc_argf(1u), f3 = tc_argf(2u), f4 = tc_argf(3u), f5 = tc_argf(4u), f6 = tc_argf(5u), f7 = tc_argf(6u), f8 = tc_argf(7u), f9 = 0.0, f10 = 0.0, f11 = 0.0;
    f64 f12 = 0.0, f13 = 0.0, t4 = 0.0, t10 = 0.0, t16 = 0.0;
    f0 = px_pack((f64)rdf32((u32)param_1), 1.0);
    t3 = (u32)param_1 + 4u;
    t4 = (f64)rdf32(t3);
    f1 = px_pack(t4, (f64)rdf32(t3));
    f2 = px_pack((f64)rdf32((u32)param_1 + 0x10u), 1.0);
    f6 = px_pmg10(f1, f0);
    t9 = (u32)param_1 + 0x14u;
    t10 = (f64)rdf32(t9);
    f3 = px_pack(t10, (f64)rdf32(t9));
    f4 = px_pack((f64)rdf32((u32)param_1 + 0x20u), 1.0);
    f7 = px_pmg10(f3, f2);
    t15 = (u32)param_1 + 0x24u;
    t16 = (f64)rdf32(t15);
    f5 = px_pack(t16, (f64)rdf32(t15));
    f11 = px_pack((f64)(f32)px_pmul(px_hi(f3), px_hi(f6)), (f64)(f32)px_pmul(px_lo(f3), px_lo(f6)));
    f8 = px_pmg10(f5, f4);
    f13 = px_pack((f64)(f32)px_pmul(px_hi(f5), px_hi(f7)), (f64)(f32)px_pmul(px_lo(f5), px_lo(f7)));
    f11 = px_pack((f64)(f32)px_pfms(px_hi(f1), px_hi(f7), px_hi(f11)), (f64)(f32)px_pfms(px_lo(f1), px_lo(f7), px_lo(f11)));
    f12 = px_pack((f64)(f32)px_pmul(px_hi(f1), px_hi(f8)), (f64)(f32)px_pmul(px_lo(f1), px_lo(f8)));
    f13 = px_pack((f64)(f32)px_pfms(px_hi(f3), px_hi(f8), px_hi(f13)), (f64)(f32)px_pfms(px_lo(f3), px_lo(f8), px_lo(f13)));
    f12 = px_pack((f64)(f32)px_pfms(px_hi(f5), px_hi(f6), px_hi(f12)), (f64)(f32)px_pfms(px_lo(f5), px_lo(f6), px_lo(f12)));
    f10 = px_pack((f64)(f32)px_pmul(px_hi(f3), px_hi(f4)), (f64)(f32)px_pmul(px_lo(f3), px_lo(f4)));
    f9 = px_pack((f64)(f32)px_pmul(px_hi(f0), px_hi(f5)), (f64)(f32)px_pmul(px_lo(f0), px_lo(f5)));
    f8 = px_pack((f64)(f32)px_pmul(px_hi(f1), px_hi(f2)), (f64)(f32)px_pmul(px_lo(f1), px_lo(f2)));
    f10 = px_pack((f64)(f32)px_pfms(px_hi(f2), px_hi(f5), px_hi(f10)), (f64)(f32)px_pfms(px_lo(f2), px_lo(f5), px_lo(f10)));
    f9 = px_pack((f64)(f32)px_pfms(px_hi(f1), px_hi(f4), px_hi(f9)), (f64)(f32)px_pfms(px_lo(f1), px_lo(f4), px_lo(f9)));
    f8 = px_pack((f64)(f32)px_pfms(px_hi(f0), px_hi(f3), px_hi(f8)), (f64)(f32)px_pfms(px_lo(f0), px_lo(f3), px_lo(f8)));
    f7 = px_pack((f64)(f32)px_pmul(px_hi(f0), px_hi(f13)), (f64)(f32)px_pmul(px_lo(f0), px_lo(f13)));
    f1 = px_pack((f64)(f32)px_psub(px_hi(f1), px_hi(f1)), (f64)(f32)px_psub(px_lo(f1), px_lo(f1)));
    f7 = px_pack((f64)(f32)px_pfma(px_hi(f2), px_hi(f12), px_hi(f7)), (f64)(f32)px_pfma(px_lo(f2), px_lo(f12), px_lo(f7)));
    f7 = px_pack((f64)(f32)px_pfma(px_hi(f4), px_hi(f11), px_hi(f7)), (f64)(f32)px_pfma(px_lo(f4), px_lo(f11), px_lo(f7)));
    if (px_hi(f7) == px_hi(f1)) {
        return 0u;
    }
    f0 = (f64)(f32)ppc_fres(f7);
    wrf32d((u32)param_2 + 0xcu, px_hi(f1));
    f6 = px_pack((f64)(f32)px_padd(px_hi(f0), px_hi(f0)), (f64)(f32)px_padd(px_lo(f0), px_lo(f0)));
    f5 = px_pack((f64)(f32)px_pmul(px_hi(f0), px_hi(f0)), (f64)(f32)px_pmul(px_lo(f0), px_lo(f0)));
    wrf32d((u32)param_2 + 0x1cu, px_hi(f1));
    f0 = px_pack(px_pfnm((f64)(f32)px_pfms(px_hi(f7), px_hi(f5), px_hi(f6))), px_pfnm((f64)(f32)px_pfms(px_lo(f7), px_lo(f5), px_lo(f6))));
    wrf32d((u32)param_2 + 0x2cu, px_hi(f1));
    f13 = px_pack((f64)(f32)px_pmul(px_hi(f13), px_hi(f0)), (f64)(f32)px_pmul(px_lo(f13), px_hi(f0)));
    f12 = px_pack((f64)(f32)px_pmul(px_hi(f12), px_hi(f0)), (f64)(f32)px_pmul(px_lo(f12), px_hi(f0)));
    f11 = px_pack((f64)(f32)px_pmul(px_hi(f11), px_hi(f0)), (f64)(f32)px_pmul(px_lo(f11), px_hi(f0)));
    wrf32d((u32)param_2, px_lo(f13));
    wrf32d((u32)param_2 + 0x10u, px_lo(f12));
    f10 = px_pack((f64)(f32)px_pmul(px_hi(f10), px_hi(f0)), (f64)(f32)px_pmul(px_lo(f10), px_hi(f0)));
    f9 = px_pack((f64)(f32)px_pmul(px_hi(f9), px_hi(f0)), (f64)(f32)px_pmul(px_lo(f9), px_hi(f0)));
    wrf32d((u32)param_2 + 0x20u, px_lo(f11));
    wrf32d((u32)param_2 + 8u, px_hi(f10));
    f8 = px_pack((f64)(f32)px_pmul(px_hi(f8), px_hi(f0)), (f64)(f32)px_pmul(px_lo(f8), px_hi(f0)));
    wrf32d((u32)param_2 + 0x18u, px_hi(f9));
    wrf32d((u32)param_2 + 0x28u, px_hi(f8));
    return 1u;
}
