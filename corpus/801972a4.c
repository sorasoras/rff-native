#include "tc_rt.h"

void fn_801972a4(s32 param_1)
{
    u32 r5 = 0, r6 = 0, r7 = 0;
    r7 = 0u;
    r6 = 0u;
    while ((s32)r7 < (s32)rd32((u32)param_1 + 0xcu)) {
        r5 = rd32((u32)param_1 + 0x2cu);
        if (rd32(r5 + r6) != 0u) {
            wr32(r5 + r6, 0u);
        }
        r6 = r6 + 4u;
        r7 = r7 + 1u;
    }
    return;
}
