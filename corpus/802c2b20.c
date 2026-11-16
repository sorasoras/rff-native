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

void fn_802c2b20(u32 param_r3)
{
    u32 c0eq = 0, fl_ = 0, lr = 0, r0 = 0, r1 = 0, r3 = 0, r4 = tc_argr(1u), r5 = tc_argr(2u), r6 = tc_argr(3u), r7 = tc_argr(4u), r8 = tc_argr(5u), r9 = tc_argr(6u);
    u32 r10 = tc_argr(7u), r11 = tc_argr(8u), r12 = tc_argr(9u), r21 = 0, r22 = 0, r23 = 0, r24 = 0, r25 = 0, r26 = 0, r27 = 0, r28 = 0, r29 = 0;
    u32 r30 = 0, r31 = 0, t20 = 0;
    f64 f0 = 0.0, f1 = tc_argf(0u), f2 = tc_argf(1u), f31 = 0.0, t21 = 0.0, t22 = 0.0;
    TcArgs a = {0};
    r1 = 0x817fe000u;
    lr = 0x817ff000u;
    r3 = param_r3;
    for (;;) {
        wr32(r1 - 0xd0u, r1);
        r1 = r1 - 0xd0u;
        wr32(r1 + 0xd4u, lr);
        wrf64(r1 + 0xc0u, f31);
        wrf32d(r1 + 0xc8u, px_lo(f31));
        r11 = r1 + 0xc0u;
        wr32(r11 - 0x2cu, r21);
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
        wr8(r3 + 0x94u, 0u);
        r31 = r3;
        r27 = 0x80348680u;
        wr8(r3 + 0x95u, 0u);
        r28 = 0x80398d90u;
        wr8(r3 + 0x96u, 0u);
        a.r[0] = r3;
        r3 = tc_call(0x802c3380u, &a);
        f1 = tc_lastf();
        a.r[0] = r31;
        r3 = tc_call(0x802c34d8u, &a);
        f1 = tc_lastf();
        a.r[0] = 0xb0u;
        r3 = tc_call(0x802c2510u, &a);
        f1 = tc_lastf();
        r6 = tc_junkr(6u);
        r7 = tc_junkr(7u);
        r8 = tc_junkr(8u);
        r9 = tc_junkr(9u);
        r10 = tc_junkr(0xau);
        c0eq = r3 == 0u;
        if (!c0eq) {
            if (!c0eq) {
                a.r[0] = r3;
                r3 = tc_call(0x802cb430u, &a);
                f1 = tc_lastf();
                r6 = tc_junkr(6u);
                r7 = tc_junkr(7u);
                r8 = tc_junkr(8u);
                r9 = tc_junkr(9u);
                r10 = tc_junkr(0xau);
            }
            wr32(r31 + 0x24cu, r3);
        }
        r4 = rd32(r31 + 4u);
        r3 = rd32(r31 + 0x24cu);
        r4 = rd32(r4);
        a.f[0] = f1;
        a.f[1] = 0.0;
        a.f[2] = 0.0;
        a.f[3] = 0.0;
        a.f[4] = 0.0;
        a.f[5] = 0.0;
        a.f[6] = 0.0;
        a.f[7] = 0.0;
        a.r[0] = r3;
        a.r[1] = r4;
        a.r[2] = 0x803998c0u;
        a.r[3] = r6;
        a.r[4] = r7;
        a.r[5] = r8;
        a.r[6] = r9;
        a.r[7] = r10;
        r3 = tc_call(0x802cb48cu, &a);
        f1 = tc_lastf();
        r3 = rd32(r31 + 4u);
        if (rd32(r3 + 0x20u) == 0u) {
            r21 = r31;
            r22 = 0x80398dd0u;
            r23 = 0u;
            for (;;) {
                a.r[0] = 0x24u;
                r3 = tc_call(0x802c2510u, &a);
                f1 = tc_lastf();
                r7 = tc_junkr(7u);
                r8 = tc_junkr(8u);
                r9 = tc_junkr(9u);
                r10 = tc_junkr(0xau);
                c0eq = r3 == 0u;
                if (!c0eq) {
                    if (!c0eq) {
                        a.r[0] = r3;
                        r3 = tc_call(0x802cca98u, &a);
                        f1 = tc_lastf();
                        r7 = tc_junkr(7u);
                        r8 = tc_junkr(8u);
                        r9 = tc_junkr(9u);
                        r10 = tc_junkr(0xau);
                    }
                    wr32(r21 + 0x23cu, r3);
                }
                r3 = rd32(r31 + 0x24cu);
                r5 = rd32(r22);
                r12 = rd32(r3);
                r12 = rd32(r12 + 0xcu);
                lr = 0x802c2bf4u;
                if (r12 == 0x802c2b20u) {
                    fl_ = 2u;
                    break;
                }
                a.r[0] = r3;
                a.r[1] = 0u;
                a.r[2] = r5;
                a.r[3] = 0u;
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
                r4 = r3;
                r3 = rd32(r21 + 0x23cu);
                r5 = rd32(r31 + 0x24cu);
                r12 = rd32(r3);
                r12 = rd32(r12 + 0xcu);
                lr = 0x802c2c10u;
                if (r12 == 0x802c2b20u) {
                    fl_ = 1u;
                    break;
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
                a.f[1] = 0.0;
                a.f[2] = 0.0;
                a.f[3] = 0.0;
                a.f[4] = 0.0;
                a.f[5] = 0.0;
                a.f[6] = 0.0;
                a.f[7] = 0.0;
                r3 = tc_call(r12, &a);
                f1 = tc_lastf();
                r23 = r23 + 1u;
                r22 = r22 + 4u;
                r21 = r21 + 4u;
                if ((s32)r23 >= 4) {
                    fl_ = 3u;
                    break;
                }
            }
            do {
                if (fl_ == 3u) {
                    fl_ = 0u;
                    fl_ = 4u;
                    break;
                }
                if (fl_ == 2u) {
                    fl_ = 0u;
                } else if (fl_ == 1u) {
                    fl_ = 0u;
                    break;
                }
                fl_ = 5u;
                break;
            } while (0);
            if (fl_ == 5u) {
                fl_ = 0u;
                continue;
            }
            if (fl_ != 4u) continue;
            fl_ = 0u;
        }
        a.r[0] = 0x24u;
        r3 = tc_call(0x802c2510u, &a);
        f1 = tc_lastf();
        r7 = tc_junkr(7u);
        r8 = tc_junkr(8u);
        r9 = tc_junkr(9u);
        r10 = tc_junkr(0xau);
        c0eq = r3 == 0u;
        if (!c0eq) {
            if (!c0eq) {
                a.r[0] = r3;
                r3 = tc_call(0x802cca98u, &a);
                f1 = tc_lastf();
                r7 = tc_junkr(7u);
                r8 = tc_junkr(8u);
                r9 = tc_junkr(9u);
                r10 = tc_junkr(0xau);
            }
            wr32(r31 + 0x238u, r3);
        }
        r3 = rd32(r31 + 0x24cu);
        r5 = rd32(r31 + 0xb0u);
        r12 = rd32(r3);
        r12 = rd32(r12 + 0xcu);
        lr = 0x802c2c60u;
        if (r12 != 0x802c2b20u) {
            a.r[0] = r3;
            a.r[1] = 0u;
            a.r[2] = r5;
            a.r[3] = 0u;
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
            r4 = r3;
            r3 = rd32(r31 + 0x238u);
            r5 = rd32(r31 + 0x24cu);
            r12 = rd32(r3);
            r12 = rd32(r12 + 0xcu);
            lr = 0x802c2c7cu;
            if (r12 != 0x802c2b20u) {
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
                r3 = rd32(r31 + 0x238u);
                r3 = rd32(r3 + 0x10u);
                r24 = rd32(r3 + 0x14u);
                r21 = r3 + 0x14u;
                for (;;) {
                    if (r24 == r21) {
                        fl_ = 6u;
                        break;
                    }
                    a.r[0] = r24 + 0xb0u;
                    a.r[1] = 0x803998c8u;
                    r3 = tc_call(0x8025beb0u, &a);
                    f1 = tc_lastf();
                    if (r3 == 0u) {
                        fl_ = 7u;
                        break;
                    }
                    r24 = rd32(r24);
                }
                do {
                    if (fl_ == 7u) {
                        fl_ = 0u;
                    } else if (fl_ == 6u) {
                        fl_ = 0u;
                        break;
                    }
                    f0 = (f64)rdf32(0x8034895cu);
                    wrf32d(r24 + 0x40u, f0);
                    wrf32d(r1 + 8u, f0);
                    wrf32d(r1 + 0xcu, f0);
                    wrf32d(r24 + 0x44u, f0);
                } while (0);
                f31 = rdf64(0x80348968u);
                r26 = r31;
                r25 = 0x80348688u;
                r30 = 0x80398f3cu;
                r29 = 0x80398ee0u;
                r24 = 0u;
                r21 = 0x43300000u;
                for (;;) {
                    if ((s32)r24 >= (s32)rd32(r31 + 0x10u)) {
                        fl_ = 13u;
                        break;
                    }
                    a.r[0] = r1 + 0x48u;
                    a.r[1] = rd32(r31 + 0xb4u);
                    r3 = tc_call(0x8025bd34u, &a);
                    f1 = tc_lastf();
                    r0 = (rd32(r25 + 4u) << 2u) & 0xfffffffcu;
                    a.r[0] = r1 + 0x48u;
                    a.r[1] = rd32(r0 - 0x7fc670c4u);
                    r3 = tc_call(0x8025be38u, &a);
                    f1 = tc_lastf();
                    r7 = tc_junkr(7u);
                    r8 = tc_junkr(8u);
                    r9 = tc_junkr(9u);
                    r10 = tc_junkr(0xau);
                    r3 = rd32(r31 + 0x24cu);
                    r5 = r1 + 0x48u;
                    r12 = rd32(r3);
                    r12 = rd32(r12 + 0xcu);
                    lr = 0x802c2d28u;
                    if (r12 == 0x802c2b20u) {
                        fl_ = 8u;
                        break;
                    }
                    a.r[0] = r3;
                    a.r[1] = 0u;
                    a.r[2] = r5;
                    a.r[3] = 0u;
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
                    r22 = r3;
                    a.r[0] = 0x28u;
                    r3 = tc_call(0x802c2510u, &a);
                    f1 = tc_lastf();
                    r6 = tc_junkr(6u);
                    r7 = tc_junkr(7u);
                    r8 = tc_junkr(8u);
                    r9 = tc_junkr(9u);
                    r10 = tc_junkr(0xau);
                    c0eq = r3 == 0u;
                    if (!c0eq) {
                        if (!c0eq) {
                            a.r[0] = r3;
                            r3 = tc_call(0x802bee94u, &a);
                            f1 = tc_lastf();
                            r6 = tc_junkr(6u);
                            r7 = tc_junkr(7u);
                            r8 = tc_junkr(8u);
                            r9 = tc_junkr(9u);
                            r10 = tc_junkr(0xau);
                        }
                        wr32(r26 + 0x2c0u, r3);
                    }
                    r3 = rd32(r31 + 0x238u);
                    r5 = rd32(r31 + 0x24cu);
                    r12 = rd32(r3);
                    r12 = rd32(r12 + 0x10u);
                    lr = 0x802c2d64u;
                    if (r12 == 0x802c2b20u) {
                        fl_ = 9u;
                        break;
                    }
                    a.r[0] = r3;
                    a.r[1] = r22;
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
                    r4 = rd32(r26 + 0x2c0u);
                    r0 = rd32(r25);
                    wr32(r4 + 0x24u, r3);
                    r0 = (r0 << 2u) & 0xfffffffcu;
                    r3 = rd32(r31 + 0x238u);
                    r4 = rd32(r0 - 0x7fc67120u);
                    r3 = rd32(r3 + 0x14u);
                    a.r[0] = r3;
                    a.r[1] = r4;
                    r3 = tc_call(0x802cc87cu, &a);
                    f1 = tc_lastf();
                    r6 = tc_junkr(6u);
                    r7 = tc_junkr(7u);
                    r8 = tc_junkr(8u);
                    r9 = tc_junkr(9u);
                    r10 = tc_junkr(0xau);
                    wr32(rd32(r26 + 0x2c0u) + 0x20u, r3);
                    r3 = rd32(r26 + 0x2c0u);
                    r3 = rd32(r3 + 0x20u);
                    r23 = rd32(r3 + 0x10u);
                    r22 = r3 + 0x10u;
                    for (;;) {
                        if (r23 == r22) {
                            fl_ = 11u;
                            break;
                        }
                        r3 = rd32(r23 + 8u);
                        r4 = rd32(r26 + 0x2c0u);
                        r12 = rd32(r3);
                        r4 = rd32(r4 + 0x24u);
                        r12 = rd32(r12 + 0x44u);
                        lr = 0x802c2dc0u;
                        if (r12 == 0x802c2b20u) {
                            fl_ = 10u;
                            break;
                        }
                        a.r[0] = r3;
                        a.r[1] = r4;
                        a.r[2] = 0u;
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
                        r23 = rd32(r23);
                    }
                    if (fl_ == 11u) {
                        fl_ = 0u;
                    } else if (fl_ == 10u) {
                        fl_ = 0u;
                        fl_ = 12u;
                        break;
                    }
                    r3 = rd32(r26 + 0x2c0u);
                    r3 = rd32(r3 + 0x24u);
                    a.r[0] = r3;
                    r3 = tc_call(0x802ca924u, &a);
                    f1 = tc_lastf();
                    r5 = rd32(r31 + 4u);
                    wr32(r1 + 0x8cu, r3 & 0xffffu);
                    r3 = rd32(r26 + 0x2c0u);
                    wr32(r1 + 0x88u, 0x43300000u);
                    f2 = (f64)rdf32(0x80348960u);
                    f0 = rdf64(r1 + 0x88u);
                    a.f[0] = (f64)(f32)px_psub(f0, f31);
                    a.f[1] = f2;
                    a.f[2] = (f64)rdf32(r5 + 0x30u);
                    a.r[0] = r3;
                    a.r[1] = 0u;
                    r3 = tc_call(0x802bececu, &a);
                    f1 = tc_lastf();
                    r25 = r25 + 8u;
                    r26 = r26 + 4u;
                    r24 = r24 + 1u;
                }
                if (fl_ != 13u) {
                    if (fl_ != 12u) {
                        if (fl_ == 9u) {
                            fl_ = 0u;
                        } else if (fl_ == 8u) {
                            fl_ = 0u;
                            continue;
                        }
                        continue;
                    }
                    fl_ = 0u;
                    continue;
                }
                fl_ = 0u;
                f31 = rdf64(0x80348968u);
                r25 = r31;
                r26 = 0x803486e8u;
                r29 = 0x803993a0u;
                r30 = 0x803995c8u;
                r24 = 0u;
                r21 = 0x43300000u;
                for (;;) {
                    a.r[0] = r1 + 0x48u;
                    a.r[1] = rd32(r31 + 0xb4u);
                    r3 = tc_call(0x8025bd34u, &a);
                    f1 = tc_lastf();
                    r0 = (rd32(r26 + 4u) << 2u) & 0xfffffffcu;
                    a.r[0] = r1 + 0x48u;
                    a.r[1] = rd32(r0 - 0x7fc66c60u);
                    r3 = tc_call(0x8025be38u, &a);
                    f1 = tc_lastf();
                    r7 = tc_junkr(7u);
                    r8 = tc_junkr(8u);
                    r9 = tc_junkr(9u);
                    r10 = tc_junkr(0xau);
                    r3 = rd32(r31 + 0x24cu);
                    r5 = r1 + 0x48u;
                    r12 = rd32(r3);
                    r12 = rd32(r12 + 0xcu);
                    lr = 0x802c2e78u;
                    if (r12 == 0x802c2b20u) {
                        fl_ = 15u;
                        break;
                    }
                    a.r[0] = r3;
                    a.r[1] = 0u;
                    a.r[2] = r5;
                    a.r[3] = 0u;
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
                    r22 = r3;
                    a.r[0] = 0x28u;
                    r3 = tc_call(0x802c2510u, &a);
                    f1 = tc_lastf();
                    r6 = tc_junkr(6u);
                    r7 = tc_junkr(7u);
                    r8 = tc_junkr(8u);
                    r9 = tc_junkr(9u);
                    r10 = tc_junkr(0xau);
                    c0eq = r3 == 0u;
                    if (!c0eq) {
                        if (!c0eq) {
                            a.r[0] = r3;
                            r3 = tc_call(0x802bee94u, &a);
                            f1 = tc_lastf();
                            r6 = tc_junkr(6u);
                            r7 = tc_junkr(7u);
                            r8 = tc_junkr(8u);
                            r9 = tc_junkr(9u);
                            r10 = tc_junkr(0xau);
                        }
                        wr32(r25 + 0x2f0u, r3);
                    }
                    r3 = rd32(r31 + 0x238u);
                    r5 = rd32(r31 + 0x24cu);
                    r12 = rd32(r3);
                    r12 = rd32(r12 + 0x10u);
                    lr = 0x802c2eb4u;
                    if (r12 == 0x802c2b20u) {
                        fl_ = 14u;
                        break;
                    }
                    a.r[0] = r3;
                    a.r[1] = r22;
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
                    r4 = rd32(r25 + 0x2f0u);
                    r0 = rd32(r26);
                    wr32(r4 + 0x24u, r3);
                    r0 = (r0 << 2u) & 0xfffffffcu;
                    r3 = rd32(r31 + 0x238u);
                    r4 = rd32(r0 - 0x7fc66a38u);
                    r3 = rd32(r3 + 0x14u);
                    a.r[0] = r3;
                    a.r[1] = r4;
                    r3 = tc_call(0x802cc87cu, &a);
                    f1 = tc_lastf();
                    r6 = tc_junkr(6u);
                    r7 = tc_junkr(7u);
                    r8 = tc_junkr(8u);
                    r9 = tc_junkr(9u);
                    r10 = tc_junkr(0xau);
                    wr32(rd32(r25 + 0x2f0u) + 0x20u, r3);
                    r3 = rd32(r25 + 0x2f0u);
                    r3 = rd32(r3 + 0x20u);
                    r22 = rd32(r3 + 0x10u);
                    r23 = r3 + 0x10u;
                    for (;;) {
                        if (r22 == r23) {
                            fl_ = 17u;
                            break;
                        }
                        r3 = rd32(r22 + 8u);
                        r4 = rd32(r25 + 0x2f0u);
                        r12 = rd32(r3);
                        r4 = rd32(r4 + 0x24u);
                        r12 = rd32(r12 + 0x44u);
                        lr = 0x802c2f10u;
                        if (r12 == 0x802c2b20u) {
                            fl_ = 16u;
                            break;
                        }
                        a.r[0] = r3;
                        a.r[1] = r4;
                        a.r[2] = 0u;
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
                        r22 = rd32(r22);
                    }
                    if (fl_ == 17u) {
                        fl_ = 0u;
                    } else if (fl_ == 16u) {
                        fl_ = 0u;
                        fl_ = 18u;
                        break;
                    }
                    r3 = rd32(r25 + 0x2f0u);
                    r3 = rd32(r3 + 0x24u);
                    a.r[0] = r3;
                    r3 = tc_call(0x802ca924u, &a);
                    f1 = tc_lastf();
                    r5 = rd32(r31 + 4u);
                    wr32(r1 + 0x8cu, r3 & 0xffffu);
                    r3 = rd32(r25 + 0x2f0u);
                    wr32(r1 + 0x88u, 0x43300000u);
                    f2 = (f64)rdf32(0x80348960u);
                    f0 = rdf64(r1 + 0x88u);
                    a.f[0] = (f64)(f32)px_psub(f0, f31);
                    a.f[1] = f2;
                    a.f[2] = (f64)rdf32(r5 + 0x30u);
                    a.r[0] = r3;
                    a.r[1] = 0u;
                    r3 = tc_call(0x802bececu, &a);
                    f1 = tc_lastf();
                    r24 = r24 + 1u;
                    r25 = r25 + 4u;
                    r26 = r26 + 8u;
                    if ((s32)r24 >= 74) {
                        fl_ = 19u;
                        break;
                    }
                }
                do {
                    if (fl_ == 19u) {
                        fl_ = 0u;
                        goto loopc_entry;
                    }
                    if (fl_ == 18u) {
                        fl_ = 0u;
                        fl_ = 22u;
                        break;
                    }
                    if (fl_ == 15u) {
                        fl_ = 0u;
                    } else if (fl_ == 14u) {
                        fl_ = 0u;
                        break;
                    }
                    fl_ = 23u;
                    break;
                } while (0);
                do {
                    if (fl_ == 23u) {
                        fl_ = 0u;
                        fl_ = 24u;
                        break;
                    }
                    if (fl_ != 22u) {
                        if (fl_ == 21u) {
                            fl_ = 20u;
                            break;
                        }
                        fl_ = 24u;
                        break;
                    }
                    fl_ = 0u;
                } while (0);
                if (fl_ == 24u) {
                    fl_ = 0u;
                    continue;
                }
                if (fl_ != 20u) continue;
loopc_entry:
                fl_ = 0u;
                f31 = rdf64(0x80348968u);
                r30 = r31;
                r29 = 0x80399080u;
                r26 = 0x80399190u;
                r25 = 0u;
                r24 = 0x43300000u;
                for (;;) {
                    a.r[0] = r1 + 0x48u;
                    a.r[1] = rd32(r31 + 0xb4u);
                    r3 = tc_call(0x8025bd34u, &a);
                    f1 = tc_lastf();
                    a.r[0] = r1 + 0x48u;
                    a.r[1] = rd32(r29);
                    r3 = tc_call(0x8025be38u, &a);
                    f1 = tc_lastf();
                    r7 = tc_junkr(7u);
                    r8 = tc_junkr(8u);
                    r9 = tc_junkr(9u);
                    r10 = tc_junkr(0xau);
                    r3 = rd32(r31 + 0x24cu);
                    r5 = r1 + 0x48u;
                    r12 = rd32(r3);
                    r12 = rd32(r12 + 0xcu);
                    lr = 0x802c2fb8u;
                    if (r12 == 0x802c2b20u) {
                        fl_ = 26u;
                        break;
                    }
                    a.r[0] = r3;
                    a.r[1] = 0u;
                    a.r[2] = r5;
                    a.r[3] = 0u;
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
                    r21 = r3;
                    a.r[0] = 0x28u;
                    r3 = tc_call(0x802c2510u, &a);
                    f1 = tc_lastf();
                    r6 = tc_junkr(6u);
                    r7 = tc_junkr(7u);
                    r8 = tc_junkr(8u);
                    r9 = tc_junkr(9u);
                    r10 = tc_junkr(0xau);
                    c0eq = r3 == 0u;
                    if (!c0eq) {
                        if (!c0eq) {
                            a.r[0] = r3;
                            r3 = tc_call(0x802bee94u, &a);
                            f1 = tc_lastf();
                            r6 = tc_junkr(6u);
                            r7 = tc_junkr(7u);
                            r8 = tc_junkr(8u);
                            r9 = tc_junkr(9u);
                            r10 = tc_junkr(0xau);
                        }
                        wr32(r30 + 0x418u, r3);
                    }
                    r3 = rd32(r31 + 0x238u);
                    r5 = rd32(r31 + 0x24cu);
                    r12 = rd32(r3);
                    r12 = rd32(r12 + 0x10u);
                    lr = 0x802c2ff4u;
                    if (r12 == 0x802c2b20u) {
                        fl_ = 25u;
                        break;
                    }
                    a.r[0] = r3;
                    a.r[1] = r21;
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
                    wr32(rd32(r30 + 0x418u) + 0x24u, r3);
                    r3 = rd32(r31 + 0x238u);
                    r4 = rd32(r26);
                    r3 = rd32(r3 + 0x14u);
                    a.r[0] = r3;
                    a.r[1] = r4;
                    r3 = tc_call(0x802cc87cu, &a);
                    f1 = tc_lastf();
                    r6 = tc_junkr(6u);
                    r7 = tc_junkr(7u);
                    r8 = tc_junkr(8u);
                    r9 = tc_junkr(9u);
                    r10 = tc_junkr(0xau);
                    wr32(rd32(r30 + 0x418u) + 0x20u, r3);
                    r3 = rd32(r30 + 0x418u);
                    r3 = rd32(r3 + 0x20u);
                    r22 = rd32(r3 + 0x10u);
                    r23 = r3 + 0x10u;
                    for (;;) {
                        if (r22 == r23) {
                            fl_ = 28u;
                            break;
                        }
                        r3 = rd32(r22 + 8u);
                        r4 = rd32(r30 + 0x418u);
                        r12 = rd32(r3);
                        r4 = rd32(r4 + 0x24u);
                        r12 = rd32(r12 + 0x44u);
                        lr = 0x802c3048u;
                        if (r12 == 0x802c2b20u) {
                            fl_ = 27u;
                            break;
                        }
                        a.r[0] = r3;
                        a.r[1] = r4;
                        a.r[2] = 0u;
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
                        r22 = rd32(r22);
                    }
                    if (fl_ == 28u) {
                        fl_ = 0u;
                    } else if (fl_ == 27u) {
                        fl_ = 0u;
                        fl_ = 29u;
                        break;
                    }
                    r3 = rd32(r30 + 0x418u);
                    r3 = rd32(r3 + 0x24u);
                    a.r[0] = r3;
                    r3 = tc_call(0x802ca924u, &a);
                    f1 = tc_lastf();
                    r5 = rd32(r31 + 4u);
                    wr32(r1 + 0x8cu, r3 & 0xffffu);
                    r3 = rd32(r30 + 0x418u);
                    wr32(r1 + 0x88u, 0x43300000u);
                    f2 = (f64)rdf32(0x80348960u);
                    f0 = rdf64(r1 + 0x88u);
                    a.f[0] = (f64)(f32)px_psub(f0, f31);
                    a.f[1] = f2;
                    a.f[2] = (f64)rdf32(r5 + 0x30u);
                    a.r[0] = r3;
                    a.r[1] = 0u;
                    r3 = tc_call(0x802bececu, &a);
                    f1 = tc_lastf();
                    r25 = r25 + 1u;
                    r30 = r30 + 4u;
                    r26 = r26 + 4u;
                    r29 = r29 + 4u;
                    if ((s32)r25 >= 15) {
                        fl_ = 30u;
                        break;
                    }
                }
                do {
                    if (fl_ == 30u) {
                        fl_ = 0u;
                        goto tail_entry;
                    }
                    if (fl_ == 29u) {
                        fl_ = 0u;
                        fl_ = 33u;
                        break;
                    }
                    if (fl_ == 26u) {
                        fl_ = 0u;
                    } else if (fl_ == 25u) {
                        fl_ = 0u;
                        break;
                    }
                    fl_ = 34u;
                    break;
                } while (0);
                do {
                    if (fl_ == 34u) {
                        fl_ = 0u;
                        fl_ = 35u;
                        break;
                    }
                    if (fl_ != 33u) {
                        if (fl_ == 32u) {
                            fl_ = 31u;
                            break;
                        }
                        fl_ = 35u;
                        break;
                    }
                    fl_ = 0u;
                } while (0);
                if (fl_ == 35u) {
                    fl_ = 0u;
                    continue;
                }
                if (fl_ != 31u) continue;
tail_entry:
                fl_ = 0u;
                a.r[0] = 0xcu;
                r3 = tc_call(0x802c2510u, &a);
                f1 = tc_lastf();
                c0eq = r3 == 0u;
                if (!c0eq) {
                    if (!c0eq) {
                        wr32(r3, 0x803999a8u);
                        wr32(r3 + 8u, r31);
                    }
                    wr32(r31 + 0x254u, r3);
                }
                a.r[0] = 0x2cu;
                r3 = tc_call(0x802c2510u, &a);
                f1 = tc_lastf();
                r5 = tc_junkr(5u);
                r6 = tc_junkr(6u);
                r7 = tc_junkr(7u);
                r8 = tc_junkr(8u);
                r9 = tc_junkr(9u);
                r10 = tc_junkr(0xau);
                c0eq = r3 == 0u;
                r21 = r3;
                if (!c0eq) {
                    if (!c0eq) {
                        r0 = rd32(r31 + 0x254u);
                        r5 = rd32(0x80398d8cu);
                        wr32(r3, 0x80398898u);
                        wr32(r3 + 4u, r0);
                        wr32(r3 + 0x14u, r5);
                        if (r0 != 0u) {
                            r3 = r0;
                            r12 = rd32(r0);
                            r12 = rd32(r12 + 0xcu);
                            lr = 0x802c3124u;
                            if (r12 == 0x802c2b20u) continue;
                            a.r[0] = r0;
                            a.r[1] = r21;
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
                        a.r[0] = r21 + 8u;
                        a.r[1] = 8u;
                        r3 = tc_call(0x802d7ab8u, &a);
                        f1 = tc_lastf();
                        wr32(r21, 0x803987f8u);
                        wr32(r21 + 0x24u, 0u);
                        a.r[0] = r21 + 0x18u;
                        a.r[1] = 8u;
                        r3 = tc_call(0x802d7ab8u, &a);
                        f1 = tc_lastf();
                        r5 = tc_junkr(5u);
                        r6 = tc_junkr(6u);
                        r7 = tc_junkr(7u);
                        r8 = tc_junkr(8u);
                        r9 = tc_junkr(9u);
                        r10 = tc_junkr(0xau);
                    }
                    wr32(r31 + 0x250u, r21);
                }
                r3 = rd32(r31 + 0x250u);
                r4 = rd32(r31 + 0x238u);
                r12 = rd32(r3);
                r12 = rd32(r12 + 0x40u);
                lr = 0x802c316cu;
                if (r12 != 0x802c2b20u) {
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
                    a.r[0] = 0x1f8u;
                    r3 = tc_call(0x802c2510u, &a);
                    f1 = tc_lastf();
                    r7 = tc_junkr(7u);
                    r8 = tc_junkr(8u);
                    r9 = tc_junkr(9u);
                    r10 = tc_junkr(0xau);
                    c0eq = r3 == 0u;
                    if (!c0eq) {
                        if (!c0eq) {
                            r4 = rd32(r31 + 4u);
                            r4 = rd32(r4 + 4u);
                            a.f[0] = f1;
                            a.f[1] = 0.0;
                            a.f[2] = 0.0;
                            a.f[3] = 0.0;
                            a.f[4] = 0.0;
                            a.f[5] = 0.0;
                            a.f[6] = 0.0;
                            a.f[7] = 0.0;
                            a.r[0] = r3;
                            a.r[1] = r4;
                            a.r[4] = r7;
                            a.r[5] = r8;
                            a.r[6] = r9;
                            a.r[7] = r10;
                            r3 = tc_call(0x802c13acu, &a);
                            f1 = tc_lastf();
                        }
                        wr32(r31 + 0x2bcu, r3);
                    }
                    r21 = r31;
                    r22 = 0u;
                    do {
                        a.r[0] = 0x48u;
                        r3 = tc_call(0x802c2510u, &a);
                        f1 = tc_lastf();
                        r5 = tc_junkr(5u);
                        r6 = tc_junkr(6u);
                        r7 = tc_junkr(7u);
                        r8 = tc_junkr(8u);
                        r9 = tc_junkr(9u);
                        r10 = tc_junkr(0xau);
                        c0eq = r3 == 0u;
                        if (!c0eq) {
                            if (!c0eq) {
                                a.r[0] = r3;
                                a.r[1] = r22;
                                a.r[2] = rd32(r31 + 0x2bcu);
                                r3 = tc_call(0x802c08c4u, &a);
                                f1 = tc_lastf();
                                r5 = tc_junkr(5u);
                                r6 = tc_junkr(6u);
                                r7 = tc_junkr(7u);
                                r8 = tc_junkr(8u);
                                r9 = tc_junkr(9u);
                                r10 = tc_junkr(0xau);
                            }
                            wr32(r21 + 0x2acu, r3);
                        }
                        r22 = r22 + 1u;
                        r21 = r21 + 4u;
                    } while ((s32)r22 < 4);
                    r3 = rd32(r31 + 0x250u);
                    r4 = r31 + 0x258u;
                    r12 = rd32(r3);
                    r12 = rd32(r12 + 0x54u);
                    lr = 0x802c31e4u;
                    if (r12 != 0x802c2b20u) {
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
                        r4 = rd32(r31 + 4u);
                        f1 = (f64)rdf32(0x80348964u);
                        f0 = (f64)rdf32(r4 + 0x34u);
                        r4 = (u32)rd8(r31 + 0x8fu);
                        f0 = (f64)(f32)px_pdiv(f1, f0);
                        r0 = ((u32)rd8(r31 + 0x2a8u) & 0xffffffdfu) | ((r4 << 5u) & 0x20u);
                        wrf32d(r1 + 0x14u, f1);
                        wrf32d(r31 + 0x2a0u, f1);
                        wr8(r31 + 0x2a8u, (u8)r0);
                        wrf32d(r1 + 0x10u, f0);
                        wrf32d(r31 + 0x29cu, f0);
                        a.r[0] = r1 + 0x18u;
                        r3 = tc_call(0x80233740u, &a);
                        f1 = tc_lastf();
                        r6 = tc_junkr(6u);
                        r7 = tc_junkr(7u);
                        r8 = tc_junkr(8u);
                        r9 = tc_junkr(9u);
                        r10 = tc_junkr(0xau);
                        r3 = rd32(r1 + 0x18u);
                        r0 = rd32(r1 + 0x1cu);
                        r29 = 0x80399774u;
                        r27 = 0x805474f8u;
                        r28 = 0u;
                        wr32(r31 + 0x25cu, r3);
                        r30 = 0u;
                        wr32(r31 + 0x260u, r0);
                        r3 = rd32(r1 + 0x20u);
                        r0 = rd32(r1 + 0x24u);
                        wr32(r31 + 0x264u, r3);
                        wr32(r31 + 0x268u, r0);
                        r3 = rd32(r1 + 0x28u);
                        r0 = rd32(r1 + 0x2cu);
                        wr32(r31 + 0x26cu, r3);
                        wr32(r31 + 0x270u, r0);
                        r3 = rd32(r1 + 0x30u);
                        r0 = rd32(r1 + 0x34u);
                        wr32(r31 + 0x274u, r3);
                        wr32(r31 + 0x278u, r0);
                        r3 = rd32(r1 + 0x38u);
                        r0 = rd32(r1 + 0x3cu);
                        wr32(r31 + 0x27cu, r3);
                        wr32(r31 + 0x280u, r0);
                        r3 = rd32(r1 + 0x40u);
                        r0 = rd32(r1 + 0x44u);
                        wr32(r31 + 0x284u, r3);
                        wr32(r31 + 0x288u, r0);
                        for (;;) {
                            r3 = rd32(r31 + 0x238u);
                            r4 = rd32(r29);
                            r3 = rd32(r3 + 0x10u);
                            r12 = rd32(r3);
                            r12 = rd32(r12 + 0x3cu);
                            lr = 0x802c32b0u;
                            if (r12 == 0x802c2b20u) {
                                fl_ = 37u;
                                break;
                            }
                            a.r[0] = r3;
                            a.r[1] = r4;
                            a.r[2] = 1u;
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
                            r12 = rd32(r3);
                            r21 = r3;
                            r12 = rd32(r12 + 0xcu);
                            lr = 0x802c32c4u;
                            if (r12 == 0x802c2b20u) {
                                fl_ = 36u;
                                break;
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
                            a.f[1] = 0.0;
                            a.f[2] = 0.0;
                            a.f[3] = 0.0;
                            a.f[4] = 0.0;
                            a.f[5] = 0.0;
                            a.f[6] = 0.0;
                            a.f[7] = 0.0;
                            r3 = tc_call(r12, &a);
                            f1 = tc_lastf();
                            r7 = tc_junkr(7u);
                            r8 = tc_junkr(8u);
                            r9 = tc_junkr(9u);
                            r10 = tc_junkr(0xau);
                            for (;;) {
                                if (r3 == 0u) {
                                    fl_ = 38u;
                                    break;
                                }
                                if (r3 == 0x805474f8u) {
                                    fl_ = 39u;
                                    break;
                                }
                                r3 = rd32(r3);
                            }
                            do {
                                if (fl_ == 39u) {
                                    fl_ = 0u;
                                } else if (fl_ == 38u) {
                                    fl_ = 0u;
                                    break;
                                }
                                r0 = 1u;
                                fl_ = 40u;
                                break;
                            } while (0);
                            if (fl_ == 40u) {
                                fl_ = 0u;
                            } else {
                                r0 = 0u;
                            }
                            if (r0 == 0u) {
                                r21 = 0u;
                            }
                            r3 = rd32(r31 + 4u);
                            r5 = 0u;
                            r3 = rd32(r3 + 0x1cu);
                            r3 = r3 * 0x18u;
                            r3 = r3 + (r30 + r31);
                            r4 = rd32(r3 + 0xbcu);
                            r3 = r4;
                            while ((u32)rd16(r3) != 0x22u) {
                                r3 = r3 + 2u;
                                r5 = r5 + 1u;
                            }
                            r12 = rd32(r21);
                            r6 = r5 & 0xffffu;
                            r3 = r21;
                            r12 = rd32(r12 + 0x70u);
                            lr = 0x802c334cu;
                            if (r12 == 0x802c2b20u) {
                                fl_ = 41u;
                                break;
                            }
                            a.r[0] = r21;
                            a.r[1] = r4;
                            a.r[2] = 0u;
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
                            r28 = r28 + 1u;
                            r30 = r30 + 4u;
                            r29 = r29 + 4u;
                            if ((s32)r28 >= 3) {
                                t20 = r1 + 0xc8u;
                                t21 = (f64)rdf32(t20);
                                t22 = (f64)rdf32(t20);
                                r11 = r1 + 0xc0u;
                                f31 = rdf64(r1 + 0xc0u);
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
                                r0 = rd32(r1 + 0xd4u);
                                return;
                            }
                        }
                        do {
                            if (fl_ == 41u) {
                                fl_ = 0u;
                                fl_ = 42u;
                                break;
                            }
                            if (fl_ == 37u) {
                                fl_ = 0u;
                            } else if (fl_ == 36u) {
                                fl_ = 0u;
                                break;
                            }
                            fl_ = 43u;
                            break;
                        } while (0);
                        if (fl_ == 43u) {
                            fl_ = 0u;
                            continue;
                        }
                        if (fl_ == 42u) {
                            fl_ = 0u;
                        }
                    }
                }
            }
        }
    }
}
