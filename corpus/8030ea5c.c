#include "tc_rt.h"

void fn_8030ea5c(u32 param_1, s32 param_2)
{
    u32 r4 = 0;
    wr32(param_1, 0u);
    r4 = rd32((u32)param_2 + 0x10u) + (u32)param_2;
    if (r4 != 0u) {
        wr32(param_1, r4 + 8u);
        return;
    }
    return;
}
