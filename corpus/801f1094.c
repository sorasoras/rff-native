#include "tc_rt.h"

void fn_801f1094(s32 param_1, u32 param_2)
{
    wr32((u32)param_1 + 0x40u, param_2);
    wr32((u32)param_1 + 0x4cu, 0u);
    return;
}
