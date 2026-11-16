#include "tc_rt.h"

void fn_8003b424(s32 param_1, s32 param_2)
{
    u32 r0 = 0;
    r0 = rd32((u32)param_1 + 8u);
    if (r0 == 0u) {
        r0 = 0u;
    } else {
        r0 = (u32)param_2 + r0;
    }
    wr32((u32)param_1 + 8u, r0);
    return;
}
