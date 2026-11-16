#include "tc_rt.h"

void fn_803098b8(u32 param_r3, u32 param_r4)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r5 = 0, r25 = 0, r26 = 0, r27 = 0, r28 = 0, r29 = 0;
    TcArgs a = {0};
    if ((u32)rd8(param_r3 + 0xe0u) != 0u) {
        r0 = rd32(param_r3 + 0x150u);
        r28 = param_r4 + 1u;
        if ((s32)r28 >= (s32)r0) {
            r28 = r28 - r0;
        }
        r3 = tc_call(0x8022c2b0u, &a);
        r4 = rd32(param_r3 + 0x104u);
        r29 = r3;
        r0 = param_r4 * r4;
        r4 = r28 * r4;
        a.r[0] = param_r3;
        a.r[1] = r4;
        a.r[2] = rd32(param_r3 + 0x10cu) + r0;
        (void)tc_call(0x803095b4u, &a);
        if (rd32(param_r3 + 0xdcu) == 3u) {
            r28 = param_r3 + 0xb74u;
            r27 = 0u;
            while ((s32)r27 < (s32)rd32(param_r3 + 0x828u)) {
                if ((u32)rd8(r28) != 0u) {
                    r26 = rd32(r28 + 4u);
                    if (r26 != 0u) {
                        a.r[0] = r26;
                        r3 = tc_call(0x8030c3d4u, &a);
                        if (r3 == 3u) {
                            a.r[0] = r26;
                            a.r[1] = 0u;
                            (void)tc_call(0x8030cbc4u, &a);
                            r25 = 0u;
                            while ((s32)r25 < (s32)rd32(r28 + 0xcu)) {
                                if ((s32)r25 >= 2) {
                                    r5 = 0u;
                                } else {
                                    r0 = (u32)rd8(r28 + r25 + 0x10u);
                                    if ((s32)r0 >= 16) {
                                        r5 = 0u;
                                    } else {
                                        r0 = r0 * 0x34u;
                                        r5 = param_r3 + r0 + 0x834u;
                                    }
                                }
                                r5 = r5 + 0x2cu;
                                a.r[0] = r26;
                                a.r[1] = r25;
                                a.r[2] = r5;
                                (void)tc_call(0x8030c94cu, &a);
                                r25 = r25 + 1u;
                            }
                        }
                    }
                }
                r28 = r28 + 0x38u;
                r27 = r27 + 1u;
            }
            if (param_r4 == (rd32(param_r3 + 0x150u) - 1u)) {
                wr8(param_r3 + 0x127u, 1u);
            }
        }
        a.r[0] = r29;
        (void)tc_call(0x8022c2d8u, &a);
    } else {
        a.r[0] = param_r3;
        a.r[1] = param_r4;
        (void)tc_call(0x80309a14u, &a);
    }
    return;
}
