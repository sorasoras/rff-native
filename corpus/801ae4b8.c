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

void fn_801ae4b8(s32 param_1, s32 param_2)
{
    u32 r3 = 0, r5 = 0, t9 = 0, t15 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f3 = 0.0, f4 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdfd0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    wr32(0x817fdff8u, 0u);
    wr32(0x817fdff4u, 0u);
    wr32((u32)param_2 + 0xd34u, 0u);
    f1 = tc_callf(0x80040a00u, &a);
    f1 = (f64)(f32)px_pmul((f64)rdf32(0x80575afcu), (f64)(f32)px_psub(f1, (f64)rdf32(0x80575af0u)));
    wrf32d((u32)param_1 + 0x14u, f1);
    a.f[0] = f1;
    f1 = tc_callf(0x80262b10u, &a);
    f4 = (f64)(f32)f1;
    f1 = (f64)rdf32((u32)param_1 + 0x14u);
    f3 = (f64)(f32)px_pmul((f64)rdf32(0x8057093cu), f4);
    wrf32d((u32)param_1 + 0x20u, (f64)rdf32(0x80575af4u));
    wrf32d((u32)param_1 + 0x1cu, f3);
    a.f[0] = f1;
    f1 = tc_callf(0x80262704u, &a);
    f3 = (f64)(f32)f1;
    wrf32d((u32)param_1 + 0x24u, (f64)(f32)px_pmul((f64)rdf32(0x8057093cu), f3));
    f1 = px_pack((f64)rdf32(0x804dbe6cu), (f64)rdf32(0x804dbe6cu));
    f2 = px_pack((f64)rdf32(0x804dbe74u), 1.0);
    wrf32d(0x817fdfd8u, px_hi(f1));
    wrf32d(0x817fdfd8u, px_lo(f1));
    wrf32d(0x817fdfe0u, px_hi(f2));
    r3 = rd32((u32)param_1 + 0xcu);
    a.r[0] = r3;
    a.r[1] = 0x817fdfd8u;
    a.r[2] = 0u;
    a.f[0] = f1;
    a.f[1] = f2;
    a.f[2] = f3;
    a.f[3] = 0.0;
    (void)tc_call(rd32(rd32(r3) + 0x1cu), &a);
    a.r[0] = rd32((u32)param_1 + 0xcu);
    (void)tc_call(0x801ae440u, &a);
    r5 = 0u;
    wr32((u32)param_1 + 0x10u, 0u);
    if ((u32)(s8)rd8(0x80571378u) == 0u) {
        wr32(0x804dc4b0u, 0x803723b0u);
        a.r[0] = 0x804dc4b0u;
        r3 = tc_call(0x801c38acu, &a);
        f0 = (f64)rdf32(0x80575af4u);
        r5 = 0x804dc4b0u;
        wr32(0x804dc4b4u, r3);
        wr32(0x804dc4b0u, 0x803730f0u);
        wrf32d(0x804dc4c8u, f0);
        wrf32d(0x804dc4c4u, f0);
        wrf32d(0x804dc4c0u, f0);
        wr8(0x80571378u, 1u);
    }
    r3 = rd32(((rd32(0x804dc4b4u) << 2u) & 0xfffffffcu) - 0x7fb23668u);
    t9 = (u32)param_1 + 0x1cu;
    f1 = px_pack((f64)rdf32(t9), (f64)rdf32(t9));
    f2 = px_pack((f64)rdf32((u32)param_1 + 0x24u), 1.0);
    t15 = r3 + 0x10u;
    wrf32d(t15, px_hi(f1));
    wrf32d(t15, px_lo(f1));
    wrf32d(r3 + 0x18u, px_hi(f2));
    a.r[0] = r3;
    a.r[1] = (u32)param_2;
    a.r[2] = r5;
    a.f[0] = f1;
    a.f[1] = f2;
    a.f[2] = 0.0;
    a.f[3] = 0.0;
    (void)tc_call(rd32(rd32(r3) + 0xcu), &a);
    a.r[0] = (u32)param_1 + 0x2cu;
    (void)tc_call(0x801c2590u, &a);
    wr32((u32)param_1 + 0x118u, 0xffffffffu);
    wr32((u32)param_1 + 0x28u, 0u);
    return;
}
