#include "tc_rt.h"

void fn_80138068(s32 param_1, s32 param_2)
{
    u32 fl_ = 0, r0 = 0, r3 = 0, r4 = 0, r5 = 0, r7 = 0, r8 = 0, r9 = 0, r30 = 0, r31 = 0;
    TcArgs a = {0};
    r8 = rd32(0x803541ccu);
    r31 = rd32((u32)param_2 + 0x3ecu);
    r30 = rd32((u32)param_1 + 0x34u);
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
                r4 = rd32((u32)param_1 + 0x34u);
                if ((s32)(r4 + 5u) >= (s32)rd32((u32)param_1 + 0x110u)) {
                    a.r[0] = (u32)param_1 + 0x44u;
                    (void)tc_call(0x80190bd8u, &a);
                    r31 = 0u;
                    wr32((u32)param_1 + 0x34u, 0u);
                    fl_ = 1u;
                    break;
                }
                wr32((u32)param_1 + 0x34u, r4 + 1u);
                a.r[0] = (u32)param_1 + 0x44u;
                a.r[1] = 1u;
                (void)tc_call(0x80190b84u, &a);
                fl_ = 1u;
                break;
            }
            r31 = r31 + rd32((u32)param_1 + 4u);
            a.r[0] = (u32)param_1 + 0x44u;
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
            r0 = rd32((u32)param_1 + 0x34u) - 1u;
            if ((s32)r0 < 0) {
                a.r[0] = (u32)param_1 + 0x44u;
                (void)tc_call(0x80190be4u, &a);
                r3 = rd32((u32)param_1 + 0x110u);
                if ((s32)r3 < 5) {
                    wr32((u32)param_1 + 0x34u, r3 - 1u);
                } else {
                    wr32((u32)param_1 + 0x34u, r3 - 5u);
                }
                r31 = rd32((u32)param_1 + 8u) - 1u;
            } else {
                wr32((u32)param_1 + 0x34u, r0);
                a.r[0] = (u32)param_1 + 0x44u;
                a.r[1] = 1u;
                (void)tc_call(0x80190b30u, &a);
            }
        } else {
            r31 = r31 - rd32((u32)param_1 + 4u);
            a.r[0] = (u32)param_1 + 0x44u;
            a.r[1] = 0u;
            (void)tc_call(0x80190bfcu, &a);
        }
    }
    if ((s32)rd32((u32)param_1 + 0x110u) <= (s32)r31) {
        r31 = rd32((u32)param_2 + 0x3ecu);
        wr32((u32)param_1 + 0x34u, 0u);
    }
    if (rd32((u32)param_1 + 0x34u) != r30) {
        a.r[0] = 0x804b9da0u;
        a.r[1] = 1u;
        (void)tc_call(0x8010a75cu, &a);
    }
    a.r[0] = (u32)param_2;
    a.r[1] = r31;
    a.r[2] = rd32((u32)param_2 + 0x3e8u);
    (void)tc_call(0x80119fb0u, &a);
    wr32((u32)param_2 + 0x3ecu, r31);
    wr32((u32)param_1 + 0x114u, rd32((u32)param_1 + 0x34u) + r31);
    return;
}
