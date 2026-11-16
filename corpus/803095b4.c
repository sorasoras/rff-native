#include "tc_rt.h"

void fn_803095b4(u32 param_1, u32 param_2, u32 param_3)
{
    u32 r0 = 0, r3 = 0, r25 = 0, r26 = 0, r27 = 0, r28 = 0, r29 = 0, r30 = 0, r31 = 0;
    TcArgs a = {0};
    r3 = tc_call(0x8022c2b0u, &a);
    r31 = r3;
    r28 = param_1;
    r29 = param_1 + 0xb74u;
    r27 = 0u;
    while ((s32)r27 < (s32)rd32(param_1 + 0x828u)) {
        if ((u32)rd8(r29) != 0u) {
            r26 = rd32(r29 + 4u);
            if (r26 != 0u) {
                r25 = 0u;
                while ((s32)r25 < (s32)rd32(r29 + 0xcu)) {
                    if ((s32)r25 >= 2) {
                        r30 = 0u;
                    } else {
                        r0 = (u32)rd8(r28 + r25 + 0xb84u);
                        if ((s32)r0 >= 16) {
                            r30 = 0u;
                        } else {
                            r0 = r0 * 0x34u;
                            r30 = param_1 + r0 + 0x834u;
                        }
                    }
                    a.r[0] = r26;
                    a.r[1] = r25;
                    a.r[2] = rd32(r30);
                    a.r[3] = param_2;
                    (void)tc_call(0x8030c9e0u, &a);
                    a.r[0] = r26;
                    a.r[1] = r25;
                    a.r[2] = rd32(r30);
                    a.r[3] = param_3;
                    (void)tc_call(0x8030ca54u, &a);
                    r25 = r25 + 1u;
                }
                a.r[0] = r26;
                a.r[1] = 1u;
                (void)tc_call(0x8030cac8u, &a);
            }
        }
        r29 = r29 + 0x38u;
        r28 = r28 + 0x38u;
        r27 = r27 + 1u;
    }
    a.r[0] = r31;
    (void)tc_call(0x8022c2d8u, &a);
    return;
}
