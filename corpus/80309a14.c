#include "tc_rt.h"

void fn_80309a14(u32 param_r3, u32 param_r4)
{
    u32 r0 = 0, r3 = 0, r5 = 0, r25 = 0, r26 = 0, r27 = 0, r28 = 0, r29 = 0;
    TcArgs a = {0};
    r3 = tc_call(0x8022c2b0u, &a);
    r29 = r3;
    r28 = param_r3 + 0xb74u;
    r27 = 0u;
    while ((s32)r27 < (s32)rd32(param_r3 + 0x828u)) {
        if ((u32)rd8(r28) != 0u) {
            r26 = rd32(r28 + 4u);
            if (r26 != 0u) {
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
                    r5 = rd32(r5);
                    a.r[0] = r26;
                    a.r[1] = r25;
                    a.r[2] = r5;
                    a.r[3] = rd32(param_r3 + 0x10cu) + (param_r4 * rd32(param_r3 + 0x104u));
                    (void)tc_call(0x8030cb50u, &a);
                    r25 = r25 + 1u;
                }
            }
        }
        r28 = r28 + 0x38u;
        r27 = r27 + 1u;
    }
    a.r[0] = r29;
    (void)tc_call(0x8022c2d8u, &a);
    wr8(param_r3 + 0x129u, 1u);
    return;
}
