#include "tc_rt.h"

void fn_800803ac(s32 param_1, s32 param_2)
{
    if ((u32)param_2 != 0u) {
        wr32((u32)param_1 + 0x2bcu, 1u);
    } else {
        wr32((u32)param_1 + 0x2bcu, 0u);
    }
    wr32((u32)param_1 + 0x1a8u, (u32)param_2);
    return;
}
