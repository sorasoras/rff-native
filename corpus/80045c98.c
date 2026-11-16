#include "tc_rt.h"

void fn_80045c98(s32 param_1)
{
    u32 r0 = 0, r4 = 0;
    if (rd32((u32)param_1 + 4u) == 0u) {
        return;
    }
    r4 = rd32((u32)param_1 + 8u);
    r0 = 0u;
    wr32((u32)param_1 + 4u, 0u);
    if (r4 != 0u) {
        r0 = (u32)param_1 + r4;
    }
    r4 = rd32((u32)param_1 + 0x18u);
    wr32((u32)param_1 + 8u, r0);
    if (r4 != 0u) {
        r0 = (u32)param_1 + r4;
    } else {
        r0 = 0u;
    }
    wr32((u32)param_1 + 0x18u, r0);
    return;
}
