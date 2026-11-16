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

void fn_800797e0(f64 param_f1, u32 param_r3, u32 param_r4, u32 param_r5, u32 param_r6)
{
    u32 c0eq = 0, r0 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0, r30 = 0, r31 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f3 = 0.0, f4 = 0.0, f5 = 0.0, f6 = 0.0, f7 = 0.0, f8 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdfc0u, 0x43300000u);
    a.r[0] = param_r3;
    a.r[1] = param_r6;
    r3 = tc_call(0x80079d8cu, &a);
    r31 = r3;
    if (r3 == 0u) {
        return;
    }
    r3 = (u32)rd16(r3 + 2u);
    if (r3 != rd32(param_r3 + 8u)) {
        wr32(param_r3 + 8u, r3);
        a.r[0] = rd32(param_r3 + 4u);
        a.r[1] = (u32)rd16(r31 + 2u);
        r3 = tc_call(0x8004c670u, &a);
        r30 = r3;
        r3 = r3 + 0x20u;
        a.r[0] = r3;
        a.r[1] = 0u;
        a.r[2] = 0u;
        (void)tc_call(0x80252494u, &a);
        a.r[0] = r30 + 0x20u;
        a.r[1] = 0u;
        a.r[2] = 0u;
        (void)tc_call(0x802524b0u, &a);
        if ((f64)rdf32(0x805727e4u) != param_f1) {
            a.r[0] = r30 + 0x20u;
            a.r[1] = 1u;
            a.r[2] = 1u;
            (void)tc_call(0x802524b0u, &a);
        }
        a.r[0] = r30;
        a.r[1] = 0u;
        a.r[2] = 6u;
        (void)tc_call(0x8004b358u, &a);
    }
    r5 = (u32)rd16(rd32(param_r3) + 6u);
    wr32(0x817fdfc4u, (u32)rd16(r31 + 4u));
    f3 = rdf64(0x817fdfc0u);
    c0eq = rd32(0x80571100u) == 1u;
    r3 = (u32)rd16(r31 + 6u);
    r0 = (u32)rd16(r31 + 8u);
    wr32(0x817fdfc4u, r3);
    f8 = rdf64(0x805727f0u);
    f3 = (f64)(f32)px_psub(f3, f8);
    wr32(0x817fdfc4u, r0);
    f7 = (f64)(f32)px_pdiv(f3, (f64)(f32)px_psub(px_b2f((u64)r5 | 0x4330000000000000ull), f8));
    f4 = px_b2f((u64)r0 | 0x4330000000000000ull);
    r0 = (u32)rd16(r31 + 0xau);
    wr32(0x817fdfc4u, r0);
    wr32(0x817fdfc4u, r5);
    f4 = (f64)(f32)px_psub(f4, f8);
    wrf32d(0x817fdfb4u, (f64)(f32)px_pdiv((f64)(f32)px_psub(px_b2f((u64)r3 | 0x4330000000000000ull), f8), (f64)(f32)px_psub(px_b2f((u64)r5 | 0x4330000000000000ull), f8)));
    f4 = (f64)(f32)px_pdiv(f4, (f64)(f32)px_psub(px_b2f((u64)r5 | 0x4330000000000000ull), f8));
    f2 = (f64)(f32)px_pdiv((f64)(f32)px_psub(px_b2f((u64)r0 | 0x4330000000000000ull), f8), (f64)(f32)px_psub(px_b2f((u64)r5 | 0x4330000000000000ull), f8));
    wrf32d(0x817fdfb8u, f4);
    wrf32d(0x817fdfbcu, f2);
    wrf32d(0x817fdf98u, (f64)(f32)px_pmul((f64)(f32)px_psub(px_b2f((u64)r5 | 0x4330000000000000ull), f8), (f64)(f32)px_pmul(param_f1, (f64)(f32)px_psub(f4, f7))));
    if (c0eq) {
        f5 = (f64)rdf32(0x805727e8u);
    } else {
        f5 = (f64)rdf32(0x805727e4u);
    }
    f3 = (f64)(f32)px_psub(px_b2f((u64)r5 | 0x4330000000000000ull), rdf64(0x805727f0u));
    f1 = (f64)rdf32(param_r4);
    f2 = (f64)(f32)px_pmul(param_f1, (f64)(f32)px_psub((f64)px_w2f(ppc_single_bits(f2)), (f64)rdf32(0x817fdfb4u)));
    f0 = (f64)rdf32(param_r4 + 4u);
    f4 = (f64)(f32)px_pmul((f64)rdf32(0x817fdf98u), f5);
    wrf32d(0x817fdfa0u, f1);
    f2 = (f64)(f32)px_pmul(f3, f2);
    wrf32d(0x817fdfa4u, f0);
    f1 = (f64)(f32)px_padd(f1, f4);
    wrf32d(0x817fdf98u, f4);
    f0 = (f64)(f32)px_padd(f0, f2);
    wrf32d(0x817fdfa8u, f1);
    wrf32d(0x817fdfacu, f0);
    a.r[0] = 0x98u;
    a.r[1] = 7u;
    a.r[2] = 4u;
    (void)tc_call(0x80250b74u, &a);
    f1 = (f64)rdf32(0x817fdfa0u);
    f2 = (f64)rdf32(0x817fdfa4u);
    wrf32d(0xcc008000u, f1);
    f3 = (f64)rdf32(param_r4 + 8u);
    wrf32d(0xcc008000u, f2);
    r0 = (u32)rd8(param_r5);
    wrf32d(0xcc008000u, f3);
    r4 = (u32)rd8(param_r5 + 1u);
    wr8(0xcc008000u, (u8)r0);
    r5 = (u32)rd8(param_r5 + 2u);
    wr8(0xcc008000u, (u8)r4);
    r6 = (u32)rd8(param_r5 + 3u);
    wr8(0xcc008000u, (u8)r5);
    f0 = (f64)px_w2f(ppc_single_bits(f7));
    wr8(0xcc008000u, (u8)r6);
    f4 = (f64)rdf32(0x817fdfb4u);
    wrf32d(0xcc008000u, f0);
    f5 = (f64)rdf32(0x817fdfa8u);
    wrf32d(0xcc008000u, f4);
    f6 = (f64)rdf32(0x817fdfb8u);
    wrf32d(0xcc008000u, f5);
    f7 = (f64)rdf32(0x817fdfacu);
    wrf32d(0xcc008000u, f2);
    f2 = (f64)rdf32(0x817fdfbcu);
    wrf32d(0xcc008000u, f3);
    wr8(0xcc008000u, (u8)r0);
    wr8(0xcc008000u, (u8)r4);
    wr8(0xcc008000u, (u8)r5);
    wr8(0xcc008000u, (u8)r6);
    wrf32d(0xcc008000u, f6);
    wrf32d(0xcc008000u, f4);
    wrf32d(0xcc008000u, f1);
    wrf32d(0xcc008000u, f7);
    wrf32d(0xcc008000u, f3);
    wr8(0xcc008000u, (u8)r0);
    wr8(0xcc008000u, (u8)r4);
    wr8(0xcc008000u, (u8)r5);
    wr8(0xcc008000u, (u8)r6);
    wrf32d(0xcc008000u, f0);
    wrf32d(0xcc008000u, f2);
    wrf32d(0xcc008000u, f5);
    wrf32d(0xcc008000u, f7);
    wrf32d(0xcc008000u, f3);
    wr8(0xcc008000u, (u8)r0);
    wr8(0xcc008000u, (u8)r4);
    wr8(0xcc008000u, (u8)r5);
    wr8(0xcc008000u, (u8)r6);
    wrf32d(0xcc008000u, f6);
    wrf32d(0xcc008000u, f2);
    return;
}
