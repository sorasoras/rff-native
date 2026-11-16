#include "tc_rt.h"

void fn_8016a3cc(u32 param_1, s32 param_2)
{
    (void)param_1;
    wr32((u32)param_2 + 0xe94u, 0u);
    wr32((u32)param_2 + 0x1b0u, 1u);
    return;
}
