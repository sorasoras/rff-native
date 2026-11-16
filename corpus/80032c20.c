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
    return px_b2f((px_f2b(a) & 0xffffffff00000000ull) | (px_f2b(b) >> 32));
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

f64 fn_80032c20(u32 param_1, s32 param_2, f64 param_f1)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r5 = 0, t54 = 0, t66 = 0, t90 = 0, t102 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f5 = 0.0, f6 = 0.0, f7 = 0.0, f8 = 0.0, f9 = 0.0, f10 = 0.0, f11 = 0.0, f12 = 0.0, f13 = 0.0;
    f64 f14 = 0.0, f15 = 0.0, f16 = 0.0, f17 = 0.0, f18 = 0.0, f19 = 0.0, f20 = 0.0, f21 = 0.0, f22 = 0.0, f23 = 0.0, f24 = 0.0, f26 = 0.0;
    f64 f27 = 0.0, f28 = 0.0, f29 = 0.0, f30 = 0.0, f31 = 0.0;
    TcArgs a = {0};
    wr32(0x817fde70u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wrf64(0x817fdff0u, 0.0);
    wrf32d(0x817fdff8u, px_lo(0.0));
    wrf64(0x817fdfe0u, 0.0);
    wrf32d(0x817fdfe8u, px_lo(0.0));
    wrf64(0x817fdfd0u, 0.0);
    wrf32d(0x817fdfd8u, px_lo(0.0));
    wrf64(0x817fdfc0u, 0.0);
    wrf32d(0x817fdfc8u, px_lo(0.0));
    wrf64(0x817fdfb0u, 0.0);
    wrf32d(0x817fdfb8u, px_lo(0.0));
    wrf64(0x817fdfa0u, 0.0);
    wrf32d(0x817fdfa8u, px_lo(0.0));
    wrf64(0x817fdf90u, 0.0);
    wrf32d(0x817fdf98u, px_lo(0.0));
    wrf64(0x817fdf80u, 0.0);
    wrf32d(0x817fdf88u, px_lo(0.0));
    wrf64(0x817fdf70u, 0.0);
    wrf32d(0x817fdf78u, px_lo(0.0));
    wrf64(0x817fdf60u, 0.0);
    wrf32d(0x817fdf68u, px_lo(0.0));
    wrf64(0x817fdf50u, 0.0);
    wrf32d(0x817fdf58u, px_lo(0.0));
    wrf64(0x817fdf40u, 0.0);
    wrf32d(0x817fdf48u, px_lo(0.0));
    wrf64(0x817fdf30u, 0.0);
    wrf32d(0x817fdf38u, px_lo(0.0));
    wrf64(0x817fdf20u, 0.0);
    wrf32d(0x817fdf28u, px_lo(0.0));
    wrf64(0x817fdf10u, 0.0);
    wrf32d(0x817fdf18u, px_lo(0.0));
    wrf64(0x817fdf00u, 0.0);
    wrf32d(0x817fdf08u, px_lo(0.0));
    wrf64(0x817fdef0u, 0.0);
    wrf32d(0x817fdef8u, px_lo(0.0));
    wrf64(0x817fdee0u, 0.0);
    wrf32d(0x817fdee8u, px_lo(0.0));
    wr32(0x817fdedcu, 0u);
    wr32(0x817fded8u, 0u);
    a.f[0] = param_f1;
    a.r[0] = (u32)param_2;
    a.r[1] = 0x817fde7cu;
    a.r[2] = 0x817fde78u;
    f1 = tc_callf(0x800323ccu, &a);
    r3 = tc_lastr();
    r0 = rd32(0x817fde7cu);
    f15 = f1;
    r5 = rd32(0x817fde78u);
    r4 = rd32((u32)param_2 + 0x10u);
    f0 = (f64)rdf32((u32)param_2 + 4u);
    f5 = (f64)rdf32((u32)param_2 + 8u);
    r3 = r4 + (r0 * 0x18u);
    r4 = r4 + (r5 * 0x18u);
    if (r0 != 0xffffffffu) {
        if (r5 != 0xffffffffu) {
            f10 = px_pmg00(f5, f5);
            f1 = px_pack(px_dq(0u, r3), px_dq(0u, r3));
            f2 = px_pack(px_dq(0u, r3 + 4u), 1.0);
            wrf32d(0x817fde98u, px_lo(px_pack((f64)(f32)px_pfma(px_hi(f1), px_hi(f0), px_hi(f10)), (f64)(f32)px_pfma(px_lo(f1), px_hi(f0), px_lo(f10)))));
            wrf32d(0x817fdea0u, px_hi(px_pack((f64)(f32)px_pfma(px_hi(f2), px_hi(f0), px_hi(f10)), (f64)(f32)px_pfma(px_lo(f2), px_hi(f0), px_lo(f10)))));
            f10 = px_pmg00(f5, f5);
            t54 = r3 + 0xcu;
            f1 = px_pack(px_dq(0u, t54), px_dq(0u, t54));
            f2 = px_pack(px_dq(0u, r3 + 0x10u), 1.0);
            wrf32d(0x817fdea4u, px_lo(px_pack((f64)(f32)px_pfma(px_hi(f1), px_hi(f0), px_hi(f10)), (f64)(f32)px_pfma(px_lo(f1), px_hi(f0), px_lo(f10)))));
            wrf32d(0x817fdeacu, px_hi(px_pack((f64)(f32)px_pfma(px_hi(f2), px_hi(f0), px_hi(f10)), (f64)(f32)px_pfma(px_lo(f2), px_hi(f0), px_lo(f10)))));
            f10 = px_pmg00(f5, f5);
            t66 = r4 + 6u;
            f1 = px_pack(px_dq(0u, t66), px_dq(0u, t66));
            f2 = px_pack(px_dq(0u, r4 + 0xau), 1.0);
            wrf32d(0x817fdeb0u, px_lo(px_pack((f64)(f32)px_pfma(px_hi(f1), px_hi(f0), px_hi(f10)), (f64)(f32)px_pfma(px_lo(f1), px_hi(f0), px_lo(f10)))));
            wrf32d(0x817fdeb8u, px_hi(px_pack((f64)(f32)px_pfma(px_hi(f2), px_hi(f0), px_hi(f10)), (f64)(f32)px_pfma(px_lo(f2), px_hi(f0), px_lo(f10)))));
            f10 = px_pmg00(f5, f5);
            f1 = px_pack(px_dq(0u, r4), px_dq(0u, r4));
            f2 = px_pack(px_dq(0u, r4 + 4u), 1.0);
            wrf32d(0x817fdebcu, px_lo(px_pack((f64)(f32)px_pfma(px_hi(f1), px_hi(f0), px_hi(f10)), (f64)(f32)px_pfma(px_lo(f1), px_hi(f0), px_lo(f10)))));
            wrf32d(0x817fdec4u, px_hi(px_pack((f64)(f32)px_pfma(px_hi(f2), px_hi(f0), px_hi(f10)), (f64)(f32)px_pfma(px_lo(f2), px_hi(f0), px_lo(f10)))));
            f0 = (f64)rdf32(0x80571e60u);
            t90 = r3 + 0x15u;
            f1 = px_pack(px_dq(0u, t90), px_dq(0u, t90));
            f2 = px_pack(px_dq(0u, r3 + 0x17u), 1.0);
            wrf32d(0x817fde8cu, px_lo(px_pack((f64)(f32)px_pmul(px_hi(f1), px_hi(f0)), (f64)(f32)px_pmul(px_lo(f1), px_hi(f0)))));
            wrf32d(0x817fde94u, px_hi(px_pack((f64)(f32)px_pmul(px_hi(f2), px_hi(f0)), (f64)(f32)px_pmul(px_lo(f2), px_hi(f0)))));
            t102 = r4 + 0x12u;
            f1 = px_pack(px_dq(0u, t102), px_dq(0u, t102));
            f2 = px_pack(px_dq(0u, r4 + 0x14u), 1.0);
            wrf32d(0x817fde80u, px_lo(px_pack((f64)(f32)px_pmul(px_hi(f1), px_hi(f0)), (f64)(f32)px_pmul(px_lo(f1), px_hi(f0)))));
            wrf32d(0x817fde88u, px_hi(px_pack((f64)(f32)px_pmul(px_hi(f2), px_hi(f0)), (f64)(f32)px_pmul(px_lo(f2), px_hi(f0)))));
            f9 = f15;
            f21 = (f64)rdf32(0x80571e50u);
            f20 = (f64)rdf32(0x80571e4cu);
            f6 = (f64)rdf32(0x817fde80u);
            f5 = f21;
            f0 = f20;
            f17 = (f64)rdf32(0x817fde8cu);
            f6 = (f64)(f32)px_psub(f20, f6);
            f7 = (f64)rdf32(0x80571e6cu);
            f13 = (f64)rdf32(0x80571e64u);
            f11 = (f64)rdf32(0x80571e68u);
            for (;;) {
                f18 = (f64)(f32)px_psub(f0, f9);
                f16 = (f64)(f32)px_pmul(f18, f18);
                f12 = (f64)(f32)px_sfma((f64)(f32)px_pmul(f9, (f64)(f32)px_pmul(f9, f9)), f0, (f64)(f32)px_sfma((f64)(f32)px_pmul(f13, (f64)(f32)px_pmul(f9, (f64)(f32)px_pmul(f18, f9))), f6, (f64)(f32)px_sfma((f64)(f32)px_pmul(f18, f16), f5, (f64)(f32)px_pmul((f64)(f32)px_pmul(f13, (f64)(f32)px_pmul(f9, f16)), f17))));
                if ((f64)(f32)ppc_fabs((f64)(f32)px_psub(f12, f15)) < f11) break;
                r0 = ((((f12 < f15) << 0x1fu) | ((f12 > f15) << 0x1eu) | ((f12 == f15) << 0x1du) | (((f12 != f12) || (f15 != f15)) << 0x1cu)) >> 0x1fu) & 1u;
                if (r0 != 0u) {
                    f21 = f9;
                }
                if (r0 == 0u) {
                    f20 = f9;
                }
                f9 = (f64)(f32)px_pmul(f7, (f64)(f32)px_padd(f20, f21));
            }
            f6 = (f64)rdf32(0x817fde84u);
            f11 = f15;
            f20 = (f64)rdf32(0x817fde90u);
            f8 = (f64)(f32)px_psub(f0, f6);
            f12 = (f64)rdf32(0x80571e6cu);
            f6 = (f64)rdf32(0x80571e4cu);
            f17 = (f64)rdf32(0x80571e64u);
            f7 = (f64)rdf32(0x80571e50u);
            f13 = (f64)rdf32(0x80571e68u);
            for (;;) {
                f21 = (f64)(f32)px_psub(f6, f11);
                f19 = (f64)(f32)px_pmul(f21, f21);
                f16 = (f64)(f32)px_sfma((f64)(f32)px_pmul(f11, (f64)(f32)px_pmul(f11, f11)), f6, (f64)(f32)px_sfma((f64)(f32)px_pmul(f17, (f64)(f32)px_pmul(f11, (f64)(f32)px_pmul(f21, f11))), f8, (f64)(f32)px_sfma((f64)(f32)px_pmul(f21, f19), f7, (f64)(f32)px_pmul((f64)(f32)px_pmul(f17, (f64)(f32)px_pmul(f11, f19)), f20))));
                if ((f64)(f32)ppc_fabs((f64)(f32)px_psub(f16, f15)) < f13) break;
                r0 = ((((f16 < f15) << 0x1fu) | ((f16 > f15) << 0x1eu) | ((f16 == f15) << 0x1du) | (((f16 != f16) || (f15 != f15)) << 0x1cu)) >> 0x1fu) & 1u;
                if (r0 != 0u) {
                    f5 = f11;
                }
                if (r0 == 0u) {
                    f0 = f11;
                }
                f11 = (f64)(f32)px_pmul(f12, (f64)(f32)px_padd(f0, f5));
            }
            f0 = (f64)rdf32(0x817fde88u);
            f5 = f15;
            f22 = (f64)rdf32(0x817fde94u);
            f14 = (f64)(f32)px_psub(f6, f0);
            f16 = (f64)rdf32(0x80571e6cu);
            f0 = (f64)rdf32(0x80571e4cu);
            f8 = (f64)rdf32(0x80571e64u);
            f19 = (f64)rdf32(0x80571e50u);
            f17 = (f64)rdf32(0x80571e68u);
            for (;;) {
                f23 = (f64)(f32)px_psub(f0, f5);
                f21 = (f64)(f32)px_pmul(f23, f23);
                f30 = (f64)(f32)px_pmul(f5, (f64)(f32)px_pmul(f5, f5));
                f12 = (f64)(f32)px_pmul(f23, f21);
                f13 = (f64)(f32)px_pmul(f8, (f64)(f32)px_pmul(f5, f21));
                f31 = (f64)(f32)px_pmul(f8, (f64)(f32)px_pmul(f5, (f64)(f32)px_pmul(f23, f5)));
                f20 = (f64)(f32)px_sfma(f30, f0, (f64)(f32)px_sfma(f31, f14, (f64)(f32)px_sfma(f12, f19, (f64)(f32)px_pmul(f13, f22))));
                if ((f64)(f32)ppc_fabs((f64)(f32)px_psub(f20, f15)) < f17) break;
                r0 = ((((f20 < f15) << 0x1fu) | ((f20 > f15) << 0x1eu) | ((f20 == f15) << 0x1du) | (((f20 != f20) || (f15 != f15)) << 0x1cu)) >> 0x1fu) & 1u;
                if (r0 != 0u) {
                    f7 = f5;
                }
                if (r0 == 0u) {
                    f6 = f5;
                }
                f5 = (f64)(f32)px_pmul(f16, (f64)(f32)px_padd(f6, f7));
            }
            f24 = (f64)(f32)px_psub(f0, f9);
            f16 = (f64)rdf32(0x817fdeacu);
            f18 = (f64)(f32)px_psub(f0, f11);
            f17 = (f64)rdf32(0x817fdea0u);
            f13 = (f64)(f32)px_pmul(f13, f16);
            f28 = (f64)rdf32(0x817fdea4u);
            f7 = (f64)(f32)px_pmul(f24, f24);
            f22 = (f64)rdf32(0x817fdea8u);
            f5 = (f64)(f32)px_pmul(f18, f18);
            f15 = (f64)rdf32(0x817fdeb8u);
            f29 = (f64)rdf32(0x817fde98u);
            f23 = (f64)rdf32(0x817fde9cu);
            wrf64(0x817fdec8u, (f64)(f32)px_pmul(f9, f9));
            f27 = (f64)rdf32(0x817fdeb0u);
            f12 = (f64)(f32)px_sfma(f12, f17, f13);
            f21 = (f64)rdf32(0x817fdeb4u);
            f26 = (f64)rdf32(0x817fdebcu);
            f20 = (f64)rdf32(0x817fdec0u);
            f6 = (f64)(f32)px_pmul(f9, (f64)(f32)px_pmul(f24, f9));
            f24 = (f64)(f32)px_pmul(f24, f7);
            f7 = (f64)(f32)px_pmul((f64)(f32)px_pmul(f8, (f64)(f32)px_pmul(f9, f7)), f28);
            f15 = (f64)(f32)px_sfma(f30, (f64)rdf32(0x817fdec4u), (f64)(f32)px_sfma(f31, f15, f12));
            wrf32d(param_1 + 8u, f15);
            f0 = (f64)(f32)px_sfma((f64)(f32)px_pmul(f11, (f64)(f32)px_pmul(f11, f11)), f20, (f64)(f32)px_sfma((f64)(f32)px_pmul(f8, (f64)(f32)px_pmul(f11, (f64)(f32)px_pmul(f18, f11))), f21, (f64)(f32)px_sfma((f64)(f32)px_pmul(f18, f5), f23, (f64)(f32)px_pmul((f64)(f32)px_pmul(f8, (f64)(f32)px_pmul(f11, f5)), f22))));
            wrf32d(param_1, (f64)(f32)px_sfma((f64)(f32)px_pmul(f9, rdf64(0x817fdec8u)), f26, (f64)(f32)px_sfma((f64)(f32)px_pmul(f8, f6), f27, (f64)(f32)px_sfma(f24, f29, f7))));
            wrf32d(param_1 + 4u, f0);
        } else {
            f10 = px_pmg00(f5, f5);
            f1 = px_pack(px_dq(0u, r3), px_dq(0u, r3));
            f2 = px_pack(px_dq(0u, r3 + 4u), 1.0);
            wrf32d(param_1, px_lo(px_pack((f64)(f32)px_pfma(px_hi(f1), px_hi(f0), px_hi(f10)), (f64)(f32)px_pfma(px_lo(f1), px_hi(f0), px_lo(f10)))));
            wrf32d(param_1 + 8u, px_hi(px_pack((f64)(f32)px_pfma(px_hi(f2), px_hi(f0), px_hi(f10)), (f64)(f32)px_pfma(px_lo(f2), px_hi(f0), px_lo(f10)))));
        }
    } else {
        f10 = px_pmg00(f5, f5);
        f1 = px_pack(px_dq(0u, r4), px_dq(0u, r4));
        f2 = px_pack(px_dq(0u, r4 + 4u), 1.0);
        wrf32d(param_1, px_lo(px_pack((f64)(f32)px_pfma(px_hi(f1), px_hi(f0), px_hi(f10)), (f64)(f32)px_pfma(px_lo(f1), px_hi(f0), px_lo(f10)))));
        wrf32d(param_1 + 8u, px_hi(px_pack((f64)(f32)px_pfma(px_hi(f2), px_hi(f0), px_hi(f10)), (f64)(f32)px_pfma(px_lo(f2), px_hi(f0), px_lo(f10)))));
    }
    return f1;
}
