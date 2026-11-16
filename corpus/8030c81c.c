#include "tc_rt.h"

void fn_8030c81c(u32 param_r3, u32 param_r4)
{
    u32 r3 = 0, r28 = 0, r29 = 0, r30 = 0, r31 = 0;
    TcArgs a = {0};
    wr32(param_r3 + 0xa4u, param_r4);
    r3 = tc_call(0x8030de70u, &a);
    a.r[0] = r3;
    a.r[1] = param_r3;
    (void)tc_call(0x8030e384u, &a);
    if (rd32(param_r3 + 0xa4u) == 1u) {
        r31 = param_r3;
        r29 = 0u;
        while ((s32)r29 < (s32)rd32(param_r3 + 0x8cu)) {
            r30 = r31;
            r28 = 0u;
            while ((s32)r28 < (s32)rd32(param_r3 + 0x90u)) {
                r3 = rd32(r30 + 0xcu);
                if (r3 != 0u) {
                    a.r[0] = r3;
                    a.r[1] = 0xfu;
                    (void)tc_call(0x802f2650u, &a);
                }
                r30 = r30 + 4u;
                r28 = r28 + 1u;
            }
            r31 = r31 + 0x10u;
            r29 = r29 + 1u;
        }
    }
    return;
}
