#include "tc_rt.h"

void fn_8007020c(s32 param_1)
{
    wr32((u32)param_1 + 0x4cu, 0u);
    wr32((u32)param_1 + 0x60u, 0u);
    return;
}
