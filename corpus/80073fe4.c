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

void fn_80073fe4(u32 param_1, u32 param_2, s32 param_3)
{
    u32 c0eq = 0, c1eq = 0, fl_ = 0, lr = 0, r0 = 0, r1 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = tc_argr(3u), r7 = tc_argr(4u), r8 = tc_argr(5u);
    u32 r9 = tc_argr(6u), r10 = tc_argr(7u), r11 = 0, r12 = 0, r26 = 0, r27 = 0, r28 = 0, r29 = 0, r30 = 0, r31 = 0;
    f64 f0 = 0.0, f1 = tc_argf(0u), f2 = tc_argf(1u), f3 = tc_argf(2u);
    TcArgs a = {0};
    r1 = 0x817fe000u;
    lr = 0x817ff000u;
    r3 = param_1;
    r4 = param_2;
    r5 = (u32)param_3;
    for (;;) {
        wr32(r1 - 0xa0u, r1);
        r1 = r1 - 0xa0u;
        wr32(r1 + 0xa4u, lr);
        r11 = r1 + 0xa0u;
        wr32(r11 - 0x18u, r26);
        wr32(r11 - 0x14u, r27);
        wr32(r11 - 0x10u, r28);
        wr32(r11 - 0xcu, r29);
        wr32(r11 - 8u, r30);
        wr32(r11 - 4u, r31);
        r26 = r3;
        r30 = r4;
        a.r[0] = 0u;
        r3 = tc_call(0x80035ba0u, &a);
        f1 = tc_lastf();
        a.r[0] = 0x804b9da0u;
        r3 = tc_call(0x8010b3f8u, &a);
        f1 = tc_lastf();
        a.r[0] = 0u;
        r3 = tc_call(0x80043a3cu, &a);
        f1 = tc_lastf();
        r29 = 0x80480000u;
        a.r[0] = rd32(0x804863d8u);
        r3 = tc_call(0x8006d804u, &a);
        f1 = tc_lastf();
        a.r[0] = r26;
        a.r[1] = rd32(0x805706e8u);
        r3 = tc_call(0x80073d0cu, &a);
        f1 = tc_lastf();
        a.r[0] = 0x8046d8c8u;
        a.r[1] = r26;
        a.r[2] = r30;
        r3 = tc_call(0x8008c0e0u, &a);
        f1 = tc_lastf();
        r28 = 0x8046d8c8u;
        f0 = (f64)rdf32(0x8057272cu);
        r0 = rd32(0x80471a18u);
        r27 = rd32(0x805706e8u);
        r0 = r0 * 0x4150u;
        wrf32d(r1 + 0x7cu, f0);
        wr32(0x805706e8u, r26);
        wrf32d(r1 + 0x78u, f0);
        wrf32d(r1 + 0x74u, f0);
        a.r[0] = r0 - 0x7fb92738u;
        a.r[1] = r27;
        a.r[2] = r30;
        r3 = tc_call(0x80088bc4u, &a);
        f1 = tc_lastf();
        c0eq = r5 == 0u;
        r31 = r3;
        if (c0eq) {
            if (r3 != 0u) {
                f1 = (f64)rdf32(r3 + 4u);
                r0 = rd32(0x80471a18u);
                wrf32d(r1 + 0x74u, f1);
                r0 = r0 * 0x4150u;
                f2 = (f64)rdf32(r3 + 8u);
                wrf32d(r1 + 0x7cu, f2);
                a.f[0] = f1;
                a.f[1] = f2;
                a.r[0] = r0 - 0x7fb92738u;
                a.r[1] = 0u;
                a.r[2] = 0u;
                f1 = tc_callf(0x80089fc8u, &a);
                r3 = tc_lastr();
                r4 = tc_lastr4();
                r5 = tc_junkr(5u);
                r6 = tc_junkr(6u);
                r7 = tc_junkr(7u);
                r8 = tc_junkr(8u);
                r9 = tc_junkr(9u);
                r10 = tc_junkr(0xau);
                f0 = (f64)rdf32(0x8057274cu);
                r3 = rd32(0x804863d8u);
                f0 = (f64)(f32)px_padd(f0, f1);
                wrf32d(r1 + 0x78u, f0);
                r12 = rd32(r3);
                f1 = (f64)rdf32(r31);
                r12 = rd32(r12 + 0x24u);
                lr = 0x80074298u;
                if (r12 == 0x80073fe4u) continue;
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
            } else if (c0eq) {
                f0 = (f64)rdf32(0x8057272cu);
                wrf32d(r1 + 0x4cu, f0);
                wrf32d(r1 + 0x48u, f0);
                wrf32d(r1 + 0x44u, f0);
                a.r[0] = 0x8046d8c8u;
                a.r[1] = r1 + 0x44u;
                r3 = tc_call(0x8008ca14u, &a);
                f1 = tc_lastf();
                if (r3 != 0u) {
                    f2 = (f64)rdf32(r1 + 0x44u);
                    f1 = (f64)rdf32(r1 + 0x48u);
                    f0 = (f64)rdf32(r1 + 0x4cu);
                    wrf32d(r1 + 0x74u, f2);
                    wrf32d(r1 + 0x78u, f1);
                    wrf32d(r1 + 0x7cu, f0);
                }
            } else {
                f0 = (f64)rdf32(0x8057272cu);
                wrf32d(r1 + 0x58u, f0);
                wrf32d(r1 + 0x54u, f0);
                wrf32d(r1 + 0x50u, f0);
                a.r[0] = 0x8046d8c8u;
                a.r[1] = r1 + 0x50u;
                r3 = tc_call(0x8008ca14u, &a);
                f1 = tc_lastf();
                if (r3 != 0u) {
                    f2 = (f64)rdf32(r1 + 0x50u);
                    f1 = (f64)rdf32(r1 + 0x54u);
                    f0 = (f64)rdf32(r1 + 0x58u);
                    wrf32d(r1 + 0x74u, f2);
                    wrf32d(r1 + 0x78u, f1);
                    wrf32d(r1 + 0x7cu, f0);
                }
            }
        } else if (r26 == 0u || r26 == 0x18u || r26 == 0x24u || r26 == 0x28u || r26 == 0x2eu) {
            r0 = r30 * 0xcu;
            r3 = r0 - 0x7fcc9960u;
            f2 = (f64)rdf32(r0 - 0x7fcc9960u);
            f1 = (f64)rdf32(r3 + 4u);
            f0 = (f64)rdf32(r3 + 8u);
            wrf32d(r1 + 0x74u, f2);
            wrf32d(r1 + 0x78u, f1);
            wrf32d(r1 + 0x7cu, f0);
        } else if (r3 != 0u) {
            f1 = (f64)rdf32(r3 + 4u);
            r0 = rd32(0x80471a18u);
            wrf32d(r1 + 0x74u, f1);
            r0 = r0 * 0x4150u;
            f2 = (f64)rdf32(r3 + 8u);
            wrf32d(r1 + 0x7cu, f2);
            a.f[0] = f1;
            a.f[1] = f2;
            a.r[0] = r0 - 0x7fb92738u;
            a.r[1] = 0u;
            a.r[2] = 0u;
            f1 = tc_callf(0x80089fc8u, &a);
            r3 = tc_lastr();
            r4 = tc_lastr4();
            r5 = tc_junkr(5u);
            r6 = tc_junkr(6u);
            r7 = tc_junkr(7u);
            r8 = tc_junkr(8u);
            r9 = tc_junkr(9u);
            r10 = tc_junkr(0xau);
            f0 = (f64)rdf32(0x8057274cu);
            r3 = rd32(0x804863d8u);
            f0 = (f64)(f32)px_padd(f0, f1);
            wrf32d(r1 + 0x78u, f0);
            r12 = rd32(r3);
            f1 = (f64)rdf32(r31);
            r12 = rd32(r12 + 0x24u);
            lr = 0x800741bcu;
            if (r12 == 0x80073fe4u) continue;
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
        } else if (c0eq) {
            f0 = (f64)rdf32(0x8057272cu);
            wrf32d(r1 + 0x64u, f0);
            wrf32d(r1 + 0x60u, f0);
            wrf32d(r1 + 0x5cu, f0);
            a.r[0] = 0x8046d8c8u;
            a.r[1] = r1 + 0x5cu;
            r3 = tc_call(0x8008ca14u, &a);
            f1 = tc_lastf();
            if (r3 != 0u) {
                f2 = (f64)rdf32(r1 + 0x5cu);
                f1 = (f64)rdf32(r1 + 0x60u);
                f0 = (f64)rdf32(r1 + 0x64u);
                wrf32d(r1 + 0x74u, f2);
                wrf32d(r1 + 0x78u, f1);
                wrf32d(r1 + 0x7cu, f0);
            }
        } else {
            f0 = (f64)rdf32(0x8057272cu);
            wrf32d(r1 + 0x70u, f0);
            wrf32d(r1 + 0x6cu, f0);
            wrf32d(r1 + 0x68u, f0);
            a.r[0] = 0x8046d8c8u;
            a.r[1] = r1 + 0x68u;
            r3 = tc_call(0x8008ca14u, &a);
            f1 = tc_lastf();
            if (r3 != 0u) {
                f2 = (f64)rdf32(r1 + 0x68u);
                f1 = (f64)rdf32(r1 + 0x6cu);
                f0 = (f64)rdf32(r1 + 0x70u);
                wrf32d(r1 + 0x74u, f2);
                wrf32d(r1 + 0x78u, f1);
                wrf32d(r1 + 0x7cu, f0);
            }
        }
        a.r[0] = rd32(0x805706e8u);
        a.r[1] = r27;
        r3 = tc_call(0x80074640u, &a);
        f1 = tc_lastf();
        r3 = tc_call(0x8008c0b0u, &a);
        f1 = tc_lastf();
        a.r[0] = 0x80471ed0u;
        a.r[1] = rd32(0x805706e8u);
        r3 = tc_call(0x8009218cu, &a);
        f1 = tc_lastf();
        a.r[0] = 0x80471ed0u;
        a.r[1] = r3;
        f1 = tc_callf(0x80090e5cu, &a);
        r3 = tc_lastr();
        r4 = tc_lastr4();
        r5 = tc_junkr(5u);
        r6 = tc_junkr(6u);
        r7 = tc_junkr(7u);
        r8 = tc_junkr(8u);
        r9 = tc_junkr(9u);
        r10 = tc_junkr(0xau);
        r28 = 0x80480000u;
        r3 = rd32(0x804863d8u);
        r12 = rd32(r3);
        r12 = rd32(r12 + 0x28u);
        lr = 0x800742e4u;
        if (r12 != 0x80073fe4u) {
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
            r6 = tc_junkr(6u);
            r7 = tc_junkr(7u);
            r8 = tc_junkr(8u);
            r9 = tc_junkr(9u);
            r10 = tc_junkr(0xau);
            r4 = rd32(r3);
            r0 = rd32(r3 + 4u);
            r5 = rd32(0x804863d8u);
            wr32(r1 + 0x38u, r4);
            f2 = (f64)rdf32(r1 + 0x74u);
            wr32(r1 + 0x3cu, r0);
            wr32(r1 + 0x40u, rd32(r3 + 8u));
            wrf32d(r5 + 0x84u, f2);
            f1 = (f64)rdf32(r1 + 0x78u);
            wrf32d(r5 + 0x88u, f1);
            f0 = (f64)rdf32(r1 + 0x7cu);
            wrf32d(r5 + 0x8cu, f0);
            wrf32d(r5 + 4u, f2);
            wrf32d(r5 + 8u, f1);
            wrf32d(r5 + 0xcu, f0);
            r3 = rd32(0x804863d8u);
            r12 = rd32(r3);
            r12 = rd32(r12 + 0x10u);
            lr = 0x80074338u;
            if (r12 != 0x80073fe4u) {
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
                a.f[2] = 0.0;
                a.f[3] = 0.0;
                a.f[4] = 0.0;
                a.f[5] = 0.0;
                a.f[6] = 0.0;
                a.f[7] = 0.0;
                r3 = tc_call(r12, &a);
                f1 = tc_lastf();
                r3 = r1 + 0x38u;
                a.r[0] = r3;
                a.r[1] = r1 + 0x74u;
                a.r[2] = r3;
                r3 = tc_call(0x802343a4u, &a);
                f1 = tc_lastf();
                r3 = rd32(0x804863d8u);
                a.f[0] = (f64)rdf32(0x8057272cu);
                a.r[0] = r3;
                a.r[1] = 1u;
                a.r[2] = 1u;
                r3 = tc_call(0x800bf1d4u, &a);
                f1 = tc_lastf();
                r0 = rd32(0x805710e0u);
                if (r0 != 0u) {
                    wr32(0x805710e4u, r0);
                }
                r3 = rd32(0x805706e8u);
                wr32(0x805710e0u, 0u);
                a.r[0] = r3;
                r3 = tc_call(0x8007d150u, &a);
                f1 = tc_lastf();
                if (rd32(r3 + 4u) != 0u) {
                    a.r[0] = rd32(0x805706e8u);
                    r3 = tc_call(0x8007d150u, &a);
                    f1 = tc_lastf();
                    if (rd32(r3 + 4u) != 1u) {
                        a.r[0] = (rd32(0x805710e0u) * 0x6d0u) - 0x7fc2e738u;
                        a.r[1] = 3u;
                        r3 = tc_call(0x800564f8u, &a);
                        f1 = tc_lastf();
                    } else {
                        a.r[0] = (rd32(0x805710e0u) * 0x6d0u) - 0x7fc2e738u;
                        a.r[1] = 2u;
                        r3 = tc_call(0x800564f8u, &a);
                        f1 = tc_lastf();
                    }
                } else {
                    a.r[0] = (rd32(0x805710e0u) * 0x6d0u) - 0x7fc2e738u;
                    a.r[1] = 0u;
                    r3 = tc_call(0x800564f8u, &a);
                    f1 = tc_lastf();
                }
                r0 = rd32(0x805710e0u);
                f2 = (f64)rdf32(r1 + 0x3cu);
                r0 = r0 * 0x6d0u;
                r27 = rd32(0x805706d8u);
                r28 = 0u;
                wr32(0x805706d8u, 0u);
                r6 = r0 - 0x7fc2e738u;
                r0 = rd32(r6 + 0x138u);
                r3 = rd32(r6 + 0x134u);
                wr32(r1 + 0x30u, r0);
                r5 = rd32(r6 + 0x13cu);
                wr32(r1 + 0x2cu, r3);
                f0 = (f64)rdf32(r1 + 0x30u);
                r4 = rd32(r6 + 0x140u);
                f3 = (f64)(f32)px_psub(f0, f2);
                r3 = rd32(r6 + 0x144u);
                r0 = rd32(r6 + 0x148u);
                f0 = (f64)rdf32(r1 + 0x2cu);
                wr32(r1 + 0x34u, r5);
                wrf32d(r6 + 0x134u, f0);
                f1 = (f64)rdf32(r1 + 0x34u);
                wr32(r1 + 0x24u, r3);
                f0 = (f64)rdf32(r1 + 0x24u);
                wrf32d(r6 + 0x138u, f3);
                f2 = (f64)(f32)px_psub(f0, f2);
                wr32(r1 + 0x20u, r4);
                f0 = (f64)rdf32(r1 + 0x20u);
                wrf32d(r6 + 0x13cu, f1);
                wrf32d(r6 + 0x140u, f0);
                wr32(r1 + 0x28u, r0);
                f0 = (f64)rdf32(r1 + 0x28u);
                wrf32d(r6 + 0x144u, f2);
                wrf32d(r1 + 0x30u, f3);
                wrf32d(r1 + 0x24u, f2);
                wrf32d(r6 + 0x148u, f0);
                f1 = tc_callf(0x80053ff4u, &a);
                r3 = tc_lastr();
                r4 = tc_lastr4();
                r5 = tc_junkr(5u);
                r6 = tc_junkr(6u);
                r7 = tc_junkr(7u);
                r8 = tc_junkr(8u);
                r9 = tc_junkr(9u);
                r10 = tc_junkr(0xau);
                wr32(0x805706d8u, r27);
                r3 = rd32(0x804863d8u);
                r3 = rd32(r3 + 0xa48u);
                if (r3 != 0u) {
                    a.r[0] = r3;
                    r3 = tc_call(0x800d626cu, &a);
                    f1 = tc_lastf();
                    r3 = rd32(0x804863d8u);
                    r3 = rd32(r3 + 0xa48u);
                    r3 = rd32(r3 + 0xa4u);
                    a.r[0] = r3;
                    f1 = tc_callf(0x800cf688u, &a);
                    r3 = tc_lastr();
                    r4 = tc_lastr4();
                    r5 = tc_junkr(5u);
                    r6 = tc_junkr(6u);
                    r7 = tc_junkr(7u);
                    r8 = tc_junkr(8u);
                    r9 = tc_junkr(9u);
                    r10 = tc_junkr(0xau);
                    r3 = rd32(0x804863d8u);
                    r3 = rd32(r3 + 0xa48u);
                    r3 = rd32(r3 + 0xa4u);
                    wr32(r3 + 0xcu, 0u);
                }
                r29 = 0x80480000u;
                r27 = rd32(0x804863d8u);
                r12 = rd32(r27);
                r3 = r27;
                r12 = rd32(r12 + 0x28u);
                lr = 0x800744e8u;
                if (r12 != 0x80073fe4u) {
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
                    r4 = rd32(r3);
                    r0 = rd32(r3 + 4u);
                    f1 = (f64)rdf32(0x80572750u);
                    wr32(r1 + 0x14u, r4);
                    wr32(r1 + 0x18u, r0);
                    r0 = rd32(r3 + 8u);
                    r3 = r1 + 8u;
                    wr32(r1 + 0x1cu, r0);
                    r5 = rd32(r27 + 0x78u);
                    r0 = rd32(r27 + 0x7cu);
                    wr32(r1 + 8u, r5);
                    wr32(r1 + 0xcu, r0);
                    wr32(r1 + 0x10u, rd32(r27 + 0x80u));
                    a.f[0] = f1;
                    a.r[0] = r3;
                    a.r[1] = r3;
                    f1 = tc_callf(0x802343c8u, &a);
                    r3 = tc_lastr();
                    r3 = r1 + 0x14u;
                    a.r[0] = r3;
                    a.r[1] = r1 + 8u;
                    a.r[2] = r3;
                    r3 = tc_call(0x80234380u, &a);
                    f1 = tc_lastf();
                    a.r[0] = r1 + 0x14u;
                    r3 = tc_call(0x80075094u, &a);
                    f1 = tc_lastf();
                    r5 = tc_junkr(5u);
                    r6 = tc_junkr(6u);
                    r7 = tc_junkr(7u);
                    r8 = tc_junkr(8u);
                    r9 = tc_junkr(9u);
                    r10 = tc_junkr(0xau);
                    c1eq = r3 == 0u;
                    r28 = r3;
                    if (c1eq) {
                        fl_ = 1u;
                        break;
                    }
                    r4 = rd32(0x804863d8u);
                    if (rd32(r4 + 0x294u) == 0x19u && !c1eq) {
                        r3 = rd32(r3 + 0x70u);
                        a.r[0] = r3;
                        a.r[1] = 0x803369b0u;
                        r3 = tc_call(0x80031be0u, &a);
                        f1 = tc_lastf();
                        r4 = rd32(r3 + 0x3cu);
                        r3 = rd32(0x804863d8u);
                        r4 = (u32)rd16(r4 + 0x5eu);
                        a.r[0] = r3;
                        a.r[1] = r4;
                        a.r[2] = 0x804890c8u;
                        f1 = tc_callf(0x800c5518u, &a);
                        r3 = tc_lastr();
                        r4 = tc_lastr4();
                        r5 = tc_junkr(5u);
                        r6 = tc_junkr(6u);
                        r7 = tc_junkr(7u);
                        r8 = tc_junkr(8u);
                        r9 = tc_junkr(9u);
                        r10 = tc_junkr(0xau);
                    }
                    if (r31 == 0u) {
                        r12 = rd32(r27);
                        r3 = r27;
                        r12 = rd32(r12 + 0x2cu);
                        lr = 0x800745c0u;
                        if (r12 != 0x80073fe4u) {
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
                            f1 = tc_callf(r12, &a);
                            r3 = tc_lastr();
                            r4 = tc_lastr4();
                            r5 = tc_junkr(5u);
                            r6 = tc_junkr(6u);
                            r7 = tc_junkr(7u);
                            r8 = tc_junkr(8u);
                            r9 = tc_junkr(9u);
                            r10 = tc_junkr(0xau);
                            r12 = rd32(r28);
                            r3 = r28;
                            r12 = rd32(r12 + 0x24u);
                            lr = 0x800745d4u;
                            if (r12 != 0x80073fe4u) {
                                fl_ = 2u;
                                break;
                            }
                        }
                    } else {
                        r12 = rd32(r28);
                        r3 = r28;
                        f1 = (f64)rdf32(r31);
                        r12 = rd32(r12 + 0x24u);
                        lr = 0x800745a8u;
                        if (r12 != 0x80073fe4u) {
                            fl_ = 3u;
                            break;
                        }
                    }
                }
            }
        }
    }
    do {
        if (fl_ == 3u) {
            fl_ = 0u;
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
        } else {
            if (fl_ == 2u) {
                fl_ = 0u;
            } else if (fl_ == 1u) {
                fl_ = 0u;
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
        }
    } while (0);
    a.r[0] = rd32(0x805706e8u);
    a.r[1] = r30;
    r3 = tc_call(0x80074fd4u, &a);
    f1 = tc_lastf();
    a.r[0] = rd32(0x805706e8u);
    r3 = tc_call(0x8007d150u, &a);
    f1 = tc_lastf();
    if (rd32(r3 + 4u) == 0u || rd32(0x805706e8u) == 0x3fu) {
        r3 = tc_call(0x80077020u, &a);
        f1 = tc_lastf();
    }
    a.r[0] = (rd32(0x80471a18u) * 0x4150u) - 0x7fb92738u;
    r3 = tc_call(0x801e66d0u, &a);
    f1 = tc_lastf();
    r3 = tc_call(0x800510b0u, &a);
    f1 = tc_lastf();
    a.r[0] = 1u;
    r3 = tc_call(0x80035ba0u, &a);
    f1 = tc_lastf();
    r11 = r1 + 0xa0u;
    r26 = rd32(r11 - 0x18u);
    r27 = rd32(r11 - 0x14u);
    r28 = rd32(r11 - 0x10u);
    r29 = rd32(r11 - 0xcu);
    r30 = rd32(r11 - 8u);
    r31 = rd32(r11 - 4u);
    r0 = rd32(r1 + 0xa4u);
    return;
}
