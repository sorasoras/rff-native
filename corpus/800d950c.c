#include "tc_rt.h"

void fn_800d950c(u32 param_1, s32 param_2)
{
    (void)param_1;
    wr32((u32)param_2 + 8u, rd32((u32)param_2 + 8u) + 0x10000u);
    return;
}
