#include "tc_rt.h"

void fn_8009608c(s32 param_1)
{
    u32 r4 = 0;
    r4 = rd32((u32)param_1 + 0xf8u);
    wr32((u32)param_1 + 0xf4u, rd32((u32)param_1 + 0xf4u) + 1u);
    if (r4 != 0u) {
        wr32((u32)param_1 + 0xf8u, r4 - 1u);
        return;
    }
    return;
}
