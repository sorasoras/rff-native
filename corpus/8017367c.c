#include "tc_rt.h"

u32 fn_8017367c(s32 param_1)
{
    u32 r0 = 0;
    r0 = rd32((u32)param_1 + 0x120u);
    if (r0 == 0u || r0 == 2u) {
        wr32((u32)param_1 + 0x120u, 0u);
    } else {
        wr32((u32)param_1 + 0x120u, 1u);
    }
    return 1u;
}
