#include "tc_rt.h"

void fn_802c3ca0(u32 param_r3, u32 param_r4)
{
    u32 ctr = 0, fl_ = 0, lr = 0, r0 = 0, r1 = 0, r3 = 0, r4 = 0, r5 = tc_argr(2u), r6 = tc_argr(3u), r7 = tc_argr(4u), r8 = tc_argr(5u), r9 = tc_argr(6u);
    u32 r10 = tc_argr(7u), r11 = 0, r12 = 0, r20 = 0, r21 = 0, r22 = 0, r23 = 0, r24 = 0, r25 = 0, r26 = 0, r27 = 0, r28 = 0;
    u32 r29 = 0, r30 = 0, r31 = 0;
    f64 f1 = tc_argf(0u), f2 = tc_argf(1u), f3 = tc_argf(2u), f4 = tc_argf(3u), f5 = tc_argf(4u), f6 = tc_argf(5u), f7 = tc_argf(6u), f8 = tc_argf(7u);
    TcArgs a = {0};
    r1 = 0x817fe000u;
    lr = 0x817ff000u;
    r3 = param_r3;
    r4 = param_r4;
    for (;;) {
        wr32(r1 - 0x40u, r1);
        r1 = r1 - 0x40u;
        wr32(r1 + 0x44u, lr);
        r11 = r1 + 0x40u;
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
        wr32(r11 - 8u, r30);
        wr32(r11 - 4u, r31);
        r24 = r3;
        r28 = r4;
        r27 = r3;
        r26 = r3 + 0x1acu;
        r25 = 0u;
        r29 = 0x803a0000u;
        r30 = 0x80350000u;
        r31 = 1u;
        r21 = 0u;
        r22 = 0x25u;
        r23 = 0x25u;
        for (;;) {
            if (rd32(r28) == 0u) {
                r3 = rd32(r24 + 4u);
                if (rd32(r3 + 0x20u) == 0u) {
                    r3 = rd32(r27 + 0x23cu);
                    r4 = rd32(0x80398de8u);
                    r3 = rd32(r3 + 0x10u);
                    r12 = rd32(r3);
                    r12 = rd32(r12 + 0x3cu);
                    lr = 0x802c3de8u;
                    if (r12 == 0x802c3ca0u) {
                        fl_ = 7u;
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
                    a.f[1] = f2;
                    a.f[2] = f3;
                    a.f[3] = f4;
                    a.f[4] = f5;
                    a.f[5] = f6;
                    a.f[6] = f7;
                    a.f[7] = f8;
                    r3 = tc_call(r12, &a);
                    f1 = tc_lastf();
                    wr8(r3 + 0xcfu, (u8)((u32)rd8(r3 + 0xcfu) & 0xfeu));
                }
                r5 = 0x803486e8u;
                r3 = r25 + 0x1fu;
                r4 = 0u;
                ctr = 0x25u;
                for (;;) {
                    if (r3 == rd32(r5) && rd32(r5 + 4u) == 0x10u) {
                        fl_ = 3u;
                        break;
                    }
                    r4 = r4 + 1u;
                    if (r3 == rd32(r5 + 8u) && rd32(r5 + 0xcu) == 0x10u) {
                        fl_ = 1u;
                        break;
                    }
                    r5 = r5 + 0x10u;
                    r4 = r4 + 1u;
                    ctr = ctr - 1u;
                    if (ctr == 0u) {
                        fl_ = 2u;
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
                    r4 = 0xffffffffu;
                    fl_ = 5u;
                    break;
                } while (0);
                if (fl_ == 5u) {
                    fl_ = 0u;
                } else if (fl_ == 4u) {
                    fl_ = 0u;
                }
                r20 = rd32(r24 + ((r4 << 2u) & 0xfffffffcu) + 0x2f0u);
                a.r[0] = r20;
                f1 = tc_callf(0x802bed24u, &a);
                r3 = tc_lastr();
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
                wr32(r20 + 0x14u, 1u);
                wr8(r24 + r25 + 0x80u, 0u);
            } else {
                r3 = rd32(r24 + 4u);
                if (rd32(r3 + 0x20u) == 0u) {
                    r3 = rd32(r27 + 0x23cu);
                    r4 = rd32(0x80398de8u);
                    r3 = rd32(r3 + 0x10u);
                    r12 = rd32(r3);
                    r12 = rd32(r12 + 0x3cu);
                    lr = 0x802c3d1cu;
                    if (r12 == 0x802c3ca0u) {
                        fl_ = 6u;
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
                    a.f[1] = f2;
                    a.f[2] = f3;
                    a.f[3] = f4;
                    a.f[4] = f5;
                    a.f[5] = f6;
                    a.f[6] = f7;
                    a.f[7] = f8;
                    r3 = tc_call(r12, &a);
                    f1 = tc_lastf();
                    wr8(r3 + 0xcfu, (u8)(((u32)rd8(r3 + 0xcfu) & 0xfeu) | 1u));
                }
                r5 = 0x803486e8u;
                r3 = r25 + 0x1fu;
                r4 = 0u;
                ctr = 0x25u;
                for (;;) {
                    if (r3 == rd32(r5) && rd32(r5 + 4u) == 0x11u) {
                        fl_ = 8u;
                        break;
                    }
                    r4 = r4 + 1u;
                    if (r3 == rd32(r5 + 8u) && rd32(r5 + 0xcu) == 0x11u) {
                        fl_ = 8u;
                        break;
                    }
                    r5 = r5 + 0x10u;
                    r4 = r4 + 1u;
                    ctr = ctr - 1u;
                    if (ctr == 0u) {
                        fl_ = 9u;
                        break;
                    }
                }
                do {
                    if (fl_ == 9u) {
                        fl_ = 0u;
                    } else if (fl_ == 8u) {
                        fl_ = 0u;
                        break;
                    }
                    r4 = 0xffffffffu;
                } while (0);
                r20 = rd32(r24 + ((r4 << 2u) & 0xfffffffcu) + 0x2f0u);
                a.r[0] = r20;
                r3 = tc_call(0x802bed24u, &a);
                f1 = tc_lastf();
                wr32(r20 + 0x14u, 1u);
                wr8(r24 + r25 + 0x80u, 1u);
                a.r[0] = rd32(r27 + 0x2acu);
                a.r[1] = r26;
                f1 = tc_callf(0x802c102cu, &a);
                r3 = tc_lastr();
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
            }
            r25 = r25 + 1u;
            r27 = r27 + 4u;
            r26 = r26 + 0x18u;
            r28 = r28 + 0x10u;
            if ((s32)r25 >= 4) {
                fl_ = 10u;
                break;
            }
        }
        if (fl_ != 10u) {
            if (fl_ == 7u) {
                fl_ = 0u;
            } else if (fl_ == 6u) {
                fl_ = 0u;
                continue;
            }
            continue;
        }
        fl_ = 0u;
        r21 = 0u;
        r22 = 0x80399880u;
        for (;;) {
            r23 = r22;
            r20 = 0u;
            for (;;) {
                r3 = rd32(r24 + 0x238u);
                r4 = rd32(r23);
                r3 = rd32(r3 + 0x10u);
                r12 = rd32(r3);
                r12 = rd32(r12 + 0x3cu);
                lr = 0x802c3ebcu;
                if (r12 == 0x802c3ca0u) {
                    fl_ = 11u;
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
                r20 = r20 + 1u;
                r23 = r23 + 4u;
                wr8(r3 + 0xcfu, (u8)((u32)rd8(r3 + 0xcfu) & 0xfeu));
                if ((s32)r20 >= 4) {
                    fl_ = 12u;
                    break;
                }
            }
            if (fl_ == 12u) {
                fl_ = 0u;
            } else if (fl_ == 11u) {
                fl_ = 0u;
                break;
            }
            r21 = r21 + 1u;
            r22 = r22 + 0x10u;
            if ((s32)r21 >= 4) {
                r11 = r1 + 0x40u;
                wr32(r24 + 0x7cu, 0u);
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
                r0 = rd32(r1 + 0x44u);
                return;
            }
        }
    }
}
