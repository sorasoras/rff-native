#include "tc_rt.h"

void fn_8022028c(s32 param_1, s32 param_2)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r5 = 0, r7 = 0, r8 = 0, r9 = 0, r30 = 0;
    TcArgs a = {0};
    r8 = rd32(0x803541ccu);
    r0 = rd32((u32)param_2 + 0x3ecu);
    do {
        if ((r8 & 1u) == 0u) {
            r9 = rd32(0x803541c8u);
            if ((r9 & 4u) == 0u) {
                r7 = rd32(0x803541bcu);
                if (r7 != 0u) {
                    r3 = rd32(rd32(0x805711ccu) + 0xfcu);
                    if (r3 != 1u) {
                        if (r3 != 2u) {
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
            if ((r8 & 4u) == 0u) {
                if ((r9 & 1u) != 0u) {
                    return;
                }
                r5 = rd32(0x803541bcu);
                if (r5 != 0u) {
                    r3 = rd32(rd32(0x805711ccu) + 0xfcu);
                    if (r3 != 1u) {
                        if (r3 != 2u) {
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
                    return;
                }
            }
            a.r[0] = (u32)param_1;
            a.r[1] = r0;
            r3 = tc_call(0x80189168u, &a);
            if (r3 == 0u) {
                return;
            }
            r30 = rd32((u32)param_2 + 0x3ecu) + rd32((u32)param_1 + 4u);
            a.r[0] = (u32)param_2;
            a.r[1] = r30;
            a.r[2] = rd32((u32)param_2 + 0x3e8u);
            (void)tc_call(0x80119fb0u, &a);
            wr32((u32)param_2 + 0x3ecu, r30);
            return;
        }
    } while (0);
    a.r[0] = (u32)param_1;
    a.r[1] = r0;
    r3 = tc_call(0x80189150u, &a);
    if (r3 != 0u) {
        r30 = rd32((u32)param_2 + 0x3ecu) - rd32((u32)param_1 + 4u);
        a.r[0] = (u32)param_2;
        a.r[1] = r30;
        a.r[2] = rd32((u32)param_2 + 0x3e8u);
        (void)tc_call(0x80119fb0u, &a);
        wr32((u32)param_2 + 0x3ecu, r30);
    }
    return;
}
