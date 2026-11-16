#include "tc_rt.h"

void fn_8030c2e4(u32 param_r3)
{
    u32 r3 = 0, r4 = 0, r28 = 0, r29 = 0, r30 = 0, r31 = 0;
    TcArgs a = {0};
    if ((u32)rd8(param_r3 + 0x9eu) != 0u) {
        r29 = param_r3;
        r30 = 0u;
        while ((s32)r30 < (s32)rd32(param_r3 + 0x8cu)) {
            r28 = r29;
            r31 = 0u;
            while ((s32)r31 < (s32)rd32(param_r3 + 0x90u)) {
                r3 = rd32(r28 + 0xcu);
                if (r3 != 0u) {
                    r3 = rd32(r3);
                    r4 = 0u;
                    if (r3 != 0u && (u32)rd16(r3 + 0x38u) == 1u) {
                        r4 = 1u;
                    }
                    if (r4 != 0u) {
                        a.r[0] = r3;
                        a.r[1] = 0u;
                        (void)tc_call(0x802462c8u, &a);
                    }
                }
                r28 = r28 + 4u;
                r31 = r31 + 1u;
            }
            r29 = r29 + 0x10u;
            r30 = r30 + 1u;
        }
        wr8(param_r3 + 0x9eu, 0u);
    }
    wr8(param_r3 + 0xa0u, 0u);
    wr8(param_r3 + 0x9fu, 0u);
    wr8(param_r3 + 0x9du, 0u);
    return;
}
