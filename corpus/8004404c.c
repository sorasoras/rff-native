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

u32 fn_8004404c(f64 param_1, f64 param_2, u32 param_3)
{
    u32 c0lt = 0, r0 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f3 = 0.0, f4 = 0.0, f5 = 0.0, f6 = 0.0, f7 = 0.0, f9 = 0.0, f10 = 0.0, f11 = 0.0, f12 = 0.0;
    f64 f13 = 0.0, f14 = 0.0, f15 = 0.0, f16 = 0.0, f26 = 0.0, f27 = 0.0, f28 = 0.0, f29 = 0.0, f30 = 0.0, f31 = 0.0;
    wr32(0x817fde40u, 0x817fe000u);
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
    r6 = (u32)rd8(0x805720c5u);
    r5 = (u32)rd8(0x805720c6u);
    r4 = (u32)rd8(0x805720c7u);
    wr8(0x817fdeb8u, rd8(0x805720c4u));
    wr8(0x817fdeb9u, (u8)r6);
    wr8(0x817fdebau, (u8)r5);
    wr8(0x817fdebbu, (u8)r4);
    f0 = (f64)(f32)px_psub(param_1, (f64)rdf32(param_3));
    f26 = (f64)rdf32(param_3 + 0x1cu);
    f9 = (f64)(f32)px_psub(param_2, (f64)rdf32(param_3 + 8u));
    r7 = (u32)rd16(param_3 + 0x20u);
    r11 = rd32(param_3 + 0x24u);
    f27 = (f64)(f32)px_pmul(f0, f26);
    f26 = (f64)(f32)px_pmul(f9, f26);
    wr8(0x817fde9bu, 0xffu);
    f27 = px_ctiw(f27, ppc_fctiwz(f27));
    wr8(0x817fde9fu, 0xffu);
    f26 = px_ctiw(f26, ppc_fctiwz(f26));
    wrf64(0x817fdec8u, f27);
    r4 = rd32(0x817fdeccu);
    wrf64(0x817fded0u, f26);
    r5 = rd32(0x817fded4u);
    r0 = ((r4 - (r4 & 0xfffffffcu)) << 1u) & 0xfffffffeu;
    r7 = (u32)((s32)r7 >> 2);
    r7 = (u32)((s32)r5 >> 2) * r7;
    r7 = (u32)((s32)r4 >> 2) + r7;
    r7 = (r7 << 3u) & 0xfffffff8u;
    r11 = r11 + r7;
    r7 = (u32)rd16(r11);
    r9 = (r7 >> 8u) & 0xf8u;
    r8 = (r7 >> 3u) & 0xfcu;
    r7 = (r7 << 3u) & 0xf8u;
    wr8(0x817fde98u, (u8)r9);
    wr8(0x817fde99u, (u8)r8);
    wr8(0x817fde9au, (u8)r7);
    r10 = rd32(0x817fde98u);
    wr32(0x817fde90u, r10);
    r7 = (u32)rd16(r11 + 2u);
    r9 = (r7 >> 8u) & 0xf8u;
    r8 = (r7 >> 3u) & 0xfcu;
    r7 = (r7 << 3u) & 0xf8u;
    wr8(0x817fde9cu, (u8)r9);
    wr8(0x817fde9du, (u8)r8);
    wr8(0x817fde9eu, (u8)r7);
    r7 = rd32(0x817fde9cu);
    wr32(0x817fde94u, r7);
    r6 = (u32)rd8(r11 + (r5 - (r5 & 0xfffffffcu)) + 4u);
    r0 = ((r0 & 0x20u) != 0u) ? (u32)((s32)r6 >> 31) : (u32)((s32)r6 >> (s32)(r0 & 0x1fu));
    r0 = r0 & 3u;
    c0lt = (s32)r0 < 2;
    if (r0 == 2u) {
        r7 = (u32)rd8(0x805720b9u);
        r6 = (u32)rd8(0x805720bau);
        r0 = (u32)rd8(0x805720bbu);
        wr8(0x817fdea0u, rd8(0x805720b8u));
        f26 = (f64)rdf32(0x805720bcu);
        wr8(0x817fdea1u, (u8)r7);
        wr8(0x817fdea2u, (u8)r6);
        wr8(0x817fdea3u, (u8)r0);
        f1 = px_pack(px_dq(0u, 0x817fde90u), px_dq(0u, 0x817fde90u));
        f2 = px_pack(px_dq(0u, 0x817fde92u), 1.0);
        f3 = px_pack(px_dq(0u, 0x817fde94u), px_dq(0u, 0x817fde94u));
        f4 = px_pack(px_dq(0u, 0x817fde96u), 1.0);
        f5 = px_pack((f64)(f32)px_psub(px_hi(f3), px_hi(f1)), (f64)(f32)px_psub(px_lo(f3), px_lo(f1)));
        f6 = px_pack((f64)(f32)px_psub(px_hi(f4), px_hi(f2)), (f64)(f32)px_psub(px_lo(f4), px_lo(f2)));
        f7 = px_pack((f64)(f32)px_pfma(px_hi(f5), px_hi(f26), px_hi(f1)), (f64)(f32)px_pfma(px_lo(f5), px_hi(f26), px_lo(f1)));
        px_q(0u, 0x817fdea0u, px_hi(f7));
        px_q(0u, 0x817fdea0u, px_lo(f7));
        px_q(0u, 0x817fdea2u, px_hi(px_pack((f64)(f32)px_pfma(px_hi(f6), px_hi(f26), px_hi(f2)), (f64)(f32)px_pfma(px_lo(f6), px_hi(f26), px_lo(f2)))));
        r10 = rd32(0x817fdea0u);
    } else if (!c0lt) {
        if ((s32)r0 >= 4) {
            r10 = 0u;
        } else {
            r7 = (u32)rd8(0x805720b9u);
            r6 = (u32)rd8(0x805720bau);
            r0 = (u32)rd8(0x805720bbu);
            wr8(0x817fdea4u, rd8(0x805720b8u));
            f26 = (f64)rdf32(0x805720c0u);
            wr8(0x817fdea5u, (u8)r7);
            wr8(0x817fdea6u, (u8)r6);
            wr8(0x817fdea7u, (u8)r0);
            f1 = px_pack(px_dq(0u, 0x817fde90u), px_dq(0u, 0x817fde90u));
            f2 = px_pack(px_dq(0u, 0x817fde92u), 1.0);
            f3 = px_pack(px_dq(0u, 0x817fde94u), px_dq(0u, 0x817fde94u));
            f4 = px_pack(px_dq(0u, 0x817fde96u), 1.0);
            f5 = px_pack((f64)(f32)px_psub(px_hi(f3), px_hi(f1)), (f64)(f32)px_psub(px_lo(f3), px_lo(f1)));
            f6 = px_pack((f64)(f32)px_psub(px_hi(f4), px_hi(f2)), (f64)(f32)px_psub(px_lo(f4), px_lo(f2)));
            f7 = px_pack((f64)(f32)px_pfma(px_hi(f5), px_hi(f26), px_hi(f1)), (f64)(f32)px_pfma(px_lo(f5), px_hi(f26), px_lo(f1)));
            px_q(0u, 0x817fdea4u, px_hi(f7));
            px_q(0u, 0x817fdea4u, px_lo(f7));
            px_q(0u, 0x817fdea6u, px_hi(px_pack((f64)(f32)px_pfma(px_hi(f6), px_hi(f26), px_hi(f2)), (f64)(f32)px_pfma(px_lo(f6), px_hi(f26), px_lo(f2)))));
            r10 = rd32(0x817fdea4u);
        }
    } else {
        c0lt = (s32)r0 < 0;
        if (r0 != 0u) {
            if (!c0lt) {
                r10 = r7;
            } else {
                r10 = 0u;
            }
        }
    }
    wr32(0x817fdeb4u, r10);
    r9 = r4 + 1u;
    r8 = (u32)((s32)rd16(param_3 + 0x20u) >> 2);
    wr8(0x817fde83u, 0xffu);
    r8 = (u32)((s32)r5 >> 2) * r8;
    wr8(0x817fde87u, 0xffu);
    r0 = ((r9 - (r9 & 0xfffffffcu)) << 1u) & 0xfffffffeu;
    r11 = rd32(param_3 + 0x24u) + ((((u32)((s32)r9 >> 2) + r8) << 3u) & 0xfffffff8u);
    r7 = (u32)rd16(r11);
    r9 = (r7 >> 8u) & 0xf8u;
    r8 = (r7 >> 3u) & 0xfcu;
    r7 = (r7 << 3u) & 0xf8u;
    wr8(0x817fde80u, (u8)r9);
    wr8(0x817fde81u, (u8)r8);
    wr8(0x817fde82u, (u8)r7);
    r10 = rd32(0x817fde80u);
    wr32(0x817fde78u, r10);
    r7 = (u32)rd16(r11 + 2u);
    r9 = (r7 >> 8u) & 0xf8u;
    r8 = (r7 >> 3u) & 0xfcu;
    r7 = (r7 << 3u) & 0xf8u;
    wr8(0x817fde84u, (u8)r9);
    wr8(0x817fde85u, (u8)r8);
    wr8(0x817fde86u, (u8)r7);
    r7 = rd32(0x817fde84u);
    wr32(0x817fde7cu, r7);
    r6 = (u32)rd8(r11 + (r5 - (r5 & 0xfffffffcu)) + 4u);
    r0 = ((r0 & 0x20u) != 0u) ? (u32)((s32)r6 >> 31) : (u32)((s32)r6 >> (s32)(r0 & 0x1fu));
    r0 = r0 & 3u;
    c0lt = (s32)r0 < 2;
    if (r0 == 2u) {
        r7 = (u32)rd8(0x805720b9u);
        r6 = (u32)rd8(0x805720bau);
        r0 = (u32)rd8(0x805720bbu);
        wr8(0x817fde88u, rd8(0x805720b8u));
        f26 = (f64)rdf32(0x805720bcu);
        wr8(0x817fde89u, (u8)r7);
        wr8(0x817fde8au, (u8)r6);
        wr8(0x817fde8bu, (u8)r0);
        f1 = px_pack(px_dq(0u, 0x817fde78u), px_dq(0u, 0x817fde78u));
        f2 = px_pack(px_dq(0u, 0x817fde7au), 1.0);
        f3 = px_pack(px_dq(0u, 0x817fde7cu), px_dq(0u, 0x817fde7cu));
        f4 = px_pack(px_dq(0u, 0x817fde7eu), 1.0);
        f5 = px_pack((f64)(f32)px_psub(px_hi(f3), px_hi(f1)), (f64)(f32)px_psub(px_lo(f3), px_lo(f1)));
        f6 = px_pack((f64)(f32)px_psub(px_hi(f4), px_hi(f2)), (f64)(f32)px_psub(px_lo(f4), px_lo(f2)));
        f7 = px_pack((f64)(f32)px_pfma(px_hi(f5), px_hi(f26), px_hi(f1)), (f64)(f32)px_pfma(px_lo(f5), px_hi(f26), px_lo(f1)));
        px_q(0u, 0x817fde88u, px_hi(f7));
        px_q(0u, 0x817fde88u, px_lo(f7));
        px_q(0u, 0x817fde8au, px_hi(px_pack((f64)(f32)px_pfma(px_hi(f6), px_hi(f26), px_hi(f2)), (f64)(f32)px_pfma(px_lo(f6), px_hi(f26), px_lo(f2)))));
        r10 = rd32(0x817fde88u);
    } else if (!c0lt) {
        if ((s32)r0 >= 4) {
            r10 = 0u;
        } else {
            r7 = (u32)rd8(0x805720b9u);
            r6 = (u32)rd8(0x805720bau);
            r0 = (u32)rd8(0x805720bbu);
            wr8(0x817fde8cu, rd8(0x805720b8u));
            f26 = (f64)rdf32(0x805720c0u);
            wr8(0x817fde8du, (u8)r7);
            wr8(0x817fde8eu, (u8)r6);
            wr8(0x817fde8fu, (u8)r0);
            f1 = px_pack(px_dq(0u, 0x817fde78u), px_dq(0u, 0x817fde78u));
            f2 = px_pack(px_dq(0u, 0x817fde7au), 1.0);
            f3 = px_pack(px_dq(0u, 0x817fde7cu), px_dq(0u, 0x817fde7cu));
            f4 = px_pack(px_dq(0u, 0x817fde7eu), 1.0);
            f5 = px_pack((f64)(f32)px_psub(px_hi(f3), px_hi(f1)), (f64)(f32)px_psub(px_lo(f3), px_lo(f1)));
            f6 = px_pack((f64)(f32)px_psub(px_hi(f4), px_hi(f2)), (f64)(f32)px_psub(px_lo(f4), px_lo(f2)));
            f7 = px_pack((f64)(f32)px_pfma(px_hi(f5), px_hi(f26), px_hi(f1)), (f64)(f32)px_pfma(px_lo(f5), px_hi(f26), px_lo(f1)));
            px_q(0u, 0x817fde8cu, px_hi(f7));
            px_q(0u, 0x817fde8cu, px_lo(f7));
            px_q(0u, 0x817fde8eu, px_hi(px_pack((f64)(f32)px_pfma(px_hi(f6), px_hi(f26), px_hi(f2)), (f64)(f32)px_pfma(px_lo(f6), px_hi(f26), px_lo(f2)))));
            r10 = rd32(0x817fde8cu);
        }
    } else {
        c0lt = (s32)r0 < 0;
        if (r0 != 0u) {
            if (!c0lt) {
                r10 = r7;
            } else {
                r10 = 0u;
            }
        }
    }
    wr32(0x817fdeb0u, r10);
    r9 = r5 + 1u;
    r8 = (u32)((s32)rd16(param_3 + 0x20u) >> 2);
    wr8(0x817fde6bu, 0xffu);
    r8 = (u32)((s32)r9 >> 2) * r8;
    wr8(0x817fde6fu, 0xffu);
    r6 = r9 - (r9 & 0xfffffffcu);
    r0 = ((r4 - (r4 & 0xfffffffcu)) << 1u) & 0xfffffffeu;
    r11 = rd32(param_3 + 0x24u) + ((((u32)((s32)r4 >> 2) + r8) << 3u) & 0xfffffff8u);
    r7 = (u32)rd16(r11);
    r9 = (r7 >> 8u) & 0xf8u;
    r8 = (r7 >> 3u) & 0xfcu;
    r7 = (r7 << 3u) & 0xf8u;
    wr8(0x817fde68u, (u8)r9);
    r6 = r11 + r6;
    wr8(0x817fde69u, (u8)r8);
    wr8(0x817fde6au, (u8)r7);
    r10 = rd32(0x817fde68u);
    wr32(0x817fde60u, r10);
    r7 = (u32)rd16(r11 + 2u);
    r9 = (r7 >> 8u) & 0xf8u;
    r8 = (r7 >> 3u) & 0xfcu;
    r7 = (r7 << 3u) & 0xf8u;
    wr8(0x817fde6cu, (u8)r9);
    wr8(0x817fde6du, (u8)r8);
    wr8(0x817fde6eu, (u8)r7);
    r7 = rd32(0x817fde6cu);
    wr32(0x817fde64u, r7);
    r6 = (u32)rd8(r6 + 4u);
    r0 = ((r0 & 0x20u) != 0u) ? (u32)((s32)r6 >> 31) : (u32)((s32)r6 >> (s32)(r0 & 0x1fu));
    r0 = r0 & 3u;
    c0lt = (s32)r0 < 2;
    if (r0 == 2u) {
        r7 = (u32)rd8(0x805720b9u);
        r6 = (u32)rd8(0x805720bau);
        r0 = (u32)rd8(0x805720bbu);
        wr8(0x817fde70u, rd8(0x805720b8u));
        f26 = (f64)rdf32(0x805720bcu);
        wr8(0x817fde71u, (u8)r7);
        wr8(0x817fde72u, (u8)r6);
        wr8(0x817fde73u, (u8)r0);
        f1 = px_pack(px_dq(0u, 0x817fde60u), px_dq(0u, 0x817fde60u));
        f2 = px_pack(px_dq(0u, 0x817fde62u), 1.0);
        f3 = px_pack(px_dq(0u, 0x817fde64u), px_dq(0u, 0x817fde64u));
        f4 = px_pack(px_dq(0u, 0x817fde66u), 1.0);
        f5 = px_pack((f64)(f32)px_psub(px_hi(f3), px_hi(f1)), (f64)(f32)px_psub(px_lo(f3), px_lo(f1)));
        f6 = px_pack((f64)(f32)px_psub(px_hi(f4), px_hi(f2)), (f64)(f32)px_psub(px_lo(f4), px_lo(f2)));
        f7 = px_pack((f64)(f32)px_pfma(px_hi(f5), px_hi(f26), px_hi(f1)), (f64)(f32)px_pfma(px_lo(f5), px_hi(f26), px_lo(f1)));
        px_q(0u, 0x817fde70u, px_hi(f7));
        px_q(0u, 0x817fde70u, px_lo(f7));
        px_q(0u, 0x817fde72u, px_hi(px_pack((f64)(f32)px_pfma(px_hi(f6), px_hi(f26), px_hi(f2)), (f64)(f32)px_pfma(px_lo(f6), px_hi(f26), px_lo(f2)))));
        r10 = rd32(0x817fde70u);
    } else if (!c0lt) {
        if ((s32)r0 >= 4) {
            r10 = 0u;
        } else {
            r7 = (u32)rd8(0x805720b9u);
            r6 = (u32)rd8(0x805720bau);
            r0 = (u32)rd8(0x805720bbu);
            wr8(0x817fde74u, rd8(0x805720b8u));
            f26 = (f64)rdf32(0x805720c0u);
            wr8(0x817fde75u, (u8)r7);
            wr8(0x817fde76u, (u8)r6);
            wr8(0x817fde77u, (u8)r0);
            f1 = px_pack(px_dq(0u, 0x817fde60u), px_dq(0u, 0x817fde60u));
            f2 = px_pack(px_dq(0u, 0x817fde62u), 1.0);
            f3 = px_pack(px_dq(0u, 0x817fde64u), px_dq(0u, 0x817fde64u));
            f4 = px_pack(px_dq(0u, 0x817fde66u), 1.0);
            f5 = px_pack((f64)(f32)px_psub(px_hi(f3), px_hi(f1)), (f64)(f32)px_psub(px_lo(f3), px_lo(f1)));
            f6 = px_pack((f64)(f32)px_psub(px_hi(f4), px_hi(f2)), (f64)(f32)px_psub(px_lo(f4), px_lo(f2)));
            f7 = px_pack((f64)(f32)px_pfma(px_hi(f5), px_hi(f26), px_hi(f1)), (f64)(f32)px_pfma(px_lo(f5), px_hi(f26), px_lo(f1)));
            px_q(0u, 0x817fde74u, px_hi(f7));
            px_q(0u, 0x817fde74u, px_lo(f7));
            px_q(0u, 0x817fde76u, px_hi(px_pack((f64)(f32)px_pfma(px_hi(f6), px_hi(f26), px_hi(f2)), (f64)(f32)px_pfma(px_lo(f6), px_hi(f26), px_lo(f2)))));
            r10 = rd32(0x817fde74u);
        }
    } else {
        c0lt = (s32)r0 < 0;
        if (r0 != 0u) {
            if (!c0lt) {
                r10 = r7;
            } else {
                r10 = 0u;
            }
        }
    }
    wr32(0x817fded4u, r4 ^ 0x80000000u);
    f26 = rdf64(0x805720d0u);
    wr32(0x817fded0u, 0x43300000u);
    f31 = (f64)rdf32(0x805720c8u);
    wr32(0x817fdeacu, r10);
    f27 = rdf64(0x817fded0u);
    wr32(0x817fdeccu, r5 ^ 0x80000000u);
    f27 = (f64)(f32)px_psub(f27, f26);
    f28 = (f64)rdf32(param_3 + 0x18u);
    wr32(0x817fdec8u, 0x43300000u);
    f29 = (f64)rdf32(param_3 + 0x1cu);
    f27 = (f64)(f32)px_pmul(f27, f28);
    f0 = (f64)(f32)px_psub(f0, f27);
    f26 = (f64)(f32)px_pmul((f64)(f32)px_psub(rdf64(0x817fdec8u), f26), f28);
    f30 = (f64)(f32)px_pmul(f29, f0);
    wrf32d(0x817fdec0u, f30);
    f9 = (f64)(f32)px_pmul(f29, (f64)(f32)px_psub(f9, f26));
    wrf32d(0x817fdec4u, f9);
    if (!((f64)(f32)px_padd(f30, f9) < f31)) {
        r7 = r4 + 1u;
        r8 = r5 + 1u;
        r5 = (u32)((s32)r8 >> 2) * (u32)((s32)rd16(param_3 + 0x20u) >> 2);
        r9 = rd32(param_3 + 0x24u);
        wr8(0x817fde53u, 0xffu);
        wr8(0x817fde57u, 0xffu);
        r0 = ((r7 - (r7 & 0xfffffffcu)) << 1u) & 0xfffffffeu;
        r9 = r9 + ((((u32)((s32)r7 >> 2) + r5) << 3u) & 0xfffffff8u);
        r4 = (u32)rd16(r9);
        r6 = (r4 >> 8u) & 0xf8u;
        r5 = (r4 >> 3u) & 0xfcu;
        r4 = (r4 << 3u) & 0xf8u;
        wr8(0x817fde50u, (u8)r6);
        wr8(0x817fde51u, (u8)r5);
        wr8(0x817fde52u, (u8)r4);
        r7 = rd32(0x817fde50u);
        wr32(0x817fde48u, r7);
        r4 = (u32)rd16(r9 + 2u);
        r6 = (r4 >> 8u) & 0xf8u;
        r5 = (r4 >> 3u) & 0xfcu;
        r4 = (r4 << 3u) & 0xf8u;
        wr8(0x817fde54u, (u8)r6);
        wr8(0x817fde55u, (u8)r5);
        wr8(0x817fde56u, (u8)r4);
        r4 = rd32(0x817fde54u);
        wr32(0x817fde4cu, r4);
        r3 = (u32)rd8(r9 + (r8 - (r8 & 0xfffffffcu)) + 4u);
        r0 = ((r0 & 0x20u) != 0u) ? (u32)((s32)r3 >> 31) : (u32)((s32)r3 >> (s32)(r0 & 0x1fu));
        r0 = r0 & 3u;
        c0lt = (s32)r0 < 2;
        if (r0 == 2u) {
            r4 = (u32)rd8(0x805720b9u);
            r3 = (u32)rd8(0x805720bau);
            r0 = (u32)rd8(0x805720bbu);
            wr8(0x817fde58u, rd8(0x805720b8u));
            f0 = (f64)rdf32(0x805720bcu);
            wr8(0x817fde59u, (u8)r4);
            wr8(0x817fde5au, (u8)r3);
            wr8(0x817fde5bu, (u8)r0);
            f1 = px_pack(px_dq(0u, 0x817fde48u), px_dq(0u, 0x817fde48u));
            f2 = px_pack(px_dq(0u, 0x817fde4au), 1.0);
            f3 = px_pack(px_dq(0u, 0x817fde4cu), px_dq(0u, 0x817fde4cu));
            f4 = px_pack(px_dq(0u, 0x817fde4eu), 1.0);
            f5 = px_pack((f64)(f32)px_psub(px_hi(f3), px_hi(f1)), (f64)(f32)px_psub(px_lo(f3), px_lo(f1)));
            f6 = px_pack((f64)(f32)px_psub(px_hi(f4), px_hi(f2)), (f64)(f32)px_psub(px_lo(f4), px_lo(f2)));
            f7 = px_pack((f64)(f32)px_pfma(px_hi(f5), px_hi(f0), px_hi(f1)), (f64)(f32)px_pfma(px_lo(f5), px_hi(f0), px_lo(f1)));
            px_q(0u, 0x817fde58u, px_hi(f7));
            px_q(0u, 0x817fde58u, px_lo(f7));
            px_q(0u, 0x817fde5au, px_hi(px_pack((f64)(f32)px_pfma(px_hi(f6), px_hi(f0), px_hi(f2)), (f64)(f32)px_pfma(px_lo(f6), px_hi(f0), px_lo(f2)))));
            r7 = rd32(0x817fde58u);
        } else if (!c0lt) {
            if ((s32)r0 >= 4) {
                r7 = 0u;
            } else {
                r4 = (u32)rd8(0x805720b9u);
                r3 = (u32)rd8(0x805720bau);
                r0 = (u32)rd8(0x805720bbu);
                wr8(0x817fde5cu, rd8(0x805720b8u));
                f0 = (f64)rdf32(0x805720c0u);
                wr8(0x817fde5du, (u8)r4);
                wr8(0x817fde5eu, (u8)r3);
                wr8(0x817fde5fu, (u8)r0);
                f1 = px_pack(px_dq(0u, 0x817fde48u), px_dq(0u, 0x817fde48u));
                f2 = px_pack(px_dq(0u, 0x817fde4au), 1.0);
                f3 = px_pack(px_dq(0u, 0x817fde4cu), px_dq(0u, 0x817fde4cu));
                f4 = px_pack(px_dq(0u, 0x817fde4eu), 1.0);
                f5 = px_pack((f64)(f32)px_psub(px_hi(f3), px_hi(f1)), (f64)(f32)px_psub(px_lo(f3), px_lo(f1)));
                f6 = px_pack((f64)(f32)px_psub(px_hi(f4), px_hi(f2)), (f64)(f32)px_psub(px_lo(f4), px_lo(f2)));
                f7 = px_pack((f64)(f32)px_pfma(px_hi(f5), px_hi(f0), px_hi(f1)), (f64)(f32)px_pfma(px_lo(f5), px_hi(f0), px_lo(f1)));
                px_q(0u, 0x817fde5cu, px_hi(f7));
                px_q(0u, 0x817fde5cu, px_lo(f7));
                px_q(0u, 0x817fde5eu, px_hi(px_pack((f64)(f32)px_pfma(px_hi(f6), px_hi(f0), px_hi(f2)), (f64)(f32)px_pfma(px_lo(f6), px_hi(f0), px_lo(f2)))));
                r7 = rd32(0x817fde5cu);
            }
        } else {
            c0lt = (s32)r0 < 0;
            if (r0 != 0u) {
                if (!c0lt) {
                    r7 = r4;
                } else {
                    r7 = 0u;
                }
            }
        }
        f31 = (f64)rdf32(0x805720c8u);
        f0 = (f64)rdf32(0x817fdec4u);
        f9 = (f64)(f32)px_psub((f64)rdf32(0x817fdec0u), f31);
        wr32(0x817fdea8u, r7);
        f0 = (f64)(f32)px_psub(f0, f31);
        wrf32d(0x817fdec0u, f9);
        wrf32d(0x817fdec4u, f0);
        f1 = px_pack(px_dq(0u, 0x817fdeb0u), px_dq(0u, 0x817fdeb0u));
        f2 = px_pack(px_dq(0u, 0x817fdeb2u), 1.0);
        f3 = px_pack(px_dq(0u, 0x817fdeacu), px_dq(0u, 0x817fdeacu));
        f4 = px_pack(px_dq(0u, 0x817fdeaeu), 1.0);
        f5 = px_pack(px_dq(0u, 0x817fdea8u), px_dq(0u, 0x817fdea8u));
        f6 = px_pack(px_dq(0u, 0x817fdeaau), 1.0);
        f7 = px_pack((f64)rdf32(0x817fdec0u), (f64)rdf32(0x817fdec0u));
        f10 = px_pack((f64)(f32)px_psub(px_hi(f5), px_hi(f1)), (f64)(f32)px_psub(px_lo(f5), px_lo(f1)));
        f11 = px_pack((f64)(f32)px_psub(px_hi(f6), px_hi(f2)), (f64)(f32)px_psub(px_lo(f6), px_lo(f2)));
        f12 = px_pack((f64)(f32)px_psub(px_hi(f5), px_hi(f3)), (f64)(f32)px_psub(px_lo(f5), px_lo(f3)));
        f13 = px_pack((f64)(f32)px_psub(px_hi(f6), px_hi(f4)), (f64)(f32)px_psub(px_lo(f6), px_lo(f4)));
        f14 = px_pack((f64)(f32)px_pfma(px_hi(f10), px_lo(f7), px_hi(f5)), (f64)(f32)px_pfma(px_lo(f10), px_lo(f7), px_lo(f5)));
        f15 = px_pack((f64)(f32)px_pfma(px_hi(f11), px_lo(f7), px_hi(f6)), (f64)(f32)px_pfma(px_lo(f11), px_lo(f7), px_lo(f6)));
        f16 = px_pack((f64)(f32)px_pfma(px_hi(f12), px_hi(f7), px_hi(f14)), (f64)(f32)px_pfma(px_lo(f12), px_hi(f7), px_lo(f14)));
        px_q(0u, 0x817fdeb8u, px_hi(f16));
        px_q(0u, 0x817fdeb8u, px_lo(f16));
        px_q(0u, 0x817fdebau, px_hi(px_pack((f64)(f32)px_pfma(px_hi(f13), px_hi(f7), px_hi(f15)), (f64)(f32)px_pfma(px_lo(f13), px_hi(f7), px_lo(f15)))));
    } else {
        f1 = px_pack(px_dq(0u, 0x817fdeb4u), px_dq(0u, 0x817fdeb4u));
        f2 = px_pack(px_dq(0u, 0x817fdeb6u), 1.0);
        f3 = px_pack(px_dq(0u, 0x817fdeb0u), px_dq(0u, 0x817fdeb0u));
        f4 = px_pack(px_dq(0u, 0x817fdeb2u), 1.0);
        f5 = px_pack(px_dq(0u, 0x817fdeacu), px_dq(0u, 0x817fdeacu));
        f6 = px_pack(px_dq(0u, 0x817fdeaeu), 1.0);
        f7 = px_pack((f64)rdf32(0x817fdec0u), (f64)rdf32(0x817fdec0u));
        f10 = px_pack((f64)(f32)px_psub(px_hi(f3), px_hi(f1)), (f64)(f32)px_psub(px_lo(f3), px_lo(f1)));
        f11 = px_pack((f64)(f32)px_psub(px_hi(f4), px_hi(f2)), (f64)(f32)px_psub(px_lo(f4), px_lo(f2)));
        f12 = px_pack((f64)(f32)px_psub(px_hi(f5), px_hi(f1)), (f64)(f32)px_psub(px_lo(f5), px_lo(f1)));
        f13 = px_pack((f64)(f32)px_psub(px_hi(f6), px_hi(f2)), (f64)(f32)px_psub(px_lo(f6), px_lo(f2)));
        f14 = px_pack((f64)(f32)px_pfma(px_hi(f10), px_hi(f7), px_hi(f1)), (f64)(f32)px_pfma(px_lo(f10), px_hi(f7), px_lo(f1)));
        f15 = px_pack((f64)(f32)px_pfma(px_hi(f11), px_hi(f7), px_hi(f2)), (f64)(f32)px_pfma(px_lo(f11), px_hi(f7), px_lo(f2)));
        f16 = px_pack((f64)(f32)px_pfma(px_hi(f12), px_lo(f7), px_hi(f14)), (f64)(f32)px_pfma(px_lo(f12), px_lo(f7), px_lo(f14)));
        px_q(0u, 0x817fdeb8u, px_hi(f16));
        px_q(0u, 0x817fdeb8u, px_lo(f16));
        px_q(0u, 0x817fdebau, px_hi(px_pack((f64)(f32)px_pfma(px_hi(f13), px_lo(f7), px_hi(f15)), (f64)(f32)px_pfma(px_lo(f13), px_lo(f7), px_lo(f15)))));
    }
    return rd32(0x817fdeb8u);
}
