#include "tc_rt.h"

void fn_80200994(s32 param_1, s32 param_2)
{
    u32 fl_ = 0, r0 = 0, r3 = 0, r4 = 0, r5 = 0, r7 = 0, r8 = 0, r9 = 0, r31 = 0;
    TcArgs a = {0};
    r8 = rd32(0x803541ccu);
    r31 = rd32((u32)param_2 + 0x3ecu);
    do {
        if ((r8 & 1u) == 0u) {
            r9 = rd32(0x803541c8u);
            if ((r9 & 4u) == 0u) {
                r7 = rd32(0x803541bcu);
                if (r7 != 0u) {
                    r0 = rd32(rd32(0x805711ccu) + 0xfcu);
                    if (r0 != 1u) {
                        if (r0 != 2u) {
                            r4 = 0u;
                        } else {
                            r4 = rd32(0x80354164u);
                        }
                    } else {
                        r4 = rd32(0x80354130u);
                    }
                } else {
                    r4 = 0u;
                }
                if (r7 != 0u) {
                    r0 = rd32(rd32(0x805711ccu) + 0xfcu);
                    if (r0 != 1u) {
                        if (r0 != 2u) {
                            r0 = 0u;
                        } else {
                            r0 = r4 & rd32(rd32(0x803541b4u));
                        }
                    } else {
                        r0 = r4 & rd32(rd32(0x803541a4u));
                    }
                } else {
                    r0 = 0u;
                }
                if (r0 != 0u) break;
            }
            if ((r8 & 4u) == 0u) {
                if ((r9 & 1u) != 0u) {
                    fl_ = 1u;
                    break;
                }
                r5 = rd32(0x803541bcu);
                if (r5 != 0u) {
                    r0 = rd32(rd32(0x805711ccu) + 0xfcu);
                    if (r0 != 1u) {
                        if (r0 != 2u) {
                            r4 = 0u;
                        } else {
                            r4 = rd32(0x80354168u);
                        }
                    } else {
                        r4 = rd32(0x80354134u);
                    }
                } else {
                    r4 = 0u;
                }
                if (r5 != 0u) {
                    r0 = rd32(rd32(0x805711ccu) + 0xfcu);
                    if (r0 != 1u) {
                        if (r0 != 2u) {
                            r0 = 0u;
                        } else {
                            r0 = r4 & rd32(rd32(0x803541b4u));
                        }
                    } else {
                        r0 = r4 & rd32(rd32(0x803541a4u));
                    }
                } else {
                    r0 = 0u;
                }
                if (r0 == 0u) {
                    fl_ = 1u;
                    break;
                }
            }
            a.r[0] = (u32)param_1;
            a.r[1] = r31;
            r3 = tc_call(0x80189168u, &a);
            if (r3 == 0u) {
                a.r[0] = (u32)param_1;
                r3 = tc_call(0x801891ecu, &a);
                if (r3 == 0u) {
                    fl_ = 1u;
                    break;
                }
                a.r[0] = (u32)param_1;
                (void)tc_call(0x801891acu, &a);
                a.r[0] = (u32)param_1 + 0x1a8u;
                a.r[1] = 1u;
                (void)tc_call(0x80190b84u, &a);
                a.r[0] = (u32)param_1;
                (void)tc_call(0x80197454u, &a);
                fl_ = 1u;
                break;
            }
            r31 = r31 + rd32((u32)param_1 + 4u);
            a.r[0] = (u32)param_1 + 0x1a8u;
            a.r[1] = 1u;
            (void)tc_call(0x80190bfcu, &a);
            fl_ = 1u;
            break;
        }
    } while (0);
    if (fl_ == 1u) {
        fl_ = 0u;
    } else {
        a.r[0] = (u32)param_1;
        a.r[1] = r31;
        r3 = tc_call(0x80189150u, &a);
        if (r3 == 0u) {
            a.r[0] = (u32)param_1;
            r3 = tc_call(0x801891ccu, &a);
            if (r3 != 0u) {
                a.r[0] = (u32)param_1;
                (void)tc_call(0x8018918cu, &a);
                a.r[0] = (u32)param_1 + 0x1a8u;
                a.r[1] = 1u;
                (void)tc_call(0x80190b30u, &a);
                a.r[0] = (u32)param_1;
                (void)tc_call(0x80197454u, &a);
            }
        } else {
            r31 = r31 - rd32((u32)param_1 + 4u);
            a.r[0] = (u32)param_1 + 0x1a8u;
            a.r[1] = 0u;
            (void)tc_call(0x80190bfcu, &a);
        }
    }
    a.r[0] = (u32)param_2;
    a.r[1] = r31;
    a.r[2] = rd32((u32)param_2 + 0x3e8u);
    (void)tc_call(0x80119fb0u, &a);
    wr32((u32)param_2 + 0x3ecu, r31);
    return;
}
