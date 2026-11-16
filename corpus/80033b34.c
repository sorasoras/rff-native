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

f64 fn_80033b34(u32 param_1, s32 param_2, f64 param_f1)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0, r7 = 0, t5 = 0, t17 = 0, t29 = 0, t41 = 0, t53 = 0, t65 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f5 = 0.0, f6 = 0.0, f7 = 0.0, f8 = 0.0, f9 = 0.0, f10 = 0.0, f11 = 0.0, f12 = 0.0, f13 = 0.0;
    f64 f27 = 0.0, f28 = 0.0, f29 = 0.0, f30 = 0.0, f31 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdf40u, 0x817fe000u);
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
    wr32(0x817fdfacu, 0u);
    wr32(0x817fdfa8u, 0u);
    a.f[0] = param_f1;
    a.r[0] = (u32)param_2;
    a.r[1] = 0x817fdf4cu;
    a.r[2] = 0x817fdf48u;
    f1 = tc_callf(0x800323ccu, &a);
    r3 = tc_lastr();
    r0 = rd32(0x817fdf4cu);
    f0 = f1;
    r5 = rd32(0x817fdf48u);
    r4 = rd32((u32)param_2 + 0x10u);
    f9 = (f64)rdf32((u32)param_2 + 4u);
    f13 = (f64)rdf32((u32)param_2 + 8u);
    r6 = r4 + (r0 * 0x14u);
    r7 = r4 + (r5 * 0x14u);
    if (r0 != 0xffffffffu) {
        if (r5 != 0xffffffffu) {
            r4 = (u32)rd8(r6 + 1u);
            r0 = (u32)rd8(r7);
            wr32(0x817fdf94u, r4);
            f8 = rdf64(0x80571e58u);
            wr32(0x817fdf90u, 0x43300000u);
            f6 = (f64)rdf32(0x80571e74u);
            f5 = rdf64(0x817fdf90u);
            wr32(0x817fdf9cu, r0);
            wr32(0x817fdf98u, 0x43300000u);
            f11 = (f64)(f32)px_pmul(f6, (f64)(f32)px_psub(f5, f8));
            f12 = (f64)(f32)px_pmul(f6, (f64)(f32)px_psub(rdf64(0x817fdf98u), f8));
            f10 = px_pmg00(f13, f13);
            t29 = r6 + 2u;
            f1 = px_pack(px_dq(0u, t29), px_dq(0u, t29));
            f2 = px_pack(px_dq(0u, r6 + 6u), 1.0);
            wrf32d(0x817fdf60u, px_lo(px_pack((f64)(f32)px_pfma(px_hi(f1), px_hi(f9), px_hi(f10)), (f64)(f32)px_pfma(px_lo(f1), px_hi(f9), px_lo(f10)))));
            wrf32d(0x817fdf68u, px_hi(px_pack((f64)(f32)px_pfma(px_hi(f2), px_hi(f9), px_hi(f10)), (f64)(f32)px_pfma(px_lo(f2), px_hi(f9), px_lo(f10)))));
            f10 = px_pmg00(f13, f13);
            t41 = r7 + 2u;
            f1 = px_pack(px_dq(0u, t41), px_dq(0u, t41));
            f2 = px_pack(px_dq(0u, r7 + 6u), 1.0);
            wrf32d(0x817fdf6cu, px_lo(px_pack((f64)(f32)px_pfma(px_hi(f1), px_hi(f9), px_hi(f10)), (f64)(f32)px_pfma(px_lo(f1), px_hi(f9), px_lo(f10)))));
            wrf32d(0x817fdf74u, px_hi(px_pack((f64)(f32)px_pfma(px_hi(f2), px_hi(f9), px_hi(f10)), (f64)(f32)px_pfma(px_lo(f2), px_hi(f9), px_lo(f10)))));
            f10 = px_pmg00(f13, f13);
            t53 = r6 + 0xeu;
            f1 = px_pack(px_dq(0u, t53), px_dq(0u, t53));
            f2 = px_pack(px_dq(0u, r6 + 0x12u), 1.0);
            wrf32d(0x817fdf78u, px_lo(px_pack((f64)(f32)px_pfma(px_hi(f1), px_hi(f9), px_hi(f10)), (f64)(f32)px_pfma(px_lo(f1), px_hi(f9), px_lo(f10)))));
            wrf32d(0x817fdf80u, px_hi(px_pack((f64)(f32)px_pfma(px_hi(f2), px_hi(f9), px_hi(f10)), (f64)(f32)px_pfma(px_lo(f2), px_hi(f9), px_lo(f10)))));
            f10 = px_pmg00(f13, f13);
            t65 = r7 + 8u;
            f1 = px_pack(px_dq(0u, t65), px_dq(0u, t65));
            f2 = px_pack(px_dq(0u, r7 + 0xcu), 1.0);
            wrf32d(0x817fdf84u, px_lo(px_pack((f64)(f32)px_pfma(px_hi(f1), px_hi(f9), px_hi(f10)), (f64)(f32)px_pfma(px_lo(f1), px_hi(f9), px_lo(f10)))));
            wrf32d(0x817fdf8cu, px_hi(px_pack((f64)(f32)px_pfma(px_hi(f2), px_hi(f9), px_hi(f10)), (f64)(f32)px_pfma(px_lo(f2), px_hi(f9), px_lo(f10)))));
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
            f28 = (f64)(f32)px_pmul(f0, f0);
            f5 = (f64)rdf32(0x80571e64u);
            f6 = (f64)rdf32(0x80571e48u);
            f8 = (f64)rdf32(0x80571e78u);
            f27 = (f64)(f32)px_pmul(f0, f28);
            f11 = (f64)rdf32(0x80571e4cu);
            f7 = (f64)(f32)px_pmul(f5, f28);
            f9 = (f64)rdf32(0x817fdf6cu);
            f0 = px_pfnm((f64)(f32)px_sfms(f6, f28, f0));
            f5 = (f64)rdf32(0x817fdf70u);
            f12 = (f64)(f32)px_sfms(f6, f27, f7);
            f6 = (f64)rdf32(0x817fdf74u);
            f30 = (f64)(f32)px_psub(f27, f28);
            f13 = (f64)rdf32(0x817fdf60u);
            f29 = (f64)(f32)px_padd(f27, f0);
            f7 = (f64)rdf32(0x817fdf64u);
            f28 = (f64)(f32)px_pmul(f8, f12);
            f0 = (f64)rdf32(0x817fdf68u);
            f27 = (f64)(f32)px_padd(f11, f12);
            f12 = (f64)rdf32(0x817fdf78u);
            f8 = (f64)rdf32(0x817fdf7cu);
            f31 = (f64)(f32)px_pmul(f9, f28);
            f9 = (f64)(f32)px_pmul(f5, f28);
            f5 = (f64)rdf32(0x817fdf80u);
            f6 = (f64)(f32)px_pmul(f6, f28);
            f11 = (f64)rdf32(0x817fdf84u);
            f13 = (f64)(f32)px_sfma(f13, f27, f31);
            f9 = (f64)(f32)px_sfma(f7, f27, f9);
            f6 = (f64)(f32)px_sfma(f0, f27, f6);
            f7 = (f64)rdf32(0x817fdf88u);
            f12 = (f64)(f32)px_sfma(f12, f29, f13);
            f0 = (f64)rdf32(0x817fdf8cu);
            f8 = (f64)(f32)px_sfma(f8, f29, f9);
            f5 = (f64)(f32)px_sfma(f5, f29, f6);
            wrf32d(0x817fdf50u, f27);
            f0 = (f64)(f32)px_sfma(f0, f30, f5);
            wrf32d(0x817fdf54u, f28);
            wrf32d(0x817fdf58u, f29);
            wrf32d(0x817fdf5cu, f30);
            wrf32d(param_1, (f64)(f32)px_sfma(f11, f30, f12));
            wrf32d(param_1 + 4u, (f64)(f32)px_sfma(f7, f30, f8));
            wrf32d(param_1 + 8u, f0);
        } else {
            f10 = px_pmg00(f13, f13);
            t17 = r6 + 2u;
            f1 = px_pack(px_dq(0u, t17), px_dq(0u, t17));
            f2 = px_pack(px_dq(0u, r6 + 6u), 1.0);
            wrf32d(param_1, px_lo(px_pack((f64)(f32)px_pfma(px_hi(f1), px_hi(f9), px_hi(f10)), (f64)(f32)px_pfma(px_lo(f1), px_hi(f9), px_lo(f10)))));
            wrf32d(param_1 + 8u, px_hi(px_pack((f64)(f32)px_pfma(px_hi(f2), px_hi(f9), px_hi(f10)), (f64)(f32)px_pfma(px_lo(f2), px_hi(f9), px_lo(f10)))));
        }
    } else {
        f10 = px_pmg00(f13, f13);
        t5 = r7 + 2u;
        f1 = px_pack(px_dq(0u, t5), px_dq(0u, t5));
        f2 = px_pack(px_dq(0u, r7 + 6u), 1.0);
        wrf32d(param_1, px_lo(px_pack((f64)(f32)px_pfma(px_hi(f1), px_hi(f9), px_hi(f10)), (f64)(f32)px_pfma(px_lo(f1), px_hi(f9), px_lo(f10)))));
        wrf32d(param_1 + 8u, px_hi(px_pack((f64)(f32)px_pfma(px_hi(f2), px_hi(f9), px_hi(f10)), (f64)(f32)px_pfma(px_lo(f2), px_hi(f9), px_lo(f10)))));
    }
    return f1;
}
