#include "tc_rt.h"

void fn_802dc484(s32 param_1, u32 param_2)
{
    u32 r0 = 0, r5 = 0;
    wr8(rd32((u32)param_1 + 0x3fcu), rd8(param_2));
    r5 = rd32((u32)param_1 + 0x3fcu) + 1u;
    wr32((u32)param_1 + 0x3fcu, r5);
    wr8(r5, rd8(param_2 + 1u));
    r5 = rd32((u32)param_1 + 0x3fcu) + 1u;
    wr32((u32)param_1 + 0x3fcu, r5);
    wr8(r5, rd8(param_2 + 2u));
    r0 = rd32((u32)param_1 + 0x400u) + 1u;
    wr32((u32)param_1 + 0x3fcu, rd32((u32)param_1 + 0x3fcu) + 1u);
    wr32((u32)param_1 + 0x400u, r0);
    return;
}
