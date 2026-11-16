#include "tc_rt.h"

void fn_801d2e68(u32 param_1, u32 param_2, u32 param_3, u32 param_4)
{
    u32 fl_ = 0, lr = 0, r0 = 0, r1 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0, r7 = tc_argr(4u), r8 = tc_argr(5u), r9 = tc_argr(6u), r10 = tc_argr(7u);
    u32 r11 = 0, r12 = 0, r22 = 0, r23 = 0, r24 = 0, r25 = 0, r26 = 0, r27 = 0, r28 = 0, r29 = 0, r30 = 0, r31 = 0;
    f64 f0 = 0.0, f1 = tc_argf(0u);
    TcArgs a = {0};
    r1 = 0x817fe000u;
    lr = 0x817ff000u;
    r3 = param_1;
    r4 = param_2;
    r5 = param_3;
    r6 = param_4;
    for (;;) {
        wr32(r1 - 0x70u, r1);
        r1 = r1 - 0x70u;
        wr32(r1 + 0x74u, lr);
        r11 = r1 + 0x70u;
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
        r25 = r3;
        r26 = r4;
        r27 = r5;
        r28 = r6;
        r3 = tc_call(0x800545e4u, &a);
        f1 = tc_lastf();
        r4 = r3;
        if (rd32(r3 + 0x10u) == 0u) {
            if (rd32(r3 + 0x20u) == 0u) {
                r3 = rd32(r3);
                a.r[0] = r3;
                a.r[1] = 0xee0u;
                a.r[2] = rd32(r4 + 0xcu);
                a.r[3] = r4 + 0x18u;
                r3 = tc_call(0x80040cd8u, &a);
                f1 = tc_lastf();
                r9 = tc_junkr(9u);
                r10 = tc_junkr(0xau);
            } else {
                r3 = r3 + 0x24u;
                a.r[0] = r3;
                a.r[1] = 0x20u;
                a.r[2] = 0xee0u;
                r3 = tc_call(0x80094e80u, &a);
                f1 = tc_lastf();
                r9 = tc_junkr(9u);
                r10 = tc_junkr(0xau);
            }
            r24 = r3;
        } else {
            r3 = rd32(r3);
            a.r[0] = r3;
            a.r[1] = 0xee0u;
            a.r[2] = rd32(r4 + 0xcu);
            a.r[3] = r4 + 0x18u;
            r3 = tc_call(0x80040db8u, &a);
            f1 = tc_lastf();
            r9 = tc_junkr(9u);
            r10 = tc_junkr(0xau);
            r24 = r3;
        }
        r29 = r3;
        if (r3 != 0u) {
            r3 = r3;
            a.r[0] = r3;
            f1 = tc_callf(0x801cc348u, &a);
            r3 = tc_lastr();
            r9 = tc_junkr(9u);
            r10 = tc_junkr(0xau);
        }
        r12 = rd32(r29);
        r3 = r29;
        r31 = r29;
        r4 = r25;
        r12 = rd32(r12 + 0xc4u);
        r6 = r26;
        r5 = 0x98u;
        lr = 0x801d2f34u;
        if (r12 != 0x801d2e68u) {
            a.r[0] = r29;
            a.r[1] = r25;
            a.r[2] = 0x98u;
            a.r[3] = r26;
            a.r[4] = r27;
            a.r[5] = r28;
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
            if (r3 != 0u) {
                r11 = rd32(0x8033be18u);
                f0 = (f64)rdf32(0x80575ea8u);
                r30 = r29;
                r10 = rd32(0x8033be1cu);
                r9 = rd32(0x8033be20u);
                r29 = 0x52u;
                r8 = rd32(0x8033be24u);
                r7 = rd32(0x8033be28u);
                r6 = rd32(0x8033be2cu);
                r5 = rd32(0x8033be30u);
                r4 = rd32(0x8033be34u);
                r3 = rd32(0x8033be38u);
                r0 = rd32(0x8033be3cu);
                wr32(r1 + 0x18u, r11);
                wr32(r1 + 0x1cu, r10);
                wr32(r1 + 0x20u, r9);
                wr32(r1 + 0x24u, r8);
                wr32(r1 + 0x28u, r7);
                wr32(r1 + 0x2cu, r6);
                wr32(r1 + 0x30u, r5);
                wr32(r1 + 0x34u, r4);
                wr32(r1 + 0x38u, r3);
                wr32(r1 + 0x3cu, r0);
                wrf32d(r1 + 8u, f0);
                wrf32d(r1 + 0xcu, f0);
                wrf32d(r1 + 0x10u, f0);
                if (r25 != 0x63u) {
                    if (r25 == 0x67u) {
                        r29 = 0x68u;
                    }
                } else {
                    r29 = 0x64u;
                }
                r23 = r1 + 0x20u;
                r22 = 2u;
                for (;;) {
                    r3 = tc_call(0x800545e4u, &a);
                    f1 = tc_lastf();
                    r4 = r3;
                    if (rd32(r3 + 0x10u) == 0u) {
                        if (rd32(r3 + 0x20u) == 0u) {
                            r3 = rd32(r3);
                            a.r[0] = r3;
                            a.r[1] = 0x388u;
                            a.r[2] = rd32(r4 + 0xcu);
                            a.r[3] = r4 + 0x18u;
                            r3 = tc_call(0x80040cd8u, &a);
                            f1 = tc_lastf();
                            r9 = tc_junkr(9u);
                            r10 = tc_junkr(0xau);
                        } else {
                            r3 = r3 + 0x24u;
                            a.r[0] = r3;
                            a.r[1] = 0x20u;
                            a.r[2] = 0x388u;
                            r3 = tc_call(0x80094e80u, &a);
                            f1 = tc_lastf();
                            r9 = tc_junkr(9u);
                            r10 = tc_junkr(0xau);
                        }
                        r24 = r3;
                    } else {
                        r3 = rd32(r3);
                        a.r[0] = r3;
                        a.r[1] = 0x388u;
                        a.r[2] = rd32(r4 + 0xcu);
                        a.r[3] = r4 + 0x18u;
                        r3 = tc_call(0x80040db8u, &a);
                        f1 = tc_lastf();
                        r9 = tc_junkr(9u);
                        r10 = tc_junkr(0xau);
                        r24 = r3;
                    }
                    if (r3 != 0u) {
                        r3 = r3;
                        a.r[0] = r3;
                        a.r[1] = r22;
                        f1 = tc_callf(0x801d1c6cu, &a);
                        r3 = tc_lastr();
                        r9 = tc_junkr(9u);
                        r10 = tc_junkr(0xau);
                    }
                    r12 = rd32(r24);
                    r3 = r24;
                    r4 = r29;
                    r6 = r26;
                    r12 = rd32(r12 + 0xc4u);
                    r5 = 0xa7u;
                    lr = 0x801d3098u;
                    if (r12 == 0x801d2e68u) {
                        fl_ = 1u;
                        break;
                    }
                    a.r[0] = r24;
                    a.r[1] = r29;
                    a.r[2] = 0xa7u;
                    a.r[3] = r26;
                    a.r[4] = r27;
                    a.r[5] = r28;
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
                    if (r3 != 0u) {
                        a.r[0] = r30;
                        a.r[1] = r22;
                        a.r[2] = r24;
                        a.r[3] = rd32(r23);
                        a.r[4] = r1 + 8u;
                        r3 = tc_call(0x800802f8u, &a);
                        f1 = tc_lastf();
                    } else if (r24 != 0u) {
                        r12 = rd32(r24);
                        r3 = r24;
                        r4 = 1u;
                        r12 = rd32(r12 + 8u);
                        lr = 0x801d30c0u;
                        if (r12 == 0x801d2e68u) {
                            fl_ = 2u;
                            break;
                        }
                        a.r[0] = r24;
                        a.r[1] = 1u;
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
                    r22 = r22 + 1u;
                    r23 = r23 + 4u;
                    if (r22 >= 0xau) {
                        fl_ = 3u;
                        break;
                    }
                }
                if (fl_ != 3u) {
                    if (fl_ == 2u) {
                        fl_ = 0u;
                    } else if (fl_ == 1u) {
                        fl_ = 0u;
                        continue;
                    }
                    continue;
                }
                fl_ = 0u;
                r3 = tc_call(0x800545e4u, &a);
                f1 = tc_lastf();
                r4 = r3;
                if (rd32(r3 + 0x10u) == 0u) {
                    if (rd32(r3 + 0x20u) == 0u) {
                        r3 = rd32(r3);
                        a.r[0] = r3;
                        a.r[1] = 0x3b4u;
                        a.r[2] = rd32(r4 + 0xcu);
                        a.r[3] = r4 + 0x18u;
                        r3 = tc_call(0x80040cd8u, &a);
                        f1 = tc_lastf();
                        r9 = tc_junkr(9u);
                        r10 = tc_junkr(0xau);
                    } else {
                        r3 = r3 + 0x24u;
                        a.r[0] = r3;
                        a.r[1] = 0x20u;
                        a.r[2] = 0x3b4u;
                        r3 = tc_call(0x80094e80u, &a);
                        f1 = tc_lastf();
                        r9 = tc_junkr(9u);
                        r10 = tc_junkr(0xau);
                    }
                    r24 = r3;
                } else {
                    r3 = rd32(r3);
                    a.r[0] = r3;
                    a.r[1] = 0x3b4u;
                    a.r[2] = rd32(r4 + 0xcu);
                    a.r[3] = r4 + 0x18u;
                    r3 = tc_call(0x80040db8u, &a);
                    f1 = tc_lastf();
                    r9 = tc_junkr(9u);
                    r10 = tc_junkr(0xau);
                    r24 = r3;
                }
                if (r3 != 0u) {
                    r3 = r3;
                    a.r[0] = r3;
                    a.r[1] = 0u;
                    f1 = tc_callf(0x801d07c4u, &a);
                    r3 = tc_lastr();
                    r9 = tc_junkr(9u);
                    r10 = tc_junkr(0xau);
                }
                r22 = r24;
                r4 = 0x53u;
                if (r25 != 0x63u) {
                    if (r25 == 0x67u) {
                        r4 = 0x69u;
                    }
                } else {
                    r4 = 0x65u;
                }
                r12 = rd32(r24);
                r3 = r24;
                r6 = r26;
                r12 = rd32(r12 + 0xc4u);
                r5 = 0xa8u;
                lr = 0x801d31b0u;
                if (r12 != 0x801d2e68u) {
                    a.r[0] = r24;
                    a.r[1] = r4;
                    a.r[2] = 0xa8u;
                    a.r[3] = r26;
                    a.r[4] = r27;
                    a.r[5] = r28;
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
                    if (r3 != 0u) {
                        a.r[0] = r30;
                        a.r[1] = 0u;
                        a.r[2] = r24;
                        a.r[3] = rd32(r1 + 0x18u);
                        a.r[4] = r1 + 8u;
                        r3 = tc_call(0x800802f8u, &a);
                        f1 = tc_lastf();
                    } else if (r24 != 0u) {
                        r12 = rd32(r24);
                        r3 = r24;
                        r4 = 1u;
                        r12 = rd32(r12 + 8u);
                        lr = 0x801d31d8u;
                        if (r12 == 0x801d2e68u) continue;
                        a.r[0] = r24;
                        a.r[1] = 1u;
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
                    r23 = 0x54u;
                    if (r25 != 0x63u) {
                        if (r25 == 0x67u) {
                            r23 = 0x6au;
                        }
                    } else {
                        r23 = 0x66u;
                    }
                    r3 = tc_call(0x800545e4u, &a);
                    f1 = tc_lastf();
                    r4 = r3;
                    if (rd32(r3 + 0x10u) == 0u) {
                        if (rd32(r3 + 0x20u) == 0u) {
                            r3 = rd32(r3);
                            a.r[0] = r3;
                            a.r[1] = 0x3b4u;
                            a.r[2] = rd32(r4 + 0xcu);
                            a.r[3] = r4 + 0x18u;
                            r3 = tc_call(0x80040cd8u, &a);
                            f1 = tc_lastf();
                            r9 = tc_junkr(9u);
                            r10 = tc_junkr(0xau);
                        } else {
                            r3 = r3 + 0x24u;
                            a.r[0] = r3;
                            a.r[1] = 0x20u;
                            a.r[2] = 0x3b4u;
                            r3 = tc_call(0x80094e80u, &a);
                            f1 = tc_lastf();
                            r9 = tc_junkr(9u);
                            r10 = tc_junkr(0xau);
                        }
                        r24 = r3;
                    } else {
                        r3 = rd32(r3);
                        a.r[0] = r3;
                        a.r[1] = 0x3b4u;
                        a.r[2] = rd32(r4 + 0xcu);
                        a.r[3] = r4 + 0x18u;
                        r3 = tc_call(0x80040db8u, &a);
                        f1 = tc_lastf();
                        r9 = tc_junkr(9u);
                        r10 = tc_junkr(0xau);
                        r24 = r3;
                    }
                    if (r3 != 0u) {
                        r3 = r3;
                        a.r[0] = r3;
                        a.r[1] = 1u;
                        f1 = tc_callf(0x801d07c4u, &a);
                        r3 = tc_lastr();
                        r9 = tc_junkr(9u);
                        r10 = tc_junkr(0xau);
                    }
                    r12 = rd32(r24);
                    r3 = r24;
                    r4 = r23;
                    r6 = r26;
                    r12 = rd32(r12 + 0xc4u);
                    r5 = 0xa9u;
                    lr = 0x801d32b8u;
                    if (r12 != 0x801d2e68u) {
                        a.r[0] = r24;
                        a.r[1] = r23;
                        a.r[2] = 0xa9u;
                        a.r[3] = r26;
                        a.r[4] = r27;
                        a.r[5] = r28;
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
                        if (r3 != 0u) {
                            fl_ = 5u;
                            break;
                        }
                        if (r24 == 0u) {
                            fl_ = 4u;
                            break;
                        }
                        r12 = rd32(r24);
                        r3 = r24;
                        r4 = 1u;
                        r12 = rd32(r12 + 8u);
                        lr = 0x801d32e0u;
                        if (r12 != 0x801d2e68u) {
                            fl_ = 6u;
                            break;
                        }
                    }
                }
            } else {
                if (r24 == 0u) {
                    fl_ = 4u;
                    break;
                }
                r12 = rd32(r29);
                r3 = r29;
                r4 = 1u;
                r12 = rd32(r12 + 8u);
                lr = 0x801d2f5cu;
                if (r12 != 0x801d2e68u) {
                    fl_ = 7u;
                    break;
                }
            }
        }
    }
    do {
        if (fl_ == 7u) {
            fl_ = 0u;
            a.r[0] = r29;
            a.r[1] = 1u;
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
        } else if (fl_ == 6u) {
            fl_ = 0u;
            a.r[0] = r24;
            a.r[1] = 1u;
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
            if (fl_ == 5u) {
                fl_ = 0u;
            } else if (fl_ == 4u) {
                fl_ = 0u;
                break;
            }
            a.r[0] = r30;
            a.r[1] = 1u;
            a.r[2] = r24;
            a.r[3] = rd32(r1 + 0x1cu);
            a.r[4] = r1 + 8u;
            r3 = tc_call(0x800802f8u, &a);
            f1 = tc_lastf();
        }
    } while (0);
    r11 = r1 + 0x70u;
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
    r0 = rd32(r1 + 0x74u);
    return;
}
