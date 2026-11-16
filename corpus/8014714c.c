#include "tc_rt.h"

void fn_8014714c(s32 param_1, s32 param_2)
{
    wr32((u32)param_1 + (((u32)param_2 << 2u) & 0xfffffffcu) + 4u, 1u);
    return;
}
