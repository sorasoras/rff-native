#include "tc_rt.h"

void fn_80266778(s32 param_1, s32 param_2, s32 param_3)
{
    u32 r0 = 0, r3 = 0, r29 = 0, r30 = 0, r31 = 0;
    TcArgs a = {0};
    r29 = 0u;
    r3 = 0u;
    while (r3 == 0u && (s32)r29 < param_3) {
        r3 = rd32((u32)param_1 + 0xcu);
        r30 = 1u;
        r31 = 0u;
        r0 = rd32((u32)param_1 + 8u) - r3;
        if (r0 < 1u) {
            r31 = 0x302u;
            r30 = r0;
        }
        a.r[0] = (u32)param_2 + r29;
        a.r[1] = (u32)param_1 + (r3 + 0x10u);
        a.r[2] = r30;
        (void)tc_call(0x8000449cu, &a);
        r3 = r31;
        r29 = r29 + 1u;
        wr32((u32)param_1 + 0xcu, rd32((u32)param_1 + 0xcu) + r30);
    }
    return;
}
