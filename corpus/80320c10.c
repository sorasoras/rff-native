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

static f64 px_pneg(f64 b)
{
    return px_b2f(px_f2b(b) ^ 0x8000000080000000ull);
}

static f64 px_pabs(f64 b)
{
    return px_b2f(px_f2b(b) & 0x7fffffff7fffffffull);
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

static s32 px_quant(f64 v, f64 m, s32 lo, s32 hi)
{
    f64 x = v * m;
    if (x != x) return 0;
    if (x <= (f64)lo) return lo;
    if (x >= (f64)hi) return hi;
    return (s32)x;
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

f64 fn_80320c10(f64 param_1, f64 param_2, f64 param_3, s32 param_4)
{
    u32 r0 = 0, r5 = tc_argr(2u), r6 = tc_argr(3u), t21 = 0, t29 = 0, t40 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f3 = 0.0, f4 = tc_argf(3u), f5 = tc_argf(4u), f6 = tc_argf(5u), f7 = tc_argf(6u), f8 = tc_argf(7u), t1 = 0.0, t19 = 0.0, t22 = 0.0;
    f64 t27 = 0.0, t30 = 0.0, t38 = 0.0, t41 = 0.0;
    wr32(0x817fdff0u, 0x817fe000u);
    t1 = (f64)rdf32(0x805779b0u);
    f0 = px_pack(t1, (f64)rdf32(0x805779b4u));
    f6 = px_pmg00(param_1, param_2);
    f2 = (f64)rdf32(0x805779b8u);
    f0 = px_pmg00(f0, f0);
    f6 = px_pack((f64)(f32)px_pmul(px_hi(f6), px_hi(f2)), (f64)(f32)px_pmul(px_lo(f6), px_hi(f2)));
    f1 = px_pneg(f0);
    f5 = px_pabs(f6);
    f4 = px_pack((f64)(f32)px_psub(px_hi(f0), px_hi(f0)), (f64)(f32)px_psub(px_lo(f0), px_lo(f0)));
    if (px_hi(f5) > px_hi(f0)) {
        do {
            f5 = px_pack((f64)(f32)px_padd(px_hi(f5), px_lo(f5)), px_lo(f1));
        } while (!(px_hi(f5) < px_hi(f0)));
    }
    if (px_lo(f5) > px_lo(f0)) {
        f5 = px_pmg10(f5, f5);
        do {
            f5 = px_pack((f64)(f32)px_padd(px_hi(f5), px_lo(f5)), px_lo(f1));
        } while (!(px_hi(f5) < px_hi(f0)));
        f5 = px_pmg10(f5, f5);
    }
    px_q(0u, 0x817fdff8u, px_lo(f5));
    f3 = (f64)(f32)px_pmul(param_3, f2);
    f7 = px_pack(px_dq(0u, 0x817fdff8u), px_dq(0u, 0x817fdff8u));
    f2 = ppc_fabs(f3);
    r0 = rd32(0x817fdff8u);
    if (f2 > f0) {
        do {
            f2 = (f64)(f32)px_psub(f2, f0);
        } while (!(f2 < f0));
    }
    px_q(0u, 0x817fdff8u, px_hi(f2));
    r5 = ((r0 >> 0xcu) & 0xff0u) - 0x7fcb7488u;
    f7 = px_pack((f64)(f32)px_psub(px_hi(f5), px_hi(f7)), (f64)(f32)px_psub(px_lo(f5), px_lo(f7)));
    t19 = (f64)rdf32(r5);
    f5 = px_pack(t19, (f64)rdf32(r5));
    t21 = r5 + 8u;
    t22 = (f64)rdf32(t21);
    f8 = px_pack(t22, (f64)rdf32(t21));
    r6 = ((r0 << 4u) & 0xff0u) - 0x7fcb7488u;
    f0 = px_pack((f64)(f32)px_pfma(px_hi(f8), px_hi(f7), px_hi(f5)), (f64)(f32)px_pfma(px_lo(f8), px_hi(f7), px_lo(f5)));
    t27 = (f64)rdf32(r6);
    f5 = px_pack(t27, (f64)rdf32(r6));
    t29 = r6 + 8u;
    t30 = (f64)rdf32(t29);
    f8 = px_pack(t30, (f64)rdf32(t29));
    r0 = (u32)rd16(0x817fdff8u);
    if (px_hi(f6) < px_hi(f4)) {
        f0 = px_pmg01(px_pneg(f0), f0);
    }
    f1 = px_pack((f64)(f32)px_pfma(px_hi(f8), px_lo(f7), px_hi(f5)), (f64)(f32)px_pfma(px_lo(f8), px_lo(f7), px_lo(f5)));
    r0 = (r0 << 4u) & 0xff0u;
    r5 = r0 - 0x7fcb7488u;
    f7 = (f64)(f32)px_psub(f2, px_pack(px_dq(0u, 0x817fdff8u), 1.0));
    t38 = (f64)rdf32(r5);
    f5 = px_pack(t38, (f64)rdf32(r5));
    t40 = r5 + 8u;
    t41 = (f64)rdf32(t40);
    f8 = px_pack(t41, (f64)rdf32(t40));
    if (px_lo(f6) < px_lo(f4)) {
        f1 = px_pmg01(px_pneg(f1), f1);
    }
    f2 = px_pack((f64)(f32)px_pfma(px_hi(f8), px_hi(f7), px_hi(f5)), (f64)(f32)px_pfma(px_lo(f8), px_hi(f7), px_lo(f5)));
    if (f3 < f4) {
        f2 = px_pmg01(px_pneg(f2), f2);
    }
    f5 = px_pack((f64)(f32)px_pmul(px_hi(f2), px_lo(f1)), (f64)(f32)px_pmul(px_lo(f2), px_lo(f1)));
    f7 = px_pack((f64)(f32)px_psub(px_hi(f0), px_hi(f0)), (f64)(f32)px_psub(px_lo(f0), px_lo(f0)));
    f3 = px_pmg10(px_pneg(f0), f0);
    f4 = px_pack((f64)(f32)px_pmul(px_hi(f0), px_hi(f2)), (f64)(f32)px_pmul(px_lo(f0), px_hi(f2)));
    wrf32d((u32)param_4 + 0x2cu, px_hi(f7));
    f8 = px_pack((f64)(f32)px_pmul(px_hi(f3), px_hi(f2)), (f64)(f32)px_pmul(px_lo(f3), px_hi(f2)));
    wrf32d((u32)param_4, px_hi(px_pmg10(f5, f5)));
    f6 = px_pack((f64)(f32)px_pmul(px_hi(f0), px_lo(f2)), (f64)(f32)px_pmul(px_lo(f0), px_lo(f2)));
    f2 = px_pack((f64)(f32)px_pmul(px_hi(f3), px_lo(f2)), (f64)(f32)px_pmul(px_lo(f3), px_lo(f2)));
    f6 = px_pack((f64)(f32)px_pfma(px_hi(f6), px_hi(f1), px_hi(f8)), (f64)(f32)px_pfma(px_lo(f6), px_hi(f1), px_lo(f8)));
    f2 = px_pneg(f2);
    wrf32d((u32)param_4 + 4u, px_lo(f6));
    wrf32d((u32)param_4 + 0xcu, px_lo(px_pmg00(f7, f5)));
    wrf32d((u32)param_4 + 0x14u, px_lo(px_pack((f64)(f32)px_pfma(px_hi(f4), px_hi(f1), px_hi(f2)), (f64)(f32)px_pfma(px_lo(f4), px_hi(f1), px_lo(f2)))));
    wrf32d((u32)param_4 + 0x1cu, px_lo(px_pmg00(f7, px_pneg(f1))));
    wrf32d((u32)param_4 + 0x24u, px_lo(px_pack((f64)(f32)px_pmul(px_hi(f0), px_lo(f1)), (f64)(f32)px_pmul(px_lo(f0), px_lo(f1)))));
    return f1;
}
