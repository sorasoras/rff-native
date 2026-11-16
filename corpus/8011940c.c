#include "tc_rt.h"

void fn_8011940c(s32 param_1, s32 param_2)
{
    wr32((u32)param_1 + 0x20u, (u32)param_2);
    if ((u32)param_2 == 0u) {
        wr32((u32)param_1 + 8u, 0u);
        return;
    }
    wr32((u32)param_1 + 8u, 4u);
    return;
}
