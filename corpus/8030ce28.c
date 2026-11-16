#include "tc_rt.h"

void fn_8030ce28(u32 param_r3)
{
    u32 r3 = 0, r28 = 0, r29 = 0, r30 = 0, r31 = 0;
    TcArgs a = {0};
    r29 = 0u;
    r31 = 0u;
    while ((s32)r29 < (s32)rd32(param_r3 + 0x90u)) {
        r30 = param_r3 + r31;
        r28 = 0u;
        while ((s32)r28 < (s32)rd32(param_r3 + 0x8cu)) {
            r3 = rd32(r30 + 0xcu);
            if (r3 != 0u) {
                a.r[0] = r3;
                (void)tc_call(0x802f2724u, &a);
            }
            r30 = r30 + 0x10u;
            r28 = r28 + 1u;
        }
        r31 = r31 + 4u;
        r29 = r29 + 1u;
    }
    return;
}
