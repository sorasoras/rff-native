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

static f64 px_ctiw(f64 b, s32 w)
{
    u64 r = 0xfff8000000000000ull | (u32)w;
    if (w == 0 && (px_f2b(b) >> 63) != 0) r |= 0x100000000ull;
    return px_b2f(r);
}

void fn_802def04(u32 param_1, u32 param_2, s32 param_3, u32 param_4)
{
    u32 c0lt = 0, r3 = 0, r29 = 0, r30 = 0, r31 = 0;
    f64 f0 = 0.0, f1 = tc_argf(0u), f2 = tc_argf(1u), f3 = tc_argf(2u), f4 = tc_argf(3u), f5 = tc_argf(4u), f6 = tc_argf(5u), f7 = tc_argf(6u), f30 = 0.0, f31 = 0.0;
    TcArgs a = {0};
    (void)param_1;
    c0lt = param_3 < 10;
    if ((u32)param_3 == 0xau) {
        r30 = rd32(param_4);
        wrf32d(param_2 + 8u, (f64)rdf32(r30 + 0x2cu));
        wrf32d(param_2 + 4u, (f64)rdf32(r30 + 0x30u));
        r31 = rd32(param_4);
        f31 = (f64)rdf32(param_4 + 8u);
        f30 = (f64)rdf32(r31 + 0x30u);
        a.r[0] = r31;
        f1 = tc_callf(0x802e22c4u, &a);
        r3 = tc_lastr();
        wrf32d(r31 + 0x2cu, f31);
        wrf32d(r31 + 0x30u, (f64)(f32)px_padd(f30, f1));
        wrf32d(param_2, (f64)rdf32(r30 + 0x2cu));
        f30 = (f64)rdf32(r30 + 0x30u);
        a.r[0] = rd32(param_4);
        f1 = tc_callf(0x802e19bcu, &a);
        r3 = tc_lastr();
        f0 = (f64)(f32)px_padd(f30, f1);
        f6 = (f64)rdf32(param_2 + 4u);
        f7 = (f64)rdf32(param_2);
        f5 = (f64)rdf32(param_2 + 8u);
        f2 = (f64)(f32)px_psub(f0, f6);
        f3 = (f64)(f32)px_psub(f5, f7);
        f1 = ppc_fsel(f2, f6, f0);
        f4 = ppc_fsel(f3, f7, f5);
        f3 = ppc_fsel(f3, f5, f7);
        f0 = ppc_fsel(f2, f0, f6);
        wrf32d(param_2 + 4u, f1);
        wrf32d(param_2, f4);
        wrf32d(param_2 + 8u, f3);
        wrf32d(param_2 + 0xcu, f0);
    } else if (c0lt && param_3 >= 9) {
        r29 = rd32(param_4);
        wrf32d(param_2, (f64)rdf32(r29 + 0x2cu));
        r31 = rd32(param_4);
        r30 = rd32(r31 + 0x58u);
        if ((s32)r30 > 0) {
            if ((u32)rd8(r31 + 0x43u) == 0u) {
                a.r[0] = r31;
                f1 = tc_callf(0x802e195cu, &a);
                r3 = tc_lastr();
            } else {
                f1 = (f64)rdf32(r31 + 0x44u);
            }
            f2 = rdf64(0x80577418u);
            f4 = (f64)rdf32(r31 + 0x2cu);
            f3 = (f64)rdf32(param_4 + 8u);
            f4 = (f64)(f32)px_psub(f4, f3);
            f1 = (f64)(f32)px_pmul((f64)(f32)px_psub(px_b2f((u64)(r30 ^ 0x80000000u) | 0x4330000000000000ull), f2), f1);
            f0 = (f64)(f32)px_pdiv(f4, f1);
            f0 = px_ctiw(f0, ppc_fctiwz(f0));
            f0 = px_b2f((u64)(((u32)px_f2b(f0) + 1u) ^ 0x80000000u) | 0x4330000000000000ull);
            f0 = (f64)(f32)px_psub(f0, f2);
            f0 = (f64)(f32)px_pmul(f1, f0);
            f0 = (f64)(f32)px_padd(f3, f0);
            wrf32d(r31 + 0x2cu, f0);
        }
        wrf32d(param_2 + 8u, (f64)rdf32(r29 + 0x2cu));
        wrf32d(param_2 + 4u, (f64)rdf32(r29 + 0x30u));
        a.r[0] = r29;
        f1 = tc_callf(0x802e19bcu, &a);
        r3 = tc_lastr();
        f2 = (f64)rdf32(param_2 + 4u);
        f6 = (f64)rdf32(param_2);
        f0 = (f64)(f32)px_padd(f2, f1);
        f4 = (f64)rdf32(param_2 + 8u);
        f1 = (f64)(f32)px_psub(f4, f6);
        f3 = (f64)(f32)px_psub(f0, f2);
        f5 = ppc_fsel(f1, f6, f4);
        f4 = ppc_fsel(f1, f4, f6);
        f1 = ppc_fsel(f3, f2, f0);
        f0 = ppc_fsel(f3, f0, f2);
        wrf32d(param_2, f5);
        wrf32d(param_2 + 8u, f4);
        wrf32d(param_2 + 4u, f1);
        wrf32d(param_2 + 0xcu, f0);
    }
    return;
}
