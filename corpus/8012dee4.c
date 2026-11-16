#include "tc_rt.h"

void fn_8012dee4(s32 param_1, s32 param_2)
{
    u32 r0 = 0, r3 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r30 = 0;
    TcArgs a = {0};
    r8 = rd32(0x803541ccu);
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
                    return;
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
                    return;
                }
            }
            a.r[0] = (u32)param_1;
            a.r[1] = rd32((u32)param_2 + 0x3ecu);
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
    a.r[1] = rd32((u32)param_2 + 0x3ecu);
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
