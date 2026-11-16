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

void fn_8031a99c(u32 param_1, u32 param_2, s32 param_3, u32 param_4, u32 param_5, u32 param_6, u32 param_7, u32 param_8, u32 param_9)
{
    u32 c0eq = 0, c0gt = 0, c0lt = 0, r30 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f3 = 0.0, f4 = 0.0, f5 = 0.0, f7 = 0.0, f8 = 0.0, f27 = 0.0, f28 = 0.0, f29 = 0.0, f30 = 0.0;
    f64 f31 = 0.0;
    TcArgs a = {0};
    (void)param_5;
    (void)param_9;
    wr32(0x817fdf40u, 0x817fe000u);
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
    wr32(0x817fdf90u, 0u);
    wr32(0x817fdf94u, 0u);
    wr32(0x817fdf98u, 0u);
    wr32(0x817fdf9cu, 0u);
    wr32(0x817fdfa0u, 0u);
    wr32(0x817fdfa4u, 0u);
    wr32(0x817fdfa8u, 0u);
    wr32(0x817fdfacu, 0u);
    f3 = (f64)rdf32(param_4);
    f0 = (f64)rdf32(param_6);
    f7 = (f64)rdf32(param_4 + 8u);
    f8 = (f64)(f32)px_pmul(f3, f3);
    f1 = (f64)rdf32(param_6 + 8u);
    f2 = (f64)rdf32(0x805778fcu);
    f4 = (f64)(f32)px_pmul(f1, f1);
    f3 = (f64)(f32)px_pmul(f3, f0);
    f29 = (f64)(f32)px_padd(f8, (f64)(f32)px_pmul(f7, f7));
    f1 = (f64)(f32)px_pmul(f7, f1);
    f5 = (f64)rdf32(0x805778e8u);
    f31 = (f64)(f32)px_padd((f64)(f32)px_pmul(f0, f0), f4);
    r30 = rd32(0x817fe008u);
    f28 = (f64)(f32)px_padd(f3, f1);
    f1 = (f64)(f32)px_pmul(f2, f31);
    f30 = (f64)rdf32(0x805778ecu);
    f2 = (f64)(f32)px_pmul(f2, f28);
    f27 = (f64)(f32)px_psub((f64)(f32)px_pmul(f2, f28), (f64)(f32)px_pmul(f1, (f64)(f32)px_psub(f29, (f64)rdf32(0x805778e4u))));
    c0lt = f27 < f5;
    c0eq = f27 == f5;
    if (!c0lt) {
        c0eq = c0lt || c0eq;
        if (!c0eq) {
            a.f[0] = f27;
            f1 = tc_callf(0x802eff54u, &a);
            f5 = (f64)(f32)px_pmul(f27, f1);
        }
        f4 = (f64)(f32)px_pmul((f64)rdf32(0x80577900u), f28);
        f2 = (f64)(f32)px_pmul((f64)rdf32(0x805778ecu), f31);
        f1 = (f64)(f32)px_padd(f4, f5);
        f4 = (f64)(f32)px_pdiv((f64)(f32)px_psub(f4, f5), f2);
        f5 = (f64)(f32)px_pdiv(f1, f2);
        if (f4 > (f64)rdf32(0x805778e8u)) {
            f0 = (f64)rdf32(0x805778f4u);
            if (f4 < f0) {
                f3 = px_pack((f64)rdf32(param_4), (f64)rdf32(param_4));
                f2 = px_pack((f64)rdf32((u32)param_3), (f64)rdf32((u32)param_3));
                f1 = px_pack((f64)(f32)px_psub(px_hi(f2), px_hi(f3)), (f64)(f32)px_psub(px_lo(f2), px_lo(f3)));
                f2 = px_pack((f64)rdf32((u32)param_3 + 8u), 1.0);
                f1 = px_pack((f64)(f32)px_pfma(px_hi(f1), px_hi(f4), px_hi(f3)), (f64)(f32)px_pfma(px_lo(f1), px_hi(f4), px_lo(f3)));
                f3 = px_pack((f64)rdf32(param_4 + 8u), 1.0);
                wrf32d(param_8, px_hi(f1));
                wrf32d(param_8, px_lo(f1));
                f1 = px_pack((f64)(f32)px_psub(px_hi(f2), px_hi(f3)), (f64)(f32)px_psub(px_lo(f2), px_lo(f3)));
                f1 = px_pack((f64)(f32)px_pfma(px_hi(f1), px_hi(f4), px_hi(f3)), (f64)(f32)px_pfma(px_lo(f1), px_hi(f4), px_lo(f3)));
                f2 = ppc_fabs((f64)rdf32(param_8 + 4u));
                wrf32d(param_8 + 8u, px_hi(f1));
                if (f2 < f0) {
                    f30 = f4;
                }
            }
        }
        if (f5 > (f64)rdf32(0x805778e8u)) {
            f0 = (f64)rdf32(0x805778f4u);
            if (f5 < f0 && f5 < f30) {
                f3 = px_pack((f64)rdf32(param_4), (f64)rdf32(param_4));
                f2 = px_pack((f64)rdf32((u32)param_3), (f64)rdf32((u32)param_3));
                f1 = px_pack((f64)(f32)px_psub(px_hi(f2), px_hi(f3)), (f64)(f32)px_psub(px_lo(f2), px_lo(f3)));
                f2 = px_pack((f64)rdf32((u32)param_3 + 8u), 1.0);
                f1 = px_pack((f64)(f32)px_pfma(px_hi(f1), px_hi(f5), px_hi(f3)), (f64)(f32)px_pfma(px_lo(f1), px_hi(f5), px_lo(f3)));
                f3 = px_pack((f64)rdf32(param_4 + 8u), 1.0);
                wrf32d(0x817fdf84u, px_hi(f1));
                wrf32d(0x817fdf84u, px_lo(f1));
                f1 = px_pack((f64)(f32)px_psub(px_hi(f2), px_hi(f3)), (f64)(f32)px_psub(px_lo(f2), px_lo(f3)));
                f1 = px_pack((f64)(f32)px_pfma(px_hi(f1), px_hi(f5), px_hi(f3)), (f64)(f32)px_pfma(px_lo(f1), px_hi(f5), px_lo(f3)));
                f2 = ppc_fabs((f64)rdf32(0x817fdf88u));
                wrf32d(0x817fdf8cu, px_hi(f1));
                if (f2 < f0) {
                    f30 = f5;
                    f1 = (f64)rdf32(0x817fdf88u);
                    f0 = (f64)rdf32(0x817fdf8cu);
                    wrf32d(param_8, (f64)rdf32(0x817fdf84u));
                    wrf32d(param_8 + 4u, f1);
                    wrf32d(param_8 + 8u, f0);
                }
            }
        }
        f4 = (f64)rdf32(0x805778e4u);
        f1 = (f64)rdf32(0x805778f0u);
        do {
            if (!(ppc_fabs((f64)(f32)px_psub((f64)rdf32(param_4 + 4u), f4)) < f1) || !(ppc_fabs((f64)(f32)px_psub((f64)rdf32((u32)param_3 + 4u), f4)) < f1)) {
                f2 = (f64)rdf32(param_4 + 4u);
                if (f2 > f4) {
                    f3 = (f64)rdf32(0x805778f0u);
                    if ((f64)rdf32((u32)param_3 + 4u) < (f64)(f32)px_padd(f3, f4)) {
                        f1 = (f64)(f32)px_psub(f4, f2);
                        f4 = px_pack((f64)rdf32(param_4), (f64)rdf32(param_4));
                        f2 = px_pack((f64)rdf32((u32)param_3), (f64)rdf32((u32)param_3));
                        f31 = (f64)(f32)px_pdiv(f1, (f64)rdf32(param_6 + 4u));
                        f0 = px_pack((f64)(f32)px_psub(px_hi(f2), px_hi(f4)), (f64)(f32)px_psub(px_lo(f2), px_lo(f4)));
                        f2 = px_pack((f64)rdf32((u32)param_3 + 8u), 1.0);
                        f0 = px_pack((f64)(f32)px_pfma(px_hi(f0), px_hi(f31), px_hi(f4)), (f64)(f32)px_pfma(px_lo(f0), px_hi(f31), px_lo(f4)));
                        f4 = px_pack((f64)rdf32(param_4 + 8u), 1.0);
                        wrf32d(0x817fdf78u, px_hi(f0));
                        wrf32d(0x817fdf78u, px_lo(f0));
                        f0 = px_pack((f64)(f32)px_psub(px_hi(f2), px_hi(f4)), (f64)(f32)px_psub(px_lo(f2), px_lo(f4)));
                        f0 = px_pack((f64)(f32)px_pfma(px_hi(f0), px_hi(f31), px_hi(f4)), (f64)(f32)px_pfma(px_lo(f0), px_hi(f31), px_lo(f4)));
                        wrf32d(0x817fdf80u, px_hi(f0));
                        if (!(f31 < f30)) break;
                        f0 = (f64)rdf32(0x817fdf78u);
                        f1 = (f64)rdf32(0x817fdf80u);
                        f1 = (f64)(f32)px_pmul(f1, f1);
                        f1 = (f64)(f32)px_padd((f64)(f32)px_pmul(f0, f0), f1);
                        if (!(f1 < (f64)rdf32(0x805778f8u))) break;
                        f1 = (f64)rdf32(0x817fdf7cu);
                        c0eq = ((u32)rd16(param_2 + 0x2cu) & 2u) == 0u;
                        f0 = (f64)rdf32(0x817fdf80u);
                        wrf32d(param_8, (f64)rdf32(0x817fdf78u));
                        wrf32d(param_8 + 4u, f1);
                        wrf32d(param_8 + 8u, f0);
                        if (!c0eq) {
                            f1 = (f64)rdf32(0x805778e0u);
                            wrf32d(param_7 + 4u, (f64)(f32)px_pmul((f64)rdf32(param_7 + 4u), f1));
                            wrf32d(param_6 + 4u, (f64)(f32)px_pmul((f64)rdf32(param_6 + 4u), f1));
                            wrf32d(param_8 + 4u, (f64)(f32)px_padd((f64)rdf32(param_8 + 4u), f3));
                        }
                        a.r[0] = param_1;
                        a.r[1] = param_8;
                        a.r[2] = r30;
                        (void)tc_call(0x8023411cu, &a);
                        return;
                    }
                }
                f2 = (f64)rdf32(param_4 + 4u);
                if (f2 < f4) {
                    f3 = (f64)rdf32(0x805778f0u);
                    if ((f64)rdf32((u32)param_3 + 4u) > (f64)(f32)px_padd(f3, f4)) {
                        f1 = (f64)(f32)px_psub(f4, f2);
                        f4 = px_pack((f64)rdf32(param_4), (f64)rdf32(param_4));
                        f2 = px_pack((f64)rdf32((u32)param_3), (f64)rdf32((u32)param_3));
                        f31 = (f64)(f32)px_pdiv(f1, (f64)rdf32(param_6 + 4u));
                        f0 = px_pack((f64)(f32)px_psub(px_hi(f2), px_hi(f4)), (f64)(f32)px_psub(px_lo(f2), px_lo(f4)));
                        f2 = px_pack((f64)rdf32((u32)param_3 + 8u), 1.0);
                        f0 = px_pack((f64)(f32)px_pfma(px_hi(f0), px_hi(f31), px_hi(f4)), (f64)(f32)px_pfma(px_lo(f0), px_hi(f31), px_lo(f4)));
                        f4 = px_pack((f64)rdf32(param_4 + 8u), 1.0);
                        wrf32d(0x817fdf6cu, px_hi(f0));
                        wrf32d(0x817fdf6cu, px_lo(f0));
                        f0 = px_pack((f64)(f32)px_psub(px_hi(f2), px_hi(f4)), (f64)(f32)px_psub(px_lo(f2), px_lo(f4)));
                        f0 = px_pack((f64)(f32)px_pfma(px_hi(f0), px_hi(f31), px_hi(f4)), (f64)(f32)px_pfma(px_lo(f0), px_hi(f31), px_lo(f4)));
                        wrf32d(0x817fdf74u, px_hi(f0));
                        if (f31 < f30) {
                            f0 = (f64)rdf32(0x817fdf6cu);
                            f1 = (f64)rdf32(0x817fdf74u);
                            f1 = (f64)(f32)px_pmul(f1, f1);
                            f1 = (f64)(f32)px_padd((f64)(f32)px_pmul(f0, f0), f1);
                            if (f1 < (f64)rdf32(0x805778f8u)) {
                                f1 = (f64)rdf32(0x817fdf70u);
                                c0eq = ((u32)rd16(param_2 + 0x2cu) & 2u) == 0u;
                                f0 = (f64)rdf32(0x817fdf74u);
                                wrf32d(param_8, (f64)rdf32(0x817fdf6cu));
                                wrf32d(param_8 + 4u, f1);
                                wrf32d(param_8 + 8u, f0);
                                if (!c0eq) {
                                    f1 = (f64)rdf32(0x805778e0u);
                                    wrf32d(param_7 + 4u, (f64)(f32)px_pmul((f64)rdf32(param_7 + 4u), f1));
                                    wrf32d(param_6 + 4u, (f64)(f32)px_pmul((f64)rdf32(param_6 + 4u), f1));
                                    wrf32d(param_8 + 4u, (f64)(f32)px_psub((f64)rdf32(param_8 + 4u), f3));
                                }
                                a.r[0] = param_1;
                                a.r[1] = param_8;
                                a.r[2] = r30;
                                (void)tc_call(0x8023411cu, &a);
                                return;
                            }
                        }
                    }
                }
            }
        } while (0);
        f4 = (f64)rdf32(0x805778e0u);
        f1 = (f64)rdf32(0x805778f0u);
        do {
            if (!(ppc_fabs((f64)(f32)px_psub((f64)rdf32(param_4 + 4u), f4)) < f1) || !(ppc_fabs((f64)(f32)px_psub((f64)rdf32((u32)param_3 + 4u), f4)) < f1)) {
                f2 = (f64)rdf32(param_4 + 4u);
                if (f2 > f4) {
                    f3 = (f64)rdf32(0x805778f0u);
                    if ((f64)rdf32((u32)param_3 + 4u) < (f64)(f32)px_padd(f3, f4)) {
                        f1 = (f64)(f32)px_psub(f4, f2);
                        f4 = px_pack((f64)rdf32(param_4), (f64)rdf32(param_4));
                        f2 = px_pack((f64)rdf32((u32)param_3), (f64)rdf32((u32)param_3));
                        f31 = (f64)(f32)px_pdiv(f1, (f64)rdf32(param_6 + 4u));
                        f0 = px_pack((f64)(f32)px_psub(px_hi(f2), px_hi(f4)), (f64)(f32)px_psub(px_lo(f2), px_lo(f4)));
                        f2 = px_pack((f64)rdf32((u32)param_3 + 8u), 1.0);
                        f0 = px_pack((f64)(f32)px_pfma(px_hi(f0), px_hi(f31), px_hi(f4)), (f64)(f32)px_pfma(px_lo(f0), px_hi(f31), px_lo(f4)));
                        f4 = px_pack((f64)rdf32(param_4 + 8u), 1.0);
                        wrf32d(0x817fdf60u, px_hi(f0));
                        wrf32d(0x817fdf60u, px_lo(f0));
                        f0 = px_pack((f64)(f32)px_psub(px_hi(f2), px_hi(f4)), (f64)(f32)px_psub(px_lo(f2), px_lo(f4)));
                        f0 = px_pack((f64)(f32)px_pfma(px_hi(f0), px_hi(f31), px_hi(f4)), (f64)(f32)px_pfma(px_lo(f0), px_hi(f31), px_lo(f4)));
                        wrf32d(0x817fdf68u, px_hi(f0));
                        if (!(f31 < f30)) break;
                        f0 = (f64)rdf32(0x817fdf60u);
                        f1 = (f64)rdf32(0x817fdf68u);
                        f1 = (f64)(f32)px_pmul(f1, f1);
                        f1 = (f64)(f32)px_padd((f64)(f32)px_pmul(f0, f0), f1);
                        if (!(f1 < (f64)rdf32(0x805778f8u))) break;
                        f1 = (f64)rdf32(0x817fdf64u);
                        c0eq = ((u32)rd16(param_2 + 0x2cu) & 2u) == 0u;
                        f0 = (f64)rdf32(0x817fdf68u);
                        wrf32d(param_8, (f64)rdf32(0x817fdf60u));
                        wrf32d(param_8 + 4u, f1);
                        wrf32d(param_8 + 8u, f0);
                        if (!c0eq) {
                            f1 = (f64)rdf32(0x805778e0u);
                            wrf32d(param_7 + 4u, (f64)(f32)px_pmul((f64)rdf32(param_7 + 4u), f1));
                            wrf32d(param_6 + 4u, (f64)(f32)px_pmul((f64)rdf32(param_6 + 4u), f1));
                            wrf32d(param_8 + 4u, (f64)(f32)px_padd((f64)rdf32(param_8 + 4u), f3));
                        }
                        a.r[0] = param_1;
                        a.r[1] = param_8;
                        a.r[2] = r30;
                        (void)tc_call(0x8023411cu, &a);
                        return;
                    }
                }
                f2 = (f64)rdf32(param_4 + 4u);
                if (f2 < f4) {
                    f3 = (f64)rdf32(0x805778f0u);
                    if ((f64)rdf32((u32)param_3 + 4u) > (f64)(f32)px_padd(f3, f4)) {
                        f1 = (f64)(f32)px_psub(f4, f2);
                        f4 = px_pack((f64)rdf32(param_4), (f64)rdf32(param_4));
                        f2 = px_pack((f64)rdf32((u32)param_3), (f64)rdf32((u32)param_3));
                        f31 = (f64)(f32)px_pdiv(f1, (f64)rdf32(param_6 + 4u));
                        f0 = px_pack((f64)(f32)px_psub(px_hi(f2), px_hi(f4)), (f64)(f32)px_psub(px_lo(f2), px_lo(f4)));
                        f2 = px_pack((f64)rdf32((u32)param_3 + 8u), 1.0);
                        f0 = px_pack((f64)(f32)px_pfma(px_hi(f0), px_hi(f31), px_hi(f4)), (f64)(f32)px_pfma(px_lo(f0), px_hi(f31), px_lo(f4)));
                        f4 = px_pack((f64)rdf32(param_4 + 8u), 1.0);
                        wrf32d(0x817fdf54u, px_hi(f0));
                        wrf32d(0x817fdf54u, px_lo(f0));
                        f0 = px_pack((f64)(f32)px_psub(px_hi(f2), px_hi(f4)), (f64)(f32)px_psub(px_lo(f2), px_lo(f4)));
                        f0 = px_pack((f64)(f32)px_pfma(px_hi(f0), px_hi(f31), px_hi(f4)), (f64)(f32)px_pfma(px_lo(f0), px_hi(f31), px_lo(f4)));
                        wrf32d(0x817fdf5cu, px_hi(f0));
                        if (f31 < f30) {
                            f0 = (f64)rdf32(0x817fdf54u);
                            f1 = (f64)rdf32(0x817fdf5cu);
                            f1 = (f64)(f32)px_pmul(f1, f1);
                            f1 = (f64)(f32)px_padd((f64)(f32)px_pmul(f0, f0), f1);
                            if (f1 < (f64)rdf32(0x805778f8u)) {
                                f1 = (f64)rdf32(0x817fdf58u);
                                c0eq = ((u32)rd16(param_2 + 0x2cu) & 2u) == 0u;
                                f0 = (f64)rdf32(0x817fdf5cu);
                                wrf32d(param_8, (f64)rdf32(0x817fdf54u));
                                wrf32d(param_8 + 4u, f1);
                                wrf32d(param_8 + 8u, f0);
                                if (!c0eq) {
                                    f1 = (f64)rdf32(0x805778e0u);
                                    wrf32d(param_7 + 4u, (f64)(f32)px_pmul((f64)rdf32(param_7 + 4u), f1));
                                    wrf32d(param_6 + 4u, (f64)(f32)px_pmul((f64)rdf32(param_6 + 4u), f1));
                                    wrf32d(param_8 + 4u, (f64)(f32)px_psub((f64)rdf32(param_8 + 4u), f3));
                                }
                                a.r[0] = param_1;
                                a.r[1] = param_8;
                                a.r[2] = r30;
                                (void)tc_call(0x8023411cu, &a);
                                return;
                            }
                        }
                    }
                }
            }
        } while (0);
        if (f30 < (f64)rdf32(0x805778ecu)) {
            if (((u32)rd16(param_2 + 0x2cu) & 2u) != 0u) {
                f0 = (f64)rdf32(param_6);
                f1 = (f64)rdf32(param_6 + 8u);
                f2 = (f64)(f32)px_pmul(f0, f0);
                f0 = (f64)rdf32(0x805778e8u);
                f1 = (f64)(f32)px_pmul(f1, f1);
                f1 = (f64)(f32)px_padd(f2, f1);
                if (!((f1 < f0) || (f1 == f0))) {
                    a.f[0] = f1;
                    (void)tc_call(0x802eff54u, &a);
                }
                f4 = (f64)rdf32(param_8);
                f3 = (f64)(f32)px_pmul((f64)rdf32(param_6), f4);
                f0 = (f64)rdf32(0x805778e8u);
                f1 = (f64)(f32)px_pmul((f64)rdf32(param_6 + 8u), (f64)rdf32(param_8 + 8u));
                wrf32d(0x817fdf48u, f4);
                wrf32d(0x817fdf4cu, f0);
                f27 = (f64)(f32)px_padd(f3, f1);
                wrf32d(0x817fdf50u, (f64)rdf32(param_8 + 8u));
                a.r[0] = 0x817fdf48u;
                a.r[1] = 0x817fdf48u;
                (void)tc_call(0x802343e4u, &a);
                f2 = px_pack((f64)rdf32(0x817fdf48u), (f64)rdf32(0x817fdf48u));
                f0 = (f64)rdf32(0x805778e8u);
                f1 = px_pack((f64)(f32)px_pmul(px_hi(f2), px_hi(f27)), (f64)(f32)px_pmul(px_lo(f2), px_hi(f27)));
                f2 = px_pack((f64)rdf32(0x817fdf50u), 1.0);
                wrf32d(0x817fdf48u, px_hi(f1));
                wrf32d(0x817fdf48u, px_lo(f1));
                f1 = px_pack((f64)(f32)px_pmul(px_hi(f2), px_hi(f27)), (f64)(f32)px_pmul(px_lo(f2), px_hi(f27)));
                f2 = px_pack((f64)rdf32(0x817fdf48u), (f64)rdf32(0x817fdf48u));
                wrf32d(0x817fdf50u, px_hi(f1));
                f1 = px_pack((f64)rdf32(param_6), (f64)rdf32(param_6));
                f3 = px_pack((f64)(f32)px_psub(px_hi(f1), px_hi(f2)), (f64)(f32)px_psub(px_lo(f1), px_lo(f2)));
                f1 = px_pack((f64)rdf32(param_6 + 8u), 1.0);
                wrf32d(param_6, px_hi(f3));
                wrf32d(param_6, px_lo(f3));
                f4 = f3;
                f2 = px_pack((f64)rdf32(0x817fdf50u), 1.0);
                f3 = px_pack((f64)(f32)px_psub(px_hi(f1), px_hi(f2)), (f64)(f32)px_psub(px_lo(f1), px_lo(f2)));
                wrf32d(param_6 + 8u, px_hi(f3));
                f1 = px_pack((f64)rdf32(0x817fdf48u), (f64)rdf32(0x817fdf48u));
                f1 = px_pack((f64)(f32)px_psub(px_hi(f4), px_hi(f1)), (f64)(f32)px_psub(px_lo(f4), px_lo(f1)));
                wrf32d(param_6, px_hi(f1));
                wrf32d(param_6, px_lo(f1));
                f1 = px_pack((f64)rdf32(0x817fdf50u), 1.0);
                f1 = px_pack((f64)(f32)px_psub(px_hi(f3), px_hi(f1)), (f64)(f32)px_psub(px_lo(f3), px_lo(f1)));
                wrf32d(param_6 + 8u, px_hi(f1));
                f2 = (f64)rdf32(param_7);
                f1 = (f64)rdf32(param_7 + 8u);
                f2 = (f64)(f32)px_pmul(f2, f2);
                f1 = (f64)(f32)px_pmul(f1, f1);
                f1 = (f64)(f32)px_padd(f2, f1);
                if (!((f1 < f0) || (f1 == f0))) {
                    a.f[0] = f1;
                    (void)tc_call(0x802eff54u, &a);
                }
                f4 = (f64)rdf32(param_8);
                f3 = (f64)(f32)px_pmul((f64)rdf32(param_7), f4);
                f0 = (f64)rdf32(0x805778e8u);
                f1 = (f64)(f32)px_pmul((f64)rdf32(param_7 + 8u), (f64)rdf32(param_8 + 8u));
                wrf32d(0x817fdf48u, f4);
                wrf32d(0x817fdf4cu, f0);
                f31 = (f64)(f32)px_padd(f3, f1);
                wrf32d(0x817fdf50u, (f64)rdf32(param_8 + 8u));
                a.r[0] = 0x817fdf48u;
                a.r[1] = 0x817fdf48u;
                (void)tc_call(0x802343e4u, &a);
                f2 = px_pack((f64)rdf32(0x817fdf48u), (f64)rdf32(0x817fdf48u));
                f1 = px_pack((f64)(f32)px_pmul(px_hi(f2), px_hi(f31)), (f64)(f32)px_pmul(px_lo(f2), px_hi(f31)));
                f2 = px_pack((f64)rdf32(0x817fdf50u), 1.0);
                c0gt = f29 > (f64)rdf32(0x805778e4u);
                wrf32d(0x817fdf48u, px_hi(f1));
                wrf32d(0x817fdf48u, px_lo(f1));
                f1 = px_pack((f64)(f32)px_pmul(px_hi(f2), px_hi(f31)), (f64)(f32)px_pmul(px_lo(f2), px_hi(f31)));
                f2 = px_pack((f64)rdf32(0x817fdf48u), (f64)rdf32(0x817fdf48u));
                wrf32d(0x817fdf50u, px_hi(f1));
                f0 = px_pack((f64)rdf32(param_7), (f64)rdf32(param_7));
                f1 = px_pack((f64)(f32)px_psub(px_hi(f0), px_hi(f2)), (f64)(f32)px_psub(px_lo(f0), px_lo(f2)));
                f0 = px_pack((f64)rdf32(param_7 + 8u), 1.0);
                wrf32d(param_7, px_hi(f1));
                wrf32d(param_7, px_lo(f1));
                f3 = f1;
                f2 = px_pack((f64)rdf32(0x817fdf50u), 1.0);
                f1 = px_pack((f64)(f32)px_psub(px_hi(f0), px_hi(f2)), (f64)(f32)px_psub(px_lo(f0), px_lo(f2)));
                wrf32d(param_7 + 8u, px_hi(f1));
                f0 = px_pack((f64)rdf32(0x817fdf48u), (f64)rdf32(0x817fdf48u));
                f0 = px_pack((f64)(f32)px_psub(px_hi(f3), px_hi(f0)), (f64)(f32)px_psub(px_lo(f3), px_lo(f0)));
                wrf32d(param_7, px_hi(f0));
                wrf32d(param_7, px_lo(f0));
                f0 = px_pack((f64)rdf32(0x817fdf50u), 1.0);
                f0 = px_pack((f64)(f32)px_psub(px_hi(f1), px_hi(f0)), (f64)(f32)px_psub(px_lo(f1), px_lo(f0)));
                wrf32d(param_7 + 8u, px_hi(f0));
                if (!c0gt) {
                    f0 = (f64)rdf32(0x8057790cu);
                    f2 = px_pack((f64)rdf32(param_8), (f64)rdf32(param_8));
                    f1 = px_pack((f64)(f32)px_pmul(px_hi(f2), px_hi(f0)), (f64)(f32)px_pmul(px_lo(f2), px_hi(f0)));
                    f2 = px_pack((f64)rdf32(param_8 + 8u), 1.0);
                    wrf32d(param_8, px_hi(f1));
                    wrf32d(param_8, px_lo(f1));
                    wrf32d(param_8 + 8u, px_hi(px_pack((f64)(f32)px_pmul(px_hi(f2), px_hi(f0)), (f64)(f32)px_pmul(px_lo(f2), px_hi(f0)))));
                } else {
                    f0 = (f64)rdf32(0x80577908u);
                    f2 = px_pack((f64)rdf32(param_8), (f64)rdf32(param_8));
                    f1 = px_pack((f64)(f32)px_pmul(px_hi(f2), px_hi(f0)), (f64)(f32)px_pmul(px_lo(f2), px_hi(f0)));
                    f2 = px_pack((f64)rdf32(param_8 + 8u), 1.0);
                    wrf32d(param_8, px_hi(f1));
                    wrf32d(param_8, px_lo(f1));
                    wrf32d(param_8 + 8u, px_hi(px_pack((f64)(f32)px_pmul(px_hi(f2), px_hi(f0)), (f64)(f32)px_pmul(px_lo(f2), px_hi(f0)))));
                }
            }
            a.r[0] = param_1;
            a.r[1] = param_8;
            a.r[2] = r30;
            (void)tc_call(0x8023411cu, &a);
        }
    }
    return;
}
