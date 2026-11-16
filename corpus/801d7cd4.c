#include "tc_rt.h"

void fn_801d7cd4(s32 param_1)
{
    wr32((u32)param_1 + 0xd00u, rd32((u32)param_1 + 0xd00u) + 1u);
    return;
}
