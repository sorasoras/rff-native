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

static f64 px_pdiv(f64 a, f64 b)
{
    f64 r = a / b;
    if (r != r) {
        if (a != a) return px_pq(a);
        if (b != b) return px_pq(b);
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

f64 fn_80033914(u32 param_1, s32 param_2, f64 param_f1)
{
    u32 r0 = 0, r4 = 0, r5 = 0, r6 = 0, r7 = 0;
    f64 f0 = 0.0, f1 = 0.0, f3 = 0.0, f4 = 0.0, f5 = 0.0, f6 = 0.0, f7 = 0.0, f8 = 0.0, f9 = 0.0, f10 = 0.0, f11 = 0.0, f12 = 0.0;
    f64 f13 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdfb0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    wr32(0x817fdff8u, 0u);
    a.f[0] = param_f1;
    a.r[0] = (u32)param_2;
    a.r[1] = 0x817fdfbcu;
    a.r[2] = 0x817fdfb8u;
    f1 = tc_callf(0x800323ccu, &a);
    r0 = rd32(0x817fdfbcu);
    f0 = f1;
    r5 = rd32(0x817fdfb8u);
    r4 = rd32((u32)param_2 + 0x10u);
    f7 = (f64)rdf32((u32)param_2 + 4u);
    r6 = r4 + ((r0 << 3u) & 0xfffffff8u);
    f11 = (f64)rdf32((u32)param_2 + 8u);
    r7 = r4 + ((r5 << 3u) & 0xfffffff8u);
    if (r0 != 0xffffffffu) {
        if (r5 != 0xffffffffu) {
            r0 = (u32)rd8(r7);
            wr32(0x817fdfe4u, (u32)rd8(r6 + 1u));
            f6 = rdf64(0x80571e58u);
            wr32(0x817fdfe0u, 0x43300000u);
            f4 = (f64)rdf32(0x80571e74u);
            f3 = rdf64(0x817fdfe0u);
            wr32(0x817fdfecu, r0);
            wr32(0x817fdfe8u, 0x43300000u);
            f8 = (f64)(f32)px_pmul(f4, (f64)(f32)px_psub(f3, f6));
            f9 = (f64)(f32)px_pmul(f4, (f64)(f32)px_psub(rdf64(0x817fdfe8u), f6));
            f10 = px_pmg00(f11, f11);
            f1 = px_pack(px_dq(0u, r6 + 2u), 1.0);
            wrf32d(0x817fdfd0u, px_hi(px_pack((f64)(f32)px_pfma(px_hi(f1), px_hi(f7), px_hi(f10)), (f64)(f32)px_pfma(px_lo(f1), px_hi(f7), px_lo(f10)))));
            f10 = px_pmg00(f11, f11);
            f1 = px_pack(px_dq(0u, r7 + 2u), 1.0);
            wrf32d(0x817fdfd4u, px_hi(px_pack((f64)(f32)px_pfma(px_hi(f1), px_hi(f7), px_hi(f10)), (f64)(f32)px_pfma(px_lo(f1), px_hi(f7), px_lo(f10)))));
            f10 = px_pmg00(f11, f11);
            f1 = px_pack(px_dq(0u, r6 + 6u), 1.0);
            wrf32d(0x817fdfd8u, px_hi(px_pack((f64)(f32)px_pfma(px_hi(f1), px_hi(f7), px_hi(f10)), (f64)(f32)px_pfma(px_lo(f1), px_hi(f7), px_lo(f10)))));
            f10 = px_pmg00(f11, f11);
            f1 = px_pack(px_dq(0u, r7 + 4u), 1.0);
            wrf32d(0x817fdfdcu, px_hi(px_pack((f64)(f32)px_pfma(px_hi(f1), px_hi(f7), px_hi(f10)), (f64)(f32)px_pfma(px_lo(f1), px_hi(f7), px_lo(f10)))));
            f4 = (f64)rdf32(0x80571e4cu);
            f3 = (f64)rdf32(0x80571e50u);
            f7 = (f64)(f32)px_psub(f4, f0);
            if (f3 != f0 && f4 != f0) {
                f5 = (f64)(f32)px_padd(f8, f9);
                if (f3 != f5) {
                    if (f5 > f4) {
                        f3 = (f64)(f32)px_pdiv(f4, f5);
                        f8 = (f64)(f32)px_pmul(f8, f3);
                        f9 = (f64)(f32)px_pmul(f9, f3);
                    }
                    f5 = (f64)rdf32(0x80571e48u);
                    f4 = (f64)rdf32(0x80571e4cu);
                    f6 = (f64)(f32)px_pdiv(f4, (f64)(f32)px_psub((f64)(f32)px_psub(f5, f8), f9));
                    if (!(f0 < f8)) {
                        if (!(f0 < (f64)(f32)px_psub(f4, f9))) {
                            f0 = px_pfnm((f64)(f32)px_sfms(f7, (f64)(f32)px_pmul(f7, (f64)(f32)px_pdiv(f6, f9)), f4));
                        } else {
                            f0 = (f64)(f32)px_sfms(f5, f0, f8);
                            f0 = (f64)(f32)px_pmul(f6, f0);
                        }
                    } else {
                        f0 = (f64)(f32)px_pmul(f0, (f64)(f32)px_pmul(f0, (f64)(f32)px_pdiv(f6, f8)));
                    }
                }
            }
            f13 = (f64)(f32)px_pmul(f0, f0);
            f3 = (f64)rdf32(0x80571e48u);
            f12 = (f64)(f32)px_pmul(f0, f13);
            f5 = (f64)rdf32(0x817fdfd4u);
            f0 = px_pfnm((f64)(f32)px_sfms(f3, f13, f0));
            f4 = (f64)rdf32(0x817fdfd0u);
            f11 = (f64)(f32)px_sfms(f3, f12, (f64)(f32)px_pmul((f64)rdf32(0x80571e64u), f13));
            f3 = (f64)rdf32(0x817fdfd8u);
            f7 = (f64)(f32)px_padd(f12, f0);
            f0 = (f64)rdf32(0x817fdfdcu);
            f6 = (f64)(f32)px_psub(f12, f13);
            f8 = (f64)(f32)px_pmul((f64)rdf32(0x80571e78u), f11);
            f9 = (f64)(f32)px_padd((f64)rdf32(0x80571e4cu), f11);
            wrf32d(0x817fdfc8u, f7);
            f5 = (f64)(f32)px_pmul(f5, f8);
            wrf32d(0x817fdfc4u, f8);
            wrf32d(0x817fdfc0u, f9);
            f4 = (f64)(f32)px_sfma(f4, f9, f5);
            wrf32d(0x817fdfccu, f6);
            f3 = (f64)(f32)px_sfma(f3, f7, f4);
            f0 = (f64)(f32)px_sfma(f0, f6, f3);
            wrf32d(param_1, f0);
        } else {
            f10 = px_pmg00(f11, f11);
            f1 = px_pack(px_dq(0u, r6 + 2u), 1.0);
            wrf32d(param_1, px_hi(px_pack((f64)(f32)px_pfma(px_hi(f1), px_hi(f7), px_hi(f10)), (f64)(f32)px_pfma(px_lo(f1), px_hi(f7), px_lo(f10)))));
        }
    } else {
        f10 = px_pmg00(f11, f11);
        f1 = px_pack(px_dq(0u, r7 + 2u), 1.0);
        wrf32d(param_1, px_hi(px_pack((f64)(f32)px_pfma(px_hi(f1), px_hi(f7), px_hi(f10)), (f64)(f32)px_pfma(px_lo(f1), px_hi(f7), px_lo(f10)))));
    }
    return f1;
}
