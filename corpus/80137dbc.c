#include "tc_rt.h"

void fn_80137dbc(s32 param_1, s32 param_2)
{
    u32 c0eq = 0, r0 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0, r7 = 0, r31 = 0;
    TcArgs a = {0};
    r31 = rd32((u32)param_2 + 0x3ecu);
    a.r[0] = (u32)param_1;
    a.r[1] = (u32)param_2;
    a.r[2] = 0u;
    a.r[3] = 0u;
    a.r[4] = 0u;
    a.f[0] = 0.0;
    (void)tc_call(rd32(rd32((u32)param_1 + 0x28u) + 0x10u), &a);
    r0 = rd32((u32)param_1 + 0x34u);
    c0eq = r31 == rd32((u32)param_2 + 0x3ecu);
    r31 = r0;
    if (c0eq) {
        r6 = rd32(0x803541ccu);
        do {
            if ((r6 & 8u) == 0u) {
                r7 = rd32(0x803541c8u);
                if ((r7 & 2u) == 0u) {
                    r5 = rd32(0x803541bcu);
                    if (r5 != 0u) {
                        r3 = rd32(rd32(0x805711ccu) + 0xfcu);
                        if (r3 != 1u) {
                            if (r3 != 2u) {
                                r4 = 0u;
                            } else {
                                r4 = rd32(0x8035416cu);
                            }
                        } else {
                            r4 = rd32(0x80354138u);
                        }
                    } else {
                        r4 = 0u;
                    }
                    if (r5 != 0u) {
                        r3 = rd32(rd32(0x805711ccu) + 0xfcu);
                        if (r3 != 1u) {
                            if (r3 != 2u) {
                                r3 = 0u;
                            } else {
                                r3 = r4 & rd32(rd32(0x803541b4u));
                            }
                        } else {
                            r3 = r4 & rd32(rd32(0x803541a4u));
                        }
                    } else {
                        r3 = 0u;
                    }
                    if (r3 != 0u) break;
                }
                if ((r6 & 2u) == 0u) {
                    if ((r7 & 8u) != 0u) {
                        wr32((u32)param_1 + 0x34u, r31);
                        a.r[0] = (u32)param_1;
                        (void)tc_call(0x80138374u, &a);
                        return;
                    }
                    r5 = rd32(0x803541bcu);
                    if (r5 != 0u) {
                        r3 = rd32(rd32(0x805711ccu) + 0xfcu);
                        if (r3 != 1u) {
                            if (r3 != 2u) {
                                r4 = 0u;
                            } else {
                                r4 = rd32(0x80354170u);
                            }
                        } else {
                            r4 = rd32(0x8035413cu);
                        }
                    } else {
                        r4 = 0u;
                    }
                    if (r5 != 0u) {
                        r3 = rd32(rd32(0x805711ccu) + 0xfcu);
                        if (r3 != 1u) {
                            if (r3 != 2u) {
                                r3 = 0u;
                            } else {
                                r3 = r4 & rd32(rd32(0x803541b4u));
                            }
                        } else {
                            r3 = r4 & rd32(rd32(0x803541a4u));
                        }
                    } else {
                        r3 = 0u;
                    }
                    if (r3 == 0u) {
                        wr32((u32)param_1 + 0x34u, r31);
                        a.r[0] = (u32)param_1;
                        (void)tc_call(0x80138374u, &a);
                        return;
                    }
                }
                r4 = rd32((u32)param_1 + 0x110u);
                if ((s32)r4 <= 5) {
                    wr32((u32)param_1 + 0x34u, r31);
                    a.r[0] = (u32)param_1;
                    (void)tc_call(0x80138374u, &a);
                    return;
                }
                r5 = r4 - 5u;
                r31 = r0 + rd32((u32)param_1 + 8u);
                if ((s32)r31 >= (s32)r5) {
                    r31 = r5 & ~(u32)((s32)~((r0 - r5) | (r5 - r0)) >> 31);
                }
                r4 = r31 - r0;
                if ((s32)r4 <= 0) {
                    a.r[0] = (u32)param_1 + 0x44u;
                    (void)tc_call(0x80190bd8u, &a);
                } else {
                    a.r[0] = (u32)param_1 + 0x44u;
                    a.r[1] = r4;
                    (void)tc_call(0x80190b84u, &a);
                }
                a.r[0] = 0x804b9da0u;
                a.r[1] = 1u;
                (void)tc_call(0x8010a75cu, &a);
                wr32((u32)param_1 + 0x34u, r31);
                a.r[0] = (u32)param_1;
                (void)tc_call(0x80138374u, &a);
                return;
            }
        } while (0);
        r5 = rd32((u32)param_1 + 0x110u);
        if ((s32)r5 <= 5) {
            wr32((u32)param_1 + 0x34u, r31);
        } else {
            r31 = r0 - rd32((u32)param_1 + 8u);
            if ((s32)r31 < 0) {
                r31 = (r5 - 5u) & ~(u32)((s32)((0u - r0) | r0) >> 31);
            }
            r4 = r0 - r31;
            if ((s32)r4 <= 0) {
                a.r[0] = (u32)param_1 + 0x44u;
                (void)tc_call(0x80190be4u, &a);
            } else {
                a.r[0] = (u32)param_1 + 0x44u;
                a.r[1] = r4;
                (void)tc_call(0x80190b30u, &a);
            }
            a.r[0] = 0x804b9da0u;
            a.r[1] = 1u;
            (void)tc_call(0x8010a75cu, &a);
            wr32((u32)param_1 + 0x34u, r31);
        }
    }
    a.r[0] = (u32)param_1;
    (void)tc_call(0x80138374u, &a);
    return;
}
