#include "tc_rt.h"

void fn_800dd8cc(s32 param_1)
{
    wr32((u32)param_1 + 0x168u, 1u);
    if ((u32)rd8(0x80492833u) >= 1u) {
        wr32((u32)param_1 + 0x170u, 1u);
        return;
    }
    wr32((u32)param_1 + 0x170u, 0u);
    return;
}
