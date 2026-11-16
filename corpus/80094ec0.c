#include "tc_rt.h"

void fn_80094ec0(s32 param_1, s32 param_2)
{
    u32 ca = 0, r0 = 0, r4 = 0;
    wr32((u32)param_1 + 0x10u, rd32((u32)param_2 - 0x10u));
    wr32(rd32((u32)param_2 - 0x10u) + 4u, rd32((u32)param_2 - 0xcu));
    wr32(rd32((u32)param_2 - 0xcu), rd32((u32)param_2 - 0x10u));
    r4 = rd32((u32)param_2 - 0x10u);
    r0 = rd32(r4 + 4u) - r4;
    ca = ((s32)r0 < 0) && ((r0 & 0xfu) != 0u);
    r0 = (u32)((s32)r0 >> 4);
    r0 = (u32)((u64)r0 + (u64)ca) - rd32(r4 + 8u) - 1u;
    wr32(r4 + 0xcu, r0);
    return;
}
