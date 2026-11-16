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

void fn_803316a0(u32 param_1, s32 param_2, s32 param_3, s32 param_4, u32 param_5)
{
    u32 r0 = 0, t10 = 0, t15 = 0, t87 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f3 = 0.0, f4 = 0.0, f5 = 0.0, f6 = 0.0, f7 = 0.0, f8 = 0.0, f9 = 0.0, f10 = 0.0, f11 = 0.0;
    f64 f12 = 0.0, f13 = 0.0, f31 = 0.0;
    (void)param_1;
    f3 = (f64)rdf32(0x80577cf4u);
    f2 = (f64)rdf32(0x80577d00u);
    r0 = param_5 & 1u;
    f8 = (f64)(f32)px_pmul(f2, f3);
    f11 = px_pack((f64)rdf32((u32)param_4), (f64)rdf32((u32)param_4));
    f5 = px_pack((f64)rdf32((u32)param_2), (f64)rdf32((u32)param_2));
    f12 = px_pack((f64)rdf32((u32)param_3), (f64)rdf32((u32)param_3));
    f1 = (f64)(f32)px_psub(f8, f3);
    f0 = (f64)(f32)px_padd((f64)(f32)px_pmul((f64)rdf32(0x80577d04u), f3), f3);
    t10 = (u32)param_2 + 0xcu;
    f4 = px_pack((f64)rdf32(t10), (f64)rdf32(t10));
    f10 = px_pack((f64)(f32)px_pmul(px_hi(f11), px_hi(f8)), (f64)(f32)px_pmul(px_lo(f11), px_hi(f8)));
    t15 = (u32)param_3 + 0xcu;
    f3 = px_pack((f64)rdf32(t15), (f64)rdf32(t15));
    f7 = (f64)(f32)px_padd(f2, f1);
    f6 = (f64)(f32)px_padd(f2, f0);
    f11 = px_pack((f64)rdf32((u32)param_4 + 8u), 1.0);
    f31 = px_pack((f64)(f32)px_pmul(px_hi(f5), px_hi(f7)), (f64)(f32)px_pmul(px_lo(f5), px_hi(f7)));
    f5 = px_pack((f64)rdf32((u32)param_2 + 8u), 1.0);
    f13 = px_pack((f64)(f32)px_pmul(px_hi(f12), px_hi(f6)), (f64)(f32)px_pmul(px_lo(f12), px_hi(f6)));
    f12 = px_pack((f64)rdf32((u32)param_3 + 8u), 1.0);
    f9 = px_pack((f64)(f32)px_pmul(px_hi(f4), px_hi(f7)), (f64)(f32)px_pmul(px_lo(f4), px_hi(f7)));
    f4 = px_pack((f64)rdf32((u32)param_2 + 0x14u), 1.0);
    wrf32d(0x817fdf60u, px_hi(f31));
    wrf32d(0x817fdf60u, px_lo(f31));
    f2 = px_pack((f64)(f32)px_pmul(px_hi(f3), px_hi(f6)), (f64)(f32)px_pmul(px_lo(f3), px_hi(f6)));
    f31 = px_pack((f64)(f32)px_pmul(px_hi(f5), px_hi(f7)), (f64)(f32)px_pmul(px_lo(f5), px_hi(f7)));
    f3 = px_pack((f64)rdf32((u32)param_3 + 0x14u), 1.0);
    wrf32d(0x817fdf6cu, px_hi(f13));
    wrf32d(0x817fdf6cu, px_lo(f13));
    f13 = px_pack((f64)(f32)px_pmul(px_hi(f12), px_hi(f6)), (f64)(f32)px_pmul(px_lo(f12), px_hi(f6)));
    f1 = px_pack((f64)rdf32(0x817fdf60u), (f64)rdf32(0x817fdf60u));
    f0 = px_pack((f64)rdf32(0x817fdf6cu), (f64)rdf32(0x817fdf6cu));
    wrf32d(0x817fdf9cu, px_hi(f9));
    wrf32d(0x817fdf9cu, px_lo(f9));
    f9 = px_pack((f64)(f32)px_pmul(px_hi(f4), px_hi(f7)), (f64)(f32)px_pmul(px_lo(f4), px_hi(f7)));
    f12 = px_pack((f64)(f32)px_padd(px_hi(f1), px_hi(f0)), (f64)(f32)px_padd(px_lo(f1), px_lo(f0)));
    wrf32d(0x817fdfa8u, px_hi(f2));
    wrf32d(0x817fdfa8u, px_lo(f2));
    f5 = f10;
    f2 = px_pack((f64)(f32)px_pmul(px_hi(f3), px_hi(f6)), (f64)(f32)px_pmul(px_lo(f3), px_hi(f6)));
    f1 = px_pack((f64)rdf32(0x817fdf9cu), (f64)rdf32(0x817fdf9cu));
    wrf32d(0x817fdf54u, px_hi(f12));
    wrf32d(0x817fdf54u, px_lo(f12));
    f12 = px_pack((f64)(f32)px_padd(px_hi(f31), px_hi(f13)), (f64)(f32)px_padd(px_lo(f31), px_lo(f13)));
    f0 = px_pack((f64)rdf32(0x817fdfa8u), (f64)rdf32(0x817fdfa8u));
    f4 = px_pack((f64)rdf32(0x817fdf54u), (f64)rdf32(0x817fdf54u));
    f10 = px_pack((f64)(f32)px_pmul(px_hi(f11), px_hi(f8)), (f64)(f32)px_pmul(px_lo(f11), px_hi(f8)));
    f11 = px_pack((f64)(f32)px_padd(px_hi(f1), px_hi(f0)), (f64)(f32)px_padd(px_lo(f1), px_lo(f0)));
    f3 = px_pack((f64)(f32)px_padd(px_hi(f4), px_hi(f5)), (f64)(f32)px_padd(px_lo(f4), px_lo(f5)));
    f1 = (f64)rdf32((u32)param_2 + 0x18u);
    f0 = (f64)rdf32((u32)param_3 + 0x18u);
    wrf32d(0x817fdf90u, px_hi(f11));
    wrf32d(0x817fdf90u, px_lo(f11));
    f11 = px_pack((f64)(f32)px_padd(px_hi(f9), px_hi(f2)), (f64)(f32)px_padd(px_lo(f9), px_lo(f2)));
    f1 = (f64)(f32)px_pmul(f1, f7);
    wrf32d(0x817fdf48u, px_hi(f3));
    wrf32d(0x817fdf48u, px_lo(f3));
    f3 = px_pack((f64)(f32)px_padd(px_hi(f12), px_hi(f10)), (f64)(f32)px_padd(px_lo(f12), px_lo(f10)));
    f0 = (f64)(f32)px_pmul(f0, f6);
    f4 = (f64)rdf32(0x817fdf4cu);
    f0 = (f64)(f32)px_padd(f1, f0);
    wrf32d(0xcc008000u, (f64)rdf32(0x817fdf48u));
    t87 = (u32)param_4 + 0xcu;
    f10 = px_pack((f64)rdf32(t87), (f64)rdf32(t87));
    f9 = px_pack((f64)(f32)px_pmul(px_hi(f10), px_hi(f8)), (f64)(f32)px_pmul(px_lo(f10), px_hi(f8)));
    f10 = px_pack((f64)rdf32((u32)param_4 + 0x14u), 1.0);
    f5 = px_pack((f64)rdf32(0x817fdf90u), (f64)rdf32(0x817fdf90u));
    f1 = f9;
    f9 = px_pack((f64)(f32)px_pmul(px_hi(f10), px_hi(f8)), (f64)(f32)px_pmul(px_lo(f10), px_hi(f8)));
    f2 = (f64)(f32)px_pmul((f64)rdf32((u32)param_4 + 0x18u), f8);
    wrf32d(0x817fdf50u, px_hi(f3));
    f3 = (f64)rdf32(0x817fdf50u);
    wrf32d(0xcc008000u, f4);
    f4 = px_pack((f64)(f32)px_padd(px_hi(f5), px_hi(f1)), (f64)(f32)px_padd(px_lo(f5), px_lo(f1)));
    f1 = (f64)(f32)px_padd(f2, f0);
    wrf32d(0x817fdf84u, px_hi(f4));
    wrf32d(0x817fdf84u, px_lo(f4));
    wrf32d(0xcc008000u, f3);
    f3 = (f64)rdf32(0x817fdf84u);
    wrf32d(0x817fdf8cu, px_hi(px_pack((f64)(f32)px_padd(px_hi(f11), px_hi(f9)), (f64)(f32)px_padd(px_lo(f11), px_lo(f9)))));
    f2 = (f64)rdf32(0x817fdf88u);
    wrf32d(0x817fdfe0u, (f64)rdf32(0x817fdf8cu));
    if (r0 != 0u) {
        wrf32d(0xcc008000u, (f64)rdf32(0x80577cf4u));
        wrf32d(0xcc008000u, f1);
    }
    f2 = (f64)px_w2f(ppc_single_bits(f2));
    wrf32d(0xcc008000u, (f64)px_w2f(ppc_single_bits(f3)));
    f0 = (f64)rdf32(0x817fdfe0u);
    wrf32d(0xcc008000u, f2);
    wrf32d(0xcc008000u, f0);
    if (r0 != 0u) {
        wrf32d(0xcc008000u, (f64)rdf32(0x80577cf0u));
        wrf32d(0xcc008000u, f1);
    }
    return;
}
