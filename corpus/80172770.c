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

void fn_80172770(u32 param_r3)
{
    u32 ctr = 0, lr = 0, r0 = 0, r1 = 0, r3 = 0, r4 = tc_argr(1u), r5 = tc_argr(2u), r6 = tc_argr(3u), r7 = tc_argr(4u), r8 = tc_argr(5u), r9 = tc_argr(6u), r10 = tc_argr(7u);
    u32 r11 = 0, r12 = 0, r20 = 0, r21 = 0, r22 = 0, r23 = 0, r24 = 0, r25 = 0, r26 = 0, r27 = 0, r28 = 0, r29 = 0;
    u32 r30 = 0, r31 = 0, t18 = 0, t21 = 0, t24 = 0, t27 = 0, t30 = 0, t33 = 0, t36 = 0, t39 = 0, t42 = 0, t45 = 0;
    u32 t48 = 0, t51 = 0;
    f64 f0 = 0.0, f1 = tc_argf(0u), f2 = tc_argf(1u), f3 = tc_argf(2u), f4 = tc_argf(3u), f5 = tc_argf(4u), f6 = tc_argf(5u), f7 = tc_argf(6u), f8 = tc_argf(7u), f20 = 0.0, f21 = 0.0, f22 = 0.0;
    f64 f23 = 0.0, f24 = 0.0, f25 = 0.0, f26 = 0.0, f27 = 0.0, f28 = 0.0, f29 = 0.0, f30 = 0.0, f31 = 0.0, t19 = 0.0, t20 = 0.0, t22 = 0.0;
    f64 t23 = 0.0, t25 = 0.0, t26 = 0.0, t28 = 0.0, t29 = 0.0, t31 = 0.0, t32 = 0.0, t34 = 0.0, t35 = 0.0, t37 = 0.0, t38 = 0.0, t40 = 0.0;
    f64 t41 = 0.0, t43 = 0.0, t44 = 0.0, t46 = 0.0, t47 = 0.0, t49 = 0.0, t50 = 0.0, t52 = 0.0, t53 = 0.0;
    TcArgs a = {0};
    r1 = 0x817fe000u;
    lr = 0x817ff000u;
    r3 = param_r3;
    for (;;) {
        wr32(r1 - 0x100u, r1);
        r1 = r1 - 0x100u;
        wr32(r1 + 0x104u, lr);
        wrf64(r1 + 0xf0u, f31);
        wrf32d(r1 + 0xf8u, px_lo(f31));
        wrf64(r1 + 0xe0u, f30);
        wrf32d(r1 + 0xe8u, px_lo(f30));
        wrf64(r1 + 0xd0u, f29);
        wrf32d(r1 + 0xd8u, px_lo(f29));
        wrf64(r1 + 0xc0u, f28);
        wrf32d(r1 + 0xc8u, px_lo(f28));
        wrf64(r1 + 0xb0u, f27);
        wrf32d(r1 + 0xb8u, px_lo(f27));
        wrf64(r1 + 0xa0u, f26);
        wrf32d(r1 + 0xa8u, px_lo(f26));
        wrf64(r1 + 0x90u, f25);
        wrf32d(r1 + 0x98u, px_lo(f25));
        wrf64(r1 + 0x80u, f24);
        wrf32d(r1 + 0x88u, px_lo(f24));
        wrf64(r1 + 0x70u, f23);
        wrf32d(r1 + 0x78u, px_lo(f23));
        wrf64(r1 + 0x60u, f22);
        wrf32d(r1 + 0x68u, px_lo(f22));
        wrf64(r1 + 0x50u, f21);
        wrf32d(r1 + 0x58u, px_lo(f21));
        wrf64(r1 + 0x40u, f20);
        wrf32d(r1 + 0x48u, px_lo(f20));
        r11 = r1 + 0x40u;
        wr32(r11 - 0x30u, r20);
        wr32(r11 - 0x2cu, 0u);
        wr32(r11 - 0x28u, r22);
        wr32(r11 - 0x24u, r23);
        wr32(r11 - 0x20u, r24);
        wr32(r11 - 0x1cu, r25);
        wr32(r11 - 0x18u, r26);
        wr32(r11 - 0x14u, r27);
        wr32(r11 - 0x10u, r28);
        wr32(r11 - 0xcu, r29);
        wr32(r11 - 8u, r30);
        wr32(r11 - 4u, r31);
        r24 = r3;
        r3 = tc_call(0x800545e4u, &a);
        f1 = tc_lastf();
        a.f[0] = f1;
        a.f[1] = 0.0;
        a.f[2] = 0.0;
        a.f[3] = 0.0;
        a.f[4] = 0.0;
        a.f[5] = 0.0;
        a.f[6] = 0.0;
        a.f[7] = 0.0;
        a.r[0] = r3;
        a.r[1] = 0x574u;
        a.r[2] = 1u;
        a.r[3] = 0u;
        a.r[4] = 0xffffffffu;
        r3 = tc_call(0x80050dd4u, &a);
        f1 = tc_lastf();
        r26 = r3;
        a.r[0] = r3;
        r3 = tc_call(0x80045be0u, &a);
        f1 = tc_lastf();
        a.r[0] = r3;
        a.r[1] = 0u;
        r3 = tc_call(0x8004bf2cu, &a);
        f1 = tc_lastf();
        r4 = tc_lastr4();
        r5 = tc_junkr(5u);
        r6 = tc_junkr(6u);
        r7 = tc_junkr(7u);
        r8 = tc_junkr(8u);
        r9 = tc_junkr(9u);
        r10 = tc_junkr(0xau);
        f27 = (f64)rdf32(0x80574ce0u);
        r30 = r24;
        f21 = (f64)rdf32(0x80574e50u);
        r29 = r24 + 0x1818u;
        wr32(r24 + 0x1d28u, r3);
        r28 = r24 + 0x18a8u;
        f30 = (f64)(f32)px_padd(f27, f21);
        f22 = (f64)rdf32(0x80574d30u);
        f23 = (f64)rdf32(0x80574d34u);
        r27 = r24 + 0x1938u;
        f24 = rdf64(0x80574de8u);
        r25 = 0u;
        f25 = (f64)rdf32(0x80574d08u);
        r31 = 1u;
        f26 = (f64)rdf32(0x80574cd8u);
        r20 = 0x43300000u;
        f28 = (f64)rdf32(0x80574d3cu);
        r22 = 2u;
        f29 = (f64)rdf32(0x80574e2cu);
        f31 = (f64)rdf32(0x80574d38u);
        r23 = 3u;
        f20 = (f64)rdf32(0x80574e54u);
        for (;;) {
            wrf32d(r30 + 0x189cu, f22);
            r3 = r29;
            wrf32d(r30 + 0x18a0u, f23);
            r12 = rd32(r29);
            r12 = rd32(r12 + 0xcu);
            lr = 0x80172888u;
            if (r12 == 0x80172770u) break;
            a.r[0] = r29;
            a.r[1] = r4;
            a.r[2] = r5;
            a.r[3] = r6;
            a.r[4] = r7;
            a.r[5] = r8;
            a.r[6] = r9;
            a.r[7] = r10;
            a.f[0] = f1;
            a.f[1] = 0.0;
            a.f[2] = 0.0;
            a.f[3] = 0.0;
            a.f[4] = 0.0;
            a.f[5] = 0.0;
            a.f[6] = 0.0;
            a.f[7] = 0.0;
            r3 = tc_call(r12, &a);
            f1 = tc_lastf();
            r5 = tc_junkr(5u);
            r6 = tc_junkr(6u);
            r7 = tc_junkr(7u);
            r8 = tc_junkr(8u);
            r9 = tc_junkr(9u);
            r10 = tc_junkr(0xau);
            wr32(r30 + 0x1874u, 1u);
            r3 = r29;
            f1 = (f64)rdf32(0x80574e2cu);
            r4 = rd32(r24 + 0x1d28u);
            wr32(r1 + 0xcu, r25 ^ 0x80000000u);
            wr32(r30 + 0x1830u, r4);
            wr32(r1 + 8u, 0x43300000u);
            f4 = (f64)rdf32(r30 + 0x18a0u);
            f2 = rdf64(r1 + 8u);
            r12 = rd32(r29);
            f2 = (f64)(f32)px_psub(f2, f24);
            f3 = (f64)rdf32(r30 + 0x189cu);
            r12 = rd32(r12 + 0x1cu);
            f2 = (f64)(f32)px_sfma(f2, f4, px_pfnm((f64)(f32)px_sfms(f4, f25, f21)));
            lr = 0x801728d0u;
            if (r12 == 0x80172770u) break;
            a.r[0] = r29;
            a.r[1] = r4;
            a.r[2] = r5;
            a.r[3] = r6;
            a.r[4] = r7;
            a.r[5] = r8;
            a.r[6] = r9;
            a.r[7] = r10;
            a.f[0] = f1;
            a.f[1] = f2;
            a.f[2] = f3;
            a.f[3] = f4;
            a.f[4] = 0.0;
            a.f[5] = 0.0;
            a.f[6] = 0.0;
            a.f[7] = 0.0;
            f1 = tc_callf(r12, &a);
            r3 = tc_lastr();
            r4 = tc_lastr4();
            r5 = tc_junkr(5u);
            r6 = tc_junkr(6u);
            r7 = tc_junkr(7u);
            r8 = tc_junkr(8u);
            r9 = tc_junkr(9u);
            r10 = tc_junkr(0xau);
            wr32(r30 + 0x1840u, 0u);
            wrf32d(r30 + 0x1890u, (f64)rdf32(r30 + 0x181cu));
            wrf32d(r30 + 0x1894u, (f64)rdf32(r30 + 0x1820u));
            r3 = rd32(r30 + 0x1830u);
            if (r3 != 0u) {
                a.r[0] = r3;
                r3 = tc_call(0x8004c630u, &a);
                f1 = tc_lastf();
                r4 = tc_lastr4();
                r5 = tc_junkr(5u);
                r6 = tc_junkr(6u);
                r7 = tc_junkr(7u);
                r8 = tc_junkr(8u);
                r9 = tc_junkr(9u);
                r10 = tc_junkr(0xau);
                if ((s32)r3 > 2) {
                    wr32(r30 + 0x1834u, 2u);
                }
            }
            wrf32d(r30 + 0x1854u, f26);
            r3 = r28;
            wrf32d(r30 + 0x1858u, f26);
            wrf32d(r30 + 0x185cu, f27);
            wrf32d(r30 + 0x1860u, f27);
            wrf32d(r30 + 0x192cu, f28);
            wrf32d(r30 + 0x1930u, f28);
            r12 = rd32(r28);
            r12 = rd32(r12 + 0xcu);
            lr = 0x8017292cu;
            if (r12 == 0x80172770u) break;
            a.r[0] = r28;
            a.r[1] = r4;
            a.r[2] = r5;
            a.r[3] = r6;
            a.r[4] = r7;
            a.r[5] = r8;
            a.r[6] = r9;
            a.r[7] = r10;
            a.f[0] = f1;
            a.f[1] = 0.0;
            a.f[2] = 0.0;
            a.f[3] = 0.0;
            a.f[4] = 0.0;
            a.f[5] = 0.0;
            a.f[6] = 0.0;
            a.f[7] = 0.0;
            r3 = tc_call(r12, &a);
            f1 = tc_lastf();
            r5 = tc_junkr(5u);
            r6 = tc_junkr(6u);
            r7 = tc_junkr(7u);
            r8 = tc_junkr(8u);
            r9 = tc_junkr(9u);
            r10 = tc_junkr(0xau);
            wr32(r30 + 0x1904u, 1u);
            r3 = r28;
            r4 = rd32(r24 + 0x1d28u);
            wr32(r1 + 0xcu, r25 ^ 0x80000000u);
            wr32(r30 + 0x18c0u, r4);
            wr32(r1 + 8u, 0x43300000u);
            f4 = (f64)rdf32(r30 + 0x1930u);
            f1 = (f64)rdf32(r30 + 0x1890u);
            f0 = rdf64(r1 + 8u);
            r12 = rd32(r28);
            f1 = (f64)(f32)px_padd(f29, f1);
            f5 = (f64)(f32)px_psub(f0, f24);
            f3 = (f64)rdf32(r30 + 0x192cu);
            f0 = (f64)rdf32(r30 + 0x18a0u);
            r12 = rd32(r12 + 0x1cu);
            f1 = px_pfnm((f64)(f32)px_sfms(f3, f25, f1));
            f2 = (f64)(f32)px_sfma(f5, f0, px_pfnm((f64)(f32)px_sfms(f4, f25, f30)));
            lr = 0x80172980u;
            if (r12 == 0x80172770u) break;
            a.r[0] = r28;
            a.r[1] = r4;
            a.r[2] = r5;
            a.r[3] = r6;
            a.r[4] = r7;
            a.r[5] = r8;
            a.r[6] = r9;
            a.r[7] = r10;
            a.f[0] = f1;
            a.f[1] = f2;
            a.f[2] = f3;
            a.f[3] = f4;
            a.f[4] = f5;
            a.f[5] = 0.0;
            a.f[6] = 0.0;
            a.f[7] = 0.0;
            f1 = tc_callf(r12, &a);
            r3 = tc_lastr();
            r4 = tc_lastr4();
            r5 = tc_junkr(5u);
            r6 = tc_junkr(6u);
            r7 = tc_junkr(7u);
            r8 = tc_junkr(8u);
            r9 = tc_junkr(9u);
            r10 = tc_junkr(0xau);
            wr32(r30 + 0x18d0u, 0u);
            wrf32d(r30 + 0x1920u, (f64)rdf32(r30 + 0x18acu));
            wrf32d(r30 + 0x1924u, (f64)rdf32(r30 + 0x18b0u));
            r3 = rd32(r30 + 0x18c0u);
            if (r3 != 0u) {
                a.r[0] = r3;
                r3 = tc_call(0x8004c630u, &a);
                f1 = tc_lastf();
                r4 = tc_lastr4();
                r5 = tc_junkr(5u);
                r6 = tc_junkr(6u);
                r7 = tc_junkr(7u);
                r8 = tc_junkr(8u);
                r9 = tc_junkr(9u);
                r10 = tc_junkr(0xau);
                if ((s32)r3 > 0) {
                    wr32(r30 + 0x18c4u, 0u);
                }
            }
            wrf32d(r30 + 0x19bcu, f31);
            r3 = r27;
            wrf32d(r30 + 0x19c0u, f28);
            r12 = rd32(r27);
            r12 = rd32(r12 + 0xcu);
            lr = 0x801729ccu;
            if (r12 == 0x80172770u) break;
            a.r[0] = r27;
            a.r[1] = r4;
            a.r[2] = r5;
            a.r[3] = r6;
            a.r[4] = r7;
            a.r[5] = r8;
            a.r[6] = r9;
            a.r[7] = r10;
            a.f[0] = f1;
            a.f[1] = 0.0;
            a.f[2] = 0.0;
            a.f[3] = 0.0;
            a.f[4] = 0.0;
            a.f[5] = 0.0;
            a.f[6] = 0.0;
            a.f[7] = 0.0;
            r3 = tc_call(r12, &a);
            f1 = tc_lastf();
            r5 = tc_junkr(5u);
            r6 = tc_junkr(6u);
            r7 = tc_junkr(7u);
            r8 = tc_junkr(8u);
            r9 = tc_junkr(9u);
            r10 = tc_junkr(0xau);
            wr32(r30 + 0x1994u, 1u);
            r3 = r27;
            r4 = rd32(r24 + 0x1d28u);
            wr32(r1 + 0xcu, r25 ^ 0x80000000u);
            wr32(r30 + 0x1950u, r4);
            wr32(r1 + 8u, 0x43300000u);
            f4 = (f64)rdf32(r30 + 0x19c0u);
            f0 = rdf64(r1 + 8u);
            r12 = rd32(r27);
            f2 = (f64)(f32)px_psub(f0, f24);
            f0 = (f64)rdf32(r30 + 0x18a0u);
            f5 = (f64)rdf32(r30 + 0x1920u);
            f3 = (f64)rdf32(r30 + 0x192cu);
            r12 = rd32(r12 + 0x1cu);
            f2 = (f64)(f32)px_sfma(f2, f0, px_pfnm((f64)(f32)px_sfms(f4, f25, f21)));
            f5 = (f64)(f32)px_padd(f5, f3);
            f3 = (f64)rdf32(r30 + 0x19bcu);
            f1 = (f64)(f32)px_padd(f20, f5);
            lr = 0x80172a24u;
            if (r12 == 0x80172770u) break;
            a.r[0] = r27;
            a.r[1] = r4;
            a.r[2] = r5;
            a.r[3] = r6;
            a.r[4] = r7;
            a.r[5] = r8;
            a.r[6] = r9;
            a.r[7] = r10;
            a.f[0] = f1;
            a.f[1] = f2;
            a.f[2] = f3;
            a.f[3] = f4;
            a.f[4] = f5;
            a.f[5] = 0.0;
            a.f[6] = 0.0;
            a.f[7] = 0.0;
            f1 = tc_callf(r12, &a);
            r3 = tc_lastr();
            r4 = tc_lastr4();
            r5 = tc_junkr(5u);
            r6 = tc_junkr(6u);
            r7 = tc_junkr(7u);
            r8 = tc_junkr(8u);
            r9 = tc_junkr(9u);
            r10 = tc_junkr(0xau);
            wr32(r30 + 0x1960u, 0u);
            wrf32d(r30 + 0x19b0u, (f64)rdf32(r30 + 0x193cu));
            wrf32d(r30 + 0x19b4u, (f64)rdf32(r30 + 0x1940u));
            r3 = rd32(r30 + 0x1950u);
            if (r3 != 0u) {
                a.r[0] = r3;
                r3 = tc_call(0x8004c630u, &a);
                f1 = tc_lastf();
                r4 = tc_lastr4();
                r5 = tc_junkr(5u);
                r6 = tc_junkr(6u);
                r7 = tc_junkr(7u);
                r8 = tc_junkr(8u);
                r9 = tc_junkr(9u);
                r10 = tc_junkr(0xau);
                if ((s32)r3 > 3) {
                    wr32(r30 + 0x1954u, 3u);
                }
            }
            r25 = r25 + 1u;
            r29 = r29 + 0x1b0u;
            r28 = r28 + 0x1b0u;
            r27 = r27 + 0x1b0u;
            r30 = r30 + 0x1b0u;
            if ((s32)r25 >= 3) {
                r3 = tc_call(0x800545e4u, &a);
                f1 = tc_lastf();
                r6 = r3;
                if (rd32(r3 + 0x10u) == 0u) {
                    if (rd32(r3 + 0x20u) == 0u) {
                        r5 = rd32(r3 + 0xcu);
                        r3 = rd32(r3);
                        r6 = r6 + 0x18u;
                        a.r[0] = r3;
                        a.r[1] = r26;
                        a.r[2] = r5;
                        a.r[3] = r6;
                        r3 = tc_call(0x80040e98u, &a);
                        f1 = tc_lastf();
                    } else {
                        r3 = r3 + 0x24u;
                        a.r[0] = r3;
                        a.r[1] = r26;
                        r3 = tc_call(0x80094ec0u, &a);
                        f1 = tc_lastf();
                    }
                } else {
                    r5 = rd32(r3 + 0xcu);
                    r3 = rd32(r3);
                    r6 = r6 + 0x18u;
                    a.r[0] = r3;
                    a.r[1] = r26;
                    a.r[2] = r5;
                    a.r[3] = r6;
                    r3 = tc_call(0x80040e98u, &a);
                    f1 = tc_lastf();
                }
                f8 = (f64)rdf32(0x80574cd8u);
                f7 = (f64)rdf32(0x80574e58u);
                f6 = (f64)rdf32(0x80574d08u);
                r4 = r24;
                f5 = (f64)rdf32(0x80574e5cu);
                f4 = (f64)rdf32(0x80574e60u);
                f3 = (f64)rdf32(0x80574ce0u);
                f1 = (f64)rdf32(0x80574e64u);
                f0 = (f64)rdf32(0x80574e68u);
                wrf32d(r24 + 0x18e4u, f8);
                f2 = (f64)rdf32(0x80574cecu);
                wrf32d(r24 + 0x18e8u, f8);
                wrf32d(r24 + 0x18ecu, f7);
                wrf32d(r24 + 0x18f0u, f6);
                wrf32d(r24 + 0x1a94u, f7);
                wrf32d(r24 + 0x1a98u, f8);
                wrf32d(r24 + 0x1a9cu, f5);
                wrf32d(r24 + 0x1aa0u, f6);
                wrf32d(r24 + 0x1c44u, f4);
                wrf32d(r24 + 0x1c48u, f8);
                wrf32d(r24 + 0x1c4cu, f3);
                wrf32d(r24 + 0x1c50u, f1);
                wr32(r24 + 0x1d2cu, 0u);
                wr32(r24 + 0x1d30u, 0u);
                wr32(r24 + 0x1d34u, 0u);
                wrf32d(r24 + 0x1d38u, f0);
                ctr = 3u;
                do {
                    f1 = (f64)rdf32(r24 + 0x1810u);
                    f0 = (f64)rdf32(r4 + 0x189cu);
                    f4 = (f64)rdf32(r4 + 0x18a0u);
                    f0 = (f64)(f32)px_pmul(f1, f0);
                    wrf32d(r4 + 0x182cu, f0);
                    wrf32d(r4 + 0x1828u, f4);
                    f1 = (f64)(f32)px_psub(f3, (f64)rdf32(r24 + 0x1810u));
                    f1 = (f64)(f32)px_pmul(f1, (f64)(f32)px_psub(f2, (f64)rdf32(r4 + 0x1890u)));
                    wrf32d(r4 + 0x18a4u, f1);
                    f0 = (f64)rdf32(r4 + 0x1890u);
                    f4 = (f64)rdf32(r4 + 0x1894u);
                    f0 = (f64)(f32)px_padd(f0, f1);
                    wrf32d(r4 + 0x181cu, f0);
                    wrf32d(r4 + 0x1820u, f4);
                    f1 = (f64)rdf32(r24 + 0x1810u);
                    f0 = (f64)rdf32(r4 + 0x192cu);
                    f4 = (f64)rdf32(r4 + 0x1930u);
                    f0 = (f64)(f32)px_pmul(f1, f0);
                    wrf32d(r4 + 0x18bcu, f0);
                    wrf32d(r4 + 0x18b8u, f4);
                    f1 = (f64)(f32)px_psub(f3, (f64)rdf32(r24 + 0x1810u));
                    f1 = (f64)(f32)px_pmul(f1, (f64)(f32)px_psub(f2, (f64)rdf32(r4 + 0x1920u)));
                    wrf32d(r4 + 0x1934u, f1);
                    f0 = (f64)rdf32(r4 + 0x1920u);
                    f4 = (f64)rdf32(r4 + 0x1924u);
                    f0 = (f64)(f32)px_padd(f0, f1);
                    wrf32d(r4 + 0x18acu, f0);
                    wrf32d(r4 + 0x18b0u, f4);
                    f1 = (f64)rdf32(r24 + 0x1810u);
                    f0 = (f64)rdf32(r4 + 0x19bcu);
                    f4 = (f64)rdf32(r4 + 0x19c0u);
                    f0 = (f64)(f32)px_pmul(f1, f0);
                    wrf32d(r4 + 0x194cu, f0);
                    wrf32d(r4 + 0x1948u, f4);
                    f1 = (f64)(f32)px_psub(f3, (f64)rdf32(r24 + 0x1810u));
                    f1 = (f64)(f32)px_pmul(f1, (f64)(f32)px_psub(f2, (f64)rdf32(r4 + 0x19b0u)));
                    wrf32d(r4 + 0x19c4u, f1);
                    f0 = (f64)rdf32(r4 + 0x19b0u);
                    f4 = (f64)rdf32(r4 + 0x19b4u);
                    f0 = (f64)(f32)px_padd(f0, f1);
                    wrf32d(r4 + 0x193cu, f0);
                    wrf32d(r4 + 0x1940u, f4);
                    r4 = r4 + 0x1b0u;
                    ctr = ctr - 1u;
                } while (ctr != 0u);
                t18 = r1 + 0xf8u;
                t19 = (f64)rdf32(t18);
                t20 = (f64)rdf32(t18);
                f31 = rdf64(r1 + 0xf0u);
                t21 = r1 + 0xe8u;
                t22 = (f64)rdf32(t21);
                t23 = (f64)rdf32(t21);
                f30 = rdf64(r1 + 0xe0u);
                t24 = r1 + 0xd8u;
                t25 = (f64)rdf32(t24);
                t26 = (f64)rdf32(t24);
                f29 = rdf64(r1 + 0xd0u);
                t27 = r1 + 0xc8u;
                t28 = (f64)rdf32(t27);
                t29 = (f64)rdf32(t27);
                f28 = rdf64(r1 + 0xc0u);
                t30 = r1 + 0xb8u;
                t31 = (f64)rdf32(t30);
                t32 = (f64)rdf32(t30);
                f27 = rdf64(r1 + 0xb0u);
                t33 = r1 + 0xa8u;
                t34 = (f64)rdf32(t33);
                t35 = (f64)rdf32(t33);
                f26 = rdf64(r1 + 0xa0u);
                t36 = r1 + 0x98u;
                t37 = (f64)rdf32(t36);
                t38 = (f64)rdf32(t36);
                f25 = rdf64(r1 + 0x90u);
                t39 = r1 + 0x88u;
                t40 = (f64)rdf32(t39);
                t41 = (f64)rdf32(t39);
                f24 = rdf64(r1 + 0x80u);
                t42 = r1 + 0x78u;
                t43 = (f64)rdf32(t42);
                t44 = (f64)rdf32(t42);
                f23 = rdf64(r1 + 0x70u);
                t45 = r1 + 0x68u;
                t46 = (f64)rdf32(t45);
                t47 = (f64)rdf32(t45);
                f22 = rdf64(r1 + 0x60u);
                t48 = r1 + 0x58u;
                t49 = (f64)rdf32(t48);
                t50 = (f64)rdf32(t48);
                f21 = rdf64(r1 + 0x50u);
                t51 = r1 + 0x48u;
                t52 = (f64)rdf32(t51);
                t53 = (f64)rdf32(t51);
                r11 = r1 + 0x40u;
                f20 = rdf64(r1 + 0x40u);
                r20 = rd32(r11 - 0x30u);
                r21 = rd32(r11 - 0x2cu);
                r22 = rd32(r11 - 0x28u);
                r23 = rd32(r11 - 0x24u);
                r24 = rd32(r11 - 0x20u);
                r25 = rd32(r11 - 0x1cu);
                r26 = rd32(r11 - 0x18u);
                r27 = rd32(r11 - 0x14u);
                r28 = rd32(r11 - 0x10u);
                r29 = rd32(r11 - 0xcu);
                r30 = rd32(r11 - 8u);
                r31 = rd32(r11 - 4u);
                r0 = rd32(r1 + 0x104u);
                return;
            }
        }
    }
}
