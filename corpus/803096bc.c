#include "tc_rt.h"

void fn_803096bc(u32 param_r3)
{
    u32 c0gt = 0, c0lt = 0, r0 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0, r25 = 0, r26 = 0, r27 = 0, r28 = 0, r30 = 0;
    TcArgs a = {0};
    wr32(0x817fdfd0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdfe4u, 0u);
    wr32(0x817fdfe8u, 0u);
    wr32(0x817fdfecu, 0u);
    wr32(0x817fdff0u, 0u);
    wr32(0x817fdff4u, 0u);
    wr32(0x817fdff8u, 0u);
    wr32(0x817fdffcu, 0u);
    r4 = rd32(param_r3 + 0x158u) + 1u;
    c0gt = (s32)r4 > (s32)rd32(param_r3 + 0x160u);
    wr32(param_r3 + 0x158u, r4);
    if (c0gt && (u32)rd8(param_r3 + 0xe0u) != 0u) {
        r5 = rd32(param_r3 + 0x12cu);
        wr32(param_r3 + 0x158u, rd32(param_r3 + 0x15cu));
        if ((s32)r5 < 2147483647) {
            wr32(param_r3 + 0x12cu, r5 + 1u);
        }
        a.r[0] = param_r3;
        a.r[1] = 0u;
        a.r[2] = rd32(param_r3 + 0x150u) * rd32(param_r3 + 0x104u);
        (void)tc_call(0x803095b4u, &a);
    }
    r3 = rd32(param_r3 + 0x154u) + 1u;
    c0lt = (s32)r3 < (s32)rd32(param_r3 + 0x150u);
    wr32(param_r3 + 0x154u, r3);
    if (!c0lt) {
        r6 = rd32(param_r3 + 0x144u);
        r0 = rd32(param_r3 + 0x104u);
        wr32(param_r3 + 0x154u, 0u);
        wr32(param_r3 + 0x150u, r6);
        a.r[0] = param_r3;
        a.r[1] = 0u;
        a.r[2] = r6 * r0;
        (void)tc_call(0x803095b4u, &a);
    }
    if (rd32(param_r3 + 0x154u) == (rd32(param_r3 + 0x150u) - 1u)) {
        if ((u32)rd8(param_r3 + 0x127u) == 0u && (u32)rd8(param_r3 + 0x128u) != 0u) {
            r28 = param_r3 + 0xb74u;
            r27 = 0u;
            while ((s32)r27 < (s32)rd32(param_r3 + 0x828u)) {
                if ((u32)rd8(r28) != 0u) {
                    r26 = rd32(r28 + 4u);
                    if (r26 != 0u) {
                        a.r[0] = r26;
                        r3 = tc_call(0x8030c3d4u, &a);
                        if (r3 == 3u) {
                            r3 = tc_call(0x8022c2b0u, &a);
                            r30 = r3;
                            r25 = 0u;
                            while ((s32)r25 < (s32)rd32(r28 + 0xcu)) {
                                if ((s32)r25 >= 2) {
                                    r3 = 0u;
                                } else {
                                    r0 = (u32)rd8(r28 + r25 + 0x10u);
                                    if ((s32)r0 >= 16) {
                                        r3 = 0u;
                                    } else {
                                        r0 = r0 * 0x34u;
                                        r3 = param_r3 + r0 + 0x834u;
                                    }
                                }
                                wr16(0x817fdfd8u, rd16(r3 + 0x32u));
                                wr16(0x817fdfdau, 0u);
                                wr16(0x817fdfdcu, 0u);
                                a.r[0] = r26;
                                a.r[1] = r25;
                                a.r[2] = 0x817fdfd8u;
                                (void)tc_call(0x8030c94cu, &a);
                                r25 = r25 + 1u;
                            }
                            a.r[0] = r26;
                            a.r[1] = 1u;
                            (void)tc_call(0x8030cbc4u, &a);
                            a.r[0] = r30;
                            (void)tc_call(0x8022c2d8u, &a);
                        }
                    }
                }
                r28 = r28 + 0x38u;
                r27 = r27 + 1u;
            }
        }
        wr8(param_r3 + 0x128u, 0u);
        wr8(param_r3 + 0x127u, 0u);
    }
    if (rd32(param_r3 + 0x158u) == (rd32(param_r3 + 0x160u) - 1u)) {
        a.r[0] = param_r3;
        a.r[1] = rd32(param_r3 + 0x154u) + 1u;
        (void)tc_call(0x803098b8u, &a);
    }
    return;
}
