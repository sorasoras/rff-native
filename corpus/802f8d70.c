#include "tc_rt.h"

void fn_802f8d70(s32 param_1, s32 param_2, s32 param_3)
{
    u32 c0lt = 0, r0 = 0, r4 = 0, r5 = 0;
    TcArgs a = {0};
    c0lt = param_3 < 1;
    if ((u32)param_3 == 1u) {
        r4 = (u32)param_2 + rd32((u32)param_1 + 0x18u);
    } else if (!c0lt) {
        if (param_3 >= 3) {
            return;
        }
        r4 = rd32((u32)param_1 + 0x70u) + rd32((u32)param_1 + 0x74u) - (u32)param_2;
    } else {
        if (param_3 < 0) {
            return;
        }
        r4 = (u32)param_2 + rd32((u32)param_1 + 0x70u);
    }
    r5 = rd32((u32)param_1 + 0x70u);
    if ((s32)r4 >= (s32)r5) {
        r0 = r5 + rd32((u32)param_1 + 0x74u);
        if ((s32)r4 > (s32)r0) {
            r4 = r0;
        }
    } else {
        r4 = r5;
    }
    a.r[0] = (u32)param_1;
    a.r[1] = r4;
    a.r[2] = 0u;
    (void)tc_call(0x802dfab8u, &a);
    return;
}
