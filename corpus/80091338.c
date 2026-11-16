#include "tc_rt.h"

void fn_80091338(u32 param_1, u32 param_2, u32 param_3, u32 param_4, u32 param_5, u32 param_6)
{
    u32 c0lt = 0, ctr = 0, r0 = 0, r3 = 0, r4 = 0, r5 = 0, r21 = 0, r22 = 0, r23 = 0, r24 = 0, r25 = 0, r26 = 0;
    u32 r27 = 0, r28 = 0, r29 = 0, r30 = 0;
    f64 f1 = tc_argf(0u);
    TcArgs a = {0};
    (void)param_1;
    r29 = 0u;
    r28 = 0u;
    r27 = 0u;
    r26 = 0u;
    r25 = 0u;
    r24 = 0u;
    r23 = 0u;
    r22 = 0u;
    r30 = 0u;
    while (r22 < rd32(param_2)) {
        r0 = rd32(param_2 + 4u);
        r21 = r0 + r30;
        a.r[0] = 0x80492800u;
        a.r[1] = rd32(r30 + r0);
        a.r[2] = r22;
        r3 = tc_call(0x8017b190u, &a);
        f1 = tc_lastf();
        r4 = rd32(r21 + 0x14u);
        r5 = 0u;
        while (r5 < r4) {
            r0 = rd32(r21 + 0x18u);
            ctr = r0;
            if (r0 > 0u) {
                do {
                    if ((u32)rd8(r3 + 1u) != 3u) {
                        if ((u32)rd8(r3) == 2u) {
                            r29 = r29 + 1u;
                        }
                    } else {
                        r0 = (u32)rd8(r3 + 2u);
                        c0lt = (s32)r0 < 3;
                        if (r0 == 3u) {
                            r25 = r25 + 1u;
                        } else if (!c0lt) {
                            if ((s32)r0 < 16) {
                                if ((s32)r0 >= 5) {
                                    r23 = r23 + 1u;
                                } else {
                                    r24 = r24 + 1u;
                                }
                            }
                        } else {
                            c0lt = (s32)r0 < 1;
                            if (r0 == 1u) {
                                r27 = r27 + 1u;
                            } else if (!c0lt) {
                                r26 = r26 + 1u;
                            } else if ((s32)r0 >= 0) {
                                r28 = r28 + 1u;
                            }
                        }
                    }
                    r3 = r3 + 8u;
                    ctr = ctr - 1u;
                } while (ctr != 0u);
            }
            r5 = r5 + 1u;
        }
        r30 = r30 + 0x20u;
        r22 = r22 + 1u;
    }
    wr32(param_3, r29 + 0x64u);
    wr32(param_4, r28 + (((r27 << 2u) & 0xfffffffcu) - r27) + (r26 * 6u) + 0xc8u);
    wr32(param_5, r25 + (((r24 << 2u) & 0xfffffffcu) + r24) + 0xc8u);
    wr32(param_6, ((r23 << 1u) & 0xfffffffeu) + 0xc8u);
    return;
}
