#include "tc_rt.h"

void fn_801914a8(s32 param_1, u32 param_2, u32 param_3)
{
    wr32((u32)param_1 + 0x180u, param_2);
    wr32((u32)param_1 + 0x184u, param_3);
    return;
}
