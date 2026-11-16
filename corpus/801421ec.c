#include "tc_rt.h"

void fn_801421ec(s32 param_1)
{
    wr32((u32)param_1 + 0x28u, 0u);
    wr32((u32)param_1 + 0x2cu, 0u);
    wr32((u32)param_1 + 0x3cu, 0u);
    wr32((u32)param_1 + 0x34u, 0u);
    wr8((u32)param_1 + 0x38u, 0u);
    wr32((u32)param_1 + 0x40u, 0u);
    wr32((u32)param_1 + 0x48u, 0u);
    return;
}
