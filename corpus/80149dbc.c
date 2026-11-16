#include "tc_rt.h"

void fn_80149dbc(u32 param_1, u32 param_2, s32 param_3)
{
    u32 r0 = 0, r5 = 0;
    r5 = rd32(0x805712f0u) + (rd32(param_2) * 0x16cu) + ((u32)param_3 * 0x24u);
    r0 = rd32(r5 + 0x20u);
    wr32(param_1, rd32(r5 + 0x1cu));
    wr32(param_1 + 4u, r0);
    wr32(param_1 + 8u, rd32(r5 + 0x24u));
    return;
}
