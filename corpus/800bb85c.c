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

void fn_800bb85c(u32 param_r3)
{
    u32 lr = 0, r0 = 0, r1 = 0, r3 = 0, r4 = tc_argr(1u), r5 = tc_argr(2u), r6 = tc_argr(3u), r7 = tc_argr(4u), r8 = tc_argr(5u), r9 = tc_argr(6u), r10 = tc_argr(7u), r11 = 0;
    u32 r12 = 0, r21 = 0, r22 = 0, r23 = 0, r24 = 0, r25 = 0, r26 = 0, r27 = 0, r28 = 0, r29 = 0, r30 = 0, r31 = 0;
    u32 t17 = 0, t20 = 0, t23 = 0, t26 = 0, t29 = 0, t32 = 0, t35 = 0, t38 = 0, t41 = 0, t44 = 0, t47 = 0;
    f64 f0 = 0.0, f1 = tc_argf(0u), f2 = tc_argf(1u), f3 = tc_argf(2u), f4 = tc_argf(3u), f5 = tc_argf(4u), f21 = 0.0, f22 = 0.0, f23 = 0.0, f24 = 0.0, f25 = 0.0, f26 = 0.0;
    f64 f27 = 0.0, f28 = 0.0, f29 = 0.0, f30 = 0.0, f31 = 0.0, t18 = 0.0, t19 = 0.0, t21 = 0.0, t22 = 0.0, t24 = 0.0, t25 = 0.0, t27 = 0.0;
    f64 t28 = 0.0, t30 = 0.0, t31 = 0.0, t33 = 0.0, t34 = 0.0, t36 = 0.0, t37 = 0.0, t39 = 0.0, t40 = 0.0, t42 = 0.0, t43 = 0.0, t45 = 0.0;
    f64 t46 = 0.0, t48 = 0.0, t49 = 0.0;
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
        r11 = r1 + 0x50u;
        wr32(r11 - 0x2cu, r21);
        wr32(r11 - 0x28u, r22);
        wr32(r11 - 0x24u, r23);
        wr32(r11 - 0x20u, r24);
        wr32(r11 - 0x1cu, r25);
        wr32(r11 - 0x18u, r26);
        wr32(r11 - 0x14u, 0u);
        wr32(r11 - 0x10u, r28);
        wr32(r11 - 0xcu, r29);
        wr32(r11 - 8u, r30);
        wr32(r11 - 4u, r31);
        r31 = r3;
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
        a.r[1] = 0x55eu;
        a.r[2] = 1u;
        a.r[3] = 0u;
        a.r[4] = 0xffffffffu;
        r3 = tc_call(0x80050dd4u, &a);
        f1 = tc_lastf();
        r22 = r3;
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
        wr32(r31 + 0x800u, r3);
        r3 = r31 + 0x78cu;
        r12 = rd32(r31 + 0x78cu);
        r12 = rd32(r12 + 0xcu);
        lr = 0x800bb90cu;
        if (r12 != 0x800bb85cu) {
            a.r[0] = r3;
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
            r4 = tc_lastr4();
            r5 = tc_junkr(5u);
            r6 = tc_junkr(6u);
            r7 = tc_junkr(7u);
            r8 = tc_junkr(8u);
            r9 = tc_junkr(9u);
            r10 = tc_junkr(0xau);
            r12 = rd32(r31 + 0x78cu);
            r3 = r31 + 0x78cu;
            f3 = (f64)rdf32(0x80572db8u);
            r12 = rd32(r12 + 0x1cu);
            f1 = (f64)rdf32(0x80572db0u);
            f2 = (f64)rdf32(0x80572db4u);
            lr = 0x800bb930u;
            if (r12 != 0x800bb85cu) {
                a.r[0] = r3;
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
                a.f[3] = f3;
                a.f[4] = 0.0;
                a.f[5] = 0.0;
                a.f[6] = 0.0;
                a.f[7] = 0.0;
                r3 = tc_call(r12, &a);
                f1 = tc_lastf();
                r3 = rd32(r31 + 0x800u);
                wr32(r31 + 0x7b4u, 0u);
                wr32(r31 + 0x7a4u, r3);
                r3 = tc_call(0x800545e4u, &a);
                f1 = tc_lastf();
                r6 = r3;
                if (rd32(r3 + 0x10u) == 0u) {
                    if (rd32(r3 + 0x20u) == 0u) {
                        r5 = rd32(r3 + 0xcu);
                        r3 = rd32(r3);
                        r6 = r6 + 0x18u;
                        a.r[0] = r3;
                        a.r[1] = r22;
                        a.r[2] = r5;
                        a.r[3] = r6;
                        r3 = tc_call(0x80040e98u, &a);
                        f1 = tc_lastf();
                    } else {
                        r3 = r3 + 0x24u;
                        a.r[0] = r3;
                        a.r[1] = r22;
                        r3 = tc_call(0x80094ec0u, &a);
                        f1 = tc_lastf();
                    }
                } else {
                    r5 = rd32(r3 + 0xcu);
                    r3 = rd32(r3);
                    r6 = r6 + 0x18u;
                    a.r[0] = r3;
                    a.r[1] = r22;
                    a.r[2] = r5;
                    a.r[3] = r6;
                    r3 = tc_call(0x80040e98u, &a);
                    f1 = tc_lastf();
                }
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
                a.r[1] = 0x66cu;
                a.r[2] = 1u;
                a.r[3] = 0u;
                a.r[4] = 0xffffffffu;
                r3 = tc_call(0x80050dd4u, &a);
                f1 = tc_lastf();
                r22 = r3;
                a.r[0] = r3;
                r3 = tc_call(0x80045be0u, &a);
                f1 = tc_lastf();
                a.r[0] = r3;
                a.r[1] = 0u;
                r3 = tc_call(0x8004bf2cu, &a);
                f1 = tc_lastf();
                wr32(r31 + 0x788u, r3);
                r26 = r31;
                f23 = rdf64(0x80572d08u);
                r23 = r31;
                f24 = (f64)rdf32(0x80572d34u);
                r25 = r31 + 0x830u;
                f25 = (f64)rdf32(0x80572cf0u);
                r24 = r31 + 0x8a4u;
                f26 = (f64)rdf32(0x80572dbcu);
                r21 = 0u;
                f27 = (f64)rdf32(0x80572d3cu);
                f28 = (f64)rdf32(0x80572d38u);
                r28 = 0x43300000u;
                f29 = (f64)rdf32(0x80572ca0u);
                r29 = 1u;
                f30 = (f64)rdf32(0x80572d28u);
                r30 = 0x2e8u;
                f31 = (f64)rdf32(0x80572d24u);
                f21 = (f64)rdf32(0x80572d30u);
                f22 = (f64)rdf32(0x80572dc0u);
                for (;;) {
                    wr32(r1 + 8u, 0x43300000u);
                    wr32(r1 + 0xcu, r21 ^ 0x80000000u);
                    f0 = rdf64(r1 + 8u);
                    wr32(r26 + 0x81cu, 0u);
                    f0 = (f64)(f32)px_psub(f0, f23);
                    a.f[0] = (f64)(f32)px_pmul(f24, f0);
                    f1 = tc_callf(0x80262b10u, &a);
                    r3 = tc_lastr();
                    wr32(r1 + 0x14u, r21 ^ 0x80000000u);
                    f1 = (f64)(f32)px_sfma(f25, (f64)(f32)f1, f26);
                    wr32(r1 + 0x10u, 0x43300000u);
                    f0 = rdf64(r1 + 0x10u);
                    wrf32d(r26 + 0x820u, f1);
                    f0 = (f64)(f32)px_psub(f0, f23);
                    a.f[0] = (f64)(f32)px_pmul(f24, f0);
                    f1 = tc_callf(0x80262704u, &a);
                    r3 = tc_lastr();
                    r4 = tc_lastr4();
                    r5 = tc_junkr(5u);
                    r6 = tc_junkr(6u);
                    r7 = tc_junkr(7u);
                    r8 = tc_junkr(8u);
                    r9 = tc_junkr(9u);
                    r10 = tc_junkr(0xau);
                    r3 = r25;
                    wrf32d(r26 + 0x824u, (f64)(f32)px_sfma(f27, (f64)(f32)f1, f28));
                    f1 = (f64)(f32)px_psub(f29, (f64)rdf32(r31 + 8u));
                    wrf32d(r26 + 0x82cu, (f64)(f32)px_pmul(f1, (f64)(f32)px_psub(f30, (f64)rdf32(r26 + 0x820u))));
                    r12 = rd32(r25);
                    r12 = rd32(r12 + 0xcu);
                    lr = 0x800bba98u;
                    if (r12 == 0x800bb85cu) break;
                    a.r[0] = r25;
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
                    r4 = tc_lastr4();
                    r5 = tc_junkr(5u);
                    r6 = tc_junkr(6u);
                    r7 = tc_junkr(7u);
                    r8 = tc_junkr(8u);
                    r9 = tc_junkr(9u);
                    r10 = tc_junkr(0xau);
                    wr32(r26 + 0x88cu, 1u);
                    r3 = r25;
                    f4 = (f64)rdf32(0x80572ce4u);
                    f1 = (f64)rdf32(r31 + 8u);
                    f0 = (f64)rdf32(r26 + 0x820u);
                    r12 = rd32(r25);
                    f3 = (f64)(f32)px_pmul(f21, f1);
                    f1 = (f64)(f32)px_sfma(f31, f1, f0);
                    f0 = (f64)rdf32(r26 + 0x82cu);
                    r12 = rd32(r12 + 0x1cu);
                    f2 = (f64)rdf32(r26 + 0x824u);
                    f1 = (f64)(f32)px_padd(f1, f0);
                    lr = 0x800bbad0u;
                    if (r12 == 0x800bb85cu) break;
                    a.r[0] = r25;
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
                    r3 = r24;
                    wr32(r26 + 0x848u, rd32(r31 + 0x788u));
                    wrf32d(r26 + 0x83cu, f22);
                    wr32(r26 + 0x858u, 0u);
                    r12 = rd32(r24);
                    r12 = rd32(r12 + 0xcu);
                    lr = 0x800bbaf4u;
                    if (r12 == 0x800bb85cu) break;
                    a.r[0] = r24;
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
                    r4 = tc_lastr4();
                    r5 = tc_junkr(5u);
                    r6 = tc_junkr(6u);
                    r7 = tc_junkr(7u);
                    r8 = tc_junkr(8u);
                    r9 = tc_junkr(9u);
                    r10 = tc_junkr(0xau);
                    wr32(r26 + 0x900u, 1u);
                    r3 = r24;
                    f4 = (f64)rdf32(0x80572ce4u);
                    f5 = (f64)rdf32(r31 + 8u);
                    f0 = (f64)rdf32(r26 + 0x820u);
                    r12 = rd32(r24);
                    f3 = (f64)(f32)px_pmul(f21, f5);
                    f1 = (f64)(f32)px_sfma(f31, f5, f0);
                    f0 = (f64)rdf32(r26 + 0x82cu);
                    r12 = rd32(r12 + 0x1cu);
                    f2 = (f64)rdf32(r26 + 0x824u);
                    f0 = (f64)(f32)px_padd(f1, f0);
                    f1 = px_pfnm((f64)(f32)px_sfms(f21, f5, f0));
                    lr = 0x800bbb30u;
                    if (r12 == 0x800bb85cu) break;
                    a.r[0] = r24;
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
                    r3 = tc_call(r12, &a);
                    f1 = tc_lastf();
                    r21 = r21 + 1u;
                    r25 = r25 + 0xfcu;
                    wr32(r26 + 0x8bcu, rd32(r31 + 0x788u));
                    r24 = r24 + 0xfcu;
                    wrf32d(r26 + 0x8b0u, f22);
                    wr32(r26 + 0x8ccu, 0u);
                    r26 = r26 + 0xfcu;
                    wr32(r23 + 0xc0cu, 0x2e8u);
                    r23 = r23 + 4u;
                    if ((s32)r21 >= 4) {
                        r3 = tc_call(0x800545e4u, &a);
                        f1 = tc_lastf();
                        r6 = r3;
                        if (rd32(r3 + 0x10u) == 0u) {
                            if (rd32(r3 + 0x20u) == 0u) {
                                r5 = rd32(r3 + 0xcu);
                                r3 = rd32(r3);
                                r6 = r6 + 0x18u;
                                a.r[0] = r3;
                                a.r[1] = r22;
                                a.r[2] = r5;
                                a.r[3] = r6;
                                r3 = tc_call(0x80040e98u, &a);
                                f1 = tc_lastf();
                            } else {
                                r3 = r3 + 0x24u;
                                a.r[0] = r3;
                                a.r[1] = r22;
                                r3 = tc_call(0x80094ec0u, &a);
                                f1 = tc_lastf();
                            }
                        } else {
                            r5 = rd32(r3 + 0xcu);
                            r3 = rd32(r3);
                            r6 = r6 + 0x18u;
                            a.r[0] = r3;
                            a.r[1] = r22;
                            a.r[2] = r5;
                            a.r[3] = r6;
                            r3 = tc_call(0x80040e98u, &a);
                            f1 = tc_lastf();
                        }
                        wrf32d(r31 + 0xc1cu, (f64)rdf32(0x80572dc4u));
                        t17 = r1 + 0xf8u;
                        t18 = (f64)rdf32(t17);
                        t19 = (f64)rdf32(t17);
                        f31 = rdf64(r1 + 0xf0u);
                        t20 = r1 + 0xe8u;
                        t21 = (f64)rdf32(t20);
                        t22 = (f64)rdf32(t20);
                        f30 = rdf64(r1 + 0xe0u);
                        t23 = r1 + 0xd8u;
                        t24 = (f64)rdf32(t23);
                        t25 = (f64)rdf32(t23);
                        f29 = rdf64(r1 + 0xd0u);
                        t26 = r1 + 0xc8u;
                        t27 = (f64)rdf32(t26);
                        t28 = (f64)rdf32(t26);
                        f28 = rdf64(r1 + 0xc0u);
                        t29 = r1 + 0xb8u;
                        t30 = (f64)rdf32(t29);
                        t31 = (f64)rdf32(t29);
                        f27 = rdf64(r1 + 0xb0u);
                        t32 = r1 + 0xa8u;
                        t33 = (f64)rdf32(t32);
                        t34 = (f64)rdf32(t32);
                        f26 = rdf64(r1 + 0xa0u);
                        t35 = r1 + 0x98u;
                        t36 = (f64)rdf32(t35);
                        t37 = (f64)rdf32(t35);
                        f25 = rdf64(r1 + 0x90u);
                        t38 = r1 + 0x88u;
                        t39 = (f64)rdf32(t38);
                        t40 = (f64)rdf32(t38);
                        f24 = rdf64(r1 + 0x80u);
                        t41 = r1 + 0x78u;
                        t42 = (f64)rdf32(t41);
                        t43 = (f64)rdf32(t41);
                        f23 = rdf64(r1 + 0x70u);
                        t44 = r1 + 0x68u;
                        t45 = (f64)rdf32(t44);
                        t46 = (f64)rdf32(t44);
                        f22 = rdf64(r1 + 0x60u);
                        t47 = r1 + 0x58u;
                        t48 = (f64)rdf32(t47);
                        t49 = (f64)rdf32(t47);
                        f21 = rdf64(r1 + 0x50u);
                        r11 = r1 + 0x50u;
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
    }
}
