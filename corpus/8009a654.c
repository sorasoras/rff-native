#include "tc_rt.h"

void fn_8009a654(u32 param_1, u32 param_2, s32 param_3)
{
    u32 r0 = 0, r5 = 0, r6 = 0;
    r0 = rd32(0x80570708u);
    r6 = (u32)param_3 - 0x8du;
    r5 = (u32)ppc_divw((s32)r6, (s32)r0);
    r0 = r5 * r0;
    wr32(param_1, r5);
    r0 = r6 - r0;
    wr32(param_2, r0);
    return;
}
