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

f64 fn_80033288(u32 param_1, s32 param_2, f64 param_f1)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r5 = 0, t21 = 0, t33 = 0, t42 = 0, t45 = 0, t54 = 0, t57 = 0, t66 = 0, t69 = 0;
    u32 t78 = 0, t81 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f3 = 0.0, f4 = 0.0, f5 = 0.0, f6 = 0.0, f7 = 0.0, f8 = 0.0, f9 = 0.0, f10 = 0.0, f11 = 0.0;
    f64 f12 = 0.0, f13 = 0.0, f14 = 0.0, f15 = 0.0, f16 = 0.0, f17 = 0.0, f18 = 0.0, f19 = 0.0, f20 = 0.0, f21 = 0.0, f22 = 0.0, f23 = 0.0;
    f64 f24 = 0.0, f26 = 0.0, f27 = 0.0, f29 = 0.0, f30 = 0.0, f31 = 0.0;
    TcArgs a = {0};
    wr32(0x817fde10u, 0x817fe000u);
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
    wr32(0x817fdedcu, 0u);
    wr32(0x817fded8u, 0u);
    a.f[0] = param_f1;
    a.r[0] = (u32)param_2;
    a.r[1] = 0x817fde1cu;
    a.r[2] = 0x817fde18u;
    f1 = tc_callf(0x800323ccu, &a);
    r0 = rd32(0x817fde1cu);
    f17 = f1;
    r5 = rd32(0x817fde18u);
    r4 = rd32((u32)param_2 + 0x10u);
    f0 = (f64)rdf32((u32)param_2 + 4u);
    f5 = (f64)rdf32((u32)param_2 + 8u);
    r3 = r4 + (r0 * 0x14u);
    r4 = r4 + (r5 * 0x14u);
    if (r0 != 0xffffffffu) {
        if (r5 != 0xffffffffu) {
            f10 = px_pmg00(f5, f5);
            f1 = px_pack(px_dq(0u, r3), px_dq(0u, r3));
            t21 = r3 + 2u;
            f2 = px_pack(px_dq(0u, t21), px_dq(0u, t21));
            f3 = px_pack((f64)(f32)px_pfma(px_hi(f1), px_hi(f0), px_hi(f10)), (f64)(f32)px_pfma(px_lo(f1), px_hi(f0), px_lo(f10)));
            f4 = px_pack((f64)(f32)px_pfma(px_hi(f2), px_hi(f0), px_hi(f10)), (f64)(f32)px_pfma(px_lo(f2), px_hi(f0), px_lo(f10)));
            wrf32d(0x817fde50u, px_hi(f3));
            wrf32d(0x817fde50u, px_lo(f3));
            wrf32d(0x817fde58u, px_hi(f4));
            wrf32d(0x817fde58u, px_lo(f4));
            f10 = px_pmg00(f5, f5);
            f1 = px_pack(px_dq(0u, r4), px_dq(0u, r4));
            t33 = r4 + 2u;
            f2 = px_pack(px_dq(0u, t33), px_dq(0u, t33));
            f3 = px_pack((f64)(f32)px_pfma(px_hi(f1), px_hi(f0), px_hi(f10)), (f64)(f32)px_pfma(px_lo(f1), px_hi(f0), px_lo(f10)));
            f4 = px_pack((f64)(f32)px_pfma(px_hi(f2), px_hi(f0), px_hi(f10)), (f64)(f32)px_pfma(px_lo(f2), px_hi(f0), px_lo(f10)));
            wrf32d(0x817fde80u, px_hi(f3));
            wrf32d(0x817fde80u, px_lo(f3));
            wrf32d(0x817fde88u, px_hi(f4));
            wrf32d(0x817fde88u, px_lo(f4));
            f10 = px_pmg00(f5, f5);
            t42 = r3 + 8u;
            f1 = px_pack(px_dq(0u, t42), px_dq(0u, t42));
            t45 = r3 + 0xau;
            f2 = px_pack(px_dq(0u, t45), px_dq(0u, t45));
            f3 = px_pack((f64)(f32)px_pfma(px_hi(f1), px_hi(f0), px_hi(f10)), (f64)(f32)px_pfma(px_lo(f1), px_hi(f0), px_lo(f10)));
            f4 = px_pack((f64)(f32)px_pfma(px_hi(f2), px_hi(f0), px_hi(f10)), (f64)(f32)px_pfma(px_lo(f2), px_hi(f0), px_lo(f10)));
            wrf32d(0x817fde60u, px_hi(f3));
            wrf32d(0x817fde60u, px_lo(f3));
            wrf32d(0x817fde68u, px_hi(f4));
            wrf32d(0x817fde68u, px_lo(f4));
            f10 = px_pmg00(f5, f5);
            t54 = r4 + 4u;
            f1 = px_pack(px_dq(0u, t54), px_dq(0u, t54));
            t57 = r4 + 6u;
            f2 = px_pack(px_dq(0u, t57), px_dq(0u, t57));
            f3 = px_pack((f64)(f32)px_pfma(px_hi(f1), px_hi(f0), px_hi(f10)), (f64)(f32)px_pfma(px_lo(f1), px_hi(f0), px_lo(f10)));
            f4 = px_pack((f64)(f32)px_pfma(px_hi(f2), px_hi(f0), px_hi(f10)), (f64)(f32)px_pfma(px_lo(f2), px_hi(f0), px_lo(f10)));
            wrf32d(0x817fde70u, px_hi(f3));
            wrf32d(0x817fde70u, px_lo(f3));
            wrf32d(0x817fde78u, px_hi(f4));
            wrf32d(0x817fde78u, px_lo(f4));
            f0 = (f64)rdf32(0x80571e60u);
            t66 = r3 + 0xcu;
            f1 = px_pack(px_dq(0u, t66), px_dq(0u, t66));
            t69 = r3 + 0xeu;
            f2 = px_pack(px_dq(0u, t69), px_dq(0u, t69));
            f3 = px_pack((f64)(f32)px_pmul(px_hi(f1), px_hi(f0)), (f64)(f32)px_pmul(px_lo(f1), px_hi(f0)));
            f4 = px_pack((f64)(f32)px_pmul(px_hi(f2), px_hi(f0)), (f64)(f32)px_pmul(px_lo(f2), px_hi(f0)));
            wrf32d(0x817fde30u, px_hi(f3));
            wrf32d(0x817fde30u, px_lo(f3));
            wrf32d(0x817fde38u, px_hi(f4));
            wrf32d(0x817fde38u, px_lo(f4));
            t78 = r4 + 0x10u;
            f1 = px_pack(px_dq(0u, t78), px_dq(0u, t78));
            t81 = r4 + 0x12u;
            f2 = px_pack(px_dq(0u, t81), px_dq(0u, t81));
            f3 = px_pack((f64)(f32)px_pmul(px_hi(f1), px_hi(f0)), (f64)(f32)px_pmul(px_lo(f1), px_hi(f0)));
            f4 = px_pack((f64)(f32)px_pmul(px_hi(f2), px_hi(f0)), (f64)(f32)px_pmul(px_lo(f2), px_hi(f0)));
            wrf32d(0x817fde20u, px_hi(f3));
            wrf32d(0x817fde20u, px_lo(f3));
            wrf32d(0x817fde28u, px_hi(f4));
            wrf32d(0x817fde28u, px_lo(f4));
            f8 = f17;
            f21 = (f64)rdf32(0x80571e50u);
            f20 = (f64)rdf32(0x80571e4cu);
            f5 = f21;
            f0 = f20;
            f16 = (f64)rdf32(0x817fde30u);
            f6 = (f64)(f32)px_psub(f20, (f64)rdf32(0x817fde20u));
            f7 = (f64)rdf32(0x80571e6cu);
            f13 = (f64)rdf32(0x80571e64u);
            f9 = (f64)rdf32(0x80571e68u);
            for (;;) {
                f18 = (f64)(f32)px_psub(f0, f8);
                f15 = (f64)(f32)px_pmul(f18, f18);
                f12 = (f64)(f32)px_sfma((f64)(f32)px_pmul(f8, (f64)(f32)px_pmul(f8, f8)), f0, (f64)(f32)px_sfma((f64)(f32)px_pmul(f13, (f64)(f32)px_pmul(f8, (f64)(f32)px_pmul(f18, f8))), f6, (f64)(f32)px_sfma((f64)(f32)px_pmul(f18, f15), f5, (f64)(f32)px_pmul((f64)(f32)px_pmul(f13, (f64)(f32)px_pmul(f8, f15)), f16))));
                if ((f64)(f32)ppc_fabs((f64)(f32)px_psub(f12, f17)) < f9) break;
                r0 = ((((f12 < f17) << 0x1fu) | ((f12 > f17) << 0x1eu) | ((f12 == f17) << 0x1du) | (((f12 != f12) || (f17 != f17)) << 0x1cu)) >> 0x1fu) & 1u;
                if (r0 != 0u) {
                    f21 = f8;
                }
                if (r0 == 0u) {
                    f20 = f8;
                }
                f8 = (f64)(f32)px_pmul(f7, (f64)(f32)px_padd(f20, f21));
            }
            f9 = f17;
            f20 = (f64)rdf32(0x817fde34u);
            f11 = (f64)(f32)px_psub(f0, (f64)rdf32(0x817fde24u));
            f12 = (f64)rdf32(0x80571e6cu);
            f6 = (f64)rdf32(0x80571e4cu);
            f16 = (f64)rdf32(0x80571e64u);
            f7 = (f64)rdf32(0x80571e50u);
            f13 = (f64)rdf32(0x80571e68u);
            for (;;) {
                f21 = (f64)(f32)px_psub(f6, f9);
                f19 = (f64)(f32)px_pmul(f21, f21);
                f15 = (f64)(f32)px_sfma((f64)(f32)px_pmul(f9, (f64)(f32)px_pmul(f9, f9)), f6, (f64)(f32)px_sfma((f64)(f32)px_pmul(f16, (f64)(f32)px_pmul(f9, (f64)(f32)px_pmul(f21, f9))), f11, (f64)(f32)px_sfma((f64)(f32)px_pmul(f21, f19), f7, (f64)(f32)px_pmul((f64)(f32)px_pmul(f16, (f64)(f32)px_pmul(f9, f19)), f20))));
                if ((f64)(f32)ppc_fabs((f64)(f32)px_psub(f15, f17)) < f13) break;
                r0 = ((((f15 < f17) << 0x1fu) | ((f15 > f17) << 0x1eu) | ((f15 == f17) << 0x1du) | (((f15 != f15) || (f17 != f17)) << 0x1cu)) >> 0x1fu) & 1u;
                if (r0 != 0u) {
                    f5 = f9;
                }
                if (r0 == 0u) {
                    f0 = f9;
                }
                f9 = (f64)(f32)px_pmul(f12, (f64)(f32)px_padd(f0, f5));
            }
            f11 = f17;
            f21 = (f64)rdf32(0x817fde38u);
            f0 = (f64)(f32)px_psub(f6, (f64)rdf32(0x817fde28u));
            f5 = (f64)rdf32(0x80571e6cu);
            f14 = (f64)rdf32(0x80571e4cu);
            f18 = (f64)rdf32(0x80571e64u);
            f15 = (f64)rdf32(0x80571e50u);
            f12 = (f64)rdf32(0x80571e68u);
            for (;;) {
                f22 = (f64)(f32)px_psub(f14, f11);
                f20 = (f64)(f32)px_pmul(f22, f22);
                f16 = (f64)(f32)px_sfma((f64)(f32)px_pmul(f11, (f64)(f32)px_pmul(f11, f11)), f14, (f64)(f32)px_sfma((f64)(f32)px_pmul(f18, (f64)(f32)px_pmul(f11, (f64)(f32)px_pmul(f22, f11))), f0, (f64)(f32)px_sfma((f64)(f32)px_pmul(f22, f20), f15, (f64)(f32)px_pmul((f64)(f32)px_pmul(f18, (f64)(f32)px_pmul(f11, f20)), f21))));
                if ((f64)(f32)ppc_fabs((f64)(f32)px_psub(f16, f17)) < f12) break;
                r0 = ((((f16 < f17) << 0x1fu) | ((f16 > f17) << 0x1eu) | ((f16 == f17) << 0x1du) | (((f16 != f16) || (f17 != f17)) << 0x1cu)) >> 0x1fu) & 1u;
                if (r0 != 0u) {
                    f7 = f11;
                }
                if (r0 == 0u) {
                    f6 = f11;
                }
                f11 = (f64)(f32)px_pmul(f5, (f64)(f32)px_padd(f6, f7));
            }
            f6 = f17;
            f5 = (f64)rdf32(0x817fde3cu);
            f16 = (f64)(f32)px_psub(f14, (f64)rdf32(0x817fde2cu));
            f18 = (f64)rdf32(0x80571e6cu);
            f0 = (f64)rdf32(0x80571e4cu);
            f7 = (f64)rdf32(0x80571e64u);
            f21 = (f64)rdf32(0x80571e50u);
            f19 = (f64)rdf32(0x80571e68u);
            for (;;) {
                f24 = (f64)(f32)px_psub(f0, f6);
                f23 = (f64)(f32)px_pmul(f24, f24);
                f30 = (f64)(f32)px_pmul(f6, (f64)(f32)px_pmul(f6, f6));
                f12 = (f64)(f32)px_pmul(f24, f23);
                f13 = (f64)(f32)px_pmul(f7, (f64)(f32)px_pmul(f6, f23));
                f31 = (f64)(f32)px_pmul(f7, (f64)(f32)px_pmul(f6, (f64)(f32)px_pmul(f24, f6)));
                f22 = (f64)(f32)px_sfma(f30, f0, (f64)(f32)px_sfma(f31, f16, (f64)(f32)px_sfma(f12, f21, (f64)(f32)px_pmul(f13, f5))));
                if ((f64)(f32)ppc_fabs((f64)(f32)px_psub(f22, f17)) < f19) break;
                r0 = ((((f22 < f17) << 0x1fu) | ((f22 > f17) << 0x1eu) | ((f22 == f17) << 0x1du) | (((f22 != f22) || (f17 != f17)) << 0x1cu)) >> 0x1fu) & 1u;
                if (r0 != 0u) {
                    f15 = f6;
                }
                if (r0 == 0u) {
                    f14 = f6;
                }
                f6 = (f64)(f32)px_pmul(f18, (f64)(f32)px_padd(f14, f15));
            }
            f27 = (f64)(f32)px_psub(f0, f8);
            f26 = (f64)(f32)px_psub(f0, f9);
            f21 = (f64)rdf32(0x817fde80u);
            f20 = (f64)(f32)px_psub(f0, f11);
            f13 = (f64)(f32)px_pmul(f13, (f64)rdf32(0x817fde6cu));
            wrf32d(0x817fde9cu, (f64)rdf32(0x817fde64u));
            f6 = (f64)(f32)px_pmul(f27, f27);
            f5 = (f64)(f32)px_pmul(f26, f26);
            f19 = (f64)rdf32(0x817fde5cu);
            wrf32d(0x817fdeacu, (f64)rdf32(0x817fde50u));
            f0 = (f64)rdf32(0x817fde54u);
            f17 = (f64)(f32)px_pmul(f9, f5);
            wrf64(0x817fdec8u, f13);
            f14 = (f64)(f32)px_pmul(f20, f20);
            wrf32d(0x817fdea0u, f0);
            f0 = (f64)rdf32(0x817fde70u);
            wrf64(0x817fdec0u, (f64)(f32)px_pmul(f11, f11));
            f18 = rdf64(0x817fdec8u);
            wrf32d(0x817fdea8u, f0);
            f5 = (f64)(f32)px_pmul(f26, f5);
            f0 = (f64)rdf32(0x817fde74u);
            f18 = (f64)(f32)px_sfma(f12, f19, f18);
            wrf32d(0x817fdea4u, f21);
            f21 = (f64)(f32)px_pmul(f7, (f64)(f32)px_pmul(f11, f14));
            f15 = (f64)rdf32(0x817fde84u);
            wrf32d(0x817fde98u, f0);
            f0 = (f64)(f32)px_pmul(f7, f17);
            f17 = (f64)rdf32(0x817fde7cu);
            f12 = (f64)(f32)px_pmul(f27, f6);
            wrf64(0x817fdeb0u, (f64)(f32)px_pmul(f8, (f64)(f32)px_pmul(f27, f8)));
            f14 = (f64)(f32)px_pmul(f20, f14);
            wrf32d(0x817fde90u, f0);
            f16 = (f64)rdf32(0x817fde8cu);
            f29 = (f64)rdf32(0x817fde60u);
            f0 = (f64)(f32)px_pmul(f9, (f64)(f32)px_pmul(f26, f9));
            wrf32d(0x817fde94u, f15);
            f26 = (f64)(f32)px_sfma(f30, f16, (f64)(f32)px_sfma(f31, f17, f18));
            f16 = rdf64(0x817fdeb0u);
            f18 = (f64)rdf32(0x817fde90u);
            wrf64(0x817fdeb8u, f0);
            f19 = (f64)(f32)px_pmul(f7, f16);
            f6 = (f64)(f32)px_pmul((f64)(f32)px_pmul(f7, (f64)(f32)px_pmul(f8, f6)), f29);
            f16 = (f64)rdf32(0x817fdeacu);
            f18 = (f64)(f32)px_pmul(f18, (f64)rdf32(0x817fde9cu));
            wrf64(0x817fded0u, (f64)(f32)px_pmul(f11, (f64)(f32)px_pmul(f20, f11)));
            f16 = (f64)(f32)px_sfma(f12, f16, f6);
            f12 = (f64)(f32)px_sfma(f5, (f64)rdf32(0x817fdea0u), f18);
            f18 = (f64)(f32)px_pmul(f7, rdf64(0x817fded0u));
            f6 = (f64)(f32)px_sfma(f14, (f64)rdf32(0x817fde58u), (f64)(f32)px_pmul(f21, (f64)rdf32(0x817fde68u)));
            f14 = (f64)(f32)px_pmul(f8, (f64)(f32)px_pmul(f8, f8));
            f22 = (f64)rdf32(0x817fde88u);
            f7 = (f64)(f32)px_sfma((f64)(f32)px_pmul(f7, rdf64(0x817fdeb8u)), (f64)rdf32(0x817fde98u), f12);
            f9 = (f64)(f32)px_pmul(f9, (f64)(f32)px_pmul(f9, f9));
            f0 = (f64)rdf32(0x80571e70u);
            f8 = (f64)(f32)px_pmul(f11, rdf64(0x817fdec0u));
            f5 = (f64)rdf32(0x817fde94u);
            f6 = (f64)(f32)px_sfma(f18, (f64)rdf32(0x817fde78u), f6);
            wrf32d(0x817fde40u, (f64)(f32)px_sfma(f14, (f64)rdf32(0x817fdea4u), (f64)(f32)px_sfma(f19, (f64)rdf32(0x817fdea8u), f16)));
            f5 = (f64)(f32)px_sfma(f9, f5, f7);
            wrf32d(0x817fde4cu, f26);
            f6 = (f64)(f32)px_sfma(f8, f22, f6);
            wrf32d(0x817fde44u, f5);
            wrf32d(0x817fde48u, f6);
            f1 = px_pack((f64)rdf32(0x817fde40u), (f64)rdf32(0x817fde40u));
            f2 = px_pack((f64)rdf32(0x817fde48u), 1.0);
            f3 = px_pack((f64)(f32)px_pmul(px_hi(f1), px_hi(f0)), (f64)(f32)px_pmul(px_lo(f1), px_hi(f0)));
            px_q(0u, param_1, px_hi(f3));
            px_q(0u, param_1, px_lo(f3));
            px_q(0u, param_1 + 2u, px_hi(px_pack((f64)(f32)px_pmul(px_hi(f2), px_hi(f0)), (f64)(f32)px_pmul(px_lo(f2), px_hi(f0)))));
        } else {
            wr8(param_1, rd8(r3));
            wr8(param_1 + 1u, rd8(r3 + 1u));
            wr8(param_1 + 2u, rd8(r3 + 2u));
            wr8(param_1 + 3u, rd8(r3 + 3u));
        }
    } else {
        wr8(param_1, rd8(r4));
        wr8(param_1 + 1u, rd8(r4 + 1u));
        wr8(param_1 + 2u, rd8(r4 + 2u));
        wr8(param_1 + 3u, rd8(r4 + 3u));
    }
    return f1;
}
