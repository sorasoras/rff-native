#include "tc_rt.h"

u32 fn_802001cc(s32 param_1)
{
    u32 r0 = 0, r4 = 0;
    r0 = rd32((u32)param_1 + 0x6cu);
    r4 = rd32((u32)param_1 + 0x68u);
    if (r0 == 1u) {
        r4 = rd32(rd32((u32)param_1 + 0x28u) + 0x2cu);
    } else {
        if (r0 == 2u) {
            r4 = rd32(rd32((u32)param_1 + 0x28u) + 0x30u);
        }
    }
    return r4;
}
