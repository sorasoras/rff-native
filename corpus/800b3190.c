#include "tc_rt.h"

void fn_800b3190(s32 param_1)
{
    wr32((u32)param_1 + 0xf00u, rd32((u32)param_1 + 0xf00u) + 1u);
    return;
}
