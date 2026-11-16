#include "tc_rt.h"

void fn_8030c8bc(u32 param_r3)
{
    u32 r3 = 0, r28 = 0, r29 = 0, r30 = 0, r31 = 0;
    TcArgs a = {0};
    if (rd32(param_r3 + 0xa4u) != 1u) {
        r31 = param_r3;
        r29 = 0u;
        while ((s32)r29 < (s32)rd32(param_r3 + 0x8cu)) {
            r30 = r31;
            r28 = 0u;
            while ((s32)r28 < (s32)rd32(param_r3 + 0x90u)) {
                r3 = rd32(r30 + 0xcu);
                if (r3 != 0u) {
                    a.r[0] = r3;
                    a.r[1] = 0x10u;
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
