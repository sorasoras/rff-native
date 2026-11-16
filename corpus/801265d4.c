#include "tc_rt.h"

void fn_801265d4(s32 param_1, s32 param_2)
{
    u32 r3 = 0, r28 = 0, r29 = 0, r30 = 0, r31 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    r28 = 0u;
    r30 = 0u;
    r29 = rd32(rd32((u32)param_2 + 0x2cu));
    while ((s32)r28 < (s32)rd32((u32)param_1 + 0xcu)) {
        r31 = rd32(rd32((u32)param_1 + 0x2cu) + r30);
        a.r[0] = r29;
        a.r[1] = (u32)rd16(r31 + 0xbcu);
        a.f[0] = f1;
        r3 = tc_call(rd32(rd32(r29 + 0xccu) + 0x10u), &a);
        if (r3 != 0u) {
            wr32(r31 + 0xa8u, (u32)param_1 + 0x44u);
            a.r[0] = r31;
            a.r[1] = 0u;
            f1 = tc_callf(0x80161d30u, &a);
        } else {
            wr32(r31 + 0xa8u, (u32)param_1 + 0x1acu);
            a.r[0] = r31;
            a.r[1] = 1u;
            f1 = tc_callf(0x80161d30u, &a);
        }
        r30 = r30 + 4u;
        r28 = r28 + 1u;
    }
    return;
}
