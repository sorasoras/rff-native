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

u32 fn_802d853c(u32 param_1, s32 param_2, u32 param_3)
{
    u32 c0lt = 0, r3 = 0, r30 = 0, r31 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f3 = 0.0, f4 = 0.0, f30 = 0.0, f31 = 0.0;
    TcArgs a = {0};
    (void)param_1;
    c0lt = param_2 < 10;
    if ((u32)param_2 == 0xau) {
        r31 = rd32(param_3);
        f30 = (f64)rdf32(param_3 + 8u);
        a.r[0] = r31;
        f1 = tc_callf(0x802d8cbcu, &a);
        f31 = f1;
        a.r[0] = r31;
        f1 = tc_callf(0x802d732cu, &a);
        a.f[0] = f30;
        a.f[1] = (f64)(f32)px_padd(f1, f31);
        a.r[0] = r31;
        (void)tc_call(0x802d72e8u, &a);
        r3 = 3u;
    } else {
        if (c0lt && param_2 >= 9) {
            r30 = rd32(param_3);
            a.r[0] = r30;
            r3 = tc_call(0x802d8d48u, &a);
            r31 = r3;
            if ((s32)r3 > 0) {
                a.r[0] = r30;
                r3 = tc_call(0x802d719cu, &a);
                if (r3 == 0u) {
                    a.r[0] = r30;
                    f1 = tc_callf(0x802d7070u, &a);
                    f31 = f1;
                } else {
                    a.r[0] = r30;
                    f1 = tc_callf(0x802d71a4u, &a);
                    f31 = f1;
                }
                a.r[0] = r30;
                f1 = tc_callf(0x802d7324u, &a);
                f3 = (f64)rdf32(param_3 + 8u);
                f2 = rdf64(0x80348af8u);
                f4 = (f64)(f32)px_psub(f1, f3);
                f1 = (f64)(f32)px_pmul((f64)(f32)px_psub(px_b2f((u64)(r31 ^ 0x80000000u) | 0x4330000000000000ull), f2), f31);
                f0 = (f64)(f32)px_pdiv(f4, f1);
                f0 = px_ctiw(f0, ppc_fctiwz(f0));
                f0 = px_b2f((u64)(((u32)px_f2b(f0) + 1u) ^ 0x80000000u) | 0x4330000000000000ull);
                f0 = (f64)(f32)px_psub(f0, f2);
                f0 = (f64)(f32)px_pmul(f1, f0);
                a.f[0] = (f64)(f32)px_padd(f3, f0);
                a.r[0] = r30;
                (void)tc_call(0x802d72f4u, &a);
            }
            r3 = 1u;
            return r3;
        }
        r3 = 0u;
    }
    return r3;
}
