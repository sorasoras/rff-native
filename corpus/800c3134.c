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

void fn_800c3134(u32 param_1)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f3 = 0.0, f4 = 0.0, f5 = 0.0, f30 = 0.0, f31 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdfa0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wrf64(0x817fdff0u, 0.0);
    wrf32d(0x817fdff8u, px_hi(0.0));
    wrf32d(0x817fdff8u, px_lo(0.0));
    wrf64(0x817fdfe0u, 0.0);
    wrf32d(0x817fdfe8u, px_hi(0.0));
    wrf32d(0x817fdfe8u, px_lo(0.0));
    f0 = (f64)rdf32(0x80572f00u);
    wr32(0x817fdfdcu, 0u);
    f1 = (f64)rdf32(0x80572ea8u);
    f2 = (f64)rdf32(param_1 + 0x948u);
    f0 = (f64)(f32)px_padd(f2, f0);
    wrf32d(param_1 + 0x948u, f0);
    a.r[0] = param_1;
    a.r[1] = 9u;
    a.r[2] = 0u;
    a.r[3] = 0u;
    a.f[0] = f1;
    a.f[1] = f2;
    a.f[2] = 0.0;
    a.f[3] = 0.0;
    a.f[4] = 0.0;
    a.f[5] = 0.0;
    (void)tc_call(rd32(rd32(param_1) + 0x54u), &a);
    f30 = (f64)rdf32(param_1 + 0x968u);
    wr32(param_1 + 0x290u, 0x1bu);
    r4 = rd32(0x804890d4u);
    r3 = rd32(0x804890d8u);
    r0 = rd32(0x804890dcu);
    wr32(0x817fdfccu, r4);
    wr32(0x817fdfd0u, r3);
    wr32(0x817fdfd4u, r0);
    wr32(0x817fdfa8u, r4);
    wr32(0x817fdfacu, r3);
    wr32(0x817fdfb0u, r0);
    a.f[0] = f30;
    f1 = tc_callf(0x80262704u, &a);
    f31 = (f64)(f32)f1;
    a.f[0] = f30;
    f1 = tc_callf(0x80262b10u, &a);
    f3 = (f64)(f32)f1;
    f1 = (f64)rdf32(0x817fdfb0u);
    f2 = (f64)(f32)px_pmul(f1, f31);
    f5 = (f64)rdf32(0x817fdfa8u);
    f4 = (f64)(f32)px_pmul(f1, f3);
    f1 = (f64)rdf32(0x80572f04u);
    f3 = -f3;
    f4 = (f64)(f32)px_sfma(f5, f31, f4);
    f0 = (f64)(f32)px_sfma(f5, f3, f2);
    wrf32d(0x817fdfb8u, -(f64)rdf32(0x817fdfd0u));
    r5 = rd32(0x817fdfb8u);
    wrf32d(0x817fdfccu, f4);
    wrf32d(0x817fdfb4u, -f4);
    wrf32d(0x817fdfbcu, -f0);
    r6 = rd32(0x817fdfb4u);
    r0 = rd32(0x817fdfbcu);
    wrf32d(0x817fdfd4u, f0);
    wr32(0x817fdfc0u, r6);
    wr32(0x817fdfc4u, r5);
    wr32(0x817fdfc8u, r0);
    a.f[0] = f1;
    a.r[0] = 0x817fdfc0u;
    a.r[1] = 0x817fdfc0u;
    (void)tc_call(0x802343c8u, &a);
    wrf32d(param_1 + 0x974u, (f64)rdf32(0x817fdfc0u));
    wrf32d(param_1 + 0x978u, (f64)rdf32(0x817fdfc4u));
    wrf32d(param_1 + 0x97cu, (f64)rdf32(0x817fdfc8u));
    a.r[0] = param_1;
    a.r[1] = tc_lastr4();
    a.r[2] = 0u;
    a.r[3] = 0u;
    a.f[0] = f30;
    a.f[1] = 0.0;
    a.f[2] = 0.0;
    a.f[3] = 0.0;
    a.f[4] = 0.0;
    a.f[5] = 0.0;
    (void)tc_call(rd32(rd32(param_1) + 0x24u), &a);
    wrf32d(param_1 + 0x98cu, (f64)rdf32(0x80572f08u));
    return;
}
