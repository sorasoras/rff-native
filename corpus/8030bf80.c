#include "tc_rt.h"

void fn_8030bf80(u32 param_r3)
{
    u32 r3 = 0, r25 = 0, r26 = 0, r27 = 0, r28 = 0, r29 = 0, r31 = 0;
    TcArgs a = {0};
    r3 = tc_call(0x8022c2b0u, &a);
    r31 = r3;
    if ((u32)rd8(param_r3 + 0x9cu) == 0u) {
        a.r[0] = r3;
        (void)tc_call(0x8022c2d8u, &a);
    } else {
        r29 = param_r3;
        r27 = 0u;
        while ((s32)r27 < (s32)rd32(param_r3 + 0x8cu)) {
            r28 = r29;
            r26 = 0u;
            while ((s32)r26 < (s32)rd32(param_r3 + 0x90u)) {
                r25 = rd32(r28 + 0xcu);
                if (r25 != 0u) {
                    r3 = tc_call(0x802f46b8u, &a);
                    a.r[0] = r3;
                    a.r[1] = r25;
                    (void)tc_call(0x802f4b60u, &a);
                    wr32(r28 + 0xcu, 0u);
                }
                r28 = r28 + 4u;
                r26 = r26 + 1u;
            }
            r29 = r29 + 0x10u;
            r27 = r27 + 1u;
        }
        wr32(param_r3 + 0x8cu, 0u);
        r3 = tc_call(0x8030de70u, &a);
        a.r[0] = r3;
        a.r[1] = param_r3;
        (void)tc_call(0x8030e1d4u, &a);
        wr8(param_r3 + 0x9cu, 0u);
        a.r[0] = r31;
        (void)tc_call(0x8022c2d8u, &a);
    }
    return;
}
