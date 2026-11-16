#include "tc_rt.h"

void fn_80308e0c(u32 param_r3, u32 param_r4)
{
    u32 r3 = 0, r26 = 0, r27 = 0, r28 = 0, r31 = 0;
    TcArgs a = {0};
    r3 = tc_call(0x8022c2b0u, &a);
    r27 = param_r3 + 0xb74u;
    r31 = r3;
    r28 = r27;
    r26 = 0u;
    while ((s32)r26 < (s32)rd32(param_r3 + 0x828u)) {
        if ((u32)rd8(r28) != 0u) {
            r3 = tc_call(0x8030de70u, &a);
            a.r[0] = r3;
            a.r[1] = rd32(r28 + 0xcu);
            a.r[2] = param_r4;
            a.r[3] = 0xffu;
            a.r[4] = 0x80309ef0u;
            a.r[5] = r28;
            r3 = tc_call(0x8030e018u, &a);
            if (r3 == 0u) {
                r28 = 0u;
                while ((s32)r28 < (s32)r26) {
                    r3 = rd32(r27 + 4u);
                    if (r3 != 0u) {
                        a.r[0] = r3;
                        (void)tc_call(0x8030bf80u, &a);
                        wr32(r27 + 4u, 0u);
                    }
                    r27 = r27 + 0x38u;
                    r28 = r28 + 1u;
                }
                a.r[0] = r31;
                (void)tc_call(0x8022c2d8u, &a);
                return;
            }
            wr32(r28 + 4u, r3);
            wr8(r3 + 0xa1u, 1u);
        }
        r28 = r28 + 0x38u;
        r26 = r26 + 1u;
    }
    a.r[0] = r31;
    (void)tc_call(0x8022c2d8u, &a);
    return;
}
