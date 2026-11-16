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

f64 fn_8020c544(s32 param_1)
{
    u32 r4 = 0, t0 = 0, t8 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f3 = 0.0, f4 = 0.0;
    TcArgs a = {0};
    a.r[0] = (rd32(0x805710e0u) * 0x6d0u) - 0x7fc2e738u;
    a.r[1] = 6u;
    (void)tc_call(0x800564f8u, &a);
    r4 = (rd32(0x805710e0u) * 0x6d0u) - 0x7fc2e738u;
    t0 = (u32)param_1 + 0x14u;
    f1 = px_pack((f64)rdf32(t0), (f64)rdf32(t0));
    f2 = px_pack((f64)rdf32((u32)param_1 + 0x1cu), 1.0);
    wrf32d(0x817fdfd8u, px_hi(f1));
    wrf32d(0x817fdfd8u, px_lo(f1));
    wrf32d(0x817fdfe0u, px_hi(f2));
    f3 = (f64)rdf32(0x817fdfdcu);
    wrf32d(r4 + 0x134u, (f64)rdf32(0x817fdfd8u));
    f0 = (f64)rdf32(0x817fdfe0u);
    wrf32d(r4 + 0x138u, f3);
    wrf32d(r4 + 0x13cu, f0);
    t8 = (u32)param_1 + 0x20u;
    f1 = px_pack((f64)rdf32(t8), (f64)rdf32(t8));
    f2 = px_pack((f64)rdf32((u32)param_1 + 0x28u), 1.0);
    wrf32d(0x817fdfd8u, px_hi(f1));
    wrf32d(0x817fdfd8u, px_lo(f1));
    wrf32d(0x817fdfe0u, px_hi(f2));
    f3 = (f64)rdf32(0x817fdfdcu);
    wrf32d(r4 + 0x140u, (f64)rdf32(0x817fdfd8u));
    f0 = (f64)rdf32(0x817fdfe0u);
    wrf32d(r4 + 0x144u, f3);
    f4 = rdf64(0x805767b8u);
    wrf32d(r4 + 0x148u, f0);
    wrf32d(r4 + 0x14cu, (f64)(f32)px_pmul((f64)rdf32(0x805767b0u), (f64)(f32)px_psub(px_b2f((u64)((u32)(s16)rd16((u32)param_1 + 0xe8u) ^ 0x80000000u) | 0x4330000000000000ull), f4)));
    return f1;
}
