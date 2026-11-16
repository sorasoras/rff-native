#include "tc_rt.h"

void fn_8003df80(s32 param_1, s32 param_2)
{
    u32 r0 = 0, r3 = 0, r30 = 0, r31 = 0;
    TcArgs a = {0};
    r30 = 0u;
    r31 = (u32)param_1;
    wr32((u32)param_1 + 0x2cu, 0u);
    wr32((u32)param_1 + 0x30u, 0u);
    do {
        a.r[0] = rd32(r31 + 0x34u);
        a.r[1] = (u32)param_2;
        r3 = tc_call(0x80032054u, &a);
        r30 = r30 + 1u;
        wr32(r31 + 0x34u, r3);
        r31 = r31 + 4u;
    } while ((s32)r30 < 8);
    r0 = rd32((u32)param_1 + 0x18u);
    if (r0 == 0u) {
        r0 = 0u;
    } else {
        r0 = (u32)param_2 + r0;
    }
    wr32((u32)param_1 + 0x18u, r0);
    r30 = 0u;
    r31 = 0u;
    while ((s32)r30 < (s32)(s8)rd8((u32)param_1 + 0x17u)) {
        a.r[0] = rd32((u32)param_1 + 0x18u) + r31;
        a.r[1] = (u32)param_2;
        (void)tc_call(0x8003dec8u, &a);
        r31 = r31 + 0x10u;
        r30 = r30 + 1u;
    }
    return;
}
