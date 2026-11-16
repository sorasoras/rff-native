#include "tc_rt.h"

void fn_8004c204(s32 param_1)
{
    u32 r4 = 0;
    wr32((u32)param_1 + 0x28u, rd32(0x803c62d4u));
    r4 = rd32(0x803c62d4u);
    if (r4 != 0u) {
        wr32(r4 + 0x2cu, (u32)param_1);
    }
    if (rd32(0x803c62d0u) == 0u) {
        wr32(0x803c62d0u, (u32)param_1);
    }
    r4 = rd32(0x803c62e4u);
    wr32(0x803c62d4u, (u32)param_1);
    wr32(0x803c62e4u, r4 + 1u);
    return;
}
