#include "tc_rt.h"

s32 fn_80045b44(s32 param_1, s32 param_2)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r5 = 0;
    TcArgs a = {0};
    r0 = rd32((u32)param_1 + 0x14u);
    if (r0 == 0u) {
        r0 = 0u;
    } else {
        r0 = (u32)param_2 + r0;
    }
    r5 = rd32((u32)param_1 + 0x18u);
    wr32((u32)param_1 + 0x14u, r0);
    if (r5 == 0u) {
        r0 = 0u;
    } else {
        r0 = (u32)param_2 + r5;
    }
    r4 = rd32((u32)param_1 + 0x14u);
    wr32((u32)param_1 + 0x18u, r0);
    if (r4 != 0u) {
        a.r[0] = r4;
        a.r[1] = (u32)param_2;
        (void)tc_call(0x80045ad4u, &a);
    }
    r3 = rd32((u32)param_1 + 0x18u);
    if (r3 != 0u) {
        a.r[0] = r3;
        a.r[1] = (u32)param_2;
        (void)tc_call(0x80045b0cu, &a);
    }
    return param_1;
}
