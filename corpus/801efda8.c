#include "tc_rt.h"

u32 fn_801efda8(s32 param_1)
{
    u32 r0 = 0;
    r0 = rd32((u32)param_1 + 0x120u);
    wr32((u32)param_1 + 0x124u, r0);
    if (r0 != 0u) {
        wr32((u32)param_1 + 0x120u, 1u);
    }
    return 1u;
}
