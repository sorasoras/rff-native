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

void fn_800d47a8(u32 param_1)
{
    u32 r3 = 0, r31 = 0;
    f64 f1 = 0.0, f29 = 0.0, f30 = 0.0, f31 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdfb0u, 0x817fe000u);
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
    wr32(0x817fdfccu, 0u);
    wr32(0x817fdfc8u, 0u);
    a.r[0] = param_1;
    r3 = tc_call(0x800d5790u, &a);
    if (r3 != 0u) {
        a.r[0] = param_1;
        r3 = tc_call(0x800d57a4u, &a);
        if (r3 != 0u) {
            return;
        }
        a.r[0] = param_1;
        f1 = tc_callf(0x800d59e8u, &a);
        f29 = f1;
        a.r[0] = param_1;
        f1 = tc_callf(0x800d59f0u, &a);
        f30 = f1;
        f1 = tc_callf(0x800d3b08u, &a);
        f31 = f1;
        a.r[0] = param_1;
        f1 = tc_callf(0x800d3b00u, &a);
        f31 = (f64)(f32)px_padd(f1, f31);
        a.r[0] = param_1;
        r3 = tc_call(0x800d569cu, &a);
        r3 = r3 ^ 0x80000000u;
        wr32(0x817fdfc4u, r3);
        f1 = rdf64(0x80573158u);
        wr32(0x817fdfc0u, 0x43300000u);
        f30 = (f64)(f32)px_sfma((f64)(f32)px_psub(rdf64(0x817fdfc0u), f1), f31, f30);
        a.r[0] = param_1;
        r3 = tc_call(0x800d5640u, &a);
        r31 = r3;
        r3 = tc_call(0x80052c3cu, &a);
        a.r[0] = r3;
        a.r[1] = r31;
        a.r[2] = 0x817fdfb8u;
        (void)tc_call(0x800ccfb8u, &a);
        a.r[0] = param_1;
        f1 = tc_callf(0x800d3b00u, &a);
        f31 = f1;
        a.f[0] = (f64)rdf32(0x817fdfb8u);
        f1 = tc_callf(0x800d5a48u, &a);
        wrf32d(0x817fdfb8u, f1);
        a.f[0] = f29;
        a.f[1] = f30;
        a.f[2] = (f64)(f32)f1;
        a.f[3] = f31;
        (void)tc_call(0x800d5a98u, &a);
    }
    return;
}
