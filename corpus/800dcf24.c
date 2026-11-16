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

void fn_800dcf24(f64 param_1, f64 param_2, f64 param_3, u32 param_4, u32 param_5, s32 param_6)
{
    u32 r3 = 0, r30 = 0;
    f64 f1 = 0.0, f3 = 0.0;
    TcArgs a = {0};
    a.r[0] = 0x18u;
    a.r[1] = rd32(param_5);
    r3 = tc_call(0x8014d88cu, &a);
    r30 = r3;
    if (r3 != 0u) {
        f3 = (f64)(f32)px_psub(param_2, param_1);
        f1 = (f64)rdf32(0x80573a84u);
        wr32(r3 + 8u, 0x80356a54u);
        wrf32d(r3, (f64)rdf32(0x80573a80u));
        f1 = (f64)(f32)px_pmul((f64)(f32)px_padd(param_2, (f64)(f32)px_psub(param_2, f3)), f1);
        wrf32d(r3 + 4u, f1);
        wr32(r3 + 8u, 0x80356a20u);
        wrf32d(r3 + 0xcu, param_2);
        wrf32d(r3 + 0x10u, (f64)(f32)px_psub(param_3, param_2));
        wrf32d(r3 + 0x14u, f3);
    }
    wr32(param_5 + (((u32)param_6 << 2u) & 0xfffffffcu) + 4u, r3);
    a.f[0] = param_1;
    a.f[1] = param_3;
    a.r[0] = param_5;
    (void)tc_call(0x800dd2ccu, &a);
    wr32(param_4, 0u);
    wr32(param_4 + 4u, 0x80356a38u);
    wr32(param_4 + 8u, r30);
    return;
}
