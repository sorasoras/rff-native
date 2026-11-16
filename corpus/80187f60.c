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

void fn_80187f60(u32 param_1)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r5 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f3 = 0.0, f4 = 0.0, f30 = 0.0, f31 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdf90u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wrf64(0x817fdff0u, 0.0);
    wrf32d(0x817fdff8u, px_hi(0.0));
    wrf32d(0x817fdff8u, px_lo(0.0));
    wrf64(0x817fdfe0u, 0.0);
    wrf32d(0x817fdfe8u, px_hi(0.0));
    wrf32d(0x817fdfe8u, px_lo(0.0));
    f0 = (f64)rdf32(0x805751f4u);
    wr32(0x817fdfdcu, 0u);
    wrf32d(0x817fdfd0u, f0);
    wrf32d(0x817fdfccu, f0);
    wrf32d(0x817fdfc8u, f0);
    a.r[0] = param_1;
    a.r[1] = 0x817fdfc8u;
    f1 = tc_callf(0x80188438u, &a);
    r5 = rd32(0x804890d4u);
    r4 = rd32(0x804890d8u);
    r0 = rd32(0x804890dcu);
    wr32(0x817fdfbcu, r5);
    wr32(0x817fdfc0u, r4);
    wr32(0x817fdfc4u, r0);
    a.r[0] = param_1;
    a.r[1] = r4;
    a.r[2] = r5;
    a.r[3] = 0x804890d4u;
    a.r[4] = 0u;
    a.r[5] = 0u;
    a.r[6] = 0u;
    a.f[0] = f1;
    a.f[1] = 0.0;
    a.f[2] = 0.0;
    a.f[3] = 0.0;
    f1 = tc_callf(rd32(rd32(param_1) + 0x2cu), &a);
    f31 = f1;
    r3 = rd32(0x817fdfc0u);
    r0 = rd32(0x817fdfc4u);
    wr32(0x817fdf98u, rd32(0x817fdfbcu));
    wr32(0x817fdf9cu, r3);
    wr32(0x817fdfa0u, r0);
    a.f[0] = f1;
    f1 = tc_callf(0x80262704u, &a);
    f30 = (f64)(f32)f1;
    a.f[0] = f31;
    f1 = tc_callf(0x80262b10u, &a);
    f4 = (f64)(f32)f1;
    f1 = (f64)rdf32(0x817fdfa0u);
    f3 = (f64)rdf32(0x817fdf98u);
    f0 = (f64)(f32)px_pmul(f1, f30);
    f2 = (f64)(f32)px_pmul(f1, f4);
    f1 = -f4;
    f2 = (f64)(f32)px_sfma(f3, f30, f2);
    f0 = (f64)(f32)px_sfma(f3, f1, f0);
    wrf32d(0x817fdfbcu, f2);
    wrf32d(0x817fdfc4u, f0);
    a.r[0] = param_1;
    a.r[1] = tc_lastr4();
    a.r[2] = 0u;
    a.r[3] = 0u;
    a.r[4] = 0u;
    a.r[5] = 0u;
    a.r[6] = 0u;
    a.f[0] = f1;
    a.f[1] = f2;
    a.f[2] = f3;
    a.f[3] = f4;
    f1 = tc_callf(rd32(rd32(param_1) + 0x2cu), &a);
    f0 = (f64)rdf32(0x805751f4u);
    wrf32d(0x817fdfa8u, f1);
    f1 = (f64)rdf32(0x805751b8u);
    wrf32d(0x817fdfa4u, f0);
    wrf32d(0x817fdfacu, f0);
    a.f[0] = f1;
    a.r[0] = 0x12u;
    a.r[1] = 0x817fdfc8u;
    a.r[2] = 0x817fdfa4u;
    a.r[3] = 0x804890c8u;
    (void)tc_call(0x800d783cu, &a);
    r5 = rd32(0x817fdfc0u);
    r0 = rd32(0x817fdfc4u);
    wr32(0x817fdfb0u, rd32(0x817fdfbcu));
    f1 = (f64)rdf32(0x805751bcu);
    wr32(0x817fdfb4u, r5);
    wr32(0x817fdfb8u, r0);
    a.f[0] = f1;
    a.r[0] = 0x817fdfb0u;
    a.r[1] = 0x817fdfb0u;
    (void)tc_call(0x802343c8u, &a);
    a.f[0] = (f64)rdf32(0x8057520cu);
    a.f[1] = (f64)rdf32(0x80575210u);
    a.f[2] = (f64)rdf32(param_1 + 0xad0u);
    a.r[0] = param_1 + 0xad4u;
    a.r[1] = param_1;
    a.r[2] = 0x817fdfc8u;
    a.r[3] = 0x817fdfbcu;
    a.r[4] = 0x817fdfb0u;
    a.r[5] = 0x10800au;
    a.r[6] = 0u;
    (void)tc_call(0x8018b79cu, &a);
    a.r[0] = param_1;
    a.r[1] = 0xbu;
    (void)tc_call(0x801867a0u, &a);
    return;
}
