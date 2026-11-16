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

void fn_80036120(u32 param_1, u32 param_2, f64 param_f1, f64 param_f2)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0, r31 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f3 = 0.0, f4 = 0.0, f5 = 0.0, f26 = 0.0, f27 = 0.0, f28 = 0.0, f29 = 0.0, f30 = 0.0, f31 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdf00u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wrf64(0x817fdff0u, 0.0);
    wrf32d(0x817fdff8u, px_hi(0.0));
    wrf32d(0x817fdff8u, px_lo(0.0));
    wrf64(0x817fdfe0u, 0.0);
    wrf32d(0x817fdfe8u, px_hi(0.0));
    wrf32d(0x817fdfe8u, px_lo(0.0));
    wrf64(0x817fdfd0u, 0.0);
    wrf32d(0x817fdfd8u, px_hi(0.0));
    wrf32d(0x817fdfd8u, px_lo(0.0));
    wrf64(0x817fdfc0u, 0.0);
    wrf32d(0x817fdfc8u, px_hi(0.0));
    wrf32d(0x817fdfc8u, px_lo(0.0));
    wrf64(0x817fdfb0u, 0.0);
    wrf32d(0x817fdfb8u, px_hi(0.0));
    wrf32d(0x817fdfb8u, px_lo(0.0));
    wrf64(0x817fdfa0u, 0.0);
    wrf32d(0x817fdfa8u, px_hi(0.0));
    wrf32d(0x817fdfa8u, px_lo(0.0));
    wrf64(0x817fdf90u, 0.0);
    wrf32d(0x817fdf98u, px_hi(0.0));
    wrf32d(0x817fdf98u, px_lo(0.0));
    wr32(0x817fdf8cu, 0u);
    f28 = param_f2;
    r31 = param_2;
    wr32(0x817fdf88u, 0u);
    f29 = param_f1;
    wr32(0x817fdf84u, 0u);
    wr32(0x817fdf68u, 0x43300000u);
    wr32(0x817fdf70u, 0x43300000u);
    a.r[0] = 1u;
    (void)tc_call(0x8004ca7cu, &a);
    a.r[0] = 0x101u;
    (void)tc_call(0x8004cd5cu, &a);
    a.r[0] = param_1;
    a.r[1] = param_1;
    a.r[2] = 0x101u;
    (void)tc_call(0x8003d05cu, &a);
    r6 = rd32(0x80570fc0u);
    f30 = rdf64(0x80571ee8u);
    r0 = (u32)rd16(r6 + 0x20u);
    wr32(0x817fdf6cu, (u32)rd16(r6 + 0x1eu));
    f1 = (f64)rdf32(0x80571ef8u);
    wr32(0x817fdf74u, r0);
    f31 = rdf64(0x80571ef0u);
    f27 = (f64)(f32)px_pdiv(f1, (f64)(f32)px_psub(rdf64(0x817fdf68u), f30));
    f26 = (f64)(f32)px_pdiv(f1, (f64)(f32)px_psub(rdf64(0x817fdf70u), f30));
    while ((u32)(s8)rd8(r31) != 0u) {
        wr32(0x817fdf14u, 0u);
        wr32(0x817fdf10u, 0u);
        wr32(0x817fdf0cu, 0u);
        wr32(0x817fdf08u, 0u);
        if ((u32)rd8(r31) == 0xau) {
            f29 = param_f1;
            r31 = r31 + 1u;
            wr32(0x817fdf6cu, (u32)rd16(r6 + 0x12u));
            f28 = (f64)(f32)px_padd(f28, (f64)(f32)px_psub(rdf64(0x817fdf68u), f30));
        } else {
            a.r[0] = r31;
            a.r[1] = 0x817fdf14u;
            a.r[2] = 0x817fdf10u;
            a.r[3] = 0x817fdf0cu;
            a.r[4] = 0x817fdf08u;
            r3 = tc_call(0x8022c0a8u, &a);
            r6 = rd32(0x80570fc0u);
            r31 = r3;
            r4 = (u32)rd16(r6 + 0x18u);
            r5 = (u32)rd16(r6 + 0x1eu);
            r6 = (u32)rd16(r6 + 0x20u);
            a.r[0] = 0x817fdf18u;
            a.r[1] = r4;
            a.r[2] = r5;
            a.r[3] = r6;
            a.r[4] = 0u;
            a.r[5] = rd32(0x817fdf14u);
            (void)tc_call(0x8004b72cu, &a);
            a.r[0] = 0x817fdf28u;
            a.r[1] = 0u;
            a.r[2] = 0x817fdf18u;
            a.r[3] = 0u;
            (void)tc_call(0x8004b7a0u, &a);
            a.r[0] = 0x817fdf48u;
            a.r[1] = 0u;
            a.r[2] = 0u;
            (void)tc_call(0x80252494u, &a);
            a.r[0] = 0x817fdf48u;
            a.r[1] = 1u;
            a.r[2] = 1u;
            (void)tc_call(0x802524b0u, &a);
            a.r[0] = 0x817fdf28u;
            a.r[1] = 0u;
            a.r[2] = 6u;
            (void)tc_call(0x8004b358u, &a);
            a.r[0] = 0x98u;
            a.r[1] = 7u;
            a.r[2] = 4u;
            (void)tc_call(0x80250b74u, &a);
            r6 = rd32(0x80570fc0u);
            r4 = rd32(0x817fdf08u) ^ 0x80000000u;
            r0 = rd32(0x817fdf10u);
            wr32(0x817fdf74u, r4);
            r5 = (u32)rd16(r6 + 0x12u);
            r3 = r0 ^ 0x80000000u;
            f0 = rdf64(0x817fdf70u);
            wr32(0x817fdf6cu, r5);
            f1 = (f64)(f32)px_psub(f0, f31);
            f0 = rdf64(0x817fdf68u);
            r0 = rd32(0x817fdf0cu) ^ 0x80000000u;
            wr32(0x817fdf74u, r3);
            f3 = (f64)(f32)px_padd(f29, f1);
            f1 = (f64)(f32)px_psub(f0, f30);
            f0 = rdf64(0x817fdf70u);
            wrf32d(0xcc008000u, f29);
            f2 = (f64)(f32)px_psub(f0, f31);
            wr32(0x817fdf6cu, r0);
            f4 = (f64)(f32)px_padd(f28, f1);
            f0 = rdf64(0x817fdf68u);
            f2 = (f64)(f32)px_pmul(f27, f2);
            wrf32d(0xcc008000u, f28);
            f1 = (f64)(f32)px_psub(f0, f31);
            f0 = (f64)rdf32(0x80571ee0u);
            wr32(0x817fdf74u, r4);
            wrf32d(0xcc008000u, f0);
            f5 = (f64)(f32)px_pmul(f26, f1);
            f1 = rdf64(0x817fdf70u);
            wrf32d(0xcc008000u, f2);
            wrf32d(0xcc008000u, f5);
            wrf32d(0xcc008000u, f3);
            f1 = (f64)(f32)px_sfma(f27, (f64)(f32)px_psub(f1, f31), f2);
            wrf32d(0xcc008000u, f28);
            f0 = (f64)rdf32(0x80571ee0u);
            wr32(0x817fdf6cu, r5);
            wrf32d(0xcc008000u, f0);
            f0 = rdf64(0x817fdf68u);
            wrf32d(0xcc008000u, f1);
            f0 = (f64)(f32)px_psub(f0, f30);
            wrf32d(0xcc008000u, f5);
            wrf32d(0xcc008000u, f29);
            f5 = (f64)(f32)px_sfma(f26, f0, f5);
            wrf32d(0xcc008000u, f4);
            f0 = (f64)rdf32(0x80571ee0u);
            wr32(0x817fdf74u, r4);
            wrf32d(0xcc008000u, f0);
            f0 = rdf64(0x817fdf70u);
            wrf32d(0xcc008000u, f2);
            f0 = (f64)(f32)px_psub(f0, f31);
            wrf32d(0xcc008000u, f5);
            wrf32d(0xcc008000u, f3);
            f29 = (f64)(f32)px_padd(f29, f0);
            wrf32d(0xcc008000u, f4);
            wrf32d(0xcc008000u, (f64)rdf32(0x80571ee0u));
            wrf32d(0xcc008000u, f1);
            wrf32d(0xcc008000u, f5);
        }
    }
    a.r[0] = 0u;
    (void)tc_call(0x8004ca7cu, &a);
    return;
}
