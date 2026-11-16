#include "tc_rt.h"

u32 fn_8020017c(s32 param_1)
{
    u32 c0lt = 0, r0 = 0, r4 = 0;
    r0 = rd32((u32)param_1 + 0x6cu);
    r4 = 0u;
    c0lt = (s32)r0 < 1;
    if (r0 == 1u) {
        r4 = rd32(rd32((u32)param_1 + 0x28u) + 0x2cu);
    } else if (!c0lt) {
        if ((s32)r0 < 3) {
            r4 = rd32(rd32((u32)param_1 + 0x28u) + 0x30u);
        }
    } else if ((s32)r0 >= 0) {
        r4 = rd32((u32)param_1 + 0x68u);
    }
    return r4;
}
