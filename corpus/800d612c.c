#include "tc_rt.h"

void fn_800d612c(s32 param_1, u32 param_2, u32 param_3)
{
    u32 r6 = 0;
    r6 = rd32((u32)param_1 + 0xa4u);
    wr32((u32)param_1 + 0x9cu, param_2);
    wr32((u32)param_1 + 0xa0u, param_3);
    wr32((u32)param_1 + 0x98u, 0u);
    if (r6 != 0u) {
        wr32(r6 + 0xcu, 0u);
        return;
    }
    return;
}
