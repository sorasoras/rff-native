#include "tc_rt.h"

void fn_801534d4(s32 param_1)
{
    u32 r0 = 0, r4 = 0;
    if (rd32((u32)param_1 + 4u) != 0u) {
        r0 = rd32((u32)param_1 + 0xcu);
        if (r0 == 0u) {
            r0 = 0u;
        } else {
            r0 = (u32)param_1 + r0;
        }
        r4 = rd32((u32)param_1 + 0x20u);
        wr32((u32)param_1 + 0xcu, r0);
        if (r4 == 0u) {
            r4 = 0u;
        } else {
            r4 = (u32)param_1 + r4;
        }
        wr32((u32)param_1 + 0x20u, r4);
        wr32((u32)param_1 + 4u, 0u);
        return;
    }
    return;
}
