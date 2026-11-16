#include "tc_rt.h"

static u32 px_rec(u32 sp_, u32 param_1, u32 param_2, u32 param_3, f64 *f1_out)
{
    u32 fl_ = 0, lr = 0, r0 = 0, r1 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = tc_argr(3u), r7 = tc_argr(4u), r8 = tc_argr(5u), r9 = tc_argr(6u), r10 = tc_argr(7u);
    u32 r12 = 0, r23 = 0, r24 = 0, r25 = 0, r26 = 0, r27 = 0, r28 = 0, r29 = 0, r30 = 0, r31 = 0, t0 = 0, t5 = 0;
    f64 f1 = *f1_out, f2 = tc_argf(1u), f3 = tc_argf(2u), f4 = tc_argf(3u), f5 = tc_argf(4u), f6 = tc_argf(5u), f7 = tc_argf(6u), f8 = tc_argf(7u);
    TcArgs a = {0};
    r1 = sp_;
    lr = 0x817ff000u;
    r3 = param_1;
    r4 = param_2;
    r5 = param_3;
    for (;;) {
        wr32(r1 - 0x30u, r1);
        r1 = r1 - 0x30u;
        wr32(r1 + 0x34u, lr);
        t0 = r1 + 0xcu;
        wr32(t0, r23);
        wr32(t0 + 4u, r24);
        wr32(t0 + 8u, r25);
        wr32(t0 + 0xcu, r26);
        wr32(t0 + 0x10u, r27);
        wr32(t0 + 0x14u, 0u);
        wr32(t0 + 0x18u, 0u);
        wr32(t0 + 0x1cu, 0u);
        wr32(t0 + 0x20u, 0u);
        r27 = r4;
        r24 = r5;
        r23 = r3;
        r3 = r4;
        r4 = r5;
        r12 = rd32(r27);
        r12 = rd32(r12 + 0x58u);
        lr = 0x800ff088u;
        if (r12 != 0x800ff054u) {
            for (;;) {
                a.r[0] = r3;
                a.r[1] = r5;
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
                if (r3 == 0u) {
                    r12 = rd32(r27);
                    r3 = r27;
                    r12 = rd32(r12 + 0x64u);
                    lr = 0x800ff0a8u;
                    if (r12 == 0x800ff054u) {
                        fl_ = 8u;
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
                    f2 = 0.0;
                    f3 = 0.0;
                    f4 = 0.0;
                    f5 = 0.0;
                    f6 = 0.0;
                    f7 = 0.0;
                    f8 = 0.0;
                    r26 = r3 & 0xffu;
                    r25 = 0u;
                    for (;;) {
                        if ((r25 & 0xffu) >= r26) {
                            fl_ = 3u;
                            break;
                        }
                        r12 = rd32(r27);
                        r3 = r27;
                        r4 = r25 & 0xffu;
                        r12 = rd32(r12 + 0x6cu);
                        lr = 0x800ff0ccu;
                        if (r12 == 0x800ff054u) {
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
                        f2 = 0.0;
                        f3 = 0.0;
                        f4 = 0.0;
                        f5 = 0.0;
                        f6 = 0.0;
                        f7 = 0.0;
                        f8 = 0.0;
                        r12 = rd32(r3);
                        r4 = r24;
                        r12 = rd32(r12 + 0x24u);
                        lr = 0x800ff0e0u;
                        if (r12 == 0x800ff054u) {
                            fl_ = 1u;
                            break;
                        }
                        a.r[0] = r3;
                        a.r[1] = r24;
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
                        f2 = 0.0;
                        f3 = 0.0;
                        f4 = 0.0;
                        f5 = 0.0;
                        f6 = 0.0;
                        f7 = 0.0;
                        f8 = 0.0;
                        if (r3 != 0u) {
                            fl_ = 2u;
                            break;
                        }
                        r25 = r25 + 1u;
                    }
                    if (fl_ == 3u) {
                        fl_ = 0u;
                        r31 = rd32(r27 + 0x14u);
                        r30 = r27 + 0x14u;
                        for (;;) {
                            if (r31 == r30) {
                                fl_ = 4u;
                                break;
                            }
                            if (r31 == 0u) {
                                a.f[0] = f1;
                                a.f[1] = 0.0;
                                a.f[2] = 0.0;
                                a.f[3] = 0.0;
                                a.f[4] = 0.0;
                                a.f[5] = 0.0;
                                a.f[6] = 0.0;
                                a.f[7] = 0.0;
                                a.r[0] = 0x803604e4u;
                                a.r[1] = 0x23du;
                                a.r[2] = 0x803604c0u;
                                a.r[3] = r6;
                                a.r[4] = r7;
                                a.r[5] = r8;
                                a.r[6] = r9;
                                a.r[7] = r10;
                                f1 = tc_callf(0x802e41c0u, &a);
                                r3 = tc_lastr();
                                r6 = tc_junkr(6u);
                                r7 = tc_junkr(7u);
                                r8 = tc_junkr(8u);
                                r9 = tc_junkr(9u);
                                r10 = tc_junkr(0xau);
                            }
                            r25 = r31 - 4u;
                            if (r25 == 0u) {
                                a.f[0] = f1;
                                a.f[1] = 0.0;
                                a.f[2] = 0.0;
                                a.f[3] = 0.0;
                                a.f[4] = 0.0;
                                a.f[5] = 0.0;
                                a.f[6] = 0.0;
                                a.f[7] = 0.0;
                                a.r[0] = 0x80360514u;
                                a.r[1] = 0x193u;
                                a.r[2] = 0x803604f0u;
                                a.r[3] = r6;
                                a.r[4] = r7;
                                a.r[5] = r8;
                                a.r[6] = r9;
                                a.r[7] = r10;
                                r3 = tc_call(0x802e41c0u, &a);
                                f1 = tc_lastf();
                            }
                            r3 = px_rec(r1, r23, r25, r24, &f1);
                            r6 = 0u;
                            r7 = 0u;
                            r8 = 0u;
                            r9 = 0u;
                            r10 = 0u;
                            if (r3 != 0u) {
                                fl_ = 5u;
                                break;
                            }
                            r31 = rd32(r31);
                        }
                        do {
                            if (fl_ == 5u) {
                                fl_ = 0u;
                            } else if (fl_ == 4u) {
                                fl_ = 0u;
                                break;
                            }
                            fl_ = 6u;
                            break;
                        } while (0);
                        if (fl_ == 6u) {
                            fl_ = 0u;
                        } else {
                            r3 = 0u;
                        }
                    } else if (fl_ == 2u) {
                        fl_ = 0u;
                    } else if (fl_ == 1u) {
                        fl_ = 0u;
                        fl_ = 7u;
                        break;
                    }
                }
                t5 = r1 + 0xcu;
                r23 = rd32(t5);
                r24 = rd32(t5 + 4u);
                r25 = rd32(t5 + 8u);
                r26 = rd32(t5 + 0xcu);
                r27 = rd32(t5 + 0x10u);
                r28 = rd32(t5 + 0x14u);
                r29 = rd32(t5 + 0x18u);
                r30 = rd32(t5 + 0x1cu);
                r31 = rd32(t5 + 0x20u);
                r0 = rd32(r1 + 0x34u);
                *f1_out = f1; return r3;
            }
            if (fl_ == 8u) {
                fl_ = 0u;
            } else if (fl_ == 7u) {
                fl_ = 0u;
            }
        }
    }
}

s32 fn_800ff054(u32 param_1, u32 param_2, u32 param_3)
{
    f64 f1 = 0.0;
    return (s32)px_rec(0x817fe000u, param_1, param_2, param_3, &f1);
}
