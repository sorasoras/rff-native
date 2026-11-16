#include "tc_rt.h"

void fn_800803e8(s32 param_1, u32 param_2)
{
    u32 r0 = 0;
    r0 = rd32((u32)param_1 + 0x1d4u);
    wr32((u32)param_1 + 0x1d8u, param_2);
    if (param_2 > r0) {
        wr32((u32)param_1 + 0x1d8u, r0);
        return;
    }
    return;
}
