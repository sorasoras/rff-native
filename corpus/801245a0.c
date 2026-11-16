#include "tc_rt.h"

void fn_801245a0(s32 param_1)
{
    u32 r4 = 0;
    r4 = rd32((u32)param_1 + 0x1cu);
    wr32((u32)param_1 + 0x20u, 0u);
    wr32((u32)param_1 + 0x24u, rd32(r4 + 0x74u));
    return;
}
