#include "tc_rt.h"

void fn_8014d88c(s32 param_1, s32 param_2)
{
    u32 r0 = 0;
    r0 = rd32((u32)param_2 + 0xcu) + (u32)param_1;
    wr32((u32)param_2 + 4u, rd32((u32)param_2 + 4u) + (u32)param_1);
    wr32((u32)param_2 + 0xcu, r0);
    return;
}
