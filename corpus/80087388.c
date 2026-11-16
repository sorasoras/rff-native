#include "tc_rt.h"

void fn_80087388(s32 param_1, u32 param_2, s32 param_3)
{
    u32 r3 = 0, r28 = 0, r29 = 0, r31 = 0;
    TcArgs a = {0};
    r31 = (u32)param_1;
    r28 = 0u;
    r29 = rd32((u32)param_3 + 8u) - 1u;
    while ((s32)r28 < (s32)r29) {
        a.r[0] = (u32)param_3;
        a.r[1] = r28 + 1u;
        r3 = tc_call(0x80037988u, &a);
        a.r[0] = r3;
        a.r[1] = param_2;
        a.r[2] = 0u;
        r3 = tc_call(0x8004bfdcu, &a);
        wr32(r31 + 0x544u, r3);
        r31 = r31 + 4u;
        r28 = r28 + 1u;
        wr32((u32)param_1 + 0x72cu, rd32((u32)param_1 + 0x72cu) + 1u);
    }
    return;
}
