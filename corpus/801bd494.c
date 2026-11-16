#include "tc_rt.h"

void fn_801bd494(s32 param_1, s32 param_2)
{
    u32 fl_ = 0, r0 = 0, r3 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r28 = 0, r29 = 0, r30 = 0, r31 = 0;
    TcArgs a = {0};
    r30 = rd32((u32)param_2 + 0x3e8u);
    r29 = rd32((u32)param_2 + 0x3ecu);
    a.r[0] = rd32(0x80571398u);
    a.r[1] = r30 - 1u;
    r3 = tc_call(0x801c0998u, &a);
    r8 = rd32(0x803541ccu);
    r31 = (u32)param_1 + (r30 * 0x68u);
    r28 = rd32(r31 + 0x32cu);
    do {
        if ((r8 & 1u) == 0u) {
            r9 = rd32(0x803541c8u);
            if ((r9 & 4u) == 0u) {
                r7 = rd32(0x803541bcu);
                if (r7 != 0u) {
                    r0 = rd32(rd32(0x805711ccu) + 0xfcu);
                    if (r0 != 1u) {
                        if (r0 != 2u) {
                            r5 = 0u;
                        } else {
                            r5 = rd32(0x80354164u);
                        }
                    } else {
                        r5 = rd32(0x80354130u);
                    }
                } else {
                    r5 = 0u;
                }
                if (r7 != 0u) {
                    r0 = rd32(rd32(0x805711ccu) + 0xfcu);
                    if (r0 != 1u) {
                        if (r0 != 2u) {
                            r0 = 0u;
                        } else {
                            r0 = r5 & rd32(rd32(0x803541b4u));
                        }
                    } else {
                        r0 = r5 & rd32(rd32(0x803541a4u));
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
                r6 = rd32(0x803541bcu);
                if (r6 != 0u) {
                    r0 = rd32(rd32(0x805711ccu) + 0xfcu);
                    if (r0 != 1u) {
                        if (r0 != 2u) {
                            r5 = 0u;
                        } else {
                            r5 = rd32(0x80354168u);
                        }
                    } else {
                        r5 = rd32(0x80354134u);
                    }
                } else {
                    r5 = 0u;
                }
                if (r6 != 0u) {
                    r0 = rd32(rd32(0x805711ccu) + 0xfcu);
                    if (r0 != 1u) {
                        if (r0 != 2u) {
                            r0 = 0u;
                        } else {
                            r0 = r5 & rd32(rd32(0x803541b4u));
                        }
                    } else {
                        r0 = r5 & rd32(rd32(0x803541a4u));
                    }
                } else {
                    r0 = 0u;
                }
                if (r0 == 0u) {
                    fl_ = 1u;
                    break;
                }
            }
            if ((s32)r29 >= 4) {
                if ((s32)(r28 + 5u) >= (s32)r3) {
                    fl_ = 1u;
                    break;
                }
                r28 = r28 + 1u;
                a.r[0] = rd32(0x80571398u);
                a.r[1] = r28;
                a.r[2] = r30 - 1u;
                (void)tc_call(0x801c09c8u, &a);
                a.r[0] = (u32)param_1 + 0x4cu;
                a.r[1] = 1u;
                (void)tc_call(0x80190b84u, &a);
                a.r[0] = 0x804b9da0u;
                a.r[1] = 1u;
                (void)tc_call(0x8010a75cu, &a);
                fl_ = 1u;
                break;
            }
            r29 = r29 + rd32((u32)param_1 + 4u);
            a.r[0] = (u32)param_1 + 0x4cu;
            a.r[1] = 1u;
            (void)tc_call(0x80190bfcu, &a);
            fl_ = 1u;
            break;
        }
    } while (0);
    if (fl_ == 1u) {
        fl_ = 0u;
    } else if ((s32)r29 <= 0) {
        if ((s32)r28 > 0) {
            r28 = r28 - 1u;
            a.r[0] = rd32(0x80571398u);
            a.r[1] = r28;
            a.r[2] = r30 - 1u;
            (void)tc_call(0x801c09c8u, &a);
            a.r[0] = (u32)param_1 + 0x4cu;
            a.r[1] = 1u;
            (void)tc_call(0x80190b30u, &a);
            a.r[0] = 0x804b9da0u;
            a.r[1] = 1u;
            (void)tc_call(0x8010a75cu, &a);
        }
    } else {
        r29 = r29 - rd32((u32)param_1 + 4u);
        a.r[0] = (u32)param_1 + 0x4cu;
        a.r[1] = 0u;
        (void)tc_call(0x80190bfcu, &a);
    }
    a.r[0] = (u32)param_2;
    a.r[1] = r29;
    a.r[2] = rd32((u32)param_2 + 0x3e8u);
    (void)tc_call(0x80119fb0u, &a);
    wr32((u32)param_2 + 0x3ecu, r29);
    wr32(r31 + 0x32cu, r28);
    a.r[0] = rd32(0x80571398u);
    a.r[1] = r28;
    a.r[2] = r30 - 1u;
    (void)tc_call(0x801c09c8u, &a);
    return;
}
