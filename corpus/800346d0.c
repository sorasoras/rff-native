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

static f64 px_sfma(f64 a, f64 c, f64 b)
{
    f64 s = a * c + b;
    if (s != s) {
        if (a != a) return px_pq(a);
        if (b != b) return px_pq(b);
        if (c != c) return px_pq(c);
        return px_b2f(0x7ff8000000000000ull);
    }
    return s;
}

static f64 px_pmg00(f64 a, f64 b)
{
    return px_b2f((px_f2b(a) & 0xffffffff00000000ull) | (px_f2b(b) >> 32));
}

static f64 px_ctiw(f64 b, s32 w)
{
    u64 r = 0xfff8000000000000ull | (u32)w;
    if (w == 0 && (px_f2b(b) >> 63) != 0) r |= 0x100000000ull;
    return px_b2f(r);
}

static u32 px_qsize(u32 t)
{
    return t == 4u || t == 6u ? 1u : t == 5u || t == 7u ? 2u : 4u;
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

f64 fn_800346d0(f64 param_1, u32 param_2, u32 param_3)
{
    u32 r0 = 0, r6 = 0, t6 = 0;
    f64 f0 = 0.0, f1 = 0.0, f3 = 0.0, f4 = 0.0, f5 = 0.0, f6 = 0.0, f10 = 0.0;
    f0 = px_ctiw(param_1, ppc_fctiwz(param_1));
    r0 = (u32)rd16(param_3);
    f4 = (f64)rdf32(param_3 + 4u);
    wrf64(0x817fdff0u, f0);
    f5 = (f64)rdf32(param_3 + 8u);
    r6 = (u32)px_f2b(f0);
    if ((s32)r6 >= (s32)r0) {
        f10 = px_pmg00(f5, f5);
        f1 = px_pack(px_dq(0u, rd32(param_3 + 0x10u) + (((r6 - 1u) << 1u) & 0xfffffffeu)), 1.0);
        wrf32d(param_2, px_hi(px_pack((f64)(f32)px_pfma(px_hi(f1), px_hi(f4), px_hi(f10)), (f64)(f32)px_pfma(px_lo(f1), px_hi(f4), px_lo(f10)))));
    } else {
        wr32(0x817fdff4u, r6 ^ 0x80000000u);
        f3 = rdf64(0x80571e80u);
        wr32(0x817fdff0u, 0x43300000u);
        f6 = (f64)(f32)px_psub(param_1, (f64)(f32)px_psub(rdf64(0x817fdff0u), f3));
        f10 = px_pmg00(f5, f5);
        t6 = rd32(param_3 + 0x10u) + ((r6 << 1u) & 0xfffffffeu);
        f1 = px_pack(px_dq(0u, t6), px_dq(0u, t6 + px_qsize(0u)));
        wrf32d(0x817fdfe8u, px_lo(px_pack((f64)(f32)px_pfma(px_hi(f1), px_hi(f4), px_hi(f10)), (f64)(f32)px_pfma(px_lo(f1), px_hi(f4), px_lo(f10)))));
        f3 = (f64)rdf32(0x817fdfe8u);
        wrf32d(param_2, (f64)(f32)px_sfma(f6, (f64)(f32)px_psub((f64)rdf32(0x817fdfecu), f3), f3));
    }
    return f1;
}
