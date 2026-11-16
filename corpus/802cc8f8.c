#include "tc_rt.h"

static u32 px_rec(u32 sp_, u32 param_r3, u32 param_r4, f64 *f1_out)
{
    u32 fl_ = 0, lr = 0, r0 = 0, r1 = 0, r3 = 0, r4 = 0, r5 = tc_argr(2u), r6 = tc_argr(3u), r7 = tc_argr(4u), r8 = tc_argr(5u), r9 = tc_argr(6u), r10 = tc_argr(7u);
    u32 r11 = 0, r12 = 0, r24 = 0, r25 = 0, r26 = 0, r27 = 0, r28 = 0, r29 = 0, r30 = 0, r31 = 0;
    f64 f1 = *f1_out, f2 = tc_argf(1u), f3 = tc_argf(2u), f4 = tc_argf(3u), f5 = tc_argf(4u), f6 = tc_argf(5u), f7 = tc_argf(6u), f8 = tc_argf(7u);
    TcArgs a = {0};
    r1 = sp_;
    lr = 0x817ff000u;
    r3 = param_r3;
    r4 = param_r4;
    for (;;) {
        wr32(r1 - 0x30u, r1);
        r1 = r1 - 0x30u;
        wr32(r1 + 0x34u, lr);
        r11 = r1 + 0x30u;
        wr32(r11 - 0x20u, r24);
        wr32(r11 - 0x1cu, r25);
        wr32(r11 - 0x18u, r26);
        wr32(r11 - 0x14u, r27);
        wr32(r11 - 0x10u, r28);
        wr32(r11 - 0xcu, r29);
        wr32(r11 - 8u, r30);
        wr32(r11 - 4u, r31);
        r12 = rd32(r3);
        r27 = r3;
        r24 = r4;
        r12 = rd32(r12 + 0xcu);
        r26 = 0x805474f8u;
        lr = 0x802cc92cu;
        if (r12 != 0x802cc8f8u) {
            for (;;) {
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
                a.f[4] = f5;
                a.f[5] = f6;
                a.f[6] = f7;
                a.f[7] = f8;
                r3 = tc_call(r12, &a);
                f1 = tc_lastf();
                r4 = tc_lastr4();
                r5 = tc_junkr(5u);
                r6 = tc_junkr(6u);
                r7 = tc_junkr(7u);
                r8 = tc_junkr(8u);
                r9 = tc_junkr(9u);
                r10 = tc_junkr(0xau);
                f2 = 0.0;
                f3 = 0.0;
                f4 = 0.0;
                f5 = 0.0;
                f6 = 0.0;
                f7 = 0.0;
                f8 = 0.0;
                for (;;) {
                    if (r3 == 0u) {
                        r0 = 0u;
                        break;
                    }
                    if (r3 == 0x805474f8u) {
                        r0 = 1u;
                        break;
                    }
                    r3 = rd32(r3);
                }
                if (r0 == 0u) {
                    r3 = 0u;
                } else {
                    r3 = r27;
                }
                if (r3 != 0u) {
                    wr32(r3 + 0xf4u, r24);
                }
                r31 = rd32(r27 + 0x14u);
                r28 = r27 + 0x14u;
                r25 = 0x805474f8u;
                for (;;) {
                    if (r31 == r28) {
                        fl_ = 10u;
                        break;
                    }
                    r26 = r31 - 4u;
                    r12 = rd32(r26);
                    r3 = r26;
                    r12 = rd32(r12 + 0xcu);
                    lr = 0x802cc99cu;
                    if (r12 == 0x802cc8f8u) {
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
                    r4 = tc_lastr4();
                    r5 = tc_junkr(5u);
                    r6 = tc_junkr(6u);
                    r7 = tc_junkr(7u);
                    r8 = tc_junkr(8u);
                    r9 = tc_junkr(9u);
                    r10 = tc_junkr(0xau);
                    f2 = 0.0;
                    f3 = 0.0;
                    f4 = 0.0;
                    f5 = 0.0;
                    f6 = 0.0;
                    f7 = 0.0;
                    f8 = 0.0;
                    for (;;) {
                        if (r3 == 0u) {
                            fl_ = 3u;
                            break;
                        }
                        if (r3 == 0x805474f8u) {
                            r0 = 1u;
                            fl_ = 2u;
                            break;
                        }
                        r3 = rd32(r3);
                    }
                    do {
                        if (fl_ == 3u) {
                            fl_ = 0u;
                        } else if (fl_ == 2u) {
                            fl_ = 0u;
                            break;
                        }
                        r0 = 0u;
                    } while (0);
                    if (r0 == 0u) {
                        r3 = 0u;
                    } else {
                        r3 = r26;
                    }
                    if (r3 != 0u) {
                        wr32(r3 + 0xf4u, r24);
                    }
                    r30 = rd32(r26 + 0x14u);
                    r27 = r26 + 0x14u;
                    for (;;) {
                        if (r30 == r27) {
                            fl_ = 8u;
                            break;
                        }
                        r26 = r30 - 4u;
                        r12 = rd32(r26);
                        r3 = r26;
                        r12 = rd32(r12 + 0xcu);
                        lr = 0x802cca04u;
                        if (r12 == 0x802cc8f8u) {
                            fl_ = 4u;
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
                        r4 = tc_lastr4();
                        r5 = tc_junkr(5u);
                        r6 = tc_junkr(6u);
                        r7 = tc_junkr(7u);
                        r8 = tc_junkr(8u);
                        r9 = tc_junkr(9u);
                        r10 = tc_junkr(0xau);
                        f2 = 0.0;
                        f3 = 0.0;
                        f4 = 0.0;
                        f5 = 0.0;
                        f6 = 0.0;
                        f7 = 0.0;
                        f8 = 0.0;
                        for (;;) {
                            if (r3 == 0u) {
                                fl_ = 5u;
                                break;
                            }
                            if (r3 == 0x805474f8u) {
                                fl_ = 6u;
                                break;
                            }
                            r3 = rd32(r3);
                        }
                        do {
                            if (fl_ == 6u) {
                                fl_ = 0u;
                            } else if (fl_ == 5u) {
                                fl_ = 0u;
                                break;
                            }
                            r0 = 1u;
                            fl_ = 7u;
                            break;
                        } while (0);
                        if (fl_ == 7u) {
                            fl_ = 0u;
                        } else {
                            r0 = 0u;
                        }
                        if (r0 == 0u) {
                            r3 = 0u;
                        } else {
                            r3 = r26;
                        }
                        if (r3 != 0u) {
                            wr32(r3 + 0xf4u, r24);
                        }
                        r26 = r26 + 0x14u;
                        r29 = rd32(r26);
                        while (r29 != r26) {
                            r3 = px_rec(r1, r29 - 4u, r24, &f1);
                            r4 = 0u;
                            r5 = 0u;
                            r6 = 0u;
                            r7 = 0u;
                            r8 = 0u;
                            r9 = 0u;
                            r10 = 0u;
                            f2 = 0.0;
                            f3 = 0.0;
                            f4 = 0.0;
                            f5 = 0.0;
                            f6 = 0.0;
                            f7 = 0.0;
                            f8 = 0.0;
                            r29 = rd32(r29);
                        }
                        r30 = rd32(r30);
                    }
                    if (fl_ == 8u) {
                        fl_ = 0u;
                    } else if (fl_ == 4u) {
                        fl_ = 0u;
                        fl_ = 9u;
                        break;
                    }
                    r31 = rd32(r31);
                }
                if (fl_ == 10u) {
                    fl_ = 0u;
                } else {
                    if (fl_ == 9u) {
                        fl_ = 0u;
                        fl_ = 11u;
                        break;
                    }
                    if (fl_ == 1u) {
                        fl_ = 0u;
                        fl_ = 12u;
                        break;
                    }
                }
                r11 = r1 + 0x30u;
                r24 = rd32(r11 - 0x20u);
                r25 = rd32(r11 - 0x1cu);
                r26 = rd32(r11 - 0x18u);
                r27 = rd32(r11 - 0x14u);
                r28 = rd32(r11 - 0x10u);
                r29 = rd32(r11 - 0xcu);
                r30 = rd32(r11 - 8u);
                r31 = rd32(r11 - 4u);
                r0 = rd32(r1 + 0x34u);
                *f1_out = f1; return r3;
            }
            do {
                if (fl_ == 12u) {
                    fl_ = 0u;
                } else if (fl_ == 11u) {
                    fl_ = 0u;
                    break;
                }
                fl_ = 13u;
                break;
            } while (0);
            if (fl_ == 13u) {
                fl_ = 0u;
            }
        }
    }
}

void fn_802cc8f8(u32 param_r3, u32 param_r4)
{
    f64 f1 = 0.0;
    px_rec(0x817fe000u, param_r3, param_r4, &f1);
}
