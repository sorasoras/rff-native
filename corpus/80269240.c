#include "tc_rt.h"

u32 fn_80269240(s32 param_1, s32 param_2)
{
    u32 r0 = 0;
    if ((u32)param_2 != 0u) {
        return 0x703u;
    }
    r0 = rd32(0x805029b0u);
    wr32(0x8038f468u, 0u);
    r0 = r0 | 0x400u;
    wr32(0x8038f46cu, (u32)param_1);
    wr32(0x8038f464u, 1u);
    wr32(0x805029b0u, r0);
    wr32(0x8038f46cu, rd32(0x8038f46cu) - 1u);
    wr32(0x805027acu, 0u);
    return 0u;
}
