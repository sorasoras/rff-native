#include "tc_rt.h"

s32 fn_800bed54(s32 param_1, u32 param_2, s32 param_3)
{
    u32 r3 = 0, r28 = 0, r29 = 0, r30 = 0, r31 = 0;
    TcArgs a = {0};
    a.r[0] = param_2;
    r3 = tc_call(0x80037914u, &a);
    r31 = rd32(r3 + 8u);
    r29 = r3;
    r28 = 0u;
    r30 = (u32)param_1 + (((u32)param_3 << 4u) & 0xfffffff0u);
    while ((s32)r28 < (s32)r31) {
        a.r[0] = r29;
        a.r[1] = r28;
        r3 = tc_call(0x80037988u, &a);
        a.r[0] = r3;
        a.r[1] = 0u;
        r3 = tc_call(0x8004bf2cu, &a);
        wr32(r30 + 0x5cu, r3);
        r30 = r30 + 0x10u;
        r28 = r28 + 1u;
    }
    return (s32)r31;
}
