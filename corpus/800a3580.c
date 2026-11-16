#include "tc_rt.h"

void fn_800a3580(s32 param_1, s32 param_2)
{
    if (param_2 < 2) {
        wr32((u32)param_1 + 0x3314u, (u32)param_2);
        return;
    }
    return;
}
