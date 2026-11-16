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

f64 fn_801f80f8(s32 param_1)
{
    u32 r3 = 0, r4 = 0, r30 = 0, r31 = 0;
    f64 f1 = 0.0, f30 = 0.0, f31 = 0.0;
    TcArgs a = {0};
    a.r[0] = (u32)param_1;
    r3 = tc_call(0x800d56bcu, &a);
    f31 = (f64)rdf32(0x8057663cu);
    r31 = r3;
    if (r3 != 0u) {
        r30 = 0u;
        while (r30 < r31) {
            a.r[0] = (u32)param_1;
            a.r[1] = r30;
            f1 = tc_callf(0x801f8054u, &a);
            f30 = f1;
            a.r[0] = (u32)param_1;
            r3 = tc_call(0x801f8428u, &a);
            f1 = tc_lastf();
            r4 = tc_lastr4();
            if (r3 == 0u) {
                f31 = (f64)(f32)px_padd(f31, f30);
                if ((r30 + 1u) < r31) {
                    a.r[0] = (u32)param_1;
                    a.r[1] = r4;
                    a.f[0] = f1;
                    f1 = tc_callf(rd32(rd32((u32)param_1 + 0x738u) + 0x1cu), &a);
                    f31 = (f64)(f32)px_padd(f31, f1);
                }
            } else {
                if (!(f30 > f31)) {
                    f30 = f31;
                }
                f31 = f30;
            }
            r30 = r30 + 1u;
        }
        f1 = f31;
    } else {
        a.r[0] = (u32)param_1;
        f1 = tc_callf(0x800d59f8u, &a);
        a.f[0] = f1;
        f1 = tc_callf(0x800d5a48u, &a);
    }
    return f1;
}
