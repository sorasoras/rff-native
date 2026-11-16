#include "tc_rt.h"

void fn_80184634(s32 param_1, s32 param_2)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0, r7 = 0, r31 = 0;
    TcArgs a = {0};
    a.r[0] = (u32)param_1;
    a.r[1] = (u32)param_2;
    a.r[2] = 0u;
    a.r[3] = 0u;
    a.r[4] = 0u;
    a.f[0] = 0.0;
    (void)tc_call(rd32(rd32((u32)param_1 + 0x28u) + 0x10u), &a);
    r31 = rd32((u32)param_2 + 0x3ecu);
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
                if ((r7 & 8u) != 0u) break;
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
                if (r0 == 0u) break;
            }
            r4 = rd32((u32)param_2 + 0x3ecu);
            r0 = rd32((u32)param_2 + 0x3e8u);
            wr32((u32)param_2 + 0x3fcu, r4);
            wr32((u32)param_2 + 0x3f8u, r0);
            a.r[0] = (u32)param_2;
            a.r[1] = r4;
            a.r[2] = 1u;
            (void)tc_call(0x80119fb0u, &a);
            wr32((u32)param_2 + 0x3e8u, 1u);
            r3 = rd32((u32)param_1 + 0x14u);
            r0 = rd32(r3 + 4u);
            r3 = rd32(r3);
            r31 = r31 * r0;
            if ((s32)r31 >= (s32)r3) {
                r31 = r3 - r0;
            }
        }
    } while (0);
    a.r[0] = (u32)param_2;
    a.r[1] = r31;
    a.r[2] = rd32((u32)param_2 + 0x3e8u);
    (void)tc_call(0x80119fb0u, &a);
    wr32((u32)param_2 + 0x3ecu, r31);
    return;
}
