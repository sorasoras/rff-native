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

void fn_80120f70(u32 param_1, u32 param_2)
{
    u32 r3 = 0, r4 = 0, r31 = 0;
    f64 f1 = 0.0, f31 = 0.0;
    TcArgs a = {0};
    a.r[0] = rd32(param_1);
    a.r[1] = rd32(param_2);
    r3 = tc_call(0x803014dcu, &a);
    r31 = r3 & 0xeu;
    if (r31 != 0u) {
        f1 = tc_callf(0x80040a00u, &a);
        px_q(0u, 0x817fdfd8u, px_hi((f64)(f32)px_pmul((f64)rdf32(0x805742c4u), f1)));
        r4 = (u32)rd16(0x817fdfd8u);
        f31 = (f64)rdf32(0x805742a4u);
        wr16(param_2 + 0xeu, (u16)r4);
        if ((r31 & 2u) != 0u) {
            f31 = (f64)(f32)px_padd(f31, (f64)rdf32(0x8036f0f8u));
        }
        if ((r31 & 4u) != 0u) {
            f31 = (f64)(f32)px_padd(f31, (f64)rdf32(0x8036f0fcu));
        }
        if ((r31 & 8u) != 0u) {
            f31 = (f64)(f32)px_padd(f31, (f64)rdf32(0x8036f100u));
        }
        a.f[0] = (f64)(f32)px_pmul((f64)rdf32(0x805742c8u), (f64)(f32)px_psub(px_b2f((u64)r4 | 0x4330000000000000ull), rdf64(0x805742d0u)));
        f1 = tc_callf(0x802eff78u, &a);
        r3 = rd32(param_2 + 4u);
        f1 = (f64)(f32)px_sfma(f31, f1, (f64)rdf32(0x805742a0u));
        if (r3 != 0u) {
            a.f[0] = f1;
            a.r[0] = r3;
            (void)tc_call(0x802f7238u, &a);
        }
    }
    return;
}
