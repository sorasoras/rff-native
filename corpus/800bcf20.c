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

void fn_800bcf20(u32 param_r3)
{
    u32 fl_ = 0, lr = 0, r0 = 0, r1 = 0, r3 = 0, r4 = tc_argr(1u), r5 = tc_argr(2u), r6 = tc_argr(3u), r7 = tc_argr(4u), r8 = tc_argr(5u), r9 = tc_argr(6u), r10 = tc_argr(7u);
    u32 r11 = 0, r12 = 0, r20 = 0, r21 = 0, r22 = 0, r23 = 0, r24 = 0, r25 = 0, r26 = 0, r27 = 0, r28 = 0, r29 = 0;
    u32 r30 = 0, r31 = 0, t21 = 0, t24 = 0, t27 = 0, t30 = 0, t33 = 0, t36 = 0, t39 = 0, t42 = 0, t45 = 0, t48 = 0;
    u32 t51 = 0, t54 = 0, t57 = 0;
    f64 f0 = 0.0, f1 = tc_argf(0u), f2 = tc_argf(1u), f3 = tc_argf(2u), f4 = tc_argf(3u), f5 = tc_argf(4u), f6 = tc_argf(5u), f19 = 0.0, f20 = 0.0, f21 = 0.0, f22 = 0.0, f23 = 0.0;
    f64 f24 = 0.0, f25 = 0.0, f26 = 0.0, f27 = 0.0, f28 = 0.0, f29 = 0.0, f30 = 0.0, f31 = 0.0, t22 = 0.0, t23 = 0.0, t25 = 0.0, t26 = 0.0;
    f64 t28 = 0.0, t29 = 0.0, t31 = 0.0, t32 = 0.0, t34 = 0.0, t35 = 0.0, t37 = 0.0, t38 = 0.0, t40 = 0.0, t41 = 0.0, t43 = 0.0, t44 = 0.0;
    f64 t46 = 0.0, t47 = 0.0, t49 = 0.0, t50 = 0.0, t52 = 0.0, t53 = 0.0, t55 = 0.0, t56 = 0.0, t58 = 0.0, t59 = 0.0;
    TcArgs a = {0};
    r1 = 0x817fe000u;
    lr = 0x817ff000u;
    r3 = param_r3;
    for (;;) {
        wr32(r1 - 0x120u, r1);
        r1 = r1 - 0x120u;
        wr32(r1 + 0x124u, lr);
        wrf64(r1 + 0x110u, f31);
        wrf32d(r1 + 0x118u, px_lo(f31));
        wrf64(r1 + 0x100u, f30);
        wrf32d(r1 + 0x108u, px_lo(f30));
        wrf64(r1 + 0xf0u, f29);
        wrf32d(r1 + 0xf8u, px_lo(f29));
        wrf64(r1 + 0xe0u, f28);
        wrf32d(r1 + 0xe8u, px_lo(f28));
        wrf64(r1 + 0xd0u, f27);
        wrf32d(r1 + 0xd8u, px_lo(f27));
        wrf64(r1 + 0xc0u, f26);
        wrf32d(r1 + 0xc8u, px_lo(f26));
        wrf64(r1 + 0xb0u, f25);
        wrf32d(r1 + 0xb8u, px_lo(f25));
        wrf64(r1 + 0xa0u, f24);
        wrf32d(r1 + 0xa8u, px_lo(f24));
        wrf64(r1 + 0x90u, f23);
        wrf32d(r1 + 0x98u, px_lo(f23));
        wrf64(r1 + 0x80u, f22);
        wrf32d(r1 + 0x88u, px_lo(f22));
        wrf64(r1 + 0x70u, f21);
        wrf32d(r1 + 0x78u, px_lo(f21));
        wrf64(r1 + 0x60u, f20);
        wrf32d(r1 + 0x68u, px_lo(f20));
        wrf64(r1 + 0x50u, f19);
        wrf32d(r1 + 0x58u, px_lo(f19));
        r11 = r1 + 0x50u;
        wr32(r11 - 0x30u, r20);
        wr32(r11 - 0x2cu, r21);
        wr32(r11 - 0x28u, r22);
        wr32(r11 - 0x24u, r23);
        wr32(r11 - 0x20u, r24);
        wr32(r11 - 0x1cu, r25);
        wr32(r11 - 0x18u, r26);
        wr32(r11 - 0x14u, r27);
        wr32(r11 - 0x10u, r28);
        wr32(r11 - 0xcu, r29);
        wr32(r11 - 8u, 0u);
        wr32(r11 - 4u, r31);
        r21 = r3;
        wr32(r1 + 8u, 0x43300000u);
        wr32(r1 + 0x10u, 0x43300000u);
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
        r23 = r3;
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
        wr32(r21 + 0x1db0u, r3);
        r28 = r21;
        f19 = (f64)rdf32(0x80572e20u);
        r27 = r21 + 0x16d8u;
        f20 = (f64)rdf32(0x80572df0u);
        r26 = r21 + 0x1768u;
        f21 = rdf64(0x80572d08u);
        r25 = r21 + 0x17f8u;
        f22 = (f64)rdf32(0x80572e14u);
        r24 = r21 + 0x1888u;
        f23 = (f64)rdf32(0x80572e24u);
        r22 = 0u;
        f24 = (f64)rdf32(0x80572c98u);
        r29 = 1u;
        f25 = (f64)rdf32(0x80572ca0u);
        r31 = 2u;
        f26 = (f64)rdf32(0x80572d00u);
        f27 = (f64)rdf32(0x80572cc8u);
        r20 = 3u;
        f28 = (f64)rdf32(0x80572e28u);
        f29 = (f64)rdf32(0x80572e2cu);
        f30 = (f64)rdf32(0x80572d10u);
        f31 = (f64)rdf32(0x80572cccu);
        for (;;) {
            wrf32d(r28 + 0x175cu, f19);
            r3 = r27;
            wrf32d(r28 + 0x1760u, f20);
            r12 = rd32(r27);
            r12 = rd32(r12 + 0xcu);
            lr = 0x800bd050u;
            if (r12 == 0x800bcf20u) {
                fl_ = 1u;
                break;
            }
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
            wr32(r28 + 0x1734u, 1u);
            r3 = r27;
            f1 = (f64)rdf32(0x80572cc8u);
            r4 = rd32(r21 + 0x1db0u);
            wr32(r1 + 0xcu, r22 ^ 0x80000000u);
            wr32(r28 + 0x16f0u, r4);
            f0 = rdf64(r1 + 8u);
            f4 = (f64)rdf32(r28 + 0x1760u);
            r12 = rd32(r27);
            f3 = (f64)rdf32(r28 + 0x175cu);
            r12 = rd32(r12 + 0x1cu);
            f2 = (f64)(f32)px_sfma((f64)(f32)px_psub(f0, f21), f4, px_pfnm((f64)(f32)px_sfms(f4, f22, f23)));
            lr = 0x800bd094u;
            if (r12 == 0x800bcf20u) {
                fl_ = 1u;
                break;
            }
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
            wr32(r28 + 0x1700u, 0u);
            wrf32d(r28 + 0x1750u, (f64)rdf32(r28 + 0x16dcu));
            wrf32d(r28 + 0x1754u, (f64)rdf32(r28 + 0x16e0u));
            r3 = rd32(r28 + 0x16f0u);
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
                    wr32(r28 + 0x16f4u, 2u);
                }
            }
            wrf32d(r28 + 0x1714u, f24);
            r3 = r26;
            wrf32d(r28 + 0x1718u, f24);
            wrf32d(r28 + 0x171cu, f25);
            wrf32d(r28 + 0x1720u, f25);
            wrf32d(r28 + 0x17ecu, f26);
            wrf32d(r28 + 0x17f0u, f26);
            r12 = rd32(r26);
            r12 = rd32(r12 + 0xcu);
            lr = 0x800bd0f0u;
            if (r12 == 0x800bcf20u) {
                fl_ = 1u;
                break;
            }
            a.r[0] = r26;
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
            wr32(r28 + 0x17c4u, 1u);
            r3 = r26;
            r4 = rd32(r21 + 0x1db0u);
            wr32(r1 + 0x14u, r22 ^ 0x80000000u);
            wr32(r28 + 0x1780u, r4);
            f0 = rdf64(r1 + 0x10u);
            f4 = (f64)rdf32(r28 + 0x17f0u);
            f1 = (f64)rdf32(r28 + 0x1750u);
            f5 = (f64)(f32)px_psub(f0, f21);
            r12 = rd32(r26);
            f0 = (f64)rdf32(r28 + 0x1760u);
            f1 = (f64)(f32)px_padd(f27, f1);
            f3 = (f64)rdf32(r28 + 0x17ecu);
            r12 = rd32(r12 + 0x1cu);
            f2 = (f64)(f32)px_sfma(f5, f0, px_pfnm((f64)(f32)px_sfms(f4, f22, f28)));
            f1 = px_pfnm((f64)(f32)px_sfms(f3, f22, f1));
            lr = 0x800bd140u;
            if (r12 == 0x800bcf20u) {
                fl_ = 1u;
                break;
            }
            a.r[0] = r26;
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
            wr32(r28 + 0x1790u, 0u);
            wrf32d(r28 + 0x17e0u, (f64)rdf32(r28 + 0x176cu));
            wrf32d(r28 + 0x17e4u, (f64)rdf32(r28 + 0x1770u));
            r3 = rd32(r28 + 0x1780u);
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
                    wr32(r28 + 0x1784u, 0u);
                }
            }
            wrf32d(r28 + 0x187cu, f29);
            r3 = r25;
            wrf32d(r28 + 0x1880u, f26);
            r12 = rd32(r25);
            r12 = rd32(r12 + 0xcu);
            lr = 0x800bd18cu;
            if (r12 == 0x800bcf20u) {
                fl_ = 1u;
                break;
            }
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
            r5 = tc_junkr(5u);
            r6 = tc_junkr(6u);
            r7 = tc_junkr(7u);
            r8 = tc_junkr(8u);
            r9 = tc_junkr(9u);
            r10 = tc_junkr(0xau);
            wr32(r28 + 0x1854u, 1u);
            r3 = r25;
            r4 = rd32(r21 + 0x1db0u);
            wr32(r1 + 0xcu, r22 ^ 0x80000000u);
            wr32(r28 + 0x1810u, r4);
            f0 = rdf64(r1 + 8u);
            f4 = (f64)rdf32(r28 + 0x1880u);
            r12 = rd32(r25);
            f2 = (f64)(f32)px_psub(f0, f21);
            f5 = (f64)rdf32(r28 + 0x17e0u);
            f3 = (f64)rdf32(r28 + 0x17ecu);
            f0 = (f64)rdf32(r28 + 0x1760u);
            f5 = (f64)(f32)px_padd(f5, f3);
            r12 = rd32(r12 + 0x1cu);
            f2 = (f64)(f32)px_sfma(f2, f0, px_pfnm((f64)(f32)px_sfms(f4, f22, f23)));
            f3 = (f64)rdf32(r28 + 0x187cu);
            f1 = (f64)(f32)px_padd(f30, f5);
            lr = 0x800bd1e0u;
            if (r12 == 0x800bcf20u) {
                fl_ = 2u;
                break;
            }
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
            wr32(r28 + 0x1820u, 0u);
            wrf32d(r28 + 0x1870u, (f64)rdf32(r28 + 0x17fcu));
            wrf32d(r28 + 0x1874u, (f64)rdf32(r28 + 0x1800u));
            r3 = rd32(r28 + 0x1810u);
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
                    wr32(r28 + 0x1814u, 3u);
                }
            }
            wrf32d(r28 + 0x190cu, f26);
            r3 = r24;
            wrf32d(r28 + 0x1910u, f26);
            r12 = rd32(r24);
            r12 = rd32(r12 + 0xcu);
            lr = 0x800bd22cu;
            if (r12 == 0x800bcf20u) {
                fl_ = 3u;
                break;
            }
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
            r5 = tc_junkr(5u);
            r6 = tc_junkr(6u);
            r7 = tc_junkr(7u);
            r8 = tc_junkr(8u);
            r9 = tc_junkr(9u);
            r10 = tc_junkr(0xau);
            wr32(r28 + 0x18e4u, 1u);
            r3 = r24;
            r4 = rd32(r21 + 0x1db0u);
            wr32(r1 + 0x14u, r22 ^ 0x80000000u);
            wr32(r28 + 0x18a0u, r4);
            f0 = rdf64(r1 + 0x10u);
            f4 = (f64)rdf32(r28 + 0x1910u);
            f1 = (f64)rdf32(r21 + 0x1750u);
            f5 = (f64)(f32)px_psub(f0, f21);
            r12 = rd32(r24);
            f0 = (f64)rdf32(r28 + 0x1760u);
            f1 = (f64)(f32)px_padd(f31, f1);
            f3 = (f64)rdf32(r28 + 0x190cu);
            r12 = rd32(r12 + 0x1cu);
            f2 = (f64)(f32)px_sfma(f5, f0, px_pfnm((f64)(f32)px_sfms(f4, f22, f23)));
            f1 = px_pfnm((f64)(f32)px_sfms(f3, f22, f1));
            lr = 0x800bd27cu;
            if (r12 == 0x800bcf20u) {
                fl_ = 4u;
                break;
            }
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
            f1 = tc_callf(r12, &a);
            r3 = tc_lastr();
            r4 = tc_lastr4();
            r5 = tc_junkr(5u);
            r6 = tc_junkr(6u);
            r7 = tc_junkr(7u);
            r8 = tc_junkr(8u);
            r9 = tc_junkr(9u);
            r10 = tc_junkr(0xau);
            wr32(r28 + 0x18b0u, 0u);
            wrf32d(r28 + 0x1900u, (f64)rdf32(r28 + 0x188cu));
            wrf32d(r28 + 0x1904u, (f64)rdf32(r28 + 0x1890u));
            r3 = rd32(r28 + 0x18a0u);
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
                    wr32(r28 + 0x18a4u, 0u);
                }
            }
            r22 = r22 + 1u;
            r27 = r27 + 0x248u;
            r26 = r26 + 0x248u;
            r25 = r25 + 0x248u;
            r24 = r24 + 0x248u;
            r28 = r28 + 0x248u;
            if ((s32)r22 >= 3) {
                r3 = tc_call(0x800545e4u, &a);
                f1 = tc_lastf();
                r6 = r3;
                if (rd32(r3 + 0x10u) == 0u) {
                    if (rd32(r3 + 0x20u) == 0u) {
                        r5 = rd32(r3 + 0xcu);
                        r3 = rd32(r3);
                        r6 = r6 + 0x18u;
                        a.r[0] = r3;
                        a.r[1] = r23;
                        a.r[2] = r5;
                        a.r[3] = r6;
                        r3 = tc_call(0x80040e98u, &a);
                        f1 = tc_lastf();
                    } else {
                        r3 = r3 + 0x24u;
                        a.r[0] = r3;
                        a.r[1] = r23;
                        r3 = tc_call(0x80094ec0u, &a);
                        f1 = tc_lastf();
                    }
                } else {
                    r5 = rd32(r3 + 0xcu);
                    r3 = rd32(r3);
                    r6 = r6 + 0x18u;
                    a.r[0] = r3;
                    a.r[1] = r23;
                    a.r[2] = r5;
                    a.r[3] = r6;
                    r3 = tc_call(0x80040e98u, &a);
                    f1 = tc_lastf();
                }
                r3 = rd32(r21 + 0x1ae8u);
                f6 = (f64)rdf32(0x80572c98u);
                f5 = (f64)rdf32(0x80572e30u);
                f4 = (f64)rdf32(0x80572e14u);
                f3 = (f64)rdf32(0x80572e34u);
                f2 = (f64)rdf32(0x80572e38u);
                f1 = (f64)rdf32(0x80572ca0u);
                f0 = (f64)rdf32(0x80572e3cu);
                wrf32d(r21 + 0x17a4u, f6);
                wrf32d(r21 + 0x17a8u, f6);
                wrf32d(r21 + 0x17acu, f5);
                wrf32d(r21 + 0x17b0u, f4);
                wrf32d(r21 + 0x19ecu, f5);
                wrf32d(r21 + 0x19f0u, f6);
                wrf32d(r21 + 0x19f4u, f3);
                wrf32d(r21 + 0x19f8u, f4);
                wrf32d(r21 + 0x1c34u, f2);
                wrf32d(r21 + 0x1c38u, f6);
                wrf32d(r21 + 0x1c3cu, f1);
                wrf32d(r21 + 0x1c40u, f0);
                wrf32d(r21 + 0x18c4u, f5);
                wrf32d(r21 + 0x18c8u, f6);
                wrf32d(r21 + 0x18ccu, f3);
                wrf32d(r21 + 0x18d0u, f4);
                if (r3 != 0u) {
                    a.r[0] = r3;
                    r3 = tc_call(0x8004c630u, &a);
                    f1 = tc_lastf();
                    if ((s32)r3 > 2) {
                        wr32(r21 + 0x1aecu, 2u);
                    }
                }
                f0 = (f64)rdf32(0x80572dc4u);
                f5 = (f64)rdf32(0x80572c98u);
                f4 = (f64)rdf32(0x80572ca0u);
                f3 = (f64)rdf32(0x80572c9cu);
                f2 = (f64)rdf32(0x80572e38u);
                f1 = (f64)rdf32(0x80572e3cu);
                wrf32d(r21 + 0x1b0cu, f5);
                wrf32d(r21 + 0x1b10u, f5);
                wrf32d(r21 + 0x1b14u, f4);
                wrf32d(r21 + 0x1b18u, f4);
                wrf32d(r21 + 0x1d54u, f3);
                wrf32d(r21 + 0x1d58u, f5);
                wrf32d(r21 + 0x1d5cu, f2);
                wrf32d(r21 + 0x1d60u, f1);
                wr32(r21 + 0x1918u, 0u);
                wr32(r21 + 0x1b60u, 0u);
                wr32(r21 + 0x1da8u, 0u);
                wrf32d(r21 + 0x191cu, f0);
                wrf32d(r21 + 0x1b64u, f0);
                wrf32d(r21 + 0x1dacu, f0);
                wrf32d(r21 + 0x1db4u, f0);
                t21 = r1 + 0x118u;
                t22 = (f64)rdf32(t21);
                t23 = (f64)rdf32(t21);
                f31 = rdf64(r1 + 0x110u);
                t24 = r1 + 0x108u;
                t25 = (f64)rdf32(t24);
                t26 = (f64)rdf32(t24);
                f30 = rdf64(r1 + 0x100u);
                t27 = r1 + 0xf8u;
                t28 = (f64)rdf32(t27);
                t29 = (f64)rdf32(t27);
                f29 = rdf64(r1 + 0xf0u);
                t30 = r1 + 0xe8u;
                t31 = (f64)rdf32(t30);
                t32 = (f64)rdf32(t30);
                f28 = rdf64(r1 + 0xe0u);
                t33 = r1 + 0xd8u;
                t34 = (f64)rdf32(t33);
                t35 = (f64)rdf32(t33);
                f27 = rdf64(r1 + 0xd0u);
                t36 = r1 + 0xc8u;
                t37 = (f64)rdf32(t36);
                t38 = (f64)rdf32(t36);
                f26 = rdf64(r1 + 0xc0u);
                t39 = r1 + 0xb8u;
                t40 = (f64)rdf32(t39);
                t41 = (f64)rdf32(t39);
                f25 = rdf64(r1 + 0xb0u);
                t42 = r1 + 0xa8u;
                t43 = (f64)rdf32(t42);
                t44 = (f64)rdf32(t42);
                f24 = rdf64(r1 + 0xa0u);
                t45 = r1 + 0x98u;
                t46 = (f64)rdf32(t45);
                t47 = (f64)rdf32(t45);
                f23 = rdf64(r1 + 0x90u);
                t48 = r1 + 0x88u;
                t49 = (f64)rdf32(t48);
                t50 = (f64)rdf32(t48);
                f22 = rdf64(r1 + 0x80u);
                t51 = r1 + 0x78u;
                t52 = (f64)rdf32(t51);
                t53 = (f64)rdf32(t51);
                f21 = rdf64(r1 + 0x70u);
                t54 = r1 + 0x68u;
                t55 = (f64)rdf32(t54);
                t56 = (f64)rdf32(t54);
                f20 = rdf64(r1 + 0x60u);
                t57 = r1 + 0x58u;
                t58 = (f64)rdf32(t57);
                t59 = (f64)rdf32(t57);
                f19 = rdf64(r1 + 0x50u);
                r11 = r1 + 0x50u;
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
                r0 = rd32(r1 + 0x124u);
                return;
            }
        }
        if (fl_ == 4u) {
            fl_ = 0u;
        } else if (fl_ == 3u) {
            fl_ = 0u;
        } else if (fl_ == 2u) {
            fl_ = 0u;
        } else if (fl_ == 1u) {
            fl_ = 0u;
        }
    }
}
