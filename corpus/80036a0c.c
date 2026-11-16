#include "tc_rt.h"

void fn_80036a0c(s32 param_1)
{
    u32 r4 = 0;
    r4 = rd32((u32)param_1 + 0x30u);
    if (r4 != 0u) {
        wr32(r4 + 0x3cu, 0u);
    }
    wr32((u32)param_1 + 0x30u, 0u);
    return;
}
