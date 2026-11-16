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

static f64 px_pfma(f64 a, f64 c, f64 b)
{
    f64 s = a * c + b;
    if (s != s) {
        if (a != a) return px_pq(a);
        if (b != b) return px_pq(b);
        if (c != c) return px_pq(c);
        return px_b2f(0x7ff8000000000000ull);
    }
    u64 bits = px_f2b(s);
    if ((bits & 0x1fffffffull) == 0x10000000ull) {
        f64 ap = b - s, bp = s + ap, da = a * c + ap, db = b - bp, err = da + db;
        if (err != 0.0) { if ((err > 0.0) == (s > 0.0)) bits += 1; else bits -= 1; }
    }
    return px_b2f(bits);
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

u32 fn_80039020(s32 param_1, s32 param_2, s32 param_3, u32 param_4, s32 param_5)
{
    u32 ctr = 0, r0 = 0, r3 = 0, r6 = 0, r7 = 0, t9 = 0, t12 = 0, t15 = 0, t18 = 0, t21 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f3 = 0.0, f4 = 0.0, f5 = 0.0, f6 = 0.0, f7 = 0.0, f26 = 0.0, f27 = 0.0, f30 = 0.0, f31 = 0.0;
    r6 = param_4;
    f2 = px_pack((f64)rdf32((u32)param_1), (f64)rdf32((u32)param_1));
    t9 = (u32)param_1 + 8u;
    f3 = px_pack((f64)rdf32(t9), (f64)rdf32(t9));
    t12 = (u32)param_1 + 0x10u;
    f4 = px_pack((f64)rdf32(t12), (f64)rdf32(t12));
    t15 = (u32)param_1 + 0x18u;
    f5 = px_pack((f64)rdf32(t15), (f64)rdf32(t15));
    t18 = (u32)param_1 + 0x20u;
    f6 = px_pack((f64)rdf32(t18), (f64)rdf32(t18));
    t21 = (u32)param_1 + 0x28u;
    f7 = px_pack((f64)rdf32(t21), (f64)rdf32(t21));
    ctr = (u32)param_5;
    if (param_5 > 0) {
        do {
            r3 = (u32)rd16(r6);
            r0 = ((r3 << 2u) & 0xfffffffcu) - r3;
            r3 = (u32)param_2 + r0;
            r7 = (u32)param_3 + r0;
            f0 = px_pack(px_dq(0u, r3), px_dq(0u, r3));
            f1 = px_pack(px_dq(0u, r3 + 2u), 1.0);
            f30 = px_pack((f64)(f32)px_pmul(px_hi(f2), px_hi(f0)), (f64)(f32)px_pmul(px_lo(f2), px_lo(f0)));
            f31 = px_pack((f64)(f32)px_pfma(px_hi(f3), px_hi(f1), px_hi(f30)), (f64)(f32)px_pfma(px_lo(f3), px_lo(f1), px_lo(f30)));
            f26 = px_pack((f64)(f32)px_padd(px_hi(f31), px_lo(f26)), px_lo(f31));
            f30 = px_pack((f64)(f32)px_pmul(px_hi(f4), px_hi(f0)), (f64)(f32)px_pmul(px_lo(f4), px_lo(f0)));
            f31 = px_pack((f64)(f32)px_pfma(px_hi(f5), px_hi(f1), px_hi(f30)), (f64)(f32)px_pfma(px_lo(f5), px_lo(f1), px_lo(f30)));
            f26 = px_pack(px_hi(f31), (f64)(f32)px_padd(px_hi(f31), px_lo(f26)));
            f30 = px_pack((f64)(f32)px_pmul(px_hi(f6), px_hi(f0)), (f64)(f32)px_pmul(px_lo(f6), px_lo(f0)));
            f31 = px_pack((f64)(f32)px_pfma(px_hi(f7), px_hi(f1), px_hi(f30)), (f64)(f32)px_pfma(px_lo(f7), px_lo(f1), px_lo(f30)));
            f27 = px_pack((f64)(f32)px_padd(px_hi(f31), px_lo(f27)), px_lo(f31));
            px_q(0u, r7, px_hi(f26));
            px_q(0u, r7, px_lo(f26));
            px_q(0u, r7 + 2u, px_hi(f27));
            r6 = r6 + 2u;
            ctr = ctr - 1u;
        } while (ctr != 0u);
    }
    return r6;
}
