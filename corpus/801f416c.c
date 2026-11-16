#include "tc_rt.h"

u32 fn_801f416c(s32 param_1)
{
    u32 r5 = 0, r6 = 0, r7 = 0;
    r5 = rd32((u32)param_1 + 0xfd0u);
    r7 = 0u;
    r6 = 0u;
    if (r5 != rd32((u32)param_1 + 0xfd4u) && r5 != (rd32((u32)param_1 + 0xfd8u) + 4u)) {
        r6 = 1u;
    }
    if (r6 != 0u && rd32(r5) != (rd32((u32)param_1 + 0xfd8u) + 4u)) {
        r7 = 1u;
    }
    return r7;
}
