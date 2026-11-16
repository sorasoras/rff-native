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

static s32 px_quant(f64 v, f64 m, s32 lo, s32 hi)
{
    f64 x = v * m;
    if (x != x) return 0;
    if (x <= (f64)lo) return lo;
    if (x >= (f64)hi) return hi;
    return (s32)x;
}

static f64 px_qscale(u32 sc)
{
    f64 m = 1.0;
    s32 n = (s32)(sc & 0x3fu);
    if (n >= 32) n -= 64;
    for (; n > 0; n--) m *= 2.0;
    for (; n < 0; n++) m *= 0.5;
    return m;
}

static f64 px_dq(u32 g, u32 ea)
{
    u32 t = (g >> 16) & 7u;
    f64 m = px_qscale(g >> 24);
    if (t == 4u) return (f64)(f32)((f64)rd8(ea) / m);
    if (t == 5u) return (f64)(f32)((f64)rd16(ea) / m);
    if (t == 6u) return (f64)(f32)((f64)(s8)rd8(ea) / m);
    if (t == 7u) return (f64)(f32)((f64)(s16)rd16(ea) / m);
    return (f64)rdf32(ea);
}

static void px_q(u32 g, u32 ea, f64 v)
{
    u32 t = g & 7u;
    f64 m = px_qscale(g >> 8);
    if (t == 4u) wr8(ea, (u8)px_quant(v, m, 0, 255));
    else if (t == 5u) wr16(ea, (u16)px_quant(v, m, 0, 65535));
    else if (t == 6u) wr8(ea, (u8)px_quant(v, m, -128, 127));
    else if (t == 7u) wr16(ea, (u16)px_quant(v, m, -32768, 32767));
    else wrf32d(ea, v);
}

f64 fn_80035dc4(s32 param_1, s32 param_2, s32 param_3)
{
    u32 t3 = 0, t9 = 0, t21 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f3 = 0.0, f4 = 0.0, f10 = 0.0, f11 = 0.0;
    f0 = (f64)rdf32(0x80571ed8u);
    f1 = px_pack(px_dq(0u, (u32)param_2), px_dq(0u, (u32)param_2));
    t3 = (u32)param_2 + 2u;
    f2 = px_pack(px_dq(0u, t3), px_dq(0u, t3));
    f3 = px_pack(px_dq(0u, (u32)param_3), px_dq(0u, (u32)param_3));
    t9 = (u32)param_3 + 2u;
    f4 = px_pack(px_dq(0u, t9), px_dq(0u, t9));
    f10 = px_pack((f64)(f32)px_pmul(px_hi(f1), px_hi(f3)), (f64)(f32)px_pmul(px_lo(f1), px_lo(f3)));
    f11 = px_pack((f64)(f32)px_pmul(px_hi(f2), px_hi(f4)), (f64)(f32)px_pmul(px_lo(f2), px_lo(f4)));
    f10 = px_pack((f64)(f32)px_pmul(px_hi(f10), px_hi(f0)), (f64)(f32)px_pmul(px_lo(f10), px_hi(f0)));
    f11 = px_pack((f64)(f32)px_pmul(px_hi(f11), px_hi(f0)), (f64)(f32)px_pmul(px_lo(f11), px_hi(f0)));
    px_q(0u, (u32)param_1, px_hi(f10));
    px_q(0u, (u32)param_1, px_lo(f10));
    t21 = (u32)param_1 + 2u;
    px_q(0u, t21, px_hi(f11));
    px_q(0u, t21, px_lo(f11));
    return f1;
}
