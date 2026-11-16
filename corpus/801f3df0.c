#include "tc_rt.h"

void fn_801f3df0(s32 param_1, s32 param_2)
{
    u32 r5 = 0, r6 = 0, r7 = 0;
    r7 = 0u;
    r5 = (u32)param_1 + (rd32((u32)param_1 + 0xfb4u) * 0x48u) + (rd32((u32)param_1 + 0xfb8u) * 0xcu);
    r6 = r5 + 0x3c8u;
    r5 = rd32(r5 + 0x3c8u);
    while (r5 != r6) {
        if ((s32)r7 >= param_2) {
            wr32((u32)param_1 + 0xfd0u, r5);
            return;
        }
        r5 = rd32(r5);
        r7 = r7 + 1u;
    }
    wr32((u32)param_1 + 0xfd0u, r5);
    return;
}
