#include "tc_rt.h"

void fn_80258774(s32 param_1)
{
    u32 r0 = 0, r4 = 0, r5 = 0;
    r4 = rd32((u32)param_1 + 0x18u);
    r5 = rd32((u32)param_1 + 0x20u);
    r0 = r4 & rd32((u32)param_1 + 0x2cu);
    wr32((u32)param_1 + 0x24u, rd32((u32)param_1 + 0x1cu));
    r0 = r5 - r0;
    wr32((u32)param_1 + 0x28u, r0);
    wr32((u32)param_1 + 0x34u, r4);
    return;
}
