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

void fn_800bca3c(u32 param_r3)
{
    u32 fl_ = 0, lr = 0, r0 = 0, r1 = 0, r3 = 0, r4 = tc_argr(1u), r5 = tc_argr(2u), r6 = tc_argr(3u), r7 = tc_argr(4u), r8 = tc_argr(5u), r9 = tc_argr(6u), r10 = tc_argr(7u);
    u32 r11 = tc_argr(8u), r12 = tc_argr(9u), r25 = 0, r26 = 0, r27 = 0, r28 = 0, r29 = 0, r30 = 0, r31 = 0, t8 = 0, t11 = 0, t14 = 0;
    u32 t17 = 0;
    f64 f0 = 0.0, f1 = tc_argf(0u), f2 = tc_argf(1u), f3 = tc_argf(2u), f4 = tc_argf(3u), f28 = 0.0, f29 = 0.0, f30 = 0.0, f31 = 0.0, t9 = 0.0, t10 = 0.0, t12 = 0.0;
    f64 t13 = 0.0, t15 = 0.0, t16 = 0.0, t18 = 0.0, t19 = 0.0;
    TcArgs a = {0};
    r1 = 0x817fe000u;
    lr = 0x817ff000u;
    r3 = param_r3;
    for (;;) {
        wr32(r1 - 0x70u, r1);
        r1 = r1 - 0x70u;
        wr32(r1 + 0x74u, lr);
        wrf64(r1 + 0x60u, f31);
        wrf32d(r1 + 0x68u, px_lo(f31));
        wrf64(r1 + 0x50u, f30);
        wrf32d(r1 + 0x58u, px_lo(f30));
        wrf64(r1 + 0x40u, f29);
        wrf32d(r1 + 0x48u, px_lo(f29));
        wrf64(r1 + 0x30u, f28);
        wrf32d(r1 + 0x38u, px_lo(f28));
        r11 = r1 + 0x30u;
        wr32(r11 - 0x1cu, r25);
        wr32(r11 - 0x18u, r26);
        wr32(r11 - 0x14u, r27);
        wr32(r11 - 0x10u, r28);
        wr32(r11 - 0xcu, r29);
        wr32(r11 - 8u, r30);
        wr32(r11 - 4u, 0u);
        r25 = r3;
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
        a.r[1] = 0x575u;
        a.r[2] = 1u;
        a.r[3] = 0u;
        a.r[4] = 0xffffffffu;
        r3 = tc_call(0x80050dd4u, &a);
        f1 = tc_lastf();
        r27 = r3;
        a.r[0] = r3;
        r3 = tc_call(0x80045be0u, &a);
        f1 = tc_lastf();
        r30 = 0xffffffffu;
        wr32(r25 + 0x16bcu, 0xffffffffu);
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
        wr32(r25 + 0x16bcu, r3);
        r29 = r25;
        f28 = (f64)rdf32(0x80572d2cu);
        r28 = r25 + 0x1524u;
        f29 = (f64)rdf32(0x80572cc0u);
        r26 = 0u;
        f30 = (f64)rdf32(0x80572e14u);
        f31 = (f64)rdf32(0x80572c98u);
        for (;;) {
            wr32(r29 + 0x1598u, 0xffffffffu);
            r3 = r28;
            r12 = rd32(r28);
            r12 = rd32(r12 + 0xcu);
            lr = 0x800bcae0u;
            if (r12 == 0x800bca3cu) {
                fl_ = 1u;
                break;
            }
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
            r4 = tc_lastr4();
            r5 = tc_junkr(5u);
            r6 = tc_junkr(6u);
            r7 = tc_junkr(7u);
            r8 = tc_junkr(8u);
            r9 = tc_junkr(9u);
            r10 = tc_junkr(0xau);
            wrf32d(r29 + 0x15a8u, f28);
            r3 = r28;
            f2 = (f64)rdf32(0x80572e18u);
            wrf32d(r29 + 0x15acu, f29);
            f0 = (f64)rdf32(r25 + 8u);
            r12 = rd32(r28);
            f3 = (f64)(f32)px_pmul(f0, f28);
            r12 = rd32(r12 + 0x1cu);
            f1 = px_pfnm((f64)(f32)px_sfms(f3, f30, f28));
            lr = 0x800bcb10u;
            if (r12 == 0x800bca3cu) {
                fl_ = 1u;
                break;
            }
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
            a.f[3] = f29;
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
            r26 = r26 + 1u;
            r28 = r28 + 0x90u;
            wr32(r29 + 0x153cu, rd32(r25 + 0x16bcu));
            wr32(r29 + 0x154cu, 0u);
            wrf32d(r29 + 0x159cu, (f64)rdf32(r29 + 0x1528u));
            wrf32d(r29 + 0x15a0u, (f64)rdf32(r29 + 0x152cu));
            wrf32d(r29 + 0x15b0u, f31);
            r29 = r29 + 0x90u;
            if ((s32)r26 >= 2) {
                fl_ = 2u;
                break;
            }
        }
        if (fl_ == 2u) {
            fl_ = 0u;
        } else if (fl_ == 1u) {
            fl_ = 0u;
            continue;
        }
        r3 = rd32(r25 + 0x153cu);
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
                wr32(r25 + 0x1540u, 2u);
            }
        }
        r3 = rd32(r25 + 0x15ccu);
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
            if ((s32)r3 > 1) {
                wr32(r25 + 0x15d0u, 1u);
            }
        }
        r12 = rd32(r25 + 0x1648u);
        r3 = r25 + 0x1648u;
        r12 = rd32(r12 + 0xcu);
        lr = 0x800bcb98u;
        if (r12 != 0x800bca3cu) {
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
            f4 = (f64)rdf32(0x80572d00u);
            r3 = r25 + 0x1648u;
            f2 = (f64)rdf32(0x80572cb0u);
            wrf32d(r25 + 0x16d0u, f4);
            f0 = (f64)rdf32(r25 + 8u);
            wrf32d(r25 + 0x16ccu, f2);
            f3 = (f64)(f32)px_pmul(f2, f0);
            f1 = (f64)rdf32(0x80572e1cu);
            r12 = rd32(r25 + 0x1648u);
            f0 = (f64)rdf32(r25 + 0x15a0u);
            r12 = rd32(r12 + 0x1cu);
            f2 = (f64)(f32)px_padd(f1, f0);
            f1 = (f64)rdf32(r25 + 0x159cu);
            lr = 0x800bcbd4u;
            if (r12 != 0x800bca3cu) break;
        }
    }
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
    a.f[3] = f4;
    a.f[4] = 0.0;
    a.f[5] = 0.0;
    a.f[6] = 0.0;
    a.f[7] = 0.0;
    r3 = tc_call(r12, &a);
    f1 = tc_lastf();
    r3 = rd32(r25 + 0x16bcu);
    wr32(r25 + 0x1660u, r3);
    if (r3 != 0u) {
        a.r[0] = r3;
        r3 = tc_call(0x8004c630u, &a);
        f1 = tc_lastf();
        if ((s32)r3 > 0) {
            wr32(r25 + 0x1664u, 0u);
        }
    }
    f2 = (f64)rdf32(r25 + 0x164cu);
    f1 = (f64)rdf32(r25 + 0x1650u);
    f0 = (f64)rdf32(0x80572c98u);
    wr32(r25 + 0x1670u, 0u);
    wrf32d(r25 + 0x16c0u, f2);
    wrf32d(r25 + 0x16c4u, f1);
    wrf32d(r25 + 0x16d4u, f0);
    r3 = tc_call(0x800545e4u, &a);
    f1 = tc_lastf();
    r6 = r3;
    if (rd32(r3 + 0x10u) == 0u) {
        if (rd32(r3 + 0x20u) == 0u) {
            r5 = rd32(r3 + 0xcu);
            r3 = rd32(r3);
            r6 = r6 + 0x18u;
            a.r[0] = r3;
            a.r[1] = r27;
            a.r[2] = r5;
            a.r[3] = r6;
            r3 = tc_call(0x80040e98u, &a);
            f1 = tc_lastf();
        } else {
            r3 = r3 + 0x24u;
            a.r[0] = r3;
            a.r[1] = r27;
            r3 = tc_call(0x80094ec0u, &a);
            f1 = tc_lastf();
        }
    } else {
        r5 = rd32(r3 + 0xcu);
        r3 = rd32(r3);
        r6 = r6 + 0x18u;
        a.r[0] = r3;
        a.r[1] = r27;
        a.r[2] = r5;
        a.r[3] = r6;
        r3 = tc_call(0x80040e98u, &a);
        f1 = tc_lastf();
    }
    wrf32d(r25 + 0x1644u, (f64)rdf32(r25 + 0x1638u));
    t8 = r1 + 0x68u;
    t9 = (f64)rdf32(t8);
    t10 = (f64)rdf32(t8);
    f31 = rdf64(r1 + 0x60u);
    t11 = r1 + 0x58u;
    t12 = (f64)rdf32(t11);
    t13 = (f64)rdf32(t11);
    f30 = rdf64(r1 + 0x50u);
    t14 = r1 + 0x48u;
    t15 = (f64)rdf32(t14);
    t16 = (f64)rdf32(t14);
    f29 = rdf64(r1 + 0x40u);
    t17 = r1 + 0x38u;
    t18 = (f64)rdf32(t17);
    t19 = (f64)rdf32(t17);
    f28 = rdf64(r1 + 0x30u);
    r11 = r1 + 0x30u;
    r25 = rd32(r11 - 0x1cu);
    r26 = rd32(r11 - 0x18u);
    r27 = rd32(r11 - 0x14u);
    r28 = rd32(r11 - 0x10u);
    r29 = rd32(r11 - 0xcu);
    r30 = rd32(r11 - 8u);
    r31 = rd32(r11 - 4u);
    r0 = rd32(r1 + 0x74u);
    return;
}
