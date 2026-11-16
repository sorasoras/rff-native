#include "tc_rt.h"

void fn_80036828(s32 param_1)
{
    u32 r0 = 0;
    r0 = rd32((u32)param_1 + 4u);
    if (r0 != 0u) {
        r0 = (u32)param_1 + r0;
        wr32((u32)param_1 + 4u, r0);
    }
    r0 = rd32((u32)param_1 + 8u);
    if (r0 != 0u) {
        r0 = (u32)param_1 + r0;
        wr32((u32)param_1 + 8u, r0);
        return;
    }
    return;
}
