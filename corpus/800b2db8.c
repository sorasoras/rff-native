#include "tc_rt.h"

void fn_800b2db8(s32 param_1)
{
    u32 r0 = 0, r5 = 0;
    r5 = rd32((u32)param_1 + 0x1464u);
    if (r5 != 0u) {
        r0 = rd32((u32)param_1 + 0x1460u);
        wr32((u32)param_1 + 0x1464u, rd32(r5 + 0x20u));
        wr32(r5 + 0x20u, r0);
        wr32((u32)param_1 + 0x1460u, r5);
        return;
    }
    return;
}
