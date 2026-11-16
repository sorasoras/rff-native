#include "tc_rt.h"

void fn_802f8208(s32 param_1, s32 param_2)
{
    u32 r0 = 0, r5 = 0;
    r5 = rd32((u32)param_1 + 0xa8u);
    r0 = rd32((u32)param_1 + 0xa4u) + (u32)param_2;
    wr32((u32)param_1 + 0xa4u, r0);
    if ((s32)r0 > (s32)r5) {
        wr32((u32)param_1 + 0xa4u, r5);
        return;
    }
    return;
}
