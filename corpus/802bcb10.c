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

static f64 px_pmg00(f64 a, f64 b)
{
    return px_b2f((px_f2b(a) & 0xffffffff00000000ull) | (px_f2b(b) >> 32));
}

static f64 px_pmg01(f64 a, f64 b)
{
    return px_b2f((px_f2b(a) & 0xffffffff00000000ull) | (px_f2b(b) & 0xffffffffull));
}

static f64 px_pmg10(f64 a, f64 b)
{
    return px_b2f(((px_f2b(a) & 0xffffffffull) << 32) | (px_f2b(b) >> 32));
}

static f64 px_pmg11(f64 a, f64 b)
{
    return px_b2f(((px_f2b(a) & 0xffffffffull) << 32) | (px_f2b(b) & 0xffffffffull));
}

static s32 px_quant(f64 v, f64 m, s32 lo, s32 hi)
{
    f64 x = v * m;
    if (x != x) return 0;
    if (x <= (f64)lo) return lo;
    if (x >= (f64)hi) return hi;
    return (s32)x;
}

static u32 px_qsize(u32 t)
{
    return t == 4u || t == 6u ? 1u : t == 5u || t == 7u ? 2u : 4u;
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

static void px_q(u32 g, u32 ea, f64 v)
{
    u32 t = g & 7u;
    f64 m = px_qscale(g >> 8);
    if (t == 4u) wr8(ea, (u8)px_quant(v, m, 0, 255));
    else if (t == 5u) wr16(ea, (u16)px_quant(v, m, 0, 65535));
    else if (t == 6u) wr8(ea, (u8)px_quant(v, m, -128, 127));
    else if (t == 7u) wr16(ea, (u16)px_quant(v, m, -32768, 32767));
    else wrf32d(ea, v);
}

f64 fn_802bcb10(s32 param_1, s32 param_2)
{
    u32 ctr = 0, fl_ = 0, r0 = 0, r3 = 0, r4 = 0, r5 = tc_argr(2u), r6 = tc_argr(3u), r7 = tc_argr(4u), r8 = tc_argr(5u), r10 = tc_argr(7u), t30 = 0, t41 = 0;
    u32 t44 = 0, t83 = 0, t86 = 0, t91 = 0, t94 = 0, t97 = 0, t100 = 0, t177 = 0, t182 = 0, t185 = 0, t188 = 0, t193 = 0;
    u32 t198 = 0, t203 = 0, t208 = 0, t273 = 0, t278 = 0, t281 = 0, t284 = 0;
    f64 f0 = 0.0, f1 = tc_argf(0u), f2 = tc_argf(1u), f3 = tc_argf(2u), f4 = tc_argf(3u), f5 = tc_argf(4u), f6 = tc_argf(5u), f7 = tc_argf(6u), f8 = tc_argf(7u), f9 = 0.0, f10 = 0.0, f11 = 0.0;
    f64 f12 = 0.0, f13 = 0.0, f25 = 0.0, f26 = 0.0, f27 = 0.0, f28 = 0.0, f29 = 0.0, f30 = 0.0, f31 = 0.0, t11 = 0.0, t20 = 0.0, t45 = 0.0;
    f64 t69 = 0.0, t87 = 0.0, t95 = 0.0, t101 = 0.0, t135 = 0.0, t150 = 0.0, t153 = 0.0, t158 = 0.0, t161 = 0.0, t178 = 0.0, t183 = 0.0, t186 = 0.0;
    f64 t189 = 0.0, t194 = 0.0, t199 = 0.0, t204 = 0.0, t209 = 0.0, t274 = 0.0, t279 = 0.0, t282 = 0.0, t285 = 0.0;
    r3 = (u32)param_1;
    f29 = (f64)rdf32(0x80577400u);
    r10 = 0x805471b8u;
    f28 = (f64)rdf32(0x80577404u);
    f27 = (f64)rdf32(0x80577408u);
    f26 = (f64)rdf32(0x8057740cu);
    f25 = (f64)rdf32(0x80577410u);
    r5 = rd32(0x80571be0u);
    ctr = 8u;
    do {
        f10 = px_pack(px_dq(0u, r3), px_dq(0u, r3));
        t11 = (f64)rdf32(r5);
        f11 = px_pack(t11, (f64)rdf32(r5));
        r0 = rd32(r3 + 0xcu);
        r8 = rd32(r3 + 8u);
        f10 = px_pack((f64)(f32)px_pmul(px_hi(f10), px_hi(f11)), (f64)(f32)px_pmul(px_lo(f10), px_lo(f11)));
        r6 = rd32(r3 + 4u);
        r7 = (u32)rd16(r3 + 2u);
        r0 = r0 | r8;
        for (;;) {
            if (r0 != 0u) {
                t83 = r3 + 4u;
                f9 = px_pack(px_dq(0u, t83), px_dq(0u, t83));
                t86 = r5 + 8u;
                t87 = (f64)rdf32(t86);
                f5 = px_pack(t87, (f64)rdf32(t86));
                f9 = px_pack((f64)(f32)px_pmul(px_hi(f9), px_hi(f5)), (f64)(f32)px_pmul(px_lo(f9), px_lo(f5)));
                t91 = r3 + 8u;
                f2 = px_pack(px_dq(0u, t91), px_dq(0u, t91));
                t94 = r5 + 0x10u;
                t95 = (f64)rdf32(t94);
                f6 = px_pack(t95, (f64)rdf32(t94));
                f0 = px_pmg01(f10, f9);
                t97 = r3 + 0xcu;
                f3 = px_pack(px_dq(0u, t97), px_dq(0u, t97));
                f1 = px_pmg01(f9, f10);
                t100 = r5 + 0x18u;
                t101 = (f64)rdf32(t100);
                f7 = px_pack(t101, (f64)rdf32(t100));
                r0 = rd32(r3 + 0x1cu);
                f4 = px_pack((f64)(f32)px_pfma(px_hi(f2), px_hi(f6), px_hi(f0)), (f64)(f32)px_pfma(px_lo(f2), px_lo(f6), px_lo(f0)));
                f5 = px_pack(px_pfnm((f64)(f32)px_pfms(px_hi(f2), px_hi(f6), px_hi(f0))), px_pfnm((f64)(f32)px_pfms(px_lo(f2), px_lo(f6), px_lo(f0))));
                r8 = rd32(r3 + 0x18u);
                f6 = px_pack((f64)(f32)px_pfma(px_hi(f3), px_hi(f7), px_hi(f1)), (f64)(f32)px_pfma(px_lo(f3), px_lo(f7), px_lo(f1)));
                r6 = rd32(r3 + 0x14u);
                f7 = px_pack(px_pfnm((f64)(f32)px_pfms(px_hi(f3), px_hi(f7), px_hi(f1))), px_pfnm((f64)(f32)px_pfms(px_lo(f3), px_lo(f7), px_lo(f1))));
                r7 = (u32)rd16(r3 + 0x12u);
                f0 = px_pack((f64)(f32)px_padd(px_hi(f4), px_hi(f6)), (f64)(f32)px_padd(px_lo(f4), px_lo(f6)));
                f8 = px_pack((f64)(f32)px_psub(px_hi(f7), px_hi(f5)), (f64)(f32)px_psub(px_lo(f7), px_lo(f5)));
                f2 = px_pack((f64)(f32)px_pfms(px_hi(f7), px_hi(f29), px_hi(f6)), (f64)(f32)px_pfms(px_lo(f7), px_lo(f29), px_lo(f6)));
                f3 = px_pack((f64)(f32)px_psub(px_hi(f4), px_hi(f6)), (f64)(f32)px_psub(px_lo(f4), px_lo(f6)));
                f8 = px_pack((f64)(f32)px_pmul(px_hi(f8), px_hi(f28)), (f64)(f32)px_pmul(px_lo(f8), px_lo(f28)));
                f1 = px_pack((f64)(f32)px_padd(px_hi(f5), px_hi(f2)), (f64)(f32)px_padd(px_lo(f5), px_lo(f2)));
                f2 = px_pack((f64)(f32)px_psub(px_hi(f5), px_hi(f2)), (f64)(f32)px_psub(px_lo(f5), px_lo(f2)));
                f6 = px_pack(px_pfnm((f64)(f32)px_pfms(px_hi(f5), px_hi(f26), px_hi(f8))), px_pfnm((f64)(f32)px_pfms(px_lo(f5), px_lo(f26), px_lo(f8))));
                f4 = px_pack((f64)(f32)px_pfms(px_hi(f7), px_hi(f27), px_hi(f8)), (f64)(f32)px_pfms(px_lo(f7), px_lo(f27), px_lo(f8)));
                f1 = px_pmg00(f0, f1);
                f6 = px_pack((f64)(f32)px_psub(px_hi(f6), px_hi(f0)), (f64)(f32)px_psub(px_lo(f6), px_lo(f0)));
                f2 = px_pmg00(f2, f3);
                f5 = px_pack((f64)(f32)px_pfma(px_hi(f3), px_hi(f29), px_hi(f6)), (f64)(f32)px_pfma(px_lo(f3), px_lo(f29), px_lo(f6)));
                f7 = px_pmg11(f0, f6);
                r3 = r3 + 0x10u;
                f10 = px_pack(px_dq(0u, r3), px_dq(0u, r3 + px_qsize(0u)));
                r5 = r5 + 0x20u;
                t135 = (f64)rdf32(r5);
                f11 = px_pack(t135, (f64)rdf32(r5 + 4u));
                f4 = px_pack((f64)(f32)px_psub(px_hi(f4), px_hi(f5)), (f64)(f32)px_psub(px_lo(f4), px_lo(f5)));
                f3 = px_pack((f64)(f32)px_padd(px_hi(f1), px_hi(f7)), (f64)(f32)px_padd(px_lo(f1), px_lo(f7)));
                f0 = px_pack((f64)(f32)px_psub(px_hi(f1), px_hi(f7)), (f64)(f32)px_psub(px_lo(f1), px_lo(f7)));
                f4 = px_pmg11(f5, f4);
                f10 = px_pack((f64)(f32)px_pmul(px_hi(f10), px_hi(f11)), (f64)(f32)px_pmul(px_lo(f10), px_lo(f11)));
                f5 = px_pack((f64)(f32)px_padd(px_hi(f2), px_hi(f4)), (f64)(f32)px_padd(px_lo(f2), px_lo(f4)));
                f6 = px_pack((f64)(f32)px_psub(px_hi(f2), px_hi(f4)), (f64)(f32)px_psub(px_lo(f2), px_lo(f4)));
                f5 = px_pmg10(f5, f5);
                r10 = r10 + 8u;
                wrf32d(r10, px_hi(f3));
                wrf32d(r10 + 4u, px_lo(f3));
                f0 = px_pmg10(f0, f0);
                r10 = r10 + 8u;
                wrf32d(r10, px_hi(f6));
                wrf32d(r10 + 4u, px_lo(f6));
                r10 = r10 + 8u;
                wrf32d(r10, px_hi(f5));
                wrf32d(r10 + 4u, px_lo(f5));
                r0 = r0 | r8;
                r10 = r10 + 8u;
                wrf32d(r10, px_hi(f0));
                wrf32d(r10 + 4u, px_lo(f0));
                ctr = ctr - 1u;
                if (ctr == 0u) {
                    fl_ = 1u;
                    break;
                }
            } else {
                f0 = px_pmg00(f10, f10);
                wrf32d(r10 + 8u, px_lo(f0));
                if (r6 != 0u) {
                    t41 = r3 + 4u;
                    f1 = px_pack(px_dq(0u, t41), px_dq(0u, t41));
                    t44 = r5 + 8u;
                    t45 = (f64)rdf32(t44);
                    f9 = px_pack(t45, (f64)rdf32(t44));
                    r0 = rd32(r3 + 0x1cu);
                    f1 = px_pack((f64)(f32)px_pmul(px_hi(f1), px_hi(f9)), (f64)(f32)px_pmul(px_lo(f1), px_lo(f9)));
                    r8 = rd32(r3 + 0x18u);
                    r6 = rd32(r3 + 0x14u);
                    r7 = (u32)rd16(r3 + 0x12u);
                    f3 = px_pack((f64)(f32)px_psub(px_hi(f10), px_hi(f1)), (f64)(f32)px_psub(px_lo(f10), px_lo(f1)));
                    f2 = px_pack((f64)(f32)px_padd(px_hi(f10), px_hi(f1)), (f64)(f32)px_padd(px_lo(f10), px_lo(f1)));
                    f8 = px_pack((f64)(f32)px_pmul(px_hi(f3), px_hi(f28)), (f64)(f32)px_pmul(px_lo(f3), px_lo(f28)));
                    f6 = px_pack(px_pfnm((f64)(f32)px_pfms(px_hi(f1), px_hi(f26), px_hi(f8))), px_pfnm((f64)(f32)px_pfms(px_lo(f1), px_lo(f26), px_lo(f8))));
                    f7 = px_pack(px_pfnm((f64)(f32)px_pfms(px_hi(f10), px_hi(f27), px_hi(f8))), px_pfnm((f64)(f32)px_pfms(px_lo(f10), px_lo(f27), px_lo(f8))));
                    f4 = px_pmg00(f2, px_pack((f64)(f32)px_pfma(px_hi(f1), px_hi(f29), px_hi(f3)), (f64)(f32)px_pfma(px_lo(f1), px_lo(f29), px_lo(f3))));
                    f6 = px_pack((f64)(f32)px_psub(px_hi(f6), px_hi(f2)), (f64)(f32)px_psub(px_lo(f6), px_lo(f2)));
                    f5 = px_pmg00(px_pack(px_pfnm((f64)(f32)px_pfms(px_hi(f1), px_hi(f29), px_hi(f2))), px_pfnm((f64)(f32)px_pfms(px_lo(f1), px_lo(f29), px_lo(f2)))), f3);
                    f8 = px_pack((f64)(f32)px_pfms(px_hi(f3), px_hi(f29), px_hi(f6)), (f64)(f32)px_pfms(px_lo(f3), px_lo(f29), px_lo(f6)));
                    f2 = px_pmg11(f2, f6);
                    r3 = r3 + 0x10u;
                    f10 = px_pack(px_dq(0u, r3), px_dq(0u, r3 + px_qsize(0u)));
                    r5 = r5 + 0x20u;
                    t69 = (f64)rdf32(r5);
                    f11 = px_pack(t69, (f64)rdf32(r5 + 4u));
                    f7 = px_pack((f64)(f32)px_psub(px_hi(f7), px_hi(f8)), (f64)(f32)px_psub(px_lo(f7), px_lo(f8)));
                    f9 = px_pack((f64)(f32)px_padd(px_hi(f4), px_hi(f2)), (f64)(f32)px_padd(px_lo(f4), px_lo(f2)));
                    f4 = px_pack((f64)(f32)px_psub(px_hi(f4), px_hi(f2)), (f64)(f32)px_psub(px_lo(f4), px_lo(f2)));
                    f3 = px_pmg11(f8, f7);
                    r10 = r10 + 8u;
                    wrf32d(r10, px_hi(f9));
                    wrf32d(r10 + 4u, px_lo(f9));
                    r0 = r0 | r8;
                    f0 = px_pack((f64)(f32)px_padd(px_hi(f5), px_hi(f3)), (f64)(f32)px_padd(px_lo(f5), px_lo(f3)));
                    f1 = px_pack((f64)(f32)px_psub(px_hi(f5), px_hi(f3)), (f64)(f32)px_psub(px_lo(f5), px_lo(f3)));
                    r10 = r10 + 8u;
                    wrf32d(r10, px_hi(f0));
                    wrf32d(r10 + 4u, px_lo(f0));
                    f4 = px_pmg10(f4, f4);
                    f1 = px_pmg10(f1, f1);
                    r10 = r10 + 8u;
                    wrf32d(r10, px_hi(f1));
                    wrf32d(r10 + 4u, px_lo(f1));
                    f10 = px_pack((f64)(f32)px_pmul(px_hi(f10), px_hi(f11)), (f64)(f32)px_pmul(px_lo(f10), px_lo(f11)));
                    r10 = r10 + 8u;
                    wrf32d(r10, px_hi(f4));
                    wrf32d(r10 + 4u, px_lo(f4));
                    ctr = ctr - 1u;
                    if (ctr == 0u) {
                        fl_ = 1u;
                        break;
                    }
                } else {
                    wrf32d(r10 + 0x10u, px_lo(f0));
                    wrf32d(r10 + 0x18u, px_lo(f0));
                    if (r7 == 0u) {
                        fl_ = 2u;
                        break;
                    }
                    f2 = px_pack((f64)(f32)px_pfms(px_hi(f10), px_hi(f28), px_hi(f10)), (f64)(f32)px_pfms(px_lo(f10), px_lo(f28), px_lo(f10)));
                    r5 = r5 + 0x20u;
                    t20 = (f64)rdf32(r5);
                    f11 = px_pack(t20, (f64)rdf32(r5 + 4u));
                    f1 = px_pack((f64)(f32)px_psub(px_hi(f28), px_hi(f27)), (f64)(f32)px_psub(px_lo(f28), px_lo(f27)));
                    r6 = rd32(r3 + 0x14u);
                    f9 = px_pmg00(f10, f10);
                    r7 = (u32)rd16(r3 + 0x12u);
                    f3 = px_pack((f64)(f32)px_pfms(px_hi(f10), px_hi(f29), px_hi(f2)), (f64)(f32)px_pfms(px_lo(f10), px_lo(f29), px_lo(f2)));
                    f5 = px_pmg11(f10, f2);
                    f4 = px_pack(px_pfnm((f64)(f32)px_pfms(px_hi(f10), px_hi(f1), px_hi(f3))), px_pfnm((f64)(f32)px_pfms(px_lo(f10), px_lo(f1), px_lo(f3))));
                    f7 = px_pack((f64)(f32)px_padd(px_hi(f9), px_hi(f5)), (f64)(f32)px_padd(px_lo(f9), px_lo(f5)));
                    t30 = r3 + 0x10u;
                    f10 = px_pack(px_dq(0u, t30), px_dq(0u, t30));
                    r0 = rd32(r3 + 0x1cu);
                    f5 = px_pack((f64)(f32)px_psub(px_hi(f9), px_hi(f5)), (f64)(f32)px_psub(px_lo(f9), px_lo(f5)));
                    f6 = px_pmg11(f3, f4);
                    r8 = rd32(r3 + 0x18u);
                    f8 = px_pack((f64)(f32)px_padd(px_hi(f9), px_hi(f6)), (f64)(f32)px_padd(px_lo(f9), px_lo(f6)));
                    f6 = px_pack((f64)(f32)px_psub(px_hi(f9), px_hi(f6)), (f64)(f32)px_psub(px_lo(f9), px_lo(f6)));
                    r10 = r10 + 8u;
                    wrf32d(r10, px_hi(f7));
                    wrf32d(r10 + 4u, px_lo(f7));
                    f6 = px_pmg10(f6, f6);
                    r10 = r10 + 8u;
                    wrf32d(r10, px_hi(f8));
                    wrf32d(r10 + 4u, px_lo(f8));
                    f5 = px_pmg10(f5, f5);
                    r0 = r0 | r8;
                    r10 = r10 + 8u;
                    wrf32d(r10, px_hi(f6));
                    wrf32d(r10 + 4u, px_lo(f6));
                    f10 = px_pack((f64)(f32)px_pmul(px_hi(f10), px_hi(f11)), (f64)(f32)px_pmul(px_lo(f10), px_lo(f11)));
                    r10 = r10 + 8u;
                    wrf32d(r10, px_hi(f5));
                    wrf32d(r10 + 4u, px_lo(f5));
                    r3 = r3 + 0x10u;
                    ctr = ctr - 1u;
                    if (ctr == 0u) {
                        fl_ = 1u;
                        break;
                    }
                }
            }
        }
        if (fl_ == 2u) {
            fl_ = 0u;
        } else if (fl_ == 1u) {
            fl_ = 0u;
            break;
        }
        r10 = r10 + 0x20u;
        wrf32d(r10, px_hi(f0));
        wrf32d(r10 + 4u, px_lo(f0));
        r3 = r3 + 0x10u;
        r5 = r5 + 0x20u;
        ctr = ctr - 1u;
    } while (ctr != 0u);
    r0 = rd32(0x80571c00u);
    r10 = 0x805471c0u;
    t150 = (f64)rdf32(0x805471c0u);
    f10 = px_pack(t150, (f64)rdf32(0x805471c0u));
    t153 = (f64)rdf32(0x80547240u);
    f11 = px_pack(t153, (f64)rdf32(0x80547240u));
    r5 = (r0 << 2u) & 0xfffffffcu;
    r4 = ((r0 << 3u) & 0xfffffff8u) + (((u32)param_2 << 2u) & 0xfffffffcu);
    r0 = rd32(0x80571c20u);
    f6 = px_pack((f64)(f32)px_padd(px_hi(f10), px_hi(f11)), (f64)(f32)px_padd(px_lo(f10), px_lo(f11)));
    t158 = (f64)rdf32(0x80547200u);
    f12 = px_pack(t158, (f64)rdf32(0x80547200u));
    t161 = (f64)rdf32(0x80547280u);
    f13 = px_pack(t161, (f64)rdf32(0x80547280u));
    f8 = px_pack((f64)(f32)px_psub(px_hi(f10), px_hi(f11)), (f64)(f32)px_psub(px_lo(f10), px_lo(f11)));
    r5 = r4 + r5;
    f6 = px_pack((f64)(f32)px_padd(px_hi(f6), px_hi(f25)), (f64)(f32)px_padd(px_lo(f6), px_lo(f25)));
    r6 = r0 + r4;
    f7 = px_pack((f64)(f32)px_padd(px_hi(f12), px_hi(f13)), (f64)(f32)px_padd(px_lo(f12), px_lo(f13)));
    r7 = r0 + r5;
    f9 = px_pack((f64)(f32)px_psub(px_hi(f12), px_hi(f13)), (f64)(f32)px_psub(px_lo(f12), px_lo(f13)));
    f8 = px_pack((f64)(f32)px_padd(px_hi(f8), px_hi(f25)), (f64)(f32)px_padd(px_lo(f8), px_lo(f25)));
    f0 = px_pack((f64)(f32)px_padd(px_hi(f6), px_hi(f7)), (f64)(f32)px_padd(px_lo(f6), px_lo(f7)));
    ctr = 3u;
    do {
        f9 = px_pack((f64)(f32)px_pfms(px_hi(f9), px_hi(f29), px_hi(f7)), (f64)(f32)px_pfms(px_lo(f9), px_lo(f29), px_lo(f7)));
        t177 = r10 + 0x20u;
        t178 = (f64)rdf32(t177);
        f4 = px_pack(t178, (f64)rdf32(t177));
        f3 = px_pack((f64)(f32)px_psub(px_hi(f6), px_hi(f7)), (f64)(f32)px_psub(px_lo(f6), px_lo(f7)));
        t182 = r10 + 0x60u;
        t183 = (f64)rdf32(t182);
        f5 = px_pack(t183, (f64)rdf32(t182));
        t185 = r10 + 0xa0u;
        t186 = (f64)rdf32(t185);
        f6 = px_pack(t186, (f64)rdf32(t185));
        t188 = r10 + 0xe0u;
        t189 = (f64)rdf32(t188);
        f7 = px_pack(t189, (f64)rdf32(t188));
        f1 = px_pack((f64)(f32)px_padd(px_hi(f8), px_hi(f9)), (f64)(f32)px_padd(px_lo(f8), px_lo(f9)));
        t193 = r10 + 8u;
        t194 = (f64)rdf32(t193);
        f10 = px_pack(t194, (f64)rdf32(t193));
        f2 = px_pack((f64)(f32)px_psub(px_hi(f8), px_hi(f9)), (f64)(f32)px_psub(px_lo(f8), px_lo(f9)));
        t198 = r10 + 0x88u;
        t199 = (f64)rdf32(t198);
        f11 = px_pack(t199, (f64)rdf32(t198));
        f8 = px_pack((f64)(f32)px_padd(px_hi(f6), px_hi(f5)), (f64)(f32)px_padd(px_lo(f6), px_lo(f5)));
        t203 = r10 + 0x48u;
        t204 = (f64)rdf32(t203);
        f12 = px_pack(t204, (f64)rdf32(t203));
        f9 = px_pack((f64)(f32)px_padd(px_hi(f4), px_hi(f7)), (f64)(f32)px_padd(px_lo(f4), px_lo(f7)));
        t208 = r10 + 0xc8u;
        t209 = (f64)rdf32(t208);
        f13 = px_pack(t209, (f64)rdf32(t208));
        f6 = px_pack((f64)(f32)px_psub(px_hi(f6), px_hi(f5)), (f64)(f32)px_psub(px_lo(f6), px_lo(f5)));
        r10 = r10 + 8u;
        f4 = px_pack((f64)(f32)px_psub(px_hi(f4), px_hi(f7)), (f64)(f32)px_psub(px_lo(f4), px_lo(f7)));
        f7 = px_pack((f64)(f32)px_padd(px_hi(f9), px_hi(f8)), (f64)(f32)px_padd(px_lo(f9), px_lo(f8)));
        f5 = px_pack((f64)(f32)px_psub(px_hi(f9), px_hi(f8)), (f64)(f32)px_psub(px_lo(f9), px_lo(f8)));
        f8 = px_pack((f64)(f32)px_padd(px_hi(f6), px_hi(f4)), (f64)(f32)px_padd(px_lo(f6), px_lo(f4)));
        f30 = px_pack((f64)(f32)px_psub(px_hi(f0), px_hi(f7)), (f64)(f32)px_psub(px_lo(f0), px_lo(f7)));
        f8 = px_pack((f64)(f32)px_pmul(px_hi(f8), px_hi(f28)), (f64)(f32)px_pmul(px_lo(f8), px_lo(f28)));
        f6 = px_pack((f64)(f32)px_pfma(px_hi(f6), px_hi(f26), px_hi(f8)), (f64)(f32)px_pfma(px_lo(f6), px_lo(f26), px_lo(f8)));
        f6 = px_pack((f64)(f32)px_psub(px_hi(f6), px_hi(f7)), (f64)(f32)px_psub(px_lo(f6), px_lo(f7)));
        px_q(0u, r6, px_lo(px_pack((f64)(f32)px_padd(px_hi(f0), px_hi(f7)), (f64)(f32)px_padd(px_lo(f0), px_lo(f7)))));
        f4 = px_pack((f64)(f32)px_pfms(px_hi(f4), px_hi(f27), px_hi(f8)), (f64)(f32)px_pfms(px_lo(f4), px_lo(f27), px_lo(f8)));
        f5 = px_pack((f64)(f32)px_pfms(px_hi(f5), px_hi(f29), px_hi(f6)), (f64)(f32)px_pfms(px_lo(f5), px_lo(f29), px_lo(f6)));
        f31 = px_pack((f64)(f32)px_psub(px_hi(f1), px_hi(f6)), (f64)(f32)px_psub(px_lo(f1), px_lo(f6)));
        px_q(0u, r6 + 8u, px_lo(px_pack((f64)(f32)px_padd(px_hi(f1), px_hi(f6)), (f64)(f32)px_padd(px_lo(f1), px_lo(f6)))));
        f4 = px_pack((f64)(f32)px_padd(px_hi(f4), px_hi(f5)), (f64)(f32)px_padd(px_lo(f4), px_lo(f5)));
        px_q(0u, r6 + 0x10u, px_lo(px_pack((f64)(f32)px_padd(px_hi(f2), px_hi(f5)), (f64)(f32)px_padd(px_lo(f2), px_lo(f5)))));
        px_q(0u, r6 + 0x18u, px_lo(px_pack((f64)(f32)px_psub(px_hi(f3), px_hi(f4)), (f64)(f32)px_psub(px_lo(f3), px_lo(f4)))));
        f6 = px_pack((f64)(f32)px_padd(px_hi(f10), px_hi(f11)), (f64)(f32)px_padd(px_lo(f10), px_lo(f11)));
        px_q(0u, r7, px_lo(px_pack((f64)(f32)px_padd(px_hi(f3), px_hi(f4)), (f64)(f32)px_padd(px_lo(f3), px_lo(f4)))));
        f8 = px_pack((f64)(f32)px_psub(px_hi(f10), px_hi(f11)), (f64)(f32)px_psub(px_lo(f10), px_lo(f11)));
        f6 = px_pack((f64)(f32)px_padd(px_hi(f6), px_hi(f25)), (f64)(f32)px_padd(px_lo(f6), px_lo(f25)));
        px_q(0u, r7 + 8u, px_lo(px_pack((f64)(f32)px_psub(px_hi(f2), px_hi(f5)), (f64)(f32)px_psub(px_lo(f2), px_lo(f5)))));
        f7 = px_pack((f64)(f32)px_padd(px_hi(f12), px_hi(f13)), (f64)(f32)px_padd(px_lo(f12), px_lo(f13)));
        f9 = px_pack((f64)(f32)px_psub(px_hi(f12), px_hi(f13)), (f64)(f32)px_psub(px_lo(f12), px_lo(f13)));
        px_q(0u, r7 + 0x10u, px_lo(f31));
        r4 = r4 + 2u;
        r6 = r0 + r4;
        f0 = px_pack((f64)(f32)px_padd(px_hi(f6), px_hi(f7)), (f64)(f32)px_padd(px_lo(f6), px_lo(f7)));
        px_q(0u, r7 + 0x18u, px_lo(f30));
        r5 = r5 + 2u;
        f8 = px_pack((f64)(f32)px_padd(px_hi(f8), px_hi(f25)), (f64)(f32)px_padd(px_lo(f8), px_lo(f25)));
        r7 = r0 + r5;
        ctr = ctr - 1u;
    } while (ctr != 0u);
    f9 = px_pack((f64)(f32)px_pfms(px_hi(f9), px_hi(f29), px_hi(f7)), (f64)(f32)px_pfms(px_lo(f9), px_lo(f29), px_lo(f7)));
    t273 = r10 + 0x20u;
    t274 = (f64)rdf32(t273);
    f4 = px_pack(t274, (f64)rdf32(t273));
    f3 = px_pack((f64)(f32)px_psub(px_hi(f6), px_hi(f7)), (f64)(f32)px_psub(px_lo(f6), px_lo(f7)));
    t278 = r10 + 0x60u;
    t279 = (f64)rdf32(t278);
    f5 = px_pack(t279, (f64)rdf32(t278));
    t281 = r10 + 0xa0u;
    t282 = (f64)rdf32(t281);
    f6 = px_pack(t282, (f64)rdf32(t281));
    t284 = r10 + 0xe0u;
    t285 = (f64)rdf32(t284);
    f7 = px_pack(t285, (f64)rdf32(t284));
    f1 = px_pack((f64)(f32)px_padd(px_hi(f8), px_hi(f9)), (f64)(f32)px_padd(px_lo(f8), px_lo(f9)));
    f2 = px_pack((f64)(f32)px_psub(px_hi(f8), px_hi(f9)), (f64)(f32)px_psub(px_lo(f8), px_lo(f9)));
    f8 = px_pack((f64)(f32)px_padd(px_hi(f6), px_hi(f5)), (f64)(f32)px_padd(px_lo(f6), px_lo(f5)));
    f9 = px_pack((f64)(f32)px_padd(px_hi(f4), px_hi(f7)), (f64)(f32)px_padd(px_lo(f4), px_lo(f7)));
    f6 = px_pack((f64)(f32)px_psub(px_hi(f6), px_hi(f5)), (f64)(f32)px_psub(px_lo(f6), px_lo(f5)));
    f4 = px_pack((f64)(f32)px_psub(px_hi(f4), px_hi(f7)), (f64)(f32)px_psub(px_lo(f4), px_lo(f7)));
    f7 = px_pack((f64)(f32)px_padd(px_hi(f9), px_hi(f8)), (f64)(f32)px_padd(px_lo(f9), px_lo(f8)));
    f5 = px_pack((f64)(f32)px_psub(px_hi(f9), px_hi(f8)), (f64)(f32)px_psub(px_lo(f9), px_lo(f8)));
    f8 = px_pack((f64)(f32)px_padd(px_hi(f6), px_hi(f4)), (f64)(f32)px_padd(px_lo(f6), px_lo(f4)));
    f8 = px_pack((f64)(f32)px_pmul(px_hi(f8), px_hi(f28)), (f64)(f32)px_pmul(px_lo(f8), px_lo(f28)));
    f6 = px_pack((f64)(f32)px_pfma(px_hi(f6), px_hi(f26), px_hi(f8)), (f64)(f32)px_pfma(px_lo(f6), px_lo(f26), px_lo(f8)));
    px_q(0u, r6, px_lo(px_pack((f64)(f32)px_padd(px_hi(f0), px_hi(f7)), (f64)(f32)px_padd(px_lo(f0), px_lo(f7)))));
    f4 = px_pack((f64)(f32)px_pfms(px_hi(f4), px_hi(f27), px_hi(f8)), (f64)(f32)px_pfms(px_lo(f4), px_lo(f27), px_lo(f8)));
    f6 = px_pack((f64)(f32)px_psub(px_hi(f6), px_hi(f7)), (f64)(f32)px_psub(px_lo(f6), px_lo(f7)));
    px_q(0u, r7 + 0x18u, px_lo(px_pack((f64)(f32)px_psub(px_hi(f0), px_hi(f7)), (f64)(f32)px_psub(px_lo(f0), px_lo(f7)))));
    f5 = px_pack((f64)(f32)px_pfms(px_hi(f5), px_hi(f29), px_hi(f6)), (f64)(f32)px_pfms(px_lo(f5), px_lo(f29), px_lo(f6)));
    px_q(0u, r6 + 8u, px_lo(px_pack((f64)(f32)px_padd(px_hi(f1), px_hi(f6)), (f64)(f32)px_padd(px_lo(f1), px_lo(f6)))));
    f4 = px_pack((f64)(f32)px_padd(px_hi(f4), px_hi(f5)), (f64)(f32)px_padd(px_lo(f4), px_lo(f5)));
    px_q(0u, r6 + 0x10u, px_lo(px_pack((f64)(f32)px_padd(px_hi(f2), px_hi(f5)), (f64)(f32)px_padd(px_lo(f2), px_lo(f5)))));
    px_q(0u, r7 + 0x10u, px_lo(px_pack((f64)(f32)px_psub(px_hi(f1), px_hi(f6)), (f64)(f32)px_psub(px_lo(f1), px_lo(f6)))));
    px_q(0u, r6 + 0x18u, px_lo(px_pack((f64)(f32)px_psub(px_hi(f3), px_hi(f4)), (f64)(f32)px_psub(px_lo(f3), px_lo(f4)))));
    f1 = px_pack((f64)(f32)px_psub(px_hi(f2), px_hi(f5)), (f64)(f32)px_psub(px_lo(f2), px_lo(f5)));
    px_q(0u, r7, px_lo(px_pack((f64)(f32)px_padd(px_hi(f3), px_hi(f4)), (f64)(f32)px_padd(px_lo(f3), px_lo(f4)))));
    px_q(0u, r7 + 8u, px_lo(f1));
    return f1;
}
