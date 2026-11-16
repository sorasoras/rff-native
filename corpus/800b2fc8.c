#include "tc_rt.h"

void fn_800b2fc8(s32 param_1)
{
    wr32((u32)param_1 + 0xf00u, 0u);
    wr32((u32)param_1 + 0xe88u, 0u);
    wr32((u32)param_1 + 0xd60u, 0u);
    return;
}
