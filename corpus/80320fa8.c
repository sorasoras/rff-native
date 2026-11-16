#include "tc_rt.h"

void fn_80320fa8(u32 param_1, s32 param_2)
{
    if ((u32)param_2 == 0u) {
        wr32(param_1, 0u);
        wr32(param_1 + 4u, 0u);
        return;
    }
    wr32(param_1, rd32((u32)param_2 + 8u));
    wr32(param_1 + 4u, (u32)param_2);
    return;
}
