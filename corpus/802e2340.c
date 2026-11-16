#include "tc_rt.h"

void fn_802e2340(u32 param_1, s32 param_2)
{
    u32 r4 = 0, r5 = 0, r6 = 0;
    r6 = rd32((u32)param_2 + 4u);
    r5 = rd32((u32)param_2 + 8u);
    r4 = rd32((u32)param_2 + 0xcu);
    wr32(param_1, 0u);
    wr32(param_1 + 4u, r6);
    wr32(param_1 + 8u, r5);
    wr32(param_1 + 0xcu, r4);
    return;
}
