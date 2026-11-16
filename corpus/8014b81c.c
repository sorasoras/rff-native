#include "tc_rt.h"

void fn_8014b81c(s32 param_1)
{
    u32 r4 = 0;
    r4 = rd32((u32)param_1 + 0x170u) + 1u;
    if ((s32)r4 >= 3) {
        r4 = 1u;
    }
    wr32((u32)param_1 + 0x170u, r4);
    return;
}
