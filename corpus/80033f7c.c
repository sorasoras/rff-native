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

f64 fn_80033f7c(u32 param_1, s32 param_2, f64 param_f1)
{
    u32 r0 = 0, r4 = 0, r5 = 0, r6 = 0, r7 = 0, t6 = 0, t9 = 0, t14 = 0, t17 = 0, t22 = 0, t25 = 0, t34 = 0;
    u32 t37 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f3 = 0.0, f4 = 0.0, f5 = 0.0, f6 = 0.0, f7 = 0.0, f8 = 0.0, f9 = 0.0, f10 = 0.0, f11 = 0.0;
    f64 f12 = 0.0, f13 = 0.0, f29 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdf10u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
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
    wr32(0x817fdf9cu, 0u);
    wr32(0x817fdf98u, 0u);
    a.f[0] = param_f1;
    a.r[0] = (u32)param_2;
    a.r[1] = 0x817fdf1cu;
    a.r[2] = 0x817fdf18u;
    f1 = tc_callf(0x800323ccu, &a);
    r0 = rd32(0x817fdf1cu);
    f0 = f1;
    r5 = rd32(0x817fdf18u);
    r4 = rd32((u32)param_2 + 0x10u);
    f9 = (f64)rdf32((u32)param_2 + 4u);
    f13 = (f64)rdf32((u32)param_2 + 8u);
    r6 = r4 + (r0 * 0xeu);
    r7 = r4 + (r5 * 0xeu);
    if (r0 != 0xffffffffu) {
        if (r5 != 0xffffffffu) {
            r0 = (u32)rd8(r7);
            wr32(0x817fdf84u, (u32)rd8(r6 + 1u));
            f8 = rdf64(0x80571e58u);
            wr32(0x817fdf80u, 0x43300000u);
            f6 = (f64)rdf32(0x80571e74u);
            f5 = rdf64(0x817fdf80u);
            wr32(0x817fdf8cu, r0);
            wr32(0x817fdf88u, 0x43300000u);
            f11 = (f64)(f32)px_pmul(f6, (f64)(f32)px_psub(f5, f8));
            f12 = (f64)(f32)px_pmul(f6, (f64)(f32)px_psub(rdf64(0x817fdf88u), f8));
            t6 = r6 + 2u;
            f1 = px_pack(px_dq(0u, t6), px_dq(0u, t6));
            t9 = r6 + 4u;
            f2 = px_pack(px_dq(0u, t9), px_dq(0u, t9));
            wrf32d(0x817fdf40u, px_hi(f1));
            wrf32d(0x817fdf40u, px_lo(f1));
            wrf32d(0x817fdf48u, px_hi(f2));
            wrf32d(0x817fdf48u, px_lo(f2));
            t14 = r7 + 2u;
            f1 = px_pack(px_dq(0u, t14), px_dq(0u, t14));
            t17 = r7 + 4u;
            f2 = px_pack(px_dq(0u, t17), px_dq(0u, t17));
            wrf32d(0x817fdf50u, px_hi(f1));
            wrf32d(0x817fdf50u, px_lo(f1));
            wrf32d(0x817fdf58u, px_hi(f2));
            wrf32d(0x817fdf58u, px_lo(f2));
            f10 = px_pmg00(f13, f13);
            t22 = r6 + 0xau;
            f1 = px_pack(px_dq(0u, t22), px_dq(0u, t22));
            t25 = r6 + 0xcu;
            f2 = px_pack(px_dq(0u, t25), px_dq(0u, t25));
            f3 = px_pack((f64)(f32)px_pfma(px_hi(f1), px_hi(f9), px_hi(f10)), (f64)(f32)px_pfma(px_lo(f1), px_hi(f9), px_lo(f10)));
            f4 = px_pack((f64)(f32)px_pfma(px_hi(f2), px_hi(f9), px_hi(f10)), (f64)(f32)px_pfma(px_lo(f2), px_hi(f9), px_lo(f10)));
            wrf32d(0x817fdf60u, px_hi(f3));
            wrf32d(0x817fdf60u, px_lo(f3));
            wrf32d(0x817fdf68u, px_hi(f4));
            wrf32d(0x817fdf68u, px_lo(f4));
            f10 = px_pmg00(f13, f13);
            t34 = r7 + 6u;
            f1 = px_pack(px_dq(0u, t34), px_dq(0u, t34));
            t37 = r7 + 8u;
            f2 = px_pack(px_dq(0u, t37), px_dq(0u, t37));
            f3 = px_pack((f64)(f32)px_pfma(px_hi(f1), px_hi(f9), px_hi(f10)), (f64)(f32)px_pfma(px_lo(f1), px_hi(f9), px_lo(f10)));
            f4 = px_pack((f64)(f32)px_pfma(px_hi(f2), px_hi(f9), px_hi(f10)), (f64)(f32)px_pfma(px_lo(f2), px_hi(f9), px_lo(f10)));
            wrf32d(0x817fdf70u, px_hi(f3));
            wrf32d(0x817fdf70u, px_lo(f3));
            wrf32d(0x817fdf78u, px_hi(f4));
            wrf32d(0x817fdf78u, px_lo(f4));
            f6 = (f64)rdf32(0x80571e4cu);
            f5 = (f64)rdf32(0x80571e50u);
            f9 = (f64)(f32)px_psub(f6, f0);
            if (f5 != f0 && f6 != f0) {
                f7 = (f64)(f32)px_padd(f11, f12);
                if (f5 != f7) {
                    if (f7 > f6) {
                        f5 = (f64)(f32)px_pdiv(f6, f7);
                        f11 = (f64)(f32)px_pmul(f11, f5);
                        f12 = (f64)(f32)px_pmul(f12, f5);
                    }
                    f7 = (f64)rdf32(0x80571e48u);
                    f6 = (f64)rdf32(0x80571e4cu);
                    f8 = (f64)(f32)px_pdiv(f6, (f64)(f32)px_psub((f64)(f32)px_psub(f7, f11), f12));
                    if (!(f0 < f11)) {
                        if (!(f0 < (f64)(f32)px_psub(f6, f12))) {
                            f0 = px_pfnm((f64)(f32)px_sfms(f9, (f64)(f32)px_pmul(f9, (f64)(f32)px_pdiv(f8, f12)), f6));
                        } else {
                            f0 = (f64)(f32)px_sfms(f7, f0, f11);
                            f0 = (f64)(f32)px_pmul(f8, f0);
                        }
                    } else {
                        f0 = (f64)(f32)px_pmul(f0, (f64)(f32)px_pmul(f0, (f64)(f32)px_pdiv(f8, f11)));
                    }
                }
            }
            f13 = (f64)(f32)px_pmul(f0, f0);
            f5 = (f64)rdf32(0x80571e48u);
            f12 = (f64)(f32)px_pmul(f0, f13);
            f0 = px_pfnm((f64)(f32)px_sfms(f5, f13, f0));
            f9 = (f64)(f32)px_sfms(f5, f12, (f64)(f32)px_pmul((f64)rdf32(0x80571e64u), f13));
            f5 = (f64)(f32)px_padd(f12, f0);
            f0 = (f64)(f32)px_psub(f12, f13);
            f6 = (f64)(f32)px_pmul((f64)rdf32(0x80571e78u), f9);
            f7 = (f64)(f32)px_padd((f64)rdf32(0x80571e4cu), f9);
            f8 = (f64)(f32)px_sfma((f64)rdf32(0x817fdf7cu), f0, (f64)(f32)px_sfma((f64)rdf32(0x817fdf6cu), f5, (f64)(f32)px_sfma((f64)rdf32(0x817fdf4cu), f7, (f64)(f32)px_pmul((f64)rdf32(0x817fdf5cu), f6))));
            f9 = (f64)rdf32(0x80571e70u);
            f29 = (f64)(f32)px_sfma((f64)rdf32(0x817fdf70u), f0, (f64)(f32)px_sfma((f64)rdf32(0x817fdf60u), f5, (f64)(f32)px_sfma((f64)rdf32(0x817fdf40u), f7, (f64)(f32)px_pmul((f64)rdf32(0x817fdf50u), f6))));
            f11 = (f64)(f32)px_sfma((f64)rdf32(0x817fdf78u), f0, (f64)(f32)px_sfma((f64)rdf32(0x817fdf68u), f5, (f64)(f32)px_sfma((f64)rdf32(0x817fdf48u), f7, (f64)(f32)px_pmul((f64)rdf32(0x817fdf58u), f6))));
            wrf32d(0x817fdf34u, (f64)(f32)px_sfma((f64)rdf32(0x817fdf74u), f0, (f64)(f32)px_sfma((f64)rdf32(0x817fdf64u), f5, (f64)(f32)px_sfma((f64)rdf32(0x817fdf44u), f7, (f64)(f32)px_pmul((f64)rdf32(0x817fdf54u), f6)))));
            wrf32d(0x817fdf30u, f29);
            wrf32d(0x817fdf20u, f7);
            wrf32d(0x817fdf24u, f6);
            wrf32d(0x817fdf28u, f5);
            wrf32d(0x817fdf2cu, f0);
            wrf32d(0x817fdf38u, f11);
            wrf32d(0x817fdf3cu, f8);
            f1 = px_pack((f64)rdf32(0x817fdf30u), (f64)rdf32(0x817fdf30u));
            f2 = px_pack((f64)rdf32(0x817fdf38u), 1.0);
            f3 = px_pack((f64)(f32)px_pmul(px_hi(f1), px_hi(f9)), (f64)(f32)px_pmul(px_lo(f1), px_hi(f9)));
            px_q(0u, param_1, px_hi(f3));
            px_q(0u, param_1, px_lo(f3));
            px_q(0u, param_1 + 2u, px_hi(px_pack((f64)(f32)px_pmul(px_hi(f2), px_hi(f9)), (f64)(f32)px_pmul(px_lo(f2), px_hi(f9)))));
        } else {
            wr8(param_1, rd8(r6));
            wr8(param_1 + 1u, rd8(r6 + 1u));
            wr8(param_1 + 2u, rd8(r6 + 2u));
            wr8(param_1 + 3u, rd8(r6 + 3u));
        }
    } else {
        wr8(param_1, rd8(r7));
        wr8(param_1 + 1u, rd8(r7 + 1u));
        wr8(param_1 + 2u, rd8(r7 + 2u));
        wr8(param_1 + 3u, rd8(r7 + 3u));
    }
    return f1;
}
