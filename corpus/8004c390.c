#include "tc_rt.h"

void fn_8004c390(s32 param_1)
{
    u32 r4 = 0;
    wr32((u32)param_1 + 0x28u, rd32(0x803c62dcu));
    r4 = rd32(0x803c62dcu);
    if (r4 != 0u) {
        wr32(r4 + 0x2cu, (u32)param_1);
    }
    if (rd32(0x803c62d8u) == 0u) {
        wr32(0x803c62d8u, (u32)param_1);
    }
    r4 = rd32(0x803c62e8u);
    wr32(0x803c62dcu, (u32)param_1);
    wr32(0x803c62e8u, r4 + 1u);
    return;
}
