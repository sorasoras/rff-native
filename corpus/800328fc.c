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

f64 fn_800328fc(u32 param_1, s32 param_2, f64 param_f1)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r5 = 0, t3 = 0, t9 = 0, t21 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f3 = 0.0, f4 = 0.0, f5 = 0.0, f6 = 0.0, f7 = 0.0, f8 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdfe0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    wr32(0x817fdff8u, 0u);
    a.f[0] = param_f1;
    a.r[0] = (u32)param_2;
    a.r[1] = 0x817fdfecu;
    a.r[2] = 0x817fdfe8u;
    f1 = tc_callf(0x800323ccu, &a);
    r0 = rd32(0x817fdfecu);
    f0 = f1;
    r5 = rd32(0x817fdfe8u);
    r4 = rd32((u32)param_2 + 0x10u);
    r3 = r4 + ((r0 << 2u) & 0xfffffffcu);
    r4 = r4 + ((r5 << 2u) & 0xfffffffcu);
    if (r0 == 0xffffffffu) {
        wr8(param_1, rd8(r4));
        wr8(param_1 + 1u, rd8(r4 + 1u));
        wr8(param_1 + 2u, rd8(r4 + 2u));
        wr8(param_1 + 3u, rd8(r4 + 3u));
    } else {
        if (r5 == 0xffffffffu) {
            wr8(param_1, rd8(r3));
            wr8(param_1 + 1u, rd8(r3 + 1u));
            wr8(param_1 + 2u, rd8(r3 + 2u));
            wr8(param_1 + 3u, rd8(r3 + 3u));
        } else {
            f1 = px_pack(px_dq(0u, r3), px_dq(0u, r3));
            t3 = r3 + 2u;
            f2 = px_pack(px_dq(0u, t3), px_dq(0u, t3));
            f3 = px_pack(px_dq(0u, r4), px_dq(0u, r4));
            t9 = r4 + 2u;
            f4 = px_pack(px_dq(0u, t9), px_dq(0u, t9));
            f5 = px_pack((f64)(f32)px_psub(px_hi(f3), px_hi(f1)), (f64)(f32)px_psub(px_lo(f3), px_lo(f1)));
            f6 = px_pack((f64)(f32)px_psub(px_hi(f4), px_hi(f2)), (f64)(f32)px_psub(px_lo(f4), px_lo(f2)));
            f7 = px_pack((f64)(f32)px_pfma(px_hi(f5), px_hi(f0), px_hi(f1)), (f64)(f32)px_pfma(px_lo(f5), px_hi(f0), px_lo(f1)));
            f8 = px_pack((f64)(f32)px_pfma(px_hi(f6), px_hi(f0), px_hi(f2)), (f64)(f32)px_pfma(px_lo(f6), px_hi(f0), px_lo(f2)));
            px_q(0u, param_1, px_hi(f7));
            px_q(0u, param_1, px_lo(f7));
            t21 = param_1 + 2u;
            px_q(0u, t21, px_hi(f8));
            px_q(0u, t21, px_lo(f8));
        }
    }
    return f1;
}
