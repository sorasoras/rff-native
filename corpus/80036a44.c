#include "tc_rt.h"

void fn_80036a44(s32 param_1, u32 param_2, u32 param_3)
{
    u32 r0 = 0, r3 = 0, r6 = 0;
    r6 = rd32((u32)param_1 + 0x28u);
    if (r6 != 0u && param_3 != 0u) {
        wr32(param_3, rd32(param_3) + r6);
    }
    r0 = rd32((u32)param_1 + 0x2cu);
    if (r0 != 0u) {
        if (param_2 == 0u) {
            return;
        }
        wr32(param_2, r0);
        return;
    }
    r3 = rd32((u32)param_1 + 0x28u);
    if (r3 == 0u) {
        return;
    }
    if (param_2 == 0u) {
        return;
    }
    wr32(param_2, rd32(param_2) - r3);
    return;
}
