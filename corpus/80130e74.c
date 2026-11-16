#include "tc_rt.h"

void fn_80130e74(s32 param_1)
{
    u32 r0 = 0, r4 = 0;
    r4 = rd32((u32)param_1 + 0x54u);
    r0 = rd32((u32)param_1 + 0x48u);
    if ((s32)r0 >= (s32)r4) {
        wr32((u32)param_1 + 0x48u, r4 - 1u);
        return;
    }
    if ((s32)r0 < 0) {
        wr32((u32)param_1 + 0x48u, 0u);
        return;
    }
    return;
}
