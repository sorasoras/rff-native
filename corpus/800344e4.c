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

static f64 px_pmg00(f64 a, f64 b)
{
    return px_b2f((px_f2b(a) & 0xffffffff00000000ull) | (px_f2b(b) & 0xffffffffull));
}

static f64 px_qscale(u32 sc)
{
    f64 m = 1.0;
    s32 n = (s32)(sc & 0x3fu);
    if (n >= 32) n -= 64;
    for (; n > 0; n--) m *= 2.0;
    for (; n < 0; n++) m *= 0.5;
    return m;
}

static f64 px_dq(u32 g, u32 ea)
{
    u32 t = (g >> 16) & 7u;
    f64 m = px_qscale(g >> 24);
    if (t == 4u) return (f64)(f32)((f64)rd8(ea) / m);
    if (t == 5u) return (f64)(f32)((f64)rd16(ea) / m);
    if (t == 6u) return (f64)(f32)((f64)(s8)rd8(ea) / m);
    if (t == 7u) return (f64)(f32)((f64)(s16)rd16(ea) / m);
    return (f64)rdf32(ea);
}

u32 fn_800344e4(f32 param_1, u32 param_2, s32 param_3, u32 param_4)
{
    u32 r0 = 0, r6 = 0, r8 = 0, r9 = 0;
    f64 f0 = 0.0, f1 = 0.0, f3 = 0.0, f4 = 0.0, f5 = 0.0, f6 = 0.0, f7 = 0.0, f8 = 0.0, f9 = 0.0, f10 = 0.0, f11 = 0.0, f12 = 0.0;
    f64 f13 = 0.0;
    (void)param_1;
    r8 = rd32((u32)param_3 + 0x10u);
    r0 = rd32(param_4);
    r9 = rd32(param_4 + 4u);
    r6 = r8 + ((r0 << 2u) & 0xfffffffcu);
    f12 = (f64)rdf32((u32)param_3 + 4u);
    r8 = r8 + ((r9 << 2u) & 0xfffffffcu);
    f13 = (f64)rdf32((u32)param_3 + 8u);
    if (r0 == 0xffffffffu) {
        f10 = px_pmg00(f13, f13);
        f1 = px_pack(px_dq(0u, r8), 1.0);
        wrf32d(param_2, px_hi(px_pack((f64)(f32)px_pfma(px_hi(f1), px_hi(f12), px_hi(f10)), (f64)(f32)px_pfma(px_lo(f1), px_hi(f12), px_lo(f10)))));
    } else {
        if (r9 == 0xffffffffu) {
            f10 = px_pmg00(f13, f13);
            f1 = px_pack(px_dq(0u, r6), 1.0);
            wrf32d(param_2, px_hi(px_pack((f64)(f32)px_pfma(px_hi(f1), px_hi(f12), px_hi(f10)), (f64)(f32)px_pfma(px_lo(f1), px_hi(f12), px_lo(f10)))));
        } else {
            f8 = rdf64(0x80571e58u);
            f11 = (f64)rdf32(param_4 + 0x18u);
            f3 = (f64)(f32)px_sfms((f64)rdf32(0x80571e48u), f11, (f64)rdf32(0x80571e64u));
            f9 = (f64)rdf32(param_4 + 0x1cu);
            f7 = (f64)(f32)px_sfma(f12, (f64)(f32)px_psub(px_b2f((u64)rd16(r6) | 0x4330000000000000ull), f8), f13);
            f4 = (f64)(f32)px_pmul((f64)rdf32(param_4 + 0x20u), f9);
            wrf32d(param_4 + 8u, f7);
            f6 = (f64)(f32)px_psub((f64)(f32)px_sfma(f12, (f64)(f32)px_psub(px_b2f((u64)rd16(r6 + 2u) | 0x4330000000000000ull), f8), f13), f7);
            wrf32d(param_4 + 0xcu, f6);
            f5 = (f64)(f32)px_sfma(f12, (f64)(f32)px_psub(px_b2f((u64)rd16(r8) | 0x4330000000000000ull), f8), f13);
            wrf32d(param_4 + 0x10u, f5);
            f0 = (f64)(f32)px_sfma(f11, (f64)(f32)px_pmul(f11, (f64)(f32)px_pmul(f3, (f64)(f32)px_psub(f7, f5))), f7);
            f5 = (f64)(f32)px_psub((f64)(f32)px_sfma(f12, (f64)(f32)px_psub(px_b2f((u64)rd16(r8 + 2u) | 0x4330000000000000ull), f8), f13), f5);
            wrf32d(param_4 + 0x14u, f5);
            f0 = (f64)(f32)px_sfma(f4, (f64)(f32)px_sfma(f9, f6, (f64)(f32)px_pmul(f11, f5)), f0);
            wrf32d(param_2, f0);
        }
    }
    return param_2;
}
