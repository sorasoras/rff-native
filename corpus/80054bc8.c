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

static f64 px_ctiw(f64 b, s32 w)
{
    u64 r = 0xfff8000000000000ull | (u32)w;
    if (w == 0 && (px_f2b(b) >> 63) != 0) r |= 0x100000000ull;
    return px_b2f(r);
}

void fn_80054bc8(s32 param_1)
{
    u32 r4 = 0, t0 = 0, t6 = 0, t8 = 0, t14 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0;
    TcArgs a = {0};
    a.r[0] = (u32)rd8((u32)param_1 + 0x158u);
    a.r[1] = (u32)rd8((u32)param_1 + 0x159u);
    a.r[2] = (u32)rd8((u32)param_1 + 0x15au);
    (void)tc_call(0x8004e1dcu, &a);
    r4 = rd32((u32)param_1 + 0x160u);
    r4 = (((0u - r4) | r4) >> 0x1fu) & 1u;
    a.f[0] = (f64)rdf32((u32)param_1 + 0x154u);
    a.f[1] = (f64)rdf32((u32)param_1 + 0x150u);
    a.r[0] = rd32((u32)param_1 + 0x15cu);
    a.r[1] = r4;
    (void)tc_call(0x8004e310u, &a);
    t0 = (u32)param_1 + 0x134u;
    f1 = px_pack((f64)rdf32(t0), (f64)rdf32(t0));
    f2 = px_pack((f64)rdf32((u32)param_1 + 0x13cu), 1.0);
    t6 = (u32)param_1 + 4u;
    wrf32d(t6, px_hi(f1));
    wrf32d(t6, px_lo(f1));
    wrf32d((u32)param_1 + 0xcu, px_hi(f2));
    t8 = (u32)param_1 + 0x140u;
    f1 = px_pack((f64)rdf32(t8), (f64)rdf32(t8));
    f2 = px_pack((f64)rdf32((u32)param_1 + 0x148u), 1.0);
    t14 = (u32)param_1 + 0x10u;
    wrf32d(t14, px_hi(f1));
    wrf32d(t14, px_lo(f1));
    wrf32d((u32)param_1 + 0x18u, px_hi(f2));
    f0 = (f64)(f32)px_pmul((f64)rdf32(0x80572338u), (f64)rdf32((u32)param_1 + 0x14cu));
    f0 = px_ctiw(f0, ppc_fctiwz(f0));
    wr16((u32)param_1 + 0xd8u, (u16)px_f2b(f0));
    a.r[0] = (u32)param_1;
    a.r[1] = 0u;
    (void)tc_call(0x8004d368u, &a);
    return;
}
