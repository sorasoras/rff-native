#include "tc_rt.h"

void fn_802fabdc(u32 param_1, u32 param_2, s32 param_3)
{
    u32 r3 = 0, r4 = 0, r5 = 0, r29 = 0;
    TcArgs a = {0};
    r29 = param_1;
    r3 = tc_call(0x8022c2b0u, &a);
    r5 = rd32(param_1);
    r4 = param_2 + (u32)param_3;
    while (r5 != 0u) {
        if (param_2 <= r5 && r5 < r4) {
            wr32(r29, rd32(r5));
        } else {
            r29 = r5;
        }
        r5 = rd32(r5);
    }
    a.r[0] = r3;
    (void)tc_call(0x8022c2d8u, &a);
    return;
}
