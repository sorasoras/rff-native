#include "tc_rt.h"

void fn_8018a66c(f64 param_1, f64 param_2, u32 param_3)
{
    u32 fl_ = 0, lr = 0, r0 = 0, r1 = 0, r3 = 0, r4 = tc_argr(1u), r5 = tc_argr(2u), r6 = tc_argr(3u), r8 = tc_argr(5u), r9 = tc_argr(6u), r10 = tc_argr(7u), r30 = 0;
    u32 r31 = 0;
    f64 f0 = 0.0, f1 = 0.0, f3 = tc_argf(2u);
    TcArgs a = {0};
    (void)param_1;
    (void)param_2;
    r1 = 0x817fe000u;
    lr = 0x817ff000u;
    r3 = param_3;
    for (;;) {
        wr32(r1 - 0x20u, r1);
        r1 = r1 - 0x20u;
        wr32(r1 + 0x24u, lr);
        wr32(r1 + 0x1cu, r31);
        r31 = r3;
        wr32(r1 + 0x18u, r30);
        r30 = 0x80492800u;
        r5 = (u32)rd8(0x80492825u);
        a.r[0] = r3;
        a.r[1] = (u32)rd8(0x80492824u);
        a.r[2] = r5;
        f1 = tc_callf(0x8018a5d0u, &a);
        r3 = tc_lastr();
        r6 = tc_junkr(6u);
        r8 = tc_junkr(8u);
        r9 = tc_junkr(9u);
        r10 = tc_junkr(0xau);
        lr = 0x8018a698u;
        for (;;) {
            f0 = (f64)rdf32(0x80575278u);
            r3 = 0u;
            f3 = rdf64(0x80575280u);
            r4 = 0u;
            for (;;) {
                if (r3 > 0x16u) {
                    r3 = r3 + 1u;
                    r4 = r4 + 4u;
                    if (r3 >= 0x17u) {
                        fl_ = 1u;
                        break;
                    }
                } else {
                    for (;;) {
                        r5 = rd32(r4 - 0x7fc9091cu);
                        if (r5 == 0x8018a66cu) {
                            fl_ = 2u;
                            break;
                        }
                        if (r5 == 0x817ff000u) {
                            return;
                        }
                        if (r5 == 0x8018a774u) {
                            fl_ = 3u;
                            break;
                        }
                        if (r5 == 0x8018a764u) {
                            fl_ = 4u;
                            break;
                        }
                        if (r5 != 0x8018a6b8u) {
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
                        r3 = r3 + 1u;
                        r4 = r4 + 4u;
                        if (r3 < 0x17u) continue;
                        fl_ = 1u;
                        break;
                    }
                    fl_ = 0u;
                    if (r5 != 0x8018a6b0u) {
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
                r0 = rd32(r1 + 0x24u);
                r31 = rd32(r1 + 0x1cu);
                r30 = rd32(r1 + 0x18u);
                lr = r0;
                r1 = r1 + 0x20u;
                if (r0 == 0x8018a698u) continue;
                if (r0 == 0x817ff000u) {
                    return;
                }
                return;
            }
            fl_ = 0u;
            if (r5 != 0x8018a698u) {
                a.r[0] = r3;
                a.r[1] = r4;
                a.r[2] = r5;
                a.r[3] = r6;
                a.r[4] = 0x80370000u;
                a.r[5] = r8;
                a.r[6] = r9;
                a.r[7] = r10;
                a.f[0] = f1;
                a.f[1] = 0.0;
                a.f[2] = f3;
                a.f[3] = 0.0;
                a.f[4] = 0.0;
                a.f[5] = 0.0;
                a.f[6] = 0.0;
                a.f[7] = 0.0;
                f1 = tc_callf(r5, &a);
                r3 = tc_lastr();
                r6 = tc_junkr(6u);
                r8 = tc_junkr(8u);
                r9 = tc_junkr(9u);
                r10 = tc_junkr(0xau);
                if (lr != 0x8018a698u) {
                    if (lr == 0x817ff000u) {
                        return;
                    }
                    return;
                }
            }
        }
    }
}
