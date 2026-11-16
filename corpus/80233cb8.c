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

f64 fn_80233cb8(f64 param_1, f64 param_2, f64 param_3, s32 param_4, s32 param_5)
{
    u32 t3 = 0, t6 = 0, t9 = 0, t15 = 0, t18 = 0, t21 = 0, t24 = 0, t27 = 0, t28 = 0, t29 = 0;
    f64 f1 = 0.0, f4 = 0.0, f5 = 0.0, f6 = 0.0, f7 = 0.0, f8 = 0.0, f9 = 0.0;
    f4 = px_pack((f64)rdf32((u32)param_4), (f64)rdf32((u32)param_4));
    f1 = (f64)(f32)param_1;
    t3 = (u32)param_4 + 8u;
    f5 = px_pack((f64)rdf32(t3), (f64)rdf32(t3));
    t6 = (u32)param_4 + 0x18u;
    f7 = px_pack((f64)rdf32(t6), (f64)rdf32(t6));
    t9 = (u32)param_4 + 0x28u;
    f8 = px_pack((f64)rdf32(t9), (f64)rdf32(t9));
    wrf32d((u32)param_5, px_hi(f4));
    wrf32d((u32)param_5, px_lo(f4));
    f5 = px_pack(px_hi(f5), (f64)(f32)px_padd(px_hi(f1), px_lo(f5)));
    t15 = (u32)param_4 + 0x10u;
    f6 = px_pack((f64)rdf32(t15), (f64)rdf32(t15));
    t18 = (u32)param_5 + 8u;
    wrf32d(t18, px_hi(f5));
    wrf32d(t18, px_lo(f5));
    f7 = px_pack(px_hi(f7), (f64)(f32)px_padd(px_hi((f64)(f32)param_2), px_lo(f7)));
    t21 = (u32)param_4 + 0x20u;
    f9 = px_pack((f64)rdf32(t21), (f64)rdf32(t21));
    t24 = (u32)param_5 + 0x10u;
    wrf32d(t24, px_hi(f6));
    wrf32d(t24, px_lo(f6));
    f8 = px_pack(px_hi(f8), (f64)(f32)px_padd(px_hi((f64)(f32)param_3), px_lo(f8)));
    t27 = (u32)param_5 + 0x18u;
    wrf32d(t27, px_hi(f7));
    wrf32d(t27, px_lo(f7));
    t28 = (u32)param_5 + 0x20u;
    wrf32d(t28, px_hi(f9));
    wrf32d(t28, px_lo(f9));
    t29 = (u32)param_5 + 0x28u;
    wrf32d(t29, px_hi(f8));
    wrf32d(t29, px_lo(f8));
    return f1;
}
