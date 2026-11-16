#include "tc_rt.h"

void fn_800fe538(s32 param_1, s32 param_2)
{
    if ((u32)param_2 != 0u) {
        wr32((u32)param_2 + 0xc4u, (u32)param_1);
        wr32((u32)param_2 + 0xc8u, rd32((u32)param_1 + 0xc8u));
    }
    wr32((u32)param_1 + 0xc8u, (u32)param_2);
    if ((u32)param_2 != 0u) {
        wr32((u32)param_2 + 0xc4u, (u32)param_2);
        return;
    }
    return;
}
