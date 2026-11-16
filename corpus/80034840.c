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

static f64 px_pmg00(f64 a, f64 b)
{
    return px_b2f((px_f2b(a) & 0xffffffff00000000ull) | (px_f2b(b) >> 32));
}

static f64 px_ctiw(f64 b, s32 w)
{
    u64 r = 0xfff8000000000000ull | (u32)w;
    if (w == 0 && (px_f2b(b) >> 63) != 0) r |= 0x100000000ull;
    return px_b2f(r);
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

f64 fn_80034840(f64 param_1, u32 param_2, u32 param_3)
{
    u32 r0 = 0, r4 = 0, r6 = 0, t5 = 0, t17 = 0, t20 = 0, t23 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f3 = 0.0, f4 = 0.0, f5 = 0.0, f6 = 0.0, f9 = 0.0, f10 = 0.0, f11 = 0.0, f12 = 0.0, f13 = 0.0;
    f64 f30 = 0.0, f31 = 0.0, t39 = 0.0, t42 = 0.0, t45 = 0.0, t48 = 0.0;
    f0 = px_ctiw(param_1, ppc_fctiwz(param_1));
    r0 = (u32)rd16(param_3);
    f11 = (f64)rdf32(param_3 + 4u);
    f12 = (f64)rdf32(param_3 + 8u);
    wrf64(0x817fdfd8u, f0);
    r6 = (u32)px_f2b(f0);
    if ((s32)r6 >= (s32)r0) {
        r4 = rd32(param_3 + 0x10u) + (((r6 - 1u) << 3u) & 0xfffffff8u);
        f10 = px_pmg00(f12, f12);
        f1 = px_pack(px_dq(0u, r4), px_dq(0u, r4));
        t5 = r4 + 4u;
        f2 = px_pack(px_dq(0u, t5), px_dq(0u, t5));
        wrf32d(param_2, px_lo(px_pack((f64)(f32)px_pfma(px_hi(f1), px_hi(f11), px_hi(f10)), (f64)(f32)px_pfma(px_lo(f1), px_hi(f11), px_lo(f10)))));
        wrf32d(param_2 + 8u, px_lo(px_pack((f64)(f32)px_pfma(px_hi(f2), px_hi(f11), px_hi(f10)), (f64)(f32)px_pfma(px_lo(f2), px_hi(f11), px_lo(f10)))));
    } else {
        wr32(0x817fdfdcu, r6 ^ 0x80000000u);
        r4 = rd32(param_3 + 0x10u);
        wr32(0x817fdfd8u, 0x43300000u);
        f9 = rdf64(0x80571e80u);
        r4 = r4 + ((r6 << 3u) & 0xfffffff8u);
        f0 = (f64)(f32)px_psub(param_1, (f64)(f32)px_psub(rdf64(0x817fdfd8u), f9));
        f10 = px_pmg00(f12, f12);
        f1 = px_pack(px_dq(0u, r4), px_dq(0u, r4));
        t17 = r4 + 4u;
        f2 = px_pack(px_dq(0u, t17), px_dq(0u, t17));
        t20 = r4 + 8u;
        f3 = px_pack(px_dq(0u, t20), px_dq(0u, t20));
        t23 = r4 + 0xcu;
        f4 = px_pack(px_dq(0u, t23), px_dq(0u, t23));
        wrf32d(0x817fdfb8u, px_lo(px_pack((f64)(f32)px_pfma(px_hi(f1), px_hi(f11), px_hi(f10)), (f64)(f32)px_pfma(px_lo(f1), px_hi(f11), px_lo(f10)))));
        wrf32d(0x817fdfc0u, px_lo(px_pack((f64)(f32)px_pfma(px_hi(f2), px_hi(f11), px_hi(f10)), (f64)(f32)px_pfma(px_lo(f2), px_hi(f11), px_lo(f10)))));
        wrf32d(0x817fdfc8u, px_lo(px_pack((f64)(f32)px_pfma(px_hi(f3), px_hi(f11), px_hi(f10)), (f64)(f32)px_pfma(px_lo(f3), px_hi(f11), px_lo(f10)))));
        wrf32d(0x817fdfd0u, px_lo(px_pack((f64)(f32)px_pfma(px_hi(f4), px_hi(f11), px_hi(f10)), (f64)(f32)px_pfma(px_lo(f4), px_hi(f11), px_lo(f10)))));
        f12 = (f64)rdf32(0x817fdfbcu);
        f9 = (f64)rdf32(0x817fdfccu);
        f11 = (f64)rdf32(0x817fdfb8u);
        f12 = (f64)(f32)px_pmul(f12, f9);
        f9 = (f64)rdf32(0x817fdfc8u);
        f30 = (f64)rdf32(0x80571e4cu);
        f13 = (f64)rdf32(0x817fdfc0u);
        f31 = (f64)(f32)px_sfma(f11, f9, f12);
        f9 = (f64)rdf32(0x817fdfd0u);
        f12 = (f64)rdf32(0x817fdfc4u);
        f30 = (f64)(f32)px_psub(f30, f0);
        f13 = (f64)(f32)px_sfma(f13, f9, f31);
        f11 = (f64)(f32)px_sfma(f12, (f64)rdf32(0x817fdfd4u), f13);
        if (f11 < (f64)rdf32(0x80571e50u)) {
            f0 = -f0;
        }
        t39 = (f64)rdf32(0x817fdfb8u);
        f1 = px_pack(t39, (f64)rdf32(0x817fdfb8u));
        t42 = (f64)rdf32(0x817fdfc0u);
        f2 = px_pack(t42, (f64)rdf32(0x817fdfc0u));
        t45 = (f64)rdf32(0x817fdfc8u);
        f3 = px_pack(t45, (f64)rdf32(0x817fdfc8u));
        t48 = (f64)rdf32(0x817fdfd0u);
        f4 = px_pack(t48, (f64)rdf32(0x817fdfd0u));
        f5 = px_pack((f64)(f32)px_pmul(px_hi(f1), px_hi(f30)), (f64)(f32)px_pmul(px_lo(f1), px_hi(f30)));
        f6 = px_pack((f64)(f32)px_pmul(px_hi(f2), px_hi(f30)), (f64)(f32)px_pmul(px_lo(f2), px_hi(f30)));
        wrf32d(param_2, px_lo(px_pack((f64)(f32)px_pfma(px_hi(f3), px_hi(f0), px_hi(f5)), (f64)(f32)px_pfma(px_lo(f3), px_hi(f0), px_lo(f5)))));
        wrf32d(param_2 + 8u, px_lo(px_pack((f64)(f32)px_pfma(px_hi(f4), px_hi(f0), px_hi(f6)), (f64)(f32)px_pfma(px_lo(f4), px_hi(f0), px_lo(f6)))));
        f31 = (f64)rdf32(param_2 + 4u);
        f11 = (f64)rdf32(param_2);
        f13 = (f64)rdf32(param_2 + 8u);
        f0 = (f64)rdf32(param_2 + 0xcu);
        f9 = (f64)(f32)px_sfma(f0, f0, (f64)(f32)px_sfma(f13, f13, (f64)(f32)px_sfma(f11, f11, (f64)(f32)px_pmul(f31, f31))));
        f30 = px_pack((f64)(f32)ppc_frsqrte(px_hi(f9)), (f64)(f32)ppc_frsqrte(px_lo(f9)));
        f0 = (f64)(f32)px_pmul(f0, f30);
        wrf32d(param_2, (f64)(f32)px_pmul(f11, f30));
        wrf32d(param_2 + 4u, (f64)(f32)px_pmul(f31, f30));
        wrf32d(param_2 + 8u, (f64)(f32)px_pmul(f13, f30));
        wrf32d(param_2 + 0xcu, f0);
    }
    return f1;
}
