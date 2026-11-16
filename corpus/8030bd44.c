#include "tc_rt.h"

void fn_8030bd44(u32 param_1, u32 param_2, s32 param_3, s32 param_4, u32 param_5, u32 param_6)
{
    u32 r0 = 0, r3 = 0, r5 = 0, r19 = 0, r20 = 0, r21 = 0, r24 = 0, r25 = 0, r26 = 0, r27 = 0, r28 = 0, r29 = 0;
    u32 r30 = 0;
    TcArgs a = {0};
    wr32(0x817fdfa0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdfccu, 0u);
    wr32(0x817fdfd0u, 0u);
    wr32(0x817fdfd4u, 0u);
    wr32(0x817fdfd8u, 0u);
    wr32(0x817fdfdcu, 0u);
    wr32(0x817fdfe0u, 0u);
    wr32(0x817fdfe4u, 0u);
    wr32(0x817fdfe8u, 0u);
    wr32(0x817fdfecu, 0u);
    wr32(0x817fdff0u, 0u);
    wr32(0x817fdff4u, 0u);
    wr32(0x817fdff8u, 0u);
    wr32(0x817fdffcu, 0u);
    if ((s32)param_2 <= 2) {
        r30 = 1u;
        if ((s32)param_2 >= 1) {
            r30 = param_2;
        }
    } else {
        r30 = 2u;
    }
    if (param_3 <= 4) {
        r29 = 1u;
        if (param_3 >= 1) {
            r29 = (u32)param_3;
        }
    } else {
        r29 = 4u;
    }
    r3 = tc_call(0x8022c2b0u, &a);
    r19 = r3;
    r27 = 0x10u;
    if ((u32)param_4 == 0xffu) {
        r27 = 0x1fu;
    }
    r26 = r30 * r29;
    r28 = 0x817fdfa8u;
    r25 = 0u;
    for (;;) {
        if ((s32)r25 >= (s32)r26) {
            r24 = param_1;
            r21 = 0x817fdfa8u;
            r26 = 0u;
            while ((s32)r26 < (s32)r30) {
                r25 = r24;
                r28 = 0u;
                while ((s32)r28 < (s32)r29) {
                    a.r[0] = rd32(r21);
                    a.r[1] = r27;
                    (void)tc_call(0x802f2650u, &a);
                    r0 = rd32(r21);
                    r21 = r21 + 4u;
                    r28 = r28 + 1u;
                    wr32(r25 + 0xcu, r0);
                    r25 = r25 + 4u;
                }
                r24 = r24 + 0x10u;
                r26 = r26 + 1u;
            }
            a.r[0] = param_1;
            a.r[1] = r30;
            a.r[2] = r29;
            a.r[3] = param_5;
            a.r[4] = param_6;
            (void)tc_call(0x8030b728u, &a);
            wr8(param_1 + 0x9cu, 1u);
            a.r[0] = r19;
            (void)tc_call(0x8022c2d8u, &a);
            return;
        }
        r3 = tc_call(0x802f46b8u, &a);
        a.r[0] = r3;
        a.r[1] = r27;
        a.r[2] = 0x8030cea8u;
        a.r[3] = param_1;
        r3 = tc_call(0x802f4890u, &a);
        if (r3 == 0u) {
            r24 = r26 - r25;
            r3 = tc_call(0x8030de70u, &a);
            r5 = r3 + 8u;
            r3 = rd32(r3 + 8u);
            while (r3 != r5 && param_4 >= (s32)rd32(r3 - 0x70u)) {
                r24 = r24 - (rd32(r3 - 0x88u) * rd32(r3 - 0x84u));
                if ((s32)r24 <= 0) break;
                r3 = rd32(r3);
            }
            if ((s32)r24 > 0) {
                r20 = 0x817fdfa8u;
                r21 = 0u;
                while ((s32)r21 < (s32)r25) {
                    r3 = tc_call(0x802f46b8u, &a);
                    a.r[0] = r3;
                    a.r[1] = rd32(r20);
                    (void)tc_call(0x802f4b60u, &a);
                    r20 = r20 + 4u;
                    r21 = r21 + 1u;
                }
                a.r[0] = r19;
                (void)tc_call(0x8022c2d8u, &a);
                return;
            }
            r24 = 0x11u;
            if (r27 == 0x1fu) {
                r24 = 0x1fu;
            }
            r3 = tc_call(0x802f46b8u, &a);
            a.r[0] = r3;
            a.r[1] = r24;
            a.r[2] = 0x8030cea8u;
            a.r[3] = param_1;
            r3 = tc_call(0x802f4890u, &a);
        }
        if (r3 == 0u) break;
        wr32(r28, r3);
        r28 = r28 + 4u;
        r25 = r25 + 1u;
    }
    r20 = 0x817fdfa8u;
    r21 = 0u;
    while ((s32)r21 < (s32)r25) {
        r3 = tc_call(0x802f46b8u, &a);
        a.r[0] = r3;
        a.r[1] = rd32(r20);
        (void)tc_call(0x802f4b60u, &a);
        r20 = r20 + 4u;
        r21 = r21 + 1u;
    }
    a.r[0] = r19;
    (void)tc_call(0x8022c2d8u, &a);
    return;
}
