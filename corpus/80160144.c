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

u32 fn_80160144(u32 param_1)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, r30 = 0;
    u32 r31 = 0, t5 = 0, t9 = 0, t13 = 0, t17 = 0, t21 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f3 = 0.0, f4 = 0.0, f5 = 0.0, f6 = 0.0, f7 = 0.0;
    TcArgs a = {0};
    wr32(param_1 + 0x150u, 0u);
    wr32(param_1 + 0x148u, 0u);
    a.r[0] = param_1;
    a.r[1] = 0u;
    a.r[2] = 0u;
    a.r[3] = 0u;
    a.r[4] = 0u;
    a.r[5] = 0u;
    a.r[6] = 0u;
    a.r[7] = 0u;
    a.f[0] = 0.0;
    a.f[1] = 0.0;
    a.f[2] = 0.0;
    a.f[3] = 0.0;
    a.f[4] = 0.0;
    a.f[5] = 0.0;
    a.f[6] = 0.0;
    f1 = tc_callf(rd32(rd32(param_1) + 0x2cu), &a);
    r30 = rd32(param_1 + 0x78u);
    r4 = rd32(param_1 + 0xf8u);
    wrf32d(param_1 + 0x168u, (f64)(f32)px_sfms((f64)rdf32(0x80574a84u), f1, (f64)rdf32(0x80574a88u)));
    a.r[0] = 0x8046ae40u;
    a.r[1] = r4;
    a.r[2] = 0u;
    r3 = tc_call(0x8013ec7cu, &a);
    a.f[0] = (f64)rdf32(0x80574a8cu);
    a.r[0] = r30;
    a.r[1] = r3;
    a.r[2] = 0u;
    (void)tc_call(0x80035740u, &a);
    r3 = rd32(param_1 + 0x78u);
    a.r[0] = r3;
    a.r[1] = r3;
    (void)tc_call(0x800315c0u, &a);
    r3 = rd32(param_1 + 0x78u);
    f1 = px_pack((f64)rdf32(r3), (f64)rdf32(r3));
    wrf32d(0x817fdfb8u, px_hi(f1));
    wrf32d(0x817fdfb8u, px_lo(f1));
    t5 = r3 + 8u;
    f2 = px_pack((f64)rdf32(t5), (f64)rdf32(t5));
    wrf32d(0x817fdfc0u, px_hi(f2));
    wrf32d(0x817fdfc0u, px_lo(f2));
    t9 = r3 + 0x10u;
    f3 = px_pack((f64)rdf32(t9), (f64)rdf32(t9));
    wrf32d(0x817fdfc8u, px_hi(f3));
    wrf32d(0x817fdfc8u, px_lo(f3));
    t13 = r3 + 0x18u;
    f4 = px_pack((f64)rdf32(t13), (f64)rdf32(t13));
    wrf32d(0x817fdfd0u, px_hi(f4));
    wrf32d(0x817fdfd0u, px_lo(f4));
    t17 = r3 + 0x20u;
    f5 = px_pack((f64)rdf32(t17), (f64)rdf32(t17));
    wrf32d(0x817fdfd8u, px_hi(f5));
    wrf32d(0x817fdfd8u, px_lo(f5));
    t21 = r3 + 0x28u;
    f6 = px_pack((f64)rdf32(t21), (f64)rdf32(t21));
    wrf32d(0x817fdfe0u, px_hi(f6));
    wrf32d(0x817fdfe0u, px_lo(f6));
    f0 = (f64)rdf32(0x80574a78u);
    r31 = rd32(0x817fdfbcu);
    r12 = rd32(0x817fdfc0u);
    r11 = rd32(0x817fdfc4u);
    r10 = rd32(0x817fdfc8u);
    r9 = rd32(0x817fdfccu);
    r8 = rd32(0x817fdfd0u);
    r7 = rd32(0x817fdfd4u);
    r6 = rd32(0x817fdfd8u);
    r5 = rd32(0x817fdfdcu);
    r4 = rd32(0x817fdfe0u);
    r0 = rd32(0x817fdfe4u);
    wr32(param_1 + 0x1a8u, rd32(0x817fdfb8u));
    f7 = (f64)rdf32(0x80574a80u);
    wr32(param_1 + 0x1acu, r31);
    wr32(param_1 + 0x1b0u, r12);
    wr32(param_1 + 0x1b4u, r11);
    wr32(param_1 + 0x1b8u, r10);
    wr32(param_1 + 0x1bcu, r9);
    wr32(param_1 + 0x1c0u, r8);
    wr32(param_1 + 0x1c4u, r7);
    wr32(param_1 + 0x1c8u, r6);
    wr32(param_1 + 0x1ccu, r5);
    wr32(param_1 + 0x1d0u, r4);
    wr32(param_1 + 0x1d4u, r0);
    wrf32d(param_1 + 0x194u, f0);
    wrf32d(param_1 + 0x1e4u, f0);
    f0 = (f64)(f32)px_pmul(f7, (f64)rdf32(0x80570878u));
    wr32(param_1 + 0x1d8u, 0u);
    wrf32d(param_1 + 0x1e8u, f0);
    return 0u;
}
