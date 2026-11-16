#include "tc_rt.h"

void fn_80301aec(s32 param_1, s32 param_2)
{
    wr32((u32)param_1 + 0x28u, (u32)param_2 + 8u);
    return;
}
