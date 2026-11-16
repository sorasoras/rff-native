#include "tc_rt.h"

void fn_8016d878(u32 param_1, s32 param_2)
{
    (void)param_1;
    wr32((u32)param_2 + 0x9cu, rd32((u32)param_2 + 0x9cu) | 0x20000000u);
    return;
}
