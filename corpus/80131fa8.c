#include "tc_rt.h"

void fn_80131fa8(s32 param_1)
{
    u32 r3 = 0, r6 = 0, r28 = 0, r29 = 0, r30 = 0, r31 = 0;
    TcArgs a = {0};
    r28 = 0u;
    r30 = 0u;
    r29 = rd32(rd32((u32)param_1 + 0x454u) + 0xcu);
    while ((s32)r28 < (s32)r29) {
        r31 = rd32(rd32(rd32((u32)param_1 + 0x454u) + 0x2cu) + r30);
        a.r[0] = (u32)param_1;
        a.r[1] = r31;
        r3 = tc_call(0x80131becu, &a);
        if (r3 != 0u) {
            r6 = rd32((u32)param_1 + 0x454u);
            wr32(rd32(rd32(r6 + 0x2cu) + r30) + 0xa8u, r6 + 0x3cu);
            a.r[0] = r31;
            a.r[1] = 0u;
            (void)tc_call(0x80161d30u, &a);
        } else {
            r6 = rd32((u32)param_1 + 0x454u);
            wr32(rd32(rd32(r6 + 0x2cu) + r30) + 0xa8u, r6 + 0x1a4u);
            a.r[0] = r31;
            a.r[1] = 1u;
            (void)tc_call(0x80161d30u, &a);
        }
        r30 = r30 + 4u;
        r28 = r28 + 1u;
    }
    return;
}
