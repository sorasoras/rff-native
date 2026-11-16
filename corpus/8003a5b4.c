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

u64 fn_8003a5b4(f64 param_1, s32 param_2, u32 param_3, s32 param_4)
{
    u32 ctr = 0, r0 = 0, r3 = 0, r4 = 0, r5 = 0;
    f64 f2 = 0.0, f3 = 0.0, f4 = 0.0, f5 = 0.0, f6 = 0.0, f7 = 0.0, f8 = 0.0, f12 = 0.0, f13 = 0.0;
    r3 = (u32)param_2;
    r0 = rd32(param_3);
    r4 = rd32(param_3 + 8u);
    r5 = rd32((u32)param_4 + 8u);
    ctr = r0;
    if ((s32)r0 > 0) {
        do {
            f2 = px_pack(px_dq(0u, r4), px_dq(0u, r4));
            f3 = px_pack(px_dq(0u, r4 + 4u), 1.0);
            f4 = px_pack(px_dq(0u, r5), px_dq(0u, r5));
            f5 = px_pack(px_dq(0u, r5 + 4u), 1.0);
            f12 = px_pack(px_dq(0u, r3), px_dq(0u, r3));
            f13 = px_pack(px_dq(0u, r3 + 4u), 1.0);
            f6 = px_pack((f64)(f32)px_psub(px_hi(f4), px_hi(f2)), (f64)(f32)px_psub(px_lo(f4), px_lo(f2)));
            f7 = px_pack((f64)(f32)px_psub(px_hi(f5), px_hi(f3)), (f64)(f32)px_psub(px_lo(f5), px_lo(f3)));
            f8 = px_pack((f64)(f32)px_pfma(px_hi(f6), px_hi(param_1), px_hi(f12)), (f64)(f32)px_pfma(px_lo(f6), px_hi(param_1), px_lo(f12)));
            px_q(0u, r3, px_hi(f8));
            px_q(0u, r3, px_lo(f8));
            px_q(0u, r3 + 4u, px_hi(px_pack((f64)(f32)px_pfma(px_hi(f7), px_hi(param_1), px_hi(f13)), (f64)(f32)px_pfma(px_lo(f7), px_hi(param_1), px_lo(f13)))));
            r4 = r4 + 6u;
            r5 = r5 + 6u;
            r3 = r3 + 6u;
            ctr = ctr - 1u;
        } while (ctr != 0u);
        return ((u64)r3 << 0x20ull) | (u64)r4;
    }
    return ((u64)(u32)param_2 << 0x20ull) | (u64)r4;
}
