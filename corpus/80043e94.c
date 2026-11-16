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

static f64 px_ctiw(f64 b, s32 w)
{
    u64 r = 0xfff8000000000000ull | (u32)w;
    if (w == 0 && (px_f2b(b) >> 63) != 0) r |= 0x100000000ull;
    return px_b2f(r);
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

u32 fn_80043e94(f64 param_1, f64 param_2, u32 param_3)
{
    u32 c0lt = 0, r0 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f3 = 0.0, f4 = 0.0, f5 = 0.0, f6 = 0.0, f7 = 0.0, f9 = 0.0;
    wr32(0x817fdfd0u, 0x817fe000u);
    f0 = (f64)rdf32(param_3 + 0x1cu);
    r4 = (u32)rd16(param_3 + 0x20u);
    r8 = rd32(param_3 + 0x24u);
    f9 = (f64)(f32)px_pmul((f64)(f32)px_psub(param_1, (f64)rdf32(param_3)), f0);
    f0 = (f64)(f32)px_pmul((f64)(f32)px_psub(param_2, (f64)rdf32(param_3 + 8u)), f0);
    wr8(0x817fdfe3u, 0xffu);
    f9 = px_ctiw(f9, ppc_fctiwz(f9));
    wr8(0x817fdfe7u, 0xffu);
    f0 = px_ctiw(f0, ppc_fctiwz(f0));
    wrf64(0x817fdff0u, f9);
    r3 = rd32(0x817fdff4u);
    wrf64(0x817fdff8u, f0);
    r6 = (u32)((s32)r3 >> 2);
    r7 = rd32(0x817fdffcu);
    r0 = ((r3 - (r3 & 0xfffffffcu)) << 1u) & 0xfffffffeu;
    r4 = (u32)((s32)r4 >> 2);
    r4 = (u32)((s32)r7 >> 2) * r4;
    r3 = r7 - (r7 & 0xfffffffcu);
    r4 = r6 + r4;
    r4 = (r4 << 3u) & 0xfffffff8u;
    r8 = r8 + r4;
    r7 = (u32)rd16(r8);
    r4 = r8 + r3;
    wr8(0x817fdfe0u, (u8)((r7 >> 8u) & 0xf8u));
    wr8(0x817fdfe1u, (u8)((r7 >> 3u) & 0xfcu));
    wr8(0x817fdfe2u, (u8)((r7 << 3u) & 0xf8u));
    r3 = rd32(0x817fdfe0u);
    wr32(0x817fdfd8u, r3);
    r5 = (u32)rd16(r8 + 2u);
    r7 = (r5 >> 8u) & 0xf8u;
    r6 = (r5 >> 3u) & 0xfcu;
    r5 = (r5 << 3u) & 0xf8u;
    wr8(0x817fdfe4u, (u8)r7);
    wr8(0x817fdfe5u, (u8)r6);
    wr8(0x817fdfe6u, (u8)r5);
    r5 = rd32(0x817fdfe4u);
    wr32(0x817fdfdcu, r5);
    r4 = (u32)rd8(r4 + 4u);
    r0 = ((r0 & 0x20u) != 0u) ? (u32)((s32)r4 >> 31) : (u32)((s32)r4 >> (s32)(r0 & 0x1fu));
    r0 = r0 & 3u;
    c0lt = (s32)r0 < 2;
    if (r0 != 2u) {
        if (c0lt) {
            c0lt = (s32)r0 < 0;
            if (r0 == 0u) {
                return r3;
            }
            if (!c0lt) {
                r3 = r5;
                return r3;
            }
            r3 = 0u;
            return r3;
        }
        if ((s32)r0 >= 4) {
            r3 = 0u;
            return r3;
        }
        r4 = (u32)rd8(0x805720b9u);
        r3 = (u32)rd8(0x805720bau);
        r0 = (u32)rd8(0x805720bbu);
        wr8(0x817fdfecu, rd8(0x805720b8u));
        f0 = (f64)rdf32(0x805720c0u);
        wr8(0x817fdfedu, (u8)r4);
        wr8(0x817fdfeeu, (u8)r3);
        wr8(0x817fdfefu, (u8)r0);
        f1 = px_pack(px_dq(0u, 0x817fdfd8u), px_dq(0u, 0x817fdfd8u));
        f2 = px_pack(px_dq(0u, 0x817fdfdau), 1.0);
        f3 = px_pack(px_dq(0u, 0x817fdfdcu), px_dq(0u, 0x817fdfdcu));
        f4 = px_pack(px_dq(0u, 0x817fdfdeu), 1.0);
        f5 = px_pack((f64)(f32)px_psub(px_hi(f3), px_hi(f1)), (f64)(f32)px_psub(px_lo(f3), px_lo(f1)));
        f6 = px_pack((f64)(f32)px_psub(px_hi(f4), px_hi(f2)), (f64)(f32)px_psub(px_lo(f4), px_lo(f2)));
        f7 = px_pack((f64)(f32)px_pfma(px_hi(f5), px_hi(f0), px_hi(f1)), (f64)(f32)px_pfma(px_lo(f5), px_hi(f0), px_lo(f1)));
        px_q(0u, 0x817fdfecu, px_hi(f7));
        px_q(0u, 0x817fdfecu, px_lo(f7));
        px_q(0u, 0x817fdfeeu, px_hi(px_pack((f64)(f32)px_pfma(px_hi(f6), px_hi(f0), px_hi(f2)), (f64)(f32)px_pfma(px_lo(f6), px_hi(f0), px_lo(f2)))));
        r3 = rd32(0x817fdfecu);
        return r3;
    }
    r4 = (u32)rd8(0x805720b9u);
    r3 = (u32)rd8(0x805720bau);
    r0 = (u32)rd8(0x805720bbu);
    wr8(0x817fdfe8u, rd8(0x805720b8u));
    f0 = (f64)rdf32(0x805720bcu);
    wr8(0x817fdfe9u, (u8)r4);
    wr8(0x817fdfeau, (u8)r3);
    wr8(0x817fdfebu, (u8)r0);
    f1 = px_pack(px_dq(0u, 0x817fdfd8u), px_dq(0u, 0x817fdfd8u));
    f2 = px_pack(px_dq(0u, 0x817fdfdau), 1.0);
    f3 = px_pack(px_dq(0u, 0x817fdfdcu), px_dq(0u, 0x817fdfdcu));
    f4 = px_pack(px_dq(0u, 0x817fdfdeu), 1.0);
    f5 = px_pack((f64)(f32)px_psub(px_hi(f3), px_hi(f1)), (f64)(f32)px_psub(px_lo(f3), px_lo(f1)));
    f6 = px_pack((f64)(f32)px_psub(px_hi(f4), px_hi(f2)), (f64)(f32)px_psub(px_lo(f4), px_lo(f2)));
    f7 = px_pack((f64)(f32)px_pfma(px_hi(f5), px_hi(f0), px_hi(f1)), (f64)(f32)px_pfma(px_lo(f5), px_hi(f0), px_lo(f1)));
    px_q(0u, 0x817fdfe8u, px_hi(f7));
    px_q(0u, 0x817fdfe8u, px_lo(f7));
    px_q(0u, 0x817fdfeau, px_hi(px_pack((f64)(f32)px_pfma(px_hi(f6), px_hi(f0), px_hi(f2)), (f64)(f32)px_pfma(px_lo(f6), px_hi(f0), px_lo(f2)))));
    r3 = rd32(0x817fdfe8u);
    return r3;
}
