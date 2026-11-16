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

f64 fn_80319dd4(u32 param_1, s32 param_2, u32 param_3, u32 param_4, u32 param_5, u32 param_6, u32 param_7, u32 param_8, u32 param_9)
{
    u32 c0lt = 0, r0 = 0, r7 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f3 = 0.0, f4 = 0.0, f5 = 0.0, f31 = 0.0;
    TcArgs a = {0};
    (void)param_5;
    (void)param_9;
    r0 = (u32)rd8((u32)param_2 + 0x2au);
    r7 = rd32(0x817fe008u);
    c0lt = (s32)r0 < 1;
    if (r0 == 1u) {
        f0 = (f64)rdf32(0x805778f0u);
        if (!(ppc_fabs((f64)rdf32(param_4 + 8u)) < f0) || !(ppc_fabs((f64)rdf32(param_3 + 8u)) < f0)) {
            f1 = (f64)rdf32(param_4 + 8u);
            if (f1 > (f64)rdf32(0x805778e8u)) {
                f3 = (f64)rdf32(0x805778f0u);
                if ((f64)rdf32(param_3 + 8u) < f3) {
                    f1 = -f1;
                    f5 = px_pack((f64)rdf32(param_4), (f64)rdf32(param_4));
                    f2 = px_pack((f64)rdf32(param_3), (f64)rdf32(param_3));
                    f31 = (f64)(f32)px_pdiv(f1, (f64)rdf32(param_6 + 8u));
                    f0 = (f64)rdf32(0x805778f8u);
                    f4 = px_pack((f64)(f32)px_psub(px_hi(f2), px_hi(f5)), (f64)(f32)px_psub(px_lo(f2), px_lo(f5)));
                    f2 = px_pack((f64)rdf32(param_3 + 8u), 1.0);
                    f4 = px_pack((f64)(f32)px_pfma(px_hi(f4), px_hi(f31), px_hi(f5)), (f64)(f32)px_pfma(px_lo(f4), px_hi(f31), px_lo(f5)));
                    f5 = px_pack((f64)rdf32(param_4 + 8u), 1.0);
                    wrf32d(param_8, px_hi(f4));
                    wrf32d(param_8, px_lo(f4));
                    f4 = px_pack((f64)(f32)px_psub(px_hi(f2), px_hi(f5)), (f64)(f32)px_psub(px_lo(f2), px_lo(f5)));
                    f2 = (f64)rdf32(param_8);
                    f1 = (f64)rdf32(param_8 + 4u);
                    f4 = px_pack((f64)(f32)px_pfma(px_hi(f4), px_hi(f31), px_hi(f5)), (f64)(f32)px_pfma(px_lo(f4), px_hi(f31), px_lo(f5)));
                    f2 = (f64)(f32)px_pmul(f2, f2);
                    f1 = (f64)(f32)px_pmul(f1, f1);
                    wrf32d(param_8 + 8u, px_hi(f4));
                    f1 = (f64)(f32)px_padd(f2, f1);
                    if (!(f1 < f0)) {
                        f1 = (f64)rdf32(0x805778ecu);
                        return f1;
                    }
                    if (((u32)rd16((u32)param_2 + 0x2cu) & 2u) != 0u) {
                        f1 = (f64)rdf32(0x805778e0u);
                        wrf32d(param_7 + 8u, (f64)(f32)px_pmul((f64)rdf32(param_7 + 8u), f1));
                        wrf32d(param_6 + 8u, (f64)(f32)px_pmul((f64)rdf32(param_6 + 8u), f1));
                        wrf32d(param_8 + 8u, (f64)(f32)px_padd((f64)rdf32(param_8 + 8u), f3));
                    }
                    a.r[0] = param_1;
                    a.r[1] = param_8;
                    a.r[2] = r7;
                    (void)tc_call(0x8023411cu, &a);
                    f1 = f31;
                    return f1;
                }
            }
            f1 = (f64)rdf32(param_4 + 8u);
            if (f1 < (f64)rdf32(0x805778e8u)) {
                f3 = (f64)rdf32(0x805778f0u);
                if ((f64)rdf32(param_3 + 8u) > f3) {
                    f1 = -f1;
                    f5 = px_pack((f64)rdf32(param_4), (f64)rdf32(param_4));
                    f2 = px_pack((f64)rdf32(param_3), (f64)rdf32(param_3));
                    f31 = (f64)(f32)px_pdiv(f1, (f64)rdf32(param_6 + 8u));
                    f0 = (f64)rdf32(0x805778f8u);
                    f4 = px_pack((f64)(f32)px_psub(px_hi(f2), px_hi(f5)), (f64)(f32)px_psub(px_lo(f2), px_lo(f5)));
                    f2 = px_pack((f64)rdf32(param_3 + 8u), 1.0);
                    f4 = px_pack((f64)(f32)px_pfma(px_hi(f4), px_hi(f31), px_hi(f5)), (f64)(f32)px_pfma(px_lo(f4), px_hi(f31), px_lo(f5)));
                    f5 = px_pack((f64)rdf32(param_4 + 8u), 1.0);
                    wrf32d(param_8, px_hi(f4));
                    wrf32d(param_8, px_lo(f4));
                    f4 = px_pack((f64)(f32)px_psub(px_hi(f2), px_hi(f5)), (f64)(f32)px_psub(px_lo(f2), px_lo(f5)));
                    f2 = (f64)rdf32(param_8);
                    f1 = (f64)rdf32(param_8 + 4u);
                    f4 = px_pack((f64)(f32)px_pfma(px_hi(f4), px_hi(f31), px_hi(f5)), (f64)(f32)px_pfma(px_lo(f4), px_hi(f31), px_lo(f5)));
                    f2 = (f64)(f32)px_pmul(f2, f2);
                    f1 = (f64)(f32)px_pmul(f1, f1);
                    wrf32d(param_8 + 8u, px_hi(f4));
                    f1 = (f64)(f32)px_padd(f2, f1);
                    if (!(f1 < f0)) {
                        f1 = (f64)rdf32(0x805778ecu);
                        return f1;
                    }
                    if (((u32)rd16((u32)param_2 + 0x2cu) & 2u) != 0u) {
                        f1 = (f64)rdf32(0x805778e0u);
                        wrf32d(param_7 + 8u, (f64)(f32)px_pmul((f64)rdf32(param_7 + 8u), f1));
                        wrf32d(param_6 + 8u, (f64)(f32)px_pmul((f64)rdf32(param_6 + 8u), f1));
                        wrf32d(param_8 + 8u, (f64)(f32)px_psub((f64)rdf32(param_8 + 8u), f3));
                    }
                    a.r[0] = param_1;
                    a.r[1] = param_8;
                    a.r[2] = r7;
                    (void)tc_call(0x8023411cu, &a);
                    f1 = f31;
                    return f1;
                }
            }
            f1 = (f64)rdf32(0x805778ecu);
        } else {
            f1 = (f64)rdf32(0x805778ecu);
        }
    } else {
        if (!c0lt) {
            if ((s32)r0 < 3) {
                f0 = (f64)rdf32(0x805778f0u);
                if (ppc_fabs((f64)rdf32(param_4)) < f0 && ppc_fabs((f64)rdf32(param_3)) < f0) {
                    f1 = (f64)rdf32(0x805778ecu);
                    return f1;
                }
                f1 = (f64)rdf32(param_4);
                if (f1 > (f64)rdf32(0x805778e8u)) {
                    f3 = (f64)rdf32(0x805778f0u);
                    if ((f64)rdf32(param_3) < f3) {
                        f1 = -f1;
                        f5 = px_pack((f64)rdf32(param_4), (f64)rdf32(param_4));
                        f2 = px_pack((f64)rdf32(param_3), (f64)rdf32(param_3));
                        f31 = (f64)(f32)px_pdiv(f1, (f64)rdf32(param_6));
                        f0 = (f64)rdf32(0x805778f8u);
                        f4 = px_pack((f64)(f32)px_psub(px_hi(f2), px_hi(f5)), (f64)(f32)px_psub(px_lo(f2), px_lo(f5)));
                        f2 = px_pack((f64)rdf32(param_3 + 8u), 1.0);
                        f4 = px_pack((f64)(f32)px_pfma(px_hi(f4), px_hi(f31), px_hi(f5)), (f64)(f32)px_pfma(px_lo(f4), px_hi(f31), px_lo(f5)));
                        f5 = px_pack((f64)rdf32(param_4 + 8u), 1.0);
                        wrf32d(param_8, px_hi(f4));
                        wrf32d(param_8, px_lo(f4));
                        f4 = px_pack((f64)(f32)px_psub(px_hi(f2), px_hi(f5)), (f64)(f32)px_psub(px_lo(f2), px_lo(f5)));
                        f1 = (f64)rdf32(param_8 + 4u);
                        f4 = px_pack((f64)(f32)px_pfma(px_hi(f4), px_hi(f31), px_hi(f5)), (f64)(f32)px_pfma(px_lo(f4), px_hi(f31), px_lo(f5)));
                        f2 = (f64)(f32)px_pmul(f1, f1);
                        wrf32d(param_8 + 8u, px_hi(f4));
                        f1 = (f64)rdf32(param_8 + 8u);
                        f1 = (f64)(f32)px_pmul(f1, f1);
                        f1 = (f64)(f32)px_padd(f2, f1);
                        if (!(f1 < f0)) {
                            f1 = (f64)rdf32(0x805778ecu);
                            return f1;
                        }
                        if (((u32)rd16((u32)param_2 + 0x2cu) & 2u) != 0u) {
                            f1 = (f64)rdf32(0x805778e0u);
                            wrf32d(param_7, (f64)(f32)px_pmul((f64)rdf32(param_7), f1));
                            wrf32d(param_6, (f64)(f32)px_pmul((f64)rdf32(param_6), f1));
                            wrf32d(param_8, (f64)(f32)px_padd((f64)rdf32(param_8), f3));
                        }
                        a.r[0] = param_1;
                        a.r[1] = param_8;
                        a.r[2] = r7;
                        (void)tc_call(0x8023411cu, &a);
                        f1 = f31;
                        return f1;
                    }
                }
                f1 = (f64)rdf32(param_4);
                if (f1 < (f64)rdf32(0x805778e8u)) {
                    f3 = (f64)rdf32(0x805778f0u);
                    if ((f64)rdf32(param_3) > f3) {
                        f1 = -f1;
                        f5 = px_pack((f64)rdf32(param_4), (f64)rdf32(param_4));
                        f2 = px_pack((f64)rdf32(param_3), (f64)rdf32(param_3));
                        f31 = (f64)(f32)px_pdiv(f1, (f64)rdf32(param_6));
                        f0 = (f64)rdf32(0x805778f8u);
                        f4 = px_pack((f64)(f32)px_psub(px_hi(f2), px_hi(f5)), (f64)(f32)px_psub(px_lo(f2), px_lo(f5)));
                        f2 = px_pack((f64)rdf32(param_3 + 8u), 1.0);
                        f4 = px_pack((f64)(f32)px_pfma(px_hi(f4), px_hi(f31), px_hi(f5)), (f64)(f32)px_pfma(px_lo(f4), px_hi(f31), px_lo(f5)));
                        f5 = px_pack((f64)rdf32(param_4 + 8u), 1.0);
                        wrf32d(param_8, px_hi(f4));
                        wrf32d(param_8, px_lo(f4));
                        f4 = px_pack((f64)(f32)px_psub(px_hi(f2), px_hi(f5)), (f64)(f32)px_psub(px_lo(f2), px_lo(f5)));
                        f1 = (f64)rdf32(param_8 + 4u);
                        f4 = px_pack((f64)(f32)px_pfma(px_hi(f4), px_hi(f31), px_hi(f5)), (f64)(f32)px_pfma(px_lo(f4), px_hi(f31), px_lo(f5)));
                        f2 = (f64)(f32)px_pmul(f1, f1);
                        wrf32d(param_8 + 8u, px_hi(f4));
                        f1 = (f64)rdf32(param_8 + 8u);
                        f1 = (f64)(f32)px_pmul(f1, f1);
                        f1 = (f64)(f32)px_padd(f2, f1);
                        if (!(f1 < f0)) {
                            f1 = (f64)rdf32(0x805778ecu);
                            return f1;
                        }
                        if (((u32)rd16((u32)param_2 + 0x2cu) & 2u) != 0u) {
                            f1 = (f64)rdf32(0x805778e0u);
                            wrf32d(param_7, (f64)(f32)px_pmul((f64)rdf32(param_7), f1));
                            wrf32d(param_6, (f64)(f32)px_pmul((f64)rdf32(param_6), f1));
                            wrf32d(param_8, (f64)(f32)px_psub((f64)rdf32(param_8), f3));
                        }
                        a.r[0] = param_1;
                        a.r[1] = param_8;
                        a.r[2] = r7;
                        (void)tc_call(0x8023411cu, &a);
                        f1 = f31;
                        return f1;
                    }
                }
                f1 = (f64)rdf32(0x805778ecu);
                return f1;
            }
        } else if ((s32)r0 >= 0) {
            f0 = (f64)rdf32(0x805778f0u);
            if (!(ppc_fabs((f64)rdf32(param_4 + 4u)) < f0) || !(ppc_fabs((f64)rdf32(param_3 + 4u)) < f0)) {
                f1 = (f64)rdf32(param_4 + 4u);
                if (f1 > (f64)rdf32(0x805778e8u)) {
                    f3 = (f64)rdf32(0x805778f0u);
                    if ((f64)rdf32(param_3 + 4u) < f3) {
                        f1 = -f1;
                        f5 = px_pack((f64)rdf32(param_4), (f64)rdf32(param_4));
                        f2 = px_pack((f64)rdf32(param_3), (f64)rdf32(param_3));
                        f31 = (f64)(f32)px_pdiv(f1, (f64)rdf32(param_6 + 4u));
                        f0 = (f64)rdf32(0x805778f8u);
                        f4 = px_pack((f64)(f32)px_psub(px_hi(f2), px_hi(f5)), (f64)(f32)px_psub(px_lo(f2), px_lo(f5)));
                        f2 = px_pack((f64)rdf32(param_3 + 8u), 1.0);
                        f4 = px_pack((f64)(f32)px_pfma(px_hi(f4), px_hi(f31), px_hi(f5)), (f64)(f32)px_pfma(px_lo(f4), px_hi(f31), px_lo(f5)));
                        f5 = px_pack((f64)rdf32(param_4 + 8u), 1.0);
                        wrf32d(param_8, px_hi(f4));
                        wrf32d(param_8, px_lo(f4));
                        f4 = px_pack((f64)(f32)px_psub(px_hi(f2), px_hi(f5)), (f64)(f32)px_psub(px_lo(f2), px_lo(f5)));
                        f1 = (f64)rdf32(param_8);
                        f4 = px_pack((f64)(f32)px_pfma(px_hi(f4), px_hi(f31), px_hi(f5)), (f64)(f32)px_pfma(px_lo(f4), px_hi(f31), px_lo(f5)));
                        f2 = (f64)(f32)px_pmul(f1, f1);
                        wrf32d(param_8 + 8u, px_hi(f4));
                        f1 = (f64)rdf32(param_8 + 8u);
                        f1 = (f64)(f32)px_pmul(f1, f1);
                        f1 = (f64)(f32)px_padd(f2, f1);
                        if (!(f1 < f0)) {
                            f1 = (f64)rdf32(0x805778ecu);
                            return f1;
                        }
                        if (((u32)rd16((u32)param_2 + 0x2cu) & 2u) != 0u) {
                            f1 = (f64)rdf32(0x805778e0u);
                            wrf32d(param_7 + 4u, (f64)(f32)px_pmul((f64)rdf32(param_7 + 4u), f1));
                            wrf32d(param_6 + 4u, (f64)(f32)px_pmul((f64)rdf32(param_6 + 4u), f1));
                            wrf32d(param_8 + 4u, (f64)(f32)px_padd((f64)rdf32(param_8 + 4u), f3));
                        }
                        a.r[0] = param_1;
                        a.r[1] = param_8;
                        a.r[2] = r7;
                        (void)tc_call(0x8023411cu, &a);
                        f1 = f31;
                        return f1;
                    }
                }
                f1 = (f64)rdf32(param_4 + 4u);
                if (f1 < (f64)rdf32(0x805778e8u)) {
                    f3 = (f64)rdf32(0x805778f0u);
                    if ((f64)rdf32(param_3 + 4u) > f3) {
                        f1 = -f1;
                        f5 = px_pack((f64)rdf32(param_4), (f64)rdf32(param_4));
                        f2 = px_pack((f64)rdf32(param_3), (f64)rdf32(param_3));
                        f31 = (f64)(f32)px_pdiv(f1, (f64)rdf32(param_6 + 4u));
                        f0 = (f64)rdf32(0x805778f8u);
                        f4 = px_pack((f64)(f32)px_psub(px_hi(f2), px_hi(f5)), (f64)(f32)px_psub(px_lo(f2), px_lo(f5)));
                        f2 = px_pack((f64)rdf32(param_3 + 8u), 1.0);
                        f4 = px_pack((f64)(f32)px_pfma(px_hi(f4), px_hi(f31), px_hi(f5)), (f64)(f32)px_pfma(px_lo(f4), px_hi(f31), px_lo(f5)));
                        f5 = px_pack((f64)rdf32(param_4 + 8u), 1.0);
                        wrf32d(param_8, px_hi(f4));
                        wrf32d(param_8, px_lo(f4));
                        f4 = px_pack((f64)(f32)px_psub(px_hi(f2), px_hi(f5)), (f64)(f32)px_psub(px_lo(f2), px_lo(f5)));
                        f1 = (f64)rdf32(param_8);
                        f4 = px_pack((f64)(f32)px_pfma(px_hi(f4), px_hi(f31), px_hi(f5)), (f64)(f32)px_pfma(px_lo(f4), px_hi(f31), px_lo(f5)));
                        f2 = (f64)(f32)px_pmul(f1, f1);
                        wrf32d(param_8 + 8u, px_hi(f4));
                        f1 = (f64)rdf32(param_8 + 8u);
                        f1 = (f64)(f32)px_pmul(f1, f1);
                        f1 = (f64)(f32)px_padd(f2, f1);
                        if (!(f1 < f0)) {
                            f1 = (f64)rdf32(0x805778ecu);
                            return f1;
                        }
                        if (((u32)rd16((u32)param_2 + 0x2cu) & 2u) != 0u) {
                            f1 = (f64)rdf32(0x805778e0u);
                            wrf32d(param_7 + 4u, (f64)(f32)px_pmul((f64)rdf32(param_7 + 4u), f1));
                            wrf32d(param_6 + 4u, (f64)(f32)px_pmul((f64)rdf32(param_6 + 4u), f1));
                            wrf32d(param_8 + 4u, (f64)(f32)px_psub((f64)rdf32(param_8 + 4u), f3));
                        }
                        a.r[0] = param_1;
                        a.r[1] = param_8;
                        a.r[2] = r7;
                        (void)tc_call(0x8023411cu, &a);
                        f1 = f31;
                        return f1;
                    }
                }
                f1 = (f64)rdf32(0x805778ecu);
                return f1;
            }
            f1 = (f64)rdf32(0x805778ecu);
            return f1;
        }
        f1 = (f64)rdf32(0x805778ecu);
    }
    return f1;
}
