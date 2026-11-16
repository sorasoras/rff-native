#include "tc_rt.h"

void fn_802bfbf0(u32 param_r3, u32 param_r4)
{
    u32 fl_ = 0, lr = 0, r0 = 0, r1 = 0, r3 = 0, r4 = 0, r5 = tc_argr(2u), r6 = tc_argr(3u), r7 = tc_argr(4u), r8 = tc_argr(5u), r9 = tc_argr(6u), r10 = tc_argr(7u);
    u32 r11 = 0, r12 = 0, r21 = 0, r22 = 0, r23 = 0, r24 = 0, r25 = 0, r26 = 0, r27 = 0, r28 = 0, r29 = 0, r30 = 0;
    u32 r31 = 0;
    f64 f1 = tc_argf(0u);
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
        wr32(r11 - 0x2cu, r21);
        wr32(r11 - 0x28u, r22);
        wr32(r11 - 0x24u, r23);
        wr32(r11 - 0x20u, 0u);
        wr32(r11 - 0x1cu, r25);
        wr32(r11 - 0x18u, r26);
        wr32(r11 - 0x14u, r27);
        wr32(r11 - 0x10u, r28);
        wr32(r11 - 0xcu, r29);
        wr32(r11 - 8u, r30);
        wr32(r11 - 4u, r31);
        r27 = rd32(r4 + 4u);
        r28 = r3;
        r23 = 0x80398908u;
        r25 = 0x80398750u;
        r31 = 0x805474f0u;
        r30 = 0x80547500u;
        r26 = r4 + 4u;
        r22 = 0x80540000u;
        for (;;) {
            if (r27 == r26) {
                r11 = r1 + 0x40u;
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
            r3 = rd32(r28 + 0x14u);
            if (r3 == 0u) {
                r3 = tc_call(0x80040cccu, &a);
                f1 = tc_lastf();
                r4 = tc_lastr4();
                r5 = tc_junkr(5u);
                r6 = tc_junkr(6u);
                r7 = tc_junkr(7u);
                r8 = tc_junkr(8u);
                r9 = tc_junkr(9u);
                r10 = tc_junkr(0xau);
                r29 = r3;
                if (r3 != 0u) {
                    r0 = rd32(0x805472d0u);
                    wr32(r3, 0x80398908u);
                    wr8(r3 + 0x18u, 0u);
                    wr32(r3 + 0x1cu, 0u);
                    wr32(r3 + 0x20u, r0);
                    wr8(r3 + 0x24u, 0u);
                    wr32(r3 + 0x28u, 0u);
                    r12 = rd32(0x80398914u);
                    lr = 0x802bfcf8u;
                    if (r12 == 0x802bfbf0u) {
                        fl_ = 2u;
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
                    wr32(r29, 0x80398750u);
                    wr32(r29 + 0x2cu, 0u);
                }
                r3 = tc_call(0x80040cccu, &a);
                f1 = tc_lastf();
                if (r3 != 0u) {
                    wr32(r3, r27 - 4u);
                    wr32(r3 + 4u, r29);
                }
                r21 = r3;
            } else {
                a.r[0] = r3;
                r3 = tc_call(0x8026d490u, &a);
                f1 = tc_lastf();
                r29 = r3;
                a.r[0] = rd32(r28 + 0x14u);
                r3 = tc_call(0x8026d490u, &a);
                f1 = tc_lastf();
                r4 = tc_lastr4();
                r5 = tc_junkr(5u);
                r6 = tc_junkr(6u);
                r7 = tc_junkr(7u);
                r8 = tc_junkr(8u);
                r9 = tc_junkr(9u);
                r10 = tc_junkr(0xau);
                r21 = r3;
                if (r29 != 0u) {
                    r0 = rd32(0x805472d0u);
                    r3 = r29;
                    wr32(r29, 0x80398908u);
                    wr8(r29 + 0x18u, 0u);
                    wr32(r29 + 0x1cu, 0u);
                    wr32(r29 + 0x20u, r0);
                    wr8(r29 + 0x24u, 0u);
                    wr32(r29 + 0x28u, 0u);
                    r12 = rd32(r29);
                    r12 = rd32(r12 + 0xcu);
                    lr = 0x802bfc9cu;
                    if (r12 == 0x802bfbf0u) {
                        fl_ = 1u;
                        break;
                    }
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
                    wr32(r29, 0x80398750u);
                    wr32(r29 + 0x2cu, 0u);
                }
                if (r21 != 0u) {
                    wr32(r21, r27 - 4u);
                    wr32(r21 + 4u, r29);
                }
            }
            a.r[0] = r28 + 0x18u;
            a.r[1] = r21;
            f1 = tc_callf(0x802d7ad0u, &a);
            r3 = tc_lastr();
            r5 = tc_junkr(5u);
            r6 = tc_junkr(6u);
            r7 = tc_junkr(7u);
            r8 = tc_junkr(8u);
            r9 = tc_junkr(9u);
            r10 = tc_junkr(0xau);
            r21 = r27 - 4u;
            r3 = r29;
            r4 = r21;
            wr32(0x805472d0u, rd32(0x805472d0u) + 1u);
            r12 = rd32(r29);
            r12 = rd32(r12 + 0x60u);
            lr = 0x802bfd54u;
            if (r12 == 0x802bfbf0u) {
                fl_ = 3u;
                break;
            }
            a.r[0] = r29;
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
            f1 = tc_callf(r12, &a);
            r3 = tc_lastr();
            r4 = tc_lastr4();
            r5 = tc_junkr(5u);
            r6 = tc_junkr(6u);
            r7 = tc_junkr(7u);
            r8 = tc_junkr(8u);
            r9 = tc_junkr(9u);
            r10 = tc_junkr(0xau);
            r12 = rd32(r21);
            r3 = r21;
            r12 = rd32(r12 + 0xcu);
            lr = 0x802bfd68u;
            if (r12 == 0x802bfbf0u) {
                fl_ = 4u;
                break;
            }
            a.r[0] = r21;
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
            for (;;) {
                if (r3 == 0u) {
                    fl_ = 6u;
                    break;
                }
                if (r3 == 0x805474f0u) {
                    r0 = 1u;
                    fl_ = 5u;
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
                r0 = 0u;
            } while (0);
            if (r0 == 0u) {
                r0 = 0u;
            } else {
                r0 = r21;
            }
            if (r0 != 0u) {
                r12 = rd32(r29);
                r3 = r29;
                r4 = 1u;
                r12 = rd32(r12 + 0x50u);
                lr = 0x802bfdc0u;
                if (r12 == 0x802bfbf0u) {
                    fl_ = 7u;
                    break;
                }
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
                f1 = tc_callf(r12, &a);
                r3 = tc_lastr();
                r4 = tc_lastr4();
                r5 = tc_junkr(5u);
                r6 = tc_junkr(6u);
                r7 = tc_junkr(7u);
                r8 = tc_junkr(8u);
                r9 = tc_junkr(9u);
                r10 = tc_junkr(0xau);
            }
            r12 = rd32(r21);
            r3 = r21;
            r12 = rd32(r12 + 0xcu);
            lr = 0x802bfdd4u;
            if (r12 == 0x802bfbf0u) {
                fl_ = 8u;
                break;
            }
            a.r[0] = r21;
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
            for (;;) {
                if (r3 == 0u) {
                    fl_ = 9u;
                    break;
                }
                if (r3 == 0x80547500u) {
                    fl_ = 10u;
                    break;
                }
                r3 = rd32(r3);
            }
            do {
                if (fl_ == 10u) {
                    fl_ = 0u;
                } else if (fl_ == 9u) {
                    fl_ = 0u;
                    break;
                }
                r0 = 1u;
                fl_ = 11u;
                break;
            } while (0);
            if (fl_ == 11u) {
                fl_ = 0u;
            } else {
                r0 = 0u;
            }
            if (r0 == 0u) {
                r0 = 0u;
            } else {
                r0 = r21;
            }
            if (r0 != 0u) {
                r12 = rd32(r29);
                r3 = r29;
                r4 = 1u;
                r12 = rd32(r12 + 0x50u);
                lr = 0x802bfe2cu;
                if (r12 == 0x802bfbf0u) {
                    fl_ = 12u;
                    break;
                }
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
                f1 = tc_callf(r12, &a);
                r3 = tc_lastr();
                r5 = tc_junkr(5u);
                r6 = tc_junkr(6u);
                r7 = tc_junkr(7u);
                r8 = tc_junkr(8u);
                r9 = tc_junkr(9u);
                r10 = tc_junkr(0xau);
            }
            r12 = rd32(r28);
            r3 = r28;
            r4 = r29;
            r12 = rd32(r12 + 0x20u);
            lr = 0x802bfe44u;
            if (r12 == 0x802bfbf0u) {
                fl_ = 13u;
                break;
            }
            a.r[0] = r28;
            a.r[1] = r29;
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
            r5 = tc_junkr(5u);
            r6 = tc_junkr(6u);
            r7 = tc_junkr(7u);
            r8 = tc_junkr(8u);
            r9 = tc_junkr(9u);
            r10 = tc_junkr(0xau);
            r12 = rd32(r28);
            r3 = r28;
            r4 = r21 + 0x10u;
            r12 = rd32(r12 + 0x5cu);
            lr = 0x802bfe5cu;
            if (r12 == 0x802bfbf0u) {
                fl_ = 14u;
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
            r27 = rd32(r27);
        }
        if (fl_ == 14u) {
            fl_ = 0u;
        } else if (fl_ == 13u) {
            fl_ = 0u;
        } else if (fl_ == 12u) {
            fl_ = 0u;
        } else if (fl_ == 8u) {
            fl_ = 0u;
        } else if (fl_ == 7u) {
            fl_ = 0u;
        } else if (fl_ == 4u) {
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
