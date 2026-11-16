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

f64 fn_8031b170(u32 param_1, s32 param_2, u32 param_3, u32 param_4, s32 param_5, u32 param_6, u32 param_7, u32 param_8, u32 param_9)
{
    u32 c0eq = 0, r11 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f3 = 0.0, f4 = 0.0, f5 = 0.0, f25 = 0.0, f26 = 0.0, f27 = 0.0, f28 = 0.0, f29 = 0.0, f30 = 0.0;
    f64 f31 = 0.0;
    TcArgs a = {0};
    (void)param_9;
    f31 = (f64)rdf32(0x805778ecu);
    f30 = f31;
    f29 = f31;
    f28 = f31;
    f27 = f31;
    f26 = f31;
    r11 = rd32(0x817fe008u);
    f25 = f31;
    f4 = (f64)(f32)px_pdiv((f64)(f32)px_psub((f64)rdf32(0x805778e4u), (f64)rdf32(param_4)), (f64)rdf32(param_6));
    if (f4 > (f64)rdf32(0x805778e8u)) {
        f0 = (f64)rdf32(0x805778f4u);
        if ((f4 < f0) || (f4 == f0)) {
            f3 = px_pack((f64)rdf32(param_4), (f64)rdf32(param_4));
            f2 = px_pack((f64)rdf32(param_3), (f64)rdf32(param_3));
            f1 = px_pack((f64)(f32)px_psub(px_hi(f2), px_hi(f3)), (f64)(f32)px_psub(px_lo(f2), px_lo(f3)));
            f2 = px_pack((f64)rdf32(param_3 + 8u), 1.0);
            f1 = px_pack((f64)(f32)px_pfma(px_hi(f1), px_hi(f4), px_hi(f3)), (f64)(f32)px_pfma(px_lo(f1), px_hi(f4), px_lo(f3)));
            f3 = px_pack((f64)rdf32(param_4 + 8u), 1.0);
            wrf32d(0x817fdf68u, px_hi(f1));
            wrf32d(0x817fdf68u, px_lo(f1));
            f1 = px_pack((f64)(f32)px_psub(px_hi(f2), px_hi(f3)), (f64)(f32)px_psub(px_lo(f2), px_lo(f3)));
            f1 = px_pack((f64)(f32)px_pfma(px_hi(f1), px_hi(f4), px_hi(f3)), (f64)(f32)px_pfma(px_lo(f1), px_hi(f4), px_lo(f3)));
            f2 = ppc_fabs((f64)rdf32(0x817fdf6cu));
            wrf32d(0x817fdf70u, px_hi(f1));
            if ((f2 < f0) || (f2 == f0)) {
                f1 = ppc_fabs((f64)rdf32(0x817fdf70u));
                if ((f1 < f0) || (f1 == f0)) {
                    f30 = f4;
                    if (f4 < f31) {
                        f31 = f4;
                    }
                }
            }
        }
    }
    f4 = (f64)(f32)px_pdiv((f64)(f32)px_psub((f64)rdf32(0x805778e0u), (f64)rdf32(param_4)), (f64)rdf32(param_6));
    if (f4 > (f64)rdf32(0x805778e8u)) {
        f0 = (f64)rdf32(0x805778f4u);
        if ((f4 < f0) || (f4 == f0)) {
            f3 = px_pack((f64)rdf32(param_4), (f64)rdf32(param_4));
            f2 = px_pack((f64)rdf32(param_3), (f64)rdf32(param_3));
            f1 = px_pack((f64)(f32)px_psub(px_hi(f2), px_hi(f3)), (f64)(f32)px_psub(px_lo(f2), px_lo(f3)));
            f2 = px_pack((f64)rdf32(param_3 + 8u), 1.0);
            f1 = px_pack((f64)(f32)px_pfma(px_hi(f1), px_hi(f4), px_hi(f3)), (f64)(f32)px_pfma(px_lo(f1), px_hi(f4), px_lo(f3)));
            f3 = px_pack((f64)rdf32(param_4 + 8u), 1.0);
            wrf32d(0x817fdf68u, px_hi(f1));
            wrf32d(0x817fdf68u, px_lo(f1));
            f1 = px_pack((f64)(f32)px_psub(px_hi(f2), px_hi(f3)), (f64)(f32)px_psub(px_lo(f2), px_lo(f3)));
            f1 = px_pack((f64)(f32)px_pfma(px_hi(f1), px_hi(f4), px_hi(f3)), (f64)(f32)px_pfma(px_lo(f1), px_hi(f4), px_lo(f3)));
            f2 = ppc_fabs((f64)rdf32(0x817fdf6cu));
            wrf32d(0x817fdf70u, px_hi(f1));
            if ((f2 < f0) || (f2 == f0)) {
                f1 = ppc_fabs((f64)rdf32(0x817fdf70u));
                if ((f1 < f0) || (f1 == f0)) {
                    f29 = f4;
                    if (f4 < f31) {
                        f31 = f4;
                    }
                }
            }
        }
    }
    f4 = (f64)(f32)px_pdiv((f64)(f32)px_psub((f64)rdf32(0x805778e4u), (f64)rdf32(param_4 + 4u)), (f64)rdf32(param_6 + 4u));
    if (f4 > (f64)rdf32(0x805778e8u)) {
        f0 = (f64)rdf32(0x805778f4u);
        if ((f4 < f0) || (f4 == f0)) {
            f3 = px_pack((f64)rdf32(param_4), (f64)rdf32(param_4));
            f2 = px_pack((f64)rdf32(param_3), (f64)rdf32(param_3));
            f1 = px_pack((f64)(f32)px_psub(px_hi(f2), px_hi(f3)), (f64)(f32)px_psub(px_lo(f2), px_lo(f3)));
            f2 = px_pack((f64)rdf32(param_3 + 8u), 1.0);
            f1 = px_pack((f64)(f32)px_pfma(px_hi(f1), px_hi(f4), px_hi(f3)), (f64)(f32)px_pfma(px_lo(f1), px_hi(f4), px_lo(f3)));
            f3 = px_pack((f64)rdf32(param_4 + 8u), 1.0);
            wrf32d(0x817fdf68u, px_hi(f1));
            wrf32d(0x817fdf68u, px_lo(f1));
            f1 = px_pack((f64)(f32)px_psub(px_hi(f2), px_hi(f3)), (f64)(f32)px_psub(px_lo(f2), px_lo(f3)));
            f1 = px_pack((f64)(f32)px_pfma(px_hi(f1), px_hi(f4), px_hi(f3)), (f64)(f32)px_pfma(px_lo(f1), px_hi(f4), px_lo(f3)));
            f2 = ppc_fabs((f64)rdf32(0x817fdf68u));
            wrf32d(0x817fdf70u, px_hi(f1));
            if ((f2 < f0) || (f2 == f0)) {
                f1 = ppc_fabs((f64)rdf32(0x817fdf70u));
                if ((f1 < f0) || (f1 == f0)) {
                    f28 = f4;
                    if (f4 < f31) {
                        f31 = f4;
                    }
                }
            }
        }
    }
    f4 = (f64)(f32)px_pdiv((f64)(f32)px_psub((f64)rdf32(0x805778e0u), (f64)rdf32(param_4 + 4u)), (f64)rdf32(param_6 + 4u));
    if (f4 > (f64)rdf32(0x805778e8u)) {
        f0 = (f64)rdf32(0x805778f4u);
        if ((f4 < f0) || (f4 == f0)) {
            f3 = px_pack((f64)rdf32(param_4), (f64)rdf32(param_4));
            f2 = px_pack((f64)rdf32(param_3), (f64)rdf32(param_3));
            f1 = px_pack((f64)(f32)px_psub(px_hi(f2), px_hi(f3)), (f64)(f32)px_psub(px_lo(f2), px_lo(f3)));
            f2 = px_pack((f64)rdf32(param_3 + 8u), 1.0);
            f1 = px_pack((f64)(f32)px_pfma(px_hi(f1), px_hi(f4), px_hi(f3)), (f64)(f32)px_pfma(px_lo(f1), px_hi(f4), px_lo(f3)));
            f3 = px_pack((f64)rdf32(param_4 + 8u), 1.0);
            wrf32d(0x817fdf68u, px_hi(f1));
            wrf32d(0x817fdf68u, px_lo(f1));
            f1 = px_pack((f64)(f32)px_psub(px_hi(f2), px_hi(f3)), (f64)(f32)px_psub(px_lo(f2), px_lo(f3)));
            f1 = px_pack((f64)(f32)px_pfma(px_hi(f1), px_hi(f4), px_hi(f3)), (f64)(f32)px_pfma(px_lo(f1), px_hi(f4), px_lo(f3)));
            f2 = ppc_fabs((f64)rdf32(0x817fdf68u));
            wrf32d(0x817fdf70u, px_hi(f1));
            if ((f2 < f0) || (f2 == f0)) {
                f1 = ppc_fabs((f64)rdf32(0x817fdf70u));
                if ((f1 < f0) || (f1 == f0)) {
                    f27 = f4;
                    if (f4 < f31) {
                        f31 = f4;
                    }
                }
            }
        }
    }
    f4 = (f64)(f32)px_pdiv((f64)(f32)px_psub((f64)rdf32(0x805778e4u), (f64)rdf32(param_4 + 8u)), (f64)rdf32(param_6 + 8u));
    if (f4 > (f64)rdf32(0x805778e8u)) {
        f0 = (f64)rdf32(0x805778f4u);
        if ((f4 < f0) || (f4 == f0)) {
            f3 = px_pack((f64)rdf32(param_4), (f64)rdf32(param_4));
            f2 = px_pack((f64)rdf32(param_3), (f64)rdf32(param_3));
            f1 = px_pack((f64)(f32)px_psub(px_hi(f2), px_hi(f3)), (f64)(f32)px_psub(px_lo(f2), px_lo(f3)));
            f2 = px_pack((f64)rdf32(param_3 + 8u), 1.0);
            f1 = px_pack((f64)(f32)px_pfma(px_hi(f1), px_hi(f4), px_hi(f3)), (f64)(f32)px_pfma(px_lo(f1), px_hi(f4), px_lo(f3)));
            f3 = px_pack((f64)rdf32(param_4 + 8u), 1.0);
            wrf32d(0x817fdf68u, px_hi(f1));
            wrf32d(0x817fdf68u, px_lo(f1));
            f1 = px_pack((f64)(f32)px_psub(px_hi(f2), px_hi(f3)), (f64)(f32)px_psub(px_lo(f2), px_lo(f3)));
            f1 = px_pack((f64)(f32)px_pfma(px_hi(f1), px_hi(f4), px_hi(f3)), (f64)(f32)px_pfma(px_lo(f1), px_hi(f4), px_lo(f3)));
            f2 = ppc_fabs((f64)rdf32(0x817fdf68u));
            wrf32d(0x817fdf70u, px_hi(f1));
            if ((f2 < f0) || (f2 == f0)) {
                f1 = ppc_fabs((f64)rdf32(0x817fdf6cu));
                if ((f1 < f0) || (f1 == f0)) {
                    f26 = f4;
                    if (f4 < f31) {
                        f31 = f4;
                    }
                }
            }
        }
    }
    f4 = (f64)(f32)px_pdiv((f64)(f32)px_psub((f64)rdf32(0x805778e0u), (f64)rdf32(param_4 + 8u)), (f64)rdf32(param_6 + 8u));
    if (f4 > (f64)rdf32(0x805778e8u)) {
        f0 = (f64)rdf32(0x805778f4u);
        if ((f4 < f0) || (f4 == f0)) {
            f3 = px_pack((f64)rdf32(param_4), (f64)rdf32(param_4));
            f2 = px_pack((f64)rdf32(param_3), (f64)rdf32(param_3));
            f1 = px_pack((f64)(f32)px_psub(px_hi(f2), px_hi(f3)), (f64)(f32)px_psub(px_lo(f2), px_lo(f3)));
            f2 = px_pack((f64)rdf32(param_3 + 8u), 1.0);
            f1 = px_pack((f64)(f32)px_pfma(px_hi(f1), px_hi(f4), px_hi(f3)), (f64)(f32)px_pfma(px_lo(f1), px_hi(f4), px_lo(f3)));
            f3 = px_pack((f64)rdf32(param_4 + 8u), 1.0);
            wrf32d(0x817fdf68u, px_hi(f1));
            wrf32d(0x817fdf68u, px_lo(f1));
            f1 = px_pack((f64)(f32)px_psub(px_hi(f2), px_hi(f3)), (f64)(f32)px_psub(px_lo(f2), px_lo(f3)));
            f1 = px_pack((f64)(f32)px_pfma(px_hi(f1), px_hi(f4), px_hi(f3)), (f64)(f32)px_pfma(px_lo(f1), px_hi(f4), px_lo(f3)));
            f2 = ppc_fabs((f64)rdf32(0x817fdf68u));
            wrf32d(0x817fdf70u, px_hi(f1));
            if ((f2 < f0) || (f2 == f0)) {
                f1 = ppc_fabs((f64)rdf32(0x817fdf6cu));
                if ((f1 < f0) || (f1 == f0)) {
                    f25 = f4;
                    if (f4 < f31) {
                        f31 = f4;
                    }
                }
            }
        }
    }
    f1 = (f64)rdf32(0x805778ecu);
    if (f1 != f31) {
        f5 = (f64)rdf32(param_4);
        f3 = (f64)rdf32(param_4 + 4u);
        f1 = (f64)rdf32(param_4 + 8u);
        c0eq = ((u32)rd16((u32)param_2 + 0x2cu) & 4u) == 0u;
        f0 = (f64)(f32)px_pmul(f31, (f64)(f32)px_psub((f64)rdf32(param_3 + 8u), f1));
        f2 = (f64)(f32)px_padd(f3, (f64)(f32)px_pmul(f31, (f64)(f32)px_psub((f64)rdf32(param_3 + 4u), f3)));
        wrf32d(param_8, (f64)(f32)px_padd(f5, (f64)(f32)px_pmul(f31, (f64)(f32)px_psub((f64)rdf32(param_3), f5))));
        f0 = (f64)(f32)px_padd(f1, f0);
        wrf32d(param_8 + 4u, f2);
        wrf32d(param_8 + 8u, f0);
        if (!c0eq && (((u32)param_5 + 0xffu) & 0xffu) <= 1u) {
            f0 = (f64)rdf32(0x805778f0u);
            f1 = ppc_fabs((f64)(f32)px_psub(f30, f31));
            if ((f1 < f0) || (f1 == f0)) {
                wrf32d(param_8, (f64)rdf32(0x805778e0u));
            }
            f0 = (f64)rdf32(0x805778f0u);
            f1 = ppc_fabs((f64)(f32)px_psub(f29, f31));
            if ((f1 < f0) || (f1 == f0)) {
                wrf32d(param_8, (f64)rdf32(0x805778e4u));
            }
            f0 = (f64)rdf32(0x805778f0u);
            f1 = ppc_fabs((f64)(f32)px_psub(f28, f31));
            if ((f1 < f0) || (f1 == f0)) {
                wrf32d(param_8 + 4u, (f64)rdf32(0x805778e0u));
            }
            f0 = (f64)rdf32(0x805778f0u);
            f1 = ppc_fabs((f64)(f32)px_psub(f27, f31));
            if ((f1 < f0) || (f1 == f0)) {
                wrf32d(param_8 + 4u, (f64)rdf32(0x805778e4u));
            }
            f0 = (f64)rdf32(0x805778f0u);
            f1 = ppc_fabs((f64)(f32)px_psub(f26, f31));
            if ((f1 < f0) || (f1 == f0)) {
                wrf32d(param_8 + 8u, (f64)rdf32(0x805778e0u));
            }
            f0 = (f64)rdf32(0x805778f0u);
            f1 = ppc_fabs((f64)(f32)px_psub(f25, f31));
            if ((f1 < f0) || (f1 == f0)) {
                wrf32d(param_8 + 8u, (f64)rdf32(0x805778e4u));
            }
        }
        a.r[0] = param_1;
        a.r[1] = param_8;
        a.r[2] = r11;
        (void)tc_call(0x8023411cu, &a);
        if (((u32)rd16((u32)param_2 + 0x2cu) & 2u) != 0u) {
            f0 = (f64)rdf32(0x805778f0u);
            f1 = ppc_fabs((f64)(f32)px_psub(f30, f31));
            if ((f1 < f0) || (f1 == f0)) {
                f1 = (f64)rdf32(0x805778e0u);
                wrf32d(param_7, (f64)(f32)px_pmul((f64)rdf32(param_7), f1));
                wrf32d(param_6, (f64)(f32)px_pmul((f64)rdf32(param_6), f1));
            } else {
                f1 = ppc_fabs((f64)(f32)px_psub(f29, f31));
                if ((f1 < f0) || (f1 == f0)) {
                    f1 = (f64)rdf32(0x805778e0u);
                    wrf32d(param_7, (f64)(f32)px_pmul((f64)rdf32(param_7), f1));
                    wrf32d(param_6, (f64)(f32)px_pmul((f64)rdf32(param_6), f1));
                }
            }
            f0 = (f64)rdf32(0x805778f0u);
            f1 = ppc_fabs((f64)(f32)px_psub(f28, f31));
            if ((f1 < f0) || (f1 == f0)) {
                f1 = (f64)rdf32(0x805778e0u);
                wrf32d(param_7 + 4u, (f64)(f32)px_pmul((f64)rdf32(param_7 + 4u), f1));
                wrf32d(param_6 + 4u, (f64)(f32)px_pmul((f64)rdf32(param_6 + 4u), f1));
            } else {
                f1 = ppc_fabs((f64)(f32)px_psub(f27, f31));
                if ((f1 < f0) || (f1 == f0)) {
                    f1 = (f64)rdf32(0x805778e0u);
                    wrf32d(param_7 + 4u, (f64)(f32)px_pmul((f64)rdf32(param_7 + 4u), f1));
                    wrf32d(param_6 + 4u, (f64)(f32)px_pmul((f64)rdf32(param_6 + 4u), f1));
                }
            }
            f0 = (f64)rdf32(0x805778f0u);
            f1 = ppc_fabs((f64)(f32)px_psub(f26, f31));
            do {
                if (!(f1 < f0) && f1 != f0) {
                    f1 = ppc_fabs((f64)(f32)px_psub(f25, f31));
                    if (!((f1 < f0) || (f1 == f0))) break;
                }
                f1 = (f64)rdf32(0x805778e0u);
                wrf32d(param_7 + 8u, (f64)(f32)px_pmul((f64)rdf32(param_7 + 8u), f1));
                wrf32d(param_6 + 8u, (f64)(f32)px_pmul((f64)rdf32(param_6 + 8u), f1));
            } while (0);
            f0 = (f64)rdf32(0x805778f0u);
            f1 = ppc_fabs((f64)(f32)px_psub(f30, f31));
            if ((f1 < f0) || (f1 == f0)) {
                wrf32d(param_8, (f64)rdf32(0x805778e4u));
            }
            f0 = (f64)rdf32(0x805778f0u);
            f1 = ppc_fabs((f64)(f32)px_psub(f29, f31));
            if ((f1 < f0) || (f1 == f0)) {
                wrf32d(param_8, (f64)rdf32(0x805778e0u));
            }
            f0 = (f64)rdf32(0x805778f0u);
            f1 = ppc_fabs((f64)(f32)px_psub(f28, f31));
            if ((f1 < f0) || (f1 == f0)) {
                wrf32d(param_8 + 4u, (f64)rdf32(0x805778e4u));
            }
            f0 = (f64)rdf32(0x805778f0u);
            f1 = ppc_fabs((f64)(f32)px_psub(f27, f31));
            if ((f1 < f0) || (f1 == f0)) {
                wrf32d(param_8 + 4u, (f64)rdf32(0x805778e0u));
            }
            f0 = (f64)rdf32(0x805778f0u);
            f1 = ppc_fabs((f64)(f32)px_psub(f26, f31));
            if ((f1 < f0) || (f1 == f0)) {
                wrf32d(param_8 + 8u, (f64)rdf32(0x805778e4u));
            }
            f0 = (f64)rdf32(0x805778f0u);
            f1 = ppc_fabs((f64)(f32)px_psub(f25, f31));
            if ((f1 < f0) || (f1 == f0)) {
                wrf32d(param_8 + 8u, (f64)rdf32(0x805778e0u));
            }
        }
        f1 = f31;
    }
    return f1;
}
