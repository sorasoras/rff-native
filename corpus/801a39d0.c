#include "tc_rt.h"

void fn_801a39d0(s32 param_1, u32 param_2)
{
    wr32((u32)param_1 + 0xf04u, param_2);
    wr32((u32)param_1 + 0xf00u, param_2);
    return;
}
