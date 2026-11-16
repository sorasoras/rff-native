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

static f64 px_ctiw(f64 b, s32 w)
{
    u64 r = 0xfff8000000000000ull | (u32)w;
    if (w == 0 && (px_f2b(b) >> 63) != 0) r |= 0x100000000ull;
    return px_b2f(r);
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

u32 fn_80044940(f64 param_1, f64 param_2, u32 param_3)
{
    u32 r0 = 0, r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f3 = 0.0, f4 = 0.0, f5 = 0.0, f6 = 0.0, f7 = 0.0, f8 = 0.0, f9 = 0.0, f10 = 0.0, f11 = 0.0;
    f64 f12 = 0.0, f13 = 0.0, f14 = 0.0, f15 = 0.0, f16 = 0.0, f30 = 0.0, f31 = 0.0;
    wr32(0x817fde90u, 0x817fe000u);
    wrf64(0x817fdff0u, 0.0);
    wrf32d(0x817fdff8u, px_hi(0.0));
    wrf32d(0x817fdff8u, px_lo(0.0));
    wrf64(0x817fdfe0u, 0.0);
    wrf32d(0x817fdfe8u, px_hi(0.0));
    wrf32d(0x817fdfe8u, px_lo(0.0));
    wrf64(0x817fdfd0u, 0.0);
    wrf32d(0x817fdfd8u, px_hi(0.0));
    wrf32d(0x817fdfd8u, px_lo(0.0));
    wrf64(0x817fdfc0u, 0.0);
    wrf32d(0x817fdfc8u, px_hi(0.0));
    wrf32d(0x817fdfc8u, px_lo(0.0));
    wrf64(0x817fdfb0u, 0.0);
    wrf32d(0x817fdfb8u, px_hi(0.0));
    wrf32d(0x817fdfb8u, px_lo(0.0));
    wrf64(0x817fdfa0u, 0.0);
    wrf32d(0x817fdfa8u, px_hi(0.0));
    wrf32d(0x817fdfa8u, px_lo(0.0));
    wrf64(0x817fdf90u, 0.0);
    wrf32d(0x817fdf98u, px_hi(0.0));
    wrf32d(0x817fdf98u, px_lo(0.0));
    wrf64(0x817fdf80u, 0.0);
    wrf32d(0x817fdf88u, px_hi(0.0));
    wrf32d(0x817fdf88u, px_lo(0.0));
    wrf64(0x817fdf70u, 0.0);
    wrf32d(0x817fdf78u, px_hi(0.0));
    wrf32d(0x817fdf78u, px_lo(0.0));
    wrf64(0x817fdf60u, 0.0);
    wrf32d(0x817fdf68u, px_hi(0.0));
    wrf32d(0x817fdf68u, px_lo(0.0));
    wrf64(0x817fdf50u, 0.0);
    wrf32d(0x817fdf58u, px_hi(0.0));
    wrf32d(0x817fdf58u, px_lo(0.0));
    wrf64(0x817fdf40u, 0.0);
    wrf32d(0x817fdf48u, px_hi(0.0));
    wrf32d(0x817fdf48u, px_lo(0.0));
    wrf64(0x817fdf30u, 0.0);
    wrf32d(0x817fdf38u, px_hi(0.0));
    wrf32d(0x817fdf38u, px_lo(0.0));
    wrf64(0x817fdf20u, 0.0);
    wrf32d(0x817fdf28u, px_hi(0.0));
    wrf32d(0x817fdf28u, px_lo(0.0));
    wrf64(0x817fdf10u, 0.0);
    wrf32d(0x817fdf18u, px_hi(0.0));
    wrf32d(0x817fdf18u, px_lo(0.0));
    wrf64(0x817fdf00u, 0.0);
    wrf32d(0x817fdf08u, px_hi(0.0));
    wrf32d(0x817fdf08u, px_lo(0.0));
    wrf64(0x817fdef0u, 0.0);
    wrf32d(0x817fdef8u, px_hi(0.0));
    wrf32d(0x817fdef8u, px_lo(0.0));
    wrf64(0x817fdee0u, 0.0);
    wrf32d(0x817fdee8u, px_hi(0.0));
    wrf32d(0x817fdee8u, px_lo(0.0));
    r6 = (u32)rd8(0x805720d9u);
    r5 = (u32)rd8(0x805720dau);
    r4 = (u32)rd8(0x805720dbu);
    wr8(0x817fdea8u, rd8(0x805720d8u));
    f9 = rdf64(0x805720d0u);
    wr8(0x817fdea9u, (u8)r6);
    wr8(0x817fdeaau, (u8)r5);
    wr8(0x817fdeabu, (u8)r4);
    f30 = (f64)(f32)px_psub(param_2, (f64)rdf32(param_3 + 8u));
    f8 = (f64)rdf32(param_3 + 0x1cu);
    f31 = (f64)(f32)px_psub(param_1, (f64)rdf32(param_3));
    r9 = (u32)rd16(param_3 + 0x20u);
    r8 = rd32(param_3 + 0x24u);
    f0 = (f64)(f32)px_pmul(f30, f8);
    f8 = (f64)(f32)px_pmul(f31, f8);
    wr32(0x817fdec8u, 0x43300000u);
    r4 = rd32(param_3 + 0x28u);
    f0 = px_ctiw(f0, ppc_fctiwz(f0));
    wr32(0x817fded0u, 0x43300000u);
    f8 = px_ctiw(f8, ppc_fctiwz(f8));
    wrf64(0x817fdec0u, f0);
    r6 = rd32(0x817fdec4u);
    wrf64(0x817fdeb8u, f8);
    r5 = r6 + 1u;
    r7 = r9 * r6;
    r10 = rd32(0x817fdebcu);
    wr32(0x817fded4u, r6 ^ 0x80000000u);
    wr32(0x817fdeccu, r10 ^ 0x80000000u);
    r6 = r8 + r10;
    r9 = r9 * r5;
    r5 = r10 + r7;
    r7 = r5 + r8;
    r0 = ((u32)rd8(r8 + r5) << 2u) & 0xfffffffcu;
    f8 = rdf64(0x817fdec8u);
    r5 = r10 + r9 + r8;
    r8 = (u32)rd8(r7 + 1u);
    r7 = r4 + r0;
    r0 = (u32)rd8(r9 + r6);
    r9 = (u32)rd8(r5 + 1u);
    f0 = (f64)(f32)px_psub(rdf64(0x817fded0u), f9);
    wr8(0x817fdea4u, rd8(r7));
    f9 = (f64)(f32)px_psub(f8, f9);
    wr8(0x817fdea5u, rd8(r7 + 1u));
    wr8(0x817fdea6u, rd8(r7 + 2u));
    wr8(0x817fdea7u, rd8(r7 + 3u));
    r6 = rd32(param_3 + 0x28u) + ((r8 << 2u) & 0xfffffffcu);
    wr8(0x817fdea0u, rd8(r6));
    wr8(0x817fdea1u, rd8(r6 + 1u));
    wr8(0x817fdea2u, rd8(r6 + 2u));
    wr8(0x817fdea3u, rd8(r6 + 3u));
    r5 = rd32(param_3 + 0x28u) + ((r0 << 2u) & 0xfffffffcu);
    wr8(0x817fde9cu, rd8(r5));
    wr8(0x817fde9du, rd8(r5 + 1u));
    wr8(0x817fde9eu, rd8(r5 + 2u));
    wr8(0x817fde9fu, rd8(r5 + 3u));
    r4 = rd32(param_3 + 0x28u) + ((r9 << 2u) & 0xfffffffcu);
    wr8(0x817fde98u, rd8(r4));
    wr8(0x817fde99u, rd8(r4 + 1u));
    wr8(0x817fde9au, rd8(r4 + 2u));
    wr8(0x817fde9bu, rd8(r4 + 3u));
    f8 = (f64)rdf32(param_3 + 0x18u);
    f9 = (f64)(f32)px_pmul(f9, f8);
    f0 = (f64)(f32)px_pmul(f0, f8);
    f31 = (f64)(f32)px_psub(f31, f9);
    f9 = (f64)rdf32(param_3 + 0x1cu);
    f8 = (f64)(f32)px_psub(f30, f0);
    f0 = (f64)rdf32(0x805720c8u);
    f31 = (f64)(f32)px_pmul(f9, f31);
    f9 = (f64)(f32)px_pmul(f9, f8);
    wrf32d(0x817fdeb0u, f31);
    wrf32d(0x817fdeb4u, f9);
    if ((f64)(f32)px_padd(f31, f9) < f0) {
        f1 = px_pack(px_dq(0u, 0x817fdea4u), px_dq(0u, 0x817fdea4u));
        f2 = px_pack(px_dq(0u, 0x817fdea6u), 1.0);
        f3 = px_pack(px_dq(0u, 0x817fdea0u), px_dq(0u, 0x817fdea0u));
        f4 = px_pack(px_dq(0u, 0x817fdea2u), 1.0);
        f5 = px_pack(px_dq(0u, 0x817fde9cu), px_dq(0u, 0x817fde9cu));
        f6 = px_pack(px_dq(0u, 0x817fde9eu), 1.0);
        f7 = px_pack((f64)rdf32(0x817fdeb0u), (f64)rdf32(0x817fdeb0u));
        f10 = px_pack((f64)(f32)px_psub(px_hi(f3), px_hi(f1)), (f64)(f32)px_psub(px_lo(f3), px_lo(f1)));
        f11 = px_pack((f64)(f32)px_psub(px_hi(f4), px_hi(f2)), (f64)(f32)px_psub(px_lo(f4), px_lo(f2)));
        f12 = px_pack((f64)(f32)px_psub(px_hi(f5), px_hi(f1)), (f64)(f32)px_psub(px_lo(f5), px_lo(f1)));
        f13 = px_pack((f64)(f32)px_psub(px_hi(f6), px_hi(f2)), (f64)(f32)px_psub(px_lo(f6), px_lo(f2)));
        f14 = px_pack((f64)(f32)px_pfma(px_hi(f10), px_hi(f7), px_hi(f1)), (f64)(f32)px_pfma(px_lo(f10), px_hi(f7), px_lo(f1)));
        f15 = px_pack((f64)(f32)px_pfma(px_hi(f11), px_hi(f7), px_hi(f2)), (f64)(f32)px_pfma(px_lo(f11), px_hi(f7), px_lo(f2)));
        f16 = px_pack((f64)(f32)px_pfma(px_hi(f12), px_lo(f7), px_hi(f14)), (f64)(f32)px_pfma(px_lo(f12), px_lo(f7), px_lo(f14)));
        px_q(0u, 0x817fdea8u, px_hi(f16));
        px_q(0u, 0x817fdea8u, px_lo(f16));
        px_q(0u, 0x817fdeaau, px_hi(px_pack((f64)(f32)px_pfma(px_hi(f13), px_lo(f7), px_hi(f15)), (f64)(f32)px_pfma(px_lo(f13), px_lo(f7), px_lo(f15)))));
    } else {
        f8 = (f64)(f32)px_psub(f31, f0);
        f0 = (f64)(f32)px_psub(f9, f0);
        wrf32d(0x817fdeb0u, f8);
        wrf32d(0x817fdeb4u, f0);
        f1 = px_pack(px_dq(0u, 0x817fdea0u), px_dq(0u, 0x817fdea0u));
        f2 = px_pack(px_dq(0u, 0x817fdea2u), 1.0);
        f3 = px_pack(px_dq(0u, 0x817fde9cu), px_dq(0u, 0x817fde9cu));
        f4 = px_pack(px_dq(0u, 0x817fde9eu), 1.0);
        f5 = px_pack(px_dq(0u, 0x817fde98u), px_dq(0u, 0x817fde98u));
        f6 = px_pack(px_dq(0u, 0x817fde9au), 1.0);
        f7 = px_pack((f64)rdf32(0x817fdeb0u), (f64)rdf32(0x817fdeb0u));
        f10 = px_pack((f64)(f32)px_psub(px_hi(f5), px_hi(f1)), (f64)(f32)px_psub(px_lo(f5), px_lo(f1)));
        f11 = px_pack((f64)(f32)px_psub(px_hi(f6), px_hi(f2)), (f64)(f32)px_psub(px_lo(f6), px_lo(f2)));
        f12 = px_pack((f64)(f32)px_psub(px_hi(f5), px_hi(f3)), (f64)(f32)px_psub(px_lo(f5), px_lo(f3)));
        f13 = px_pack((f64)(f32)px_psub(px_hi(f6), px_hi(f4)), (f64)(f32)px_psub(px_lo(f6), px_lo(f4)));
        f14 = px_pack((f64)(f32)px_pfma(px_hi(f10), px_lo(f7), px_hi(f5)), (f64)(f32)px_pfma(px_lo(f10), px_lo(f7), px_lo(f5)));
        f15 = px_pack((f64)(f32)px_pfma(px_hi(f11), px_lo(f7), px_hi(f6)), (f64)(f32)px_pfma(px_lo(f11), px_lo(f7), px_lo(f6)));
        f16 = px_pack((f64)(f32)px_pfma(px_hi(f12), px_hi(f7), px_hi(f14)), (f64)(f32)px_pfma(px_lo(f12), px_hi(f7), px_lo(f14)));
        px_q(0u, 0x817fdea8u, px_hi(f16));
        px_q(0u, 0x817fdea8u, px_lo(f16));
        px_q(0u, 0x817fdeaau, px_hi(px_pack((f64)(f32)px_pfma(px_hi(f13), px_hi(f7), px_hi(f15)), (f64)(f32)px_pfma(px_lo(f13), px_hi(f7), px_lo(f15)))));
    }
    return rd32(0x817fdea8u);
}
