#include "tc_rt.h"

void fn_8014b7dc(s32 param_1)
{
    u32 c0eq = 0, r4 = 0;
    r4 = rd32((u32)param_1 + 0x170u);
    c0eq = r4 == 1u;
    r4 = r4 + 1u;
    if (c0eq && rd32((u32)param_1 + 0x168u) == 6u) {
        r4 = 0u;
    }
    if ((s32)r4 >= 3) {
        r4 = 0u;
    }
    wr32((u32)param_1 + 0x170u, r4);
    return;
}
