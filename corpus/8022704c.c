#include "tc_rt.h"

void fn_8022704c(s32 param_1, s32 param_2)
{
    u32 r3 = 0, r4 = 0, r5 = 0, r6 = 0, r31 = 0;
    TcArgs a = {0};
    r4 = (u32)param_2 - 0x20u;
    r6 = rd32(r4 + 4u);
    r31 = rd32(0x805714a4u) + ((u32)param_1 * 0xcu);
    r3 = rd32(r31 + 8u);
    if (r6 != 0u) {
        wr32(r6, rd32(r4));
    }
    r5 = rd32(r4);
    if (r5 == 0u) {
        r3 = rd32(r4 + 4u);
    } else {
        wr32(r5 + 4u, rd32(r4 + 4u));
    }
    wr32(r31 + 8u, r3);
    a.r[0] = rd32(r31 + 4u);
    a.r[1] = r4;
    r3 = tc_call(0x80226ea8u, &a);
    wr32(r31 + 4u, r3);
    return;
}
