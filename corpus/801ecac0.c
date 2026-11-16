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

static f64 px_pdiv(f64 a, f64 b)
{
    f64 r = a / b;
    if (r != r) {
        if (a != a) return px_pq(a);
        if (b != b) return px_pq(b);
        return px_b2f(0x7ff8000000000000ull);
    }
    return r;
}

static f64 px_pfnm(f64 x)
{
    return x != x ? x : -x;
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

static f64 px_sfms(f64 a, f64 c, f64 b)
{
    f64 s = a * c - b;
    if (s != s) {
        if (a != a) return px_pq(a);
        if (b != b) return px_pq(b);
        if (c != c) return px_pq(c);
        return px_b2f(0x7ff8000000000000ull);
    }
    return s;
}

void fn_801ecac0(u32 param_1, u32 param_2, s32 param_3)
{
    u32 c0eq = 0, r0 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0, r27 = 0, r28 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f3 = 0.0, f4 = 0.0, f5 = 0.0, f6 = 0.0, f7 = 0.0, f30 = 0.0, f31 = 0.0;
    TcArgs a = {0};
    (void)tc_call(0x801ecd78u, &a);
    a.r[0] = param_1;
    a.r[1] = rd32(param_1 + 4u);
    r3 = tc_call(0x801ecd64u, &a);
    r6 = rd32(param_1 + 4u);
    r28 = r3;
    c0eq = rd32(r3 + 0x18u) == 0u;
    r27 = rd32(param_1 + 8u) + ((r6 << 5u) & 0xffffffe0u);
    r3 = rd32(param_1 + 0xcu) + (r6 * 0xcu);
    if (!c0eq) {
        r0 = (u32)((s32)(ppc_mulhw(-2004318071, (s32)r6) + r6) >> 3);
        r0 = r0 + ((r0 >> 0x1fu) & 1u);
        r0 = r0 * 0xfu;
        a.r[0] = r3;
        a.r[1] = r6 - r0;
        (void)tc_call(0x8025279cu, &a);
    }
    a.r[0] = r27;
    a.r[1] = 0u;
    (void)tc_call(0x80252720u, &a);
    r5 = rd32(r28 + 0x14u);
    f5 = rdf64(0x80576478u);
    f4 = (f64)(f32)px_psub(px_b2f((u64)rd16(r5 + 8u) | 0x4330000000000000ull), f5);
    f31 = (f64)(f32)px_psub((f64)rdf32((u32)param_3 + 8u), (f64)rdf32((u32)param_3));
    f30 = (f64)(f32)px_psub((f64)rdf32((u32)param_3 + 0xcu), (f64)rdf32((u32)param_3 + 4u));
    r3 = rd32(param_1 + 0x5cu);
    wrf32d(0x817fdf8cu, (f64)(f32)px_psub(px_b2f((u64)rd16(r5 + 0xau) | 0x4330000000000000ull), f5));
    a.r[0] = r3;
    r3 = tc_call(0x80100fd8u, &a);
    wr32(0x817fdf80u, r3);
    f31 = (f64)(f32)px_pmul(f31, (f64)rdf32(0x817fdf80u));
    a.r[0] = rd32(param_1 + 0x5cu);
    (void)tc_call(0x80100fd8u, &a);
    f5 = (f64)px_w2f(ppc_single_bits(f4));
    f4 = (f64)(f32)px_pdiv((f64)rdf32((u32)param_3), f5);
    f3 = (f64)rdf32(0x817fdf8cu);
    f0 = (f64)rdf32((u32)param_3 + 0xcu);
    f7 = (f64)rdf32(0x8057646cu);
    f6 = (f64)rdf32(param_2);
    f2 = (f64)(f32)px_pdiv((f64)rdf32((u32)param_3 + 4u), f3);
    wrf32d(0x817fdf98u, (f64)(f32)px_pdiv((f64)rdf32((u32)param_3 + 8u), f5));
    f5 = (f64)rdf32(param_2 + 4u);
    wrf32d(0x817fdf90u, f4);
    f0 = (f64)(f32)px_pdiv(f0, f3);
    wrf32d(0x817fdf94u, f2);
    f30 = (f64)(f32)px_pmul(f30, (f64)px_w2f(tc_lastr4()));
    wrf32d(0x817fdf9cu, f0);
    wrf32d(0x817fdfa0u, px_pfnm((f64)(f32)px_sfms(f7, f31, f6)));
    wrf32d(0x817fdfa4u, (f64)(f32)px_sfma(f7, f30, f5));
    wrf32d(0x817fdfa8u, (f64)(f32)px_sfma(f7, f31, f6));
    wrf32d(0x817fdfacu, px_pfnm((f64)(f32)px_sfms(f7, f30, f5)));
    a.r[0] = 0x98u;
    a.r[1] = 0u;
    a.r[2] = 4u;
    (void)tc_call(0x80250b74u, &a);
    f0 = (f64)rdf32(0x817fdfa8u);
    f1 = (f64)rdf32(0x817fdfacu);
    wrf32d(0xcc008000u, f0);
    f2 = (f64)rdf32(0x817fdf98u);
    wrf32d(0xcc008000u, f1);
    f3 = (f64)rdf32(0x817fdf9cu);
    r6 = (u32)rd8(param_1 + 0x13u);
    r5 = (u32)rd8(param_1 + 0x12u);
    r4 = (u32)rd8(param_1 + 0x11u);
    f4 = (f64)rdf32(0x817fdfa4u);
    wr8(0xcc008000u, rd8(param_1 + 0x10u));
    f5 = (f64)rdf32(0x817fdf94u);
    wr8(0xcc008000u, (u8)r4);
    f6 = (f64)rdf32(0x817fdfa0u);
    wr8(0xcc008000u, (u8)r5);
    f7 = (f64)rdf32(0x817fdf90u);
    wr8(0xcc008000u, (u8)r6);
    wrf32d(0xcc008000u, f2);
    wrf32d(0xcc008000u, f3);
    wrf32d(0xcc008000u, f0);
    wrf32d(0xcc008000u, f4);
    r6 = (u32)rd8(param_1 + 0x13u);
    r5 = (u32)rd8(param_1 + 0x12u);
    r4 = (u32)rd8(param_1 + 0x11u);
    wr8(0xcc008000u, rd8(param_1 + 0x10u));
    wr8(0xcc008000u, (u8)r4);
    wr8(0xcc008000u, (u8)r5);
    wr8(0xcc008000u, (u8)r6);
    wrf32d(0xcc008000u, f2);
    wrf32d(0xcc008000u, f5);
    wrf32d(0xcc008000u, f6);
    wrf32d(0xcc008000u, f1);
    r6 = (u32)rd8(param_1 + 0x13u);
    r5 = (u32)rd8(param_1 + 0x12u);
    r4 = (u32)rd8(param_1 + 0x11u);
    wr8(0xcc008000u, rd8(param_1 + 0x10u));
    wr8(0xcc008000u, (u8)r4);
    wr8(0xcc008000u, (u8)r5);
    wr8(0xcc008000u, (u8)r6);
    wrf32d(0xcc008000u, f7);
    wrf32d(0xcc008000u, f3);
    wrf32d(0xcc008000u, f6);
    wrf32d(0xcc008000u, f4);
    r6 = (u32)rd8(param_1 + 0x13u);
    r5 = (u32)rd8(param_1 + 0x12u);
    r4 = (u32)rd8(param_1 + 0x11u);
    wr8(0xcc008000u, rd8(param_1 + 0x10u));
    wr8(0xcc008000u, (u8)r4);
    wr8(0xcc008000u, (u8)r5);
    wr8(0xcc008000u, (u8)r6);
    wrf32d(0xcc008000u, f7);
    wrf32d(0xcc008000u, f5);
    return;
}
