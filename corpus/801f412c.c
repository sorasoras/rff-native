#include "tc_rt.h"

u32 fn_801f412c(s32 param_1)
{
    u32 r4 = 0, r5 = 0, r6 = 0;
    r6 = 0u;
    r4 = rd32((u32)param_1 + 0xfd0u);
    r5 = 0u;
    if (r4 != rd32((u32)param_1 + 0xfd4u) && r4 != rd32(rd32((u32)param_1 + 0xfd8u) + 4u)) {
        r5 = 1u;
    }
    if (r5 != 0u) {
        r6 = 1u;
    }
    return r6;
}
