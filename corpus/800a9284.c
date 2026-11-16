#include "tc_rt.h"

void fn_800a9284(s32 param_1)
{
    u32 r4 = 0;
    r4 = rd32((u32)param_1 + 0x2b8u);
    wr32((u32)param_1 + 0x2b0u, 0u);
    wr32((u32)param_1 + 0x2b4u, r4);
    return;
}
