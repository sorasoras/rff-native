#include "tc_rt.h"

void fn_800d6150(s32 param_1)
{
    u32 r3 = 0;
    if (rd32((u32)param_1 + 0x98u) == 0u) {
        wr32((u32)param_1 + 0x9cu, 0u);
        wr32((u32)param_1 + 0x98u, 1u);
    }
    r3 = rd32((u32)param_1 + 0xa4u);
    if (r3 != 0u) {
        wr32(r3 + 0xcu, 1u);
        return;
    }
    return;
}
