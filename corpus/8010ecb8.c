#include "tc_rt.h"

void fn_8010ecb8(s32 param_1, s32 param_2, u32 param_3)
{
    u32 r3 = 0;
    if (param_2 < 16) {
        r3 = (u32)param_1 + (((u32)param_2 << 3u) & 0xfffffff8u);
        wr32(r3 + 4u, 1u);
        wr32(r3, param_3);
        return;
    }
    return;
}
