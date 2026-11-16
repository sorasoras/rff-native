#include "tc_rt.h"

void fn_8031fe18(u32 param_r3)
{
    u32 c0lt = 0, r0 = 0, r3 = 0, r4 = 0, r5 = 0, r22 = 0, r23 = 0, r24 = 0, r25 = 0, r27 = 0, r28 = 0, r29 = 0;
    u32 r30 = 0, r31 = 0;
    TcArgs a = {0};
    r30 = 0u;
    r29 = 0u;
    while (r29 < rd32(param_r3 + 0xcu)) {
        r27 = r29;
        r28 = 0u;
        a.r[0] = param_r3;
        a.r[1] = 0u;
        r3 = tc_call(0x802de9f0u, &a);
        r4 = r3;
        for (;;) {
            if (r3 == 0u) {
                r31 = 0u;
                break;
            }
            r3 = r3 + rd32(r3);
            r0 = (u32)rd16(r3 + 4u);
            if (r27 < r0) {
                a.r[0] = r4;
                a.r[1] = r27 & 0xffffu;
                r3 = tc_call(0x8031f878u, &a);
                r31 = r3;
                break;
            }
            r27 = r27 - r0;
            a.r[0] = param_r3;
            a.r[1] = r4;
            r3 = tc_call(0x802de9f0u, &a);
            r4 = r3;
        }
        if (r31 != 0u) {
            r23 = 0u;
            r3 = rd32(r31 + 4u) + r31;
            r24 = r3 + 0x94u;
            r25 = r3 + 0x74u;
            do {
                r0 = (u32)rd8(r24 + 2u);
                r22 = (u32)rd16(r24);
                r24 = r24 + 2u;
                r0 = (u32)(s8)r0;
                if (r0 != 0u) {
                    a.r[0] = param_r3 + 0x10u;
                    a.r[1] = 0u;
                    r3 = tc_call(0x802dea10u, &a);
                    r27 = r3;
                    for (;;) {
                        if (r3 == 0u) {
                            r3 = 0u;
                            break;
                        }
                        r3 = r3;
                        a.r[0] = r3;
                        a.r[1] = r24;
                        r3 = tc_call(0x8031f998u, &a);
                        if (r3 != 0u) break;
                        a.r[0] = param_r3 + 0x10u;
                        a.r[1] = r27;
                        r3 = tc_call(0x802dea10u, &a);
                        r27 = r3;
                    }
                } else {
                    r3 = 0u;
                }
                wr32(r25, r3);
                if ((u32)rd8(r24) != 0u && rd32(r25) == 0u) {
                    r28 = (r28 + 1u) & 0xffu;
                }
                r23 = r23 + 1u;
                r24 = r24 + r22;
                r25 = r25 + 4u;
            } while ((s32)r23 < 3);
            r27 = 0u;
            for (;;) {
                r5 = rd32(r31 + 4u) + 8u;
                if ((r27 & 0xffffu) >= (u32)rd16(rd32(r31 + r5) + (r31 + r5) + 4u)) break;
                r4 = rd32(rd32(r31 + r5) + (r31 + r5) + 4u + ((r27 << 2u) & 0x3fffcu) + 4u);
                do {
                    if ((((u32)rd8(r4) + 0x55u) & 0xffu) <= 1u) {
                        r0 = (u32)rd8(r4 + 2u);
                        c0lt = (s32)r0 < 4;
                        if (r0 == 4u) {
                            a.r[0] = param_r3;
                            a.r[1] = r4;
                            r3 = tc_call(0x8031fbfcu, &a);
                            r28 = (r28 + r3) & 0xffu;
                        } else {
                            if (!c0lt) {
                                if ((s32)r0 >= 6) break;
                            } else if (r0 != 2u) {
                                break;
                            }
                            a.r[0] = param_r3;
                            a.r[1] = r4;
                            r3 = tc_call(0x8031fd1cu, &a);
                            r28 = (r28 + r3) & 0xffu;
                        }
                    }
                } while (0);
                r27 = r27 + 1u;
            }
            if (r28 == 0u) {
                wr32(r31 + 8u, rd32(r31 + 8u) | 0x40000000u);
            } else {
                wr32(r31 + 8u, rd32(r31 + 8u) & 0xbfffffffu);
            }
            r30 = r30 + r28;
        }
        r29 = r29 + 1u;
    }
    return;
}
