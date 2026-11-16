#include "tc_rt.h"

void fn_80094dd4(s32 param_1)
{
    u32 ca = 0, r0 = 0, r6 = 0, r7 = 0;
    r6 = rd32((u32)param_1 + 8u);
    r7 = rd32((u32)param_1 + 0xcu);
    wr32(r6 + 4u, r7);
    r0 = r7 - r6;
    ca = ((s32)r0 < 0) && ((r0 & 0xfu) != 0u);
    r0 = (u32)((s32)r0 >> 4);
    wr32(r6, r7);
    r0 = (u32)((u64)r0 + (u64)ca) - 1u;
    wr32(r6 + 8u, 0u);
    wr32(r6 + 0xcu, r0);
    wr32(r7 + 4u, r6);
    wr32(r7, r6);
    wr32(r7 + 8u, 0u);
    wr32(r7 + 0xcu, 0u);
    wr32((u32)param_1 + 0x10u, r6);
    return;
}
