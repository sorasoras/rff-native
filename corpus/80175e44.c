#include "tc_rt.h"

void fn_80175e44(s32 param_1)
{
    u32 r3 = 0, r30 = 0;
    TcArgs a = {0};
    a.r[0] = 0x8046ae40u;
    a.r[1] = rd32((u32)param_1 + 0xf8u);
    r3 = tc_call(0x8013ecb4u, &a);
    r30 = r3;
    if (r3 != 0u) {
        a.r[0] = 0x8046ae40u;
        a.r[1] = rd32((u32)param_1 + 0xf8u);
        r3 = tc_call(0x8013ece4u, &a);
        a.r[0] = rd32((u32)param_1 + 0x78u);
        a.r[1] = r30;
        a.r[2] = r3;
        (void)tc_call(0x80040040u, &a);
        wr32((u32)param_1 + 0x74u, rd32((u32)param_1 + 0x74u) | 0x4000000u);
    }
    return;
}
