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

static f64 px_ctiw(f64 b, s32 w)
{
    u64 r = 0xfff8000000000000ull | (u32)w;
    if (w == 0 && (px_f2b(b) >> 63) != 0) r |= 0x100000000ull;
    return px_b2f(r);
}

void fn_80154964(u32 param_r3, u32 param_r4)
{
    u32 c0eq = 0, r3 = 0, r26 = 0, r27 = 0, r28 = 0, r29 = 0, r30 = 0;
    f64 f0 = 0.0, f1 = 0.0, f31 = 0.0;
    TcArgs a = {0};
    (void)param_r4;
    r27 = param_r3 + 0x80u;
    r26 = 2u;
    for (;;) {
        r30 = 0u;
        if ((u32)rd8(r27) != 0u) {
            r29 = 1u;
            c0eq = rd32(r27 + 4u) == 0u;
            if (!c0eq) {
                r28 = 0u;
                if (!c0eq) {
                    a.r[0] = r27;
                    r3 = tc_call(0x80153c3cu, &a);
                    if (r3 == 0u) {
                        r28 = 1u;
                    }
                }
                if (r28 == 0u) {
                    r29 = 0u;
                }
            }
            if (r29 != 0u) {
                r30 = 1u;
            }
        }
        if (r30 != 0u) break;
        r26 = r26 - 1u;
        r27 = r27 - 0x3cu;
        if ((s32)r26 < 0) {
            return;
        }
    }
    r30 = rd32(param_r3 + 4u);
    a.r[0] = r27;
    r3 = tc_call(0x80153cd4u, &a);
    f31 = (f64)(f32)px_psub((f64)rdf32(r3), (f64)rdf32(r30 + 0xcf4u));
    a.r[0] = r27;
    r3 = tc_call(0x80153cd4u, &a);
    a.f[0] = f31;
    a.f[1] = (f64)(f32)px_psub((f64)rdf32(r3 + 8u), (f64)rdf32(r30 + 0xcfcu));
    f1 = tc_callf(0x80262c68u, &a);
    f1 = (f64)(f32)f1;
    f0 = (f64)(f32)px_pmul((f64)rdf32(0x805748c4u), f1);
    f0 = px_ctiw(f0, ppc_fctiwz(f0));
    r26 = (u32)px_f2b(f0);
    a.r[0] = r30;
    a.r[1] = tc_lastr4();
    a.r[2] = 0u;
    a.f[0] = f1;
    a.f[1] = 0.0;
    f1 = tc_callf(rd32(rd32(r30) + 0x2cu), &a);
    f0 = (f64)(f32)px_pmul((f64)rdf32(0x805748c4u), f1);
    f0 = px_ctiw(f0, ppc_fctiwz(f0));
    (void)((s32)(s16)((u32)(s16)r26 - (u32)(s16)px_f2b(f0)) <= 0);
    return;
}
