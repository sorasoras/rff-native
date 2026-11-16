#include "tc_rt.h"

void fn_800b3290(s32 param_1, u32 param_2)
{
    u32 r0 = 0;
    r0 = rd32((u32)param_1 + 0xe7cu) + 1u;
    wr32((u32)param_1 + 0xe7cu, r0);
    if ((s32)r0 >= 5) {
        wr32((u32)param_1 + 0xe7cu, 0u);
    }
    wr32((u32)param_1 + ((rd32((u32)param_1 + 0xe7cu) << 2u) & 0xfffffffcu) + 0xe68u, param_2);
    return;
}
