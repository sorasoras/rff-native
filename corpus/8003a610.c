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

u64 fn_8003a610(f64 param_1, f64 param_2, s32 param_3, u32 param_4, s32 param_5)
{
    u32 ctr = 0, r0 = 0, r3 = 0, r4 = 0, r5 = 0;
    f64 f2 = 0.0, f3 = 0.0, f4 = 0.0, f5 = 0.0, f6 = 0.0, f7 = 0.0, f8 = 0.0, f9 = 0.0, f10 = 0.0, f11 = 0.0, f12 = 0.0;
    r3 = (u32)param_3;
    r0 = rd32(param_4);
    r4 = rd32(param_4 + 8u);
    r5 = rd32((u32)param_5 + 8u);
    ctr = r0;
    if ((s32)r0 > 0) {
        do {
            f2 = px_pack(px_dq(0u, r4), px_dq(0u, r4));
            f3 = px_pack(px_dq(0u, r4 + 2u), 1.0);
            f4 = px_pack(px_dq(0u, r5), px_dq(0u, r5));
            f5 = px_pack(px_dq(0u, r5 + 2u), 1.0);
            f6 = px_pack((f64)rdf32(r3), (f64)rdf32(r3));
            f7 = px_pack((f64)rdf32(r3 + 8u), 1.0);
            f8 = px_pack((f64)(f32)px_pmul(px_hi(f2), px_hi(param_2)), (f64)(f32)px_pmul(px_lo(f2), px_hi(param_2)));
            f9 = px_pack((f64)(f32)px_pmul(px_hi(f3), px_hi(param_2)), (f64)(f32)px_pmul(px_lo(f3), px_hi(param_2)));
            f10 = px_pack((f64)(f32)px_pfma(px_hi(f4), px_hi(param_1), px_hi(f8)), (f64)(f32)px_pfma(px_lo(f4), px_hi(param_1), px_lo(f8)));
            f11 = px_pack((f64)(f32)px_pfma(px_hi(f5), px_hi(param_1), px_hi(f9)), (f64)(f32)px_pfma(px_lo(f5), px_hi(param_1), px_lo(f9)));
            f12 = px_pack((f64)(f32)px_pfma(px_hi(f10), px_hi(param_1), px_hi(f6)), (f64)(f32)px_pfma(px_lo(f10), px_hi(param_1), px_lo(f6)));
            wrf32d(r3, px_hi(f12));
            wrf32d(r3, px_lo(f12));
            wrf32d(r3 + 8u, px_hi(px_pack((f64)(f32)px_pfma(px_hi(f11), px_hi(param_1), px_hi(f7)), (f64)(f32)px_pfma(px_lo(f11), px_hi(param_1), px_lo(f7)))));
            r4 = r4 + 3u;
            r5 = r5 + 3u;
            r3 = r3 + 0xcu;
            ctr = ctr - 1u;
        } while (ctr != 0u);
        return ((u64)r3 << 0x20ull) | (u64)r4;
    }
    return ((u64)(u32)param_3 << 0x20ull) | (u64)r4;
}
