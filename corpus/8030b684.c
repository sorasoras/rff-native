#include "tc_rt.h"

void fn_8030b684(u32 param_r3, u32 param_r4)
{
    u32 r3 = 0, r27 = 0, r28 = 0, r29 = 0, r30 = 0, r31 = 0;
    TcArgs a = {0};
    if (param_r3 != 0u) {
        r31 = param_r3;
        r29 = 0u;
        wr32(param_r3 + 8u, 0x8039d6ecu);
        do {
            r30 = r31;
            r28 = 0u;
            do {
                r27 = rd32(r30 + 0xcu);
                if (r27 != 0u) {
                    r3 = tc_call(0x802f46b8u, &a);
                    a.r[0] = r3;
                    a.r[1] = r27;
                    (void)tc_call(0x802f4b60u, &a);
                }
                r28 = r28 + 1u;
                r30 = r30 + 4u;
            } while ((s32)r28 < 4);
            r29 = r29 + 1u;
            r31 = r31 + 0x10u;
        } while ((s32)r29 < 2);
        if ((s32)param_r4 > 0) {
            (void)tc_call(0x80040cd4u, &a);
        }
    }
    return;
}
