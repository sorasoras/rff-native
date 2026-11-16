#include "tc_rt.h"

static u64 px_f2b(f64 x)
{
    union { f64 d; u64 b; } v;
    v.d = x;
    return v.b;
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

void fn_8018a78c(u32 param_r3, u32 param_r4)
{
    u32 fl_ = 0, lr = 0, r0 = 0, r1 = 0, r3 = 0, r4 = 0, r5 = tc_argr(2u), r6 = tc_argr(3u), r7 = tc_argr(4u), r8 = tc_argr(5u), r9 = tc_argr(6u), r10 = tc_argr(7u);
    u32 r11 = 0, r25 = 0, r26 = 0, r27 = 0, r28 = 0, r29 = 0, r30 = 0, r31 = 0, t4 = 0, t7 = 0, t10 = 0, t13 = 0;
    f64 f1 = tc_argf(0u), f28 = 0.0, f29 = 0.0, f30 = 0.0, f31 = 0.0, t5 = 0.0, t6 = 0.0, t8 = 0.0, t9 = 0.0, t11 = 0.0, t12 = 0.0, t14 = 0.0;
    f64 t15 = 0.0;
    TcArgs a = {0};
    r1 = 0x817fe000u;
    lr = 0x817ff000u;
    r3 = param_r3;
    r4 = param_r4;
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
        wr32(r11 - 4u, r31);
        r27 = r4;
        r29 = 0x80492800u;
        r26 = r3;
        r5 = (u32)rd8(0x80492825u);
        a.r[0] = r3;
        a.r[1] = (u32)rd8(0x80492824u);
        a.r[2] = r5;
        f1 = tc_callf(0x8018a5d0u, &a);
        r3 = tc_lastr();
        r4 = tc_lastr4();
        r5 = tc_junkr(5u);
        r6 = tc_junkr(6u);
        r7 = tc_junkr(7u);
        r8 = tc_junkr(8u);
        r9 = tc_junkr(9u);
        r10 = tc_junkr(0xau);
        lr = 0x8018a7dcu;
        for (;;) {
            f28 = f1;
            f29 = rdf64(0x80575280u);
            f30 = (f64)rdf32(0x80575278u);
            r28 = 0u;
            f31 = (f64)rdf32(0x80575264u);
            r25 = 0u;
            r31 = 0x43300000u;
            r30 = 0x80370000u;
            for (;;) {
                if (r28 > 0x16u) {
                    r28 = r28 + 1u;
                    r25 = r25 + 4u;
                    if (r28 >= 0x17u) {
                        fl_ = 1u;
                        break;
                    }
                } else {
                    for (;;) {
                        r3 = rd32(r25 - 0x7fc908c0u);
                        if (r3 == 0x8018a78cu) {
                            fl_ = 2u;
                            break;
                        }
                        if (r3 == 0x817ff000u) {
                            return;
                        }
                        if (r3 == 0x8018aaa0u) {
                            fl_ = 3u;
                            break;
                        }
                        if (r3 == 0x8018aa90u) {
                            fl_ = 4u;
                            break;
                        }
                        if (r3 != 0x8018a804u) {
                            fl_ = 5u;
                            break;
                        }
                    }
                    if (fl_ != 5u) {
                        if (fl_ == 4u) {
                            fl_ = 0u;
                        } else {
                            if (fl_ == 3u) {
                                fl_ = 0u;
                                fl_ = 6u;
                                break;
                            }
                            if (fl_ == 2u) {
                                fl_ = 0u;
                                fl_ = 7u;
                                break;
                            }
                        }
                        r28 = r28 + 1u;
                        r25 = r25 + 4u;
                        if (r28 < 0x17u) continue;
                        fl_ = 1u;
                        break;
                    }
                    fl_ = 0u;
                    if (r3 != 0x8018a7fcu) {
                        fl_ = 8u;
                        break;
                    }
                }
            }
            if (fl_ != 8u) {
                if (fl_ == 7u) {
                    fl_ = 0u;
                    break;
                }
                if (fl_ == 6u) {
                    fl_ = 0u;
                } else if (fl_ == 1u) {
                    fl_ = 0u;
                }
                t4 = r1 + 0x68u;
                t5 = (f64)rdf32(t4);
                t6 = (f64)rdf32(t4);
                f31 = rdf64(r1 + 0x60u);
                t7 = r1 + 0x58u;
                t8 = (f64)rdf32(t7);
                t9 = (f64)rdf32(t7);
                f30 = rdf64(r1 + 0x50u);
                t10 = r1 + 0x48u;
                t11 = (f64)rdf32(t10);
                t12 = (f64)rdf32(t10);
                f29 = rdf64(r1 + 0x40u);
                t13 = r1 + 0x38u;
                t14 = (f64)rdf32(t13);
                t15 = (f64)rdf32(t13);
                r11 = r1 + 0x30u;
                f28 = rdf64(r1 + 0x30u);
                r25 = rd32(r11 - 0x1cu);
                r26 = rd32(r11 - 0x18u);
                r27 = rd32(r11 - 0x14u);
                r28 = rd32(r11 - 0x10u);
                r29 = rd32(r11 - 0xcu);
                r30 = rd32(r11 - 8u);
                r31 = rd32(r11 - 4u);
                r0 = rd32(r1 + 0x74u);
                lr = r0;
                r1 = r1 + 0x70u;
                if (r0 == 0x8018a7dcu) continue;
                if (r0 == 0x817ff000u) {
                    return;
                }
                return;
            }
            fl_ = 0u;
            if (r3 != 0x8018a7dcu) {
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
                f1 = tc_callf(r3, &a);
                r3 = tc_lastr();
                r4 = tc_lastr4();
                r5 = tc_junkr(5u);
                r6 = tc_junkr(6u);
                r7 = tc_junkr(7u);
                r8 = tc_junkr(8u);
                r9 = tc_junkr(9u);
                r10 = tc_junkr(0xau);
                if (lr != 0x8018a7dcu) {
                    if (lr == 0x817ff000u) {
                        return;
                    }
                    return;
                }
            }
        }
    }
}
