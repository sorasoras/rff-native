#include "tc_rt.h"

void fn_8012ae74(s32 param_1, s32 param_2)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0, r7 = 0, r29 = 0, r31 = 0;
    TcArgs a = {0};
    r31 = rd32((u32)param_2 + 0x3ecu);
    a.r[0] = (u32)param_1;
    a.r[1] = (u32)param_2;
    a.r[2] = 0u;
    a.r[3] = 0u;
    a.r[4] = 0u;
    a.f[0] = 0.0;
    (void)tc_call(rd32(rd32((u32)param_1 + 0x28u) + 0x10u), &a);
    if (r31 == rd32((u32)param_2 + 0x3ecu)) {
        r6 = rd32(0x803541ccu);
        do {
            if ((r6 & 8u) == 0u) {
                r7 = rd32(0x803541c8u);
                if ((r7 & 2u) == 0u) {
                    r5 = rd32(0x803541bcu);
                    if (r5 != 0u) {
                        r0 = rd32(rd32(0x805711ccu) + 0xfcu);
                        if (r0 != 1u) {
                            if (r0 != 2u) {
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
                if ((r6 & 2u) == 0u) {
                    if ((r7 & 8u) != 0u) {
                        return;
                    }
                    r5 = rd32(0x803541bcu);
                    if (r5 != 0u) {
                        r0 = rd32(rd32(0x805711ccu) + 0xfcu);
                        if (r0 != 1u) {
                            if (r0 != 2u) {
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
                        return;
                    }
                }
                a.r[0] = (u32)param_1;
                a.r[1] = r31;
                r3 = tc_call(0x80189214u, &a);
                if (r3 == 0u) {
                    return;
                }
                r29 = rd32((u32)param_2 + 0x3ecu) + 1u;
                a.r[0] = (u32)param_2;
                a.r[1] = r29;
                a.r[2] = rd32((u32)param_2 + 0x3e8u);
                (void)tc_call(0x80119fb0u, &a);
                wr32((u32)param_2 + 0x3ecu, r29);
                return;
            }
        } while (0);
        a.r[0] = (u32)param_1;
        a.r[1] = r31;
        r3 = tc_call(0x8018923cu, &a);
        if (r3 != 0u) {
            r29 = rd32((u32)param_2 + 0x3ecu) - 1u;
            a.r[0] = (u32)param_2;
            a.r[1] = r29;
            a.r[2] = rd32((u32)param_2 + 0x3e8u);
            (void)tc_call(0x80119fb0u, &a);
            wr32((u32)param_2 + 0x3ecu, r29);
        }
    }
    return;
}
