#include "tc_rt.h"

void fn_8022f068(s32 param_1)
{
    u32 r0 = 0, r4 = 0, r5 = 0, r6 = 0;
    r5 = rd32((u32)param_1 + 0x2e0u);
    r4 = rd32((u32)param_1 + 0x2dcu);
    r6 = rd32((u32)param_1 + 0x2e4u);
    if (r5 == 0u) {
        wr32(r4 + 4u, r6);
    } else {
        wr32(r5 + 0x2e4u, r6);
    }
    if (r6 == 0u) {
        wr32(r4, r5);
    } else {
        wr32(r6 + 0x2e0u, r5);
    }
    if (rd32(r4) == 0u) {
        r0 = 0x1fu - rd32((u32)param_1 + 0x2d0u);
        r0 = ((r0 & 0x20u) != 0u) ? 0u : (1u << (r0 & 0x1fu));
        r0 = rd32(0x80571510u) & ~r0;
        wr32(0x80571510u, r0);
    }
    wr32((u32)param_1 + 0x2dcu, 0u);
    return;
}
