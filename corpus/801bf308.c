#include "tc_rt.h"

void fn_801bf308(u32 param_1, s32 param_2)
{
    u32 ctr = 0, r0 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r30 = 0;
    TcArgs a = {0};
    (void)param_1;
    wr32(0x817fdf40u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    r6 = 0x817fdf9bu;
    wr32(0x817fdffcu, 0u);
    r5 = 0x8033b957u;
    wr32(0x817fdff8u, 0u);
    ctr = 0x29u;
    do {
        r3 = (u32)rd8(r5 + 1u);
        r5 = r5 + 2u;
        r0 = (u32)rd8(r5);
        wr8(r6 + 1u, (u8)r3);
        wr8(r6 + 2u, (u8)r0);
        r6 = r6 + 2u;
        ctr = ctr - 1u;
    } while (ctr != 0u);
    r5 = (u32)rd8(r5 + 1u);
    wr8(r6 + 1u, (u8)r5);
    r7 = 0x817fdf47u;
    r5 = 0x8033b9abu;
    ctr = 0x29u;
    do {
        r3 = (u32)rd8(r5 + 1u);
        r5 = r5 + 2u;
        r0 = (u32)rd8(r5);
        wr8(r7 + 1u, (u8)r3);
        wr8(r7 + 2u, (u8)r0);
        r7 = r7 + 2u;
        ctr = ctr - 1u;
    } while (ctr != 0u);
    wr8(r7 + 1u, rd8(r5 + 1u));
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
            r0 = (u32)rd8(r0 - 0x7e8020b8u);
            r30 = (u32)(s8)r0;
            if ((s32)r30 < 0) {
                return;
            }
            a.r[0] = (u32)param_2;
            a.r[1] = r30;
            a.r[2] = rd32((u32)param_2 + 0x3e8u);
            (void)tc_call(0x80119fb0u, &a);
            wr32((u32)param_2 + 0x3ecu, r30);
            return;
        }
    } while (0);
    r0 = (u32)rd8(r0 - 0x7e802064u);
    r30 = (u32)(s8)r0;
    if ((s32)r30 >= 0) {
        a.r[0] = (u32)param_2;
        a.r[1] = r30;
        a.r[2] = rd32((u32)param_2 + 0x3e8u);
        (void)tc_call(0x80119fb0u, &a);
        wr32((u32)param_2 + 0x3ecu, r30);
    }
    return;
}
