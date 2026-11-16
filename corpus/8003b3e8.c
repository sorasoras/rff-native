#include "tc_rt.h"

void fn_8003b3e8(s32 param_1, s32 param_2)
{
    u32 r0 = 0, r5 = 0;
    r0 = rd32((u32)param_1 + 0x70u);
    if (r0 == 0u) {
        r0 = 0u;
    } else {
        r0 = (u32)param_2 + r0;
    }
    r5 = rd32((u32)param_1 + 0x74u);
    wr32((u32)param_1 + 0x70u, r0);
    if (r5 == 0u) {
        r0 = 0u;
    } else {
        r0 = (u32)param_2 + r5;
    }
    wr32((u32)param_1 + 0x74u, r0);
    return;
}
