#include "tc_rt.h"

u32 fn_802691c4(u32 param_1, u32 param_2, s32 param_3)
{
    u32 r0 = 0;
    if ((u32)param_3 != 0u) {
        return 0x703u;
    }
    r0 = rd32(0x805029b0u);
    wr32(0x8038f468u, 1u);
    r0 = r0 | 0x400u;
    wr32(0x8038f470u, param_1);
    wr32(0x8038f474u, param_2);
    wr32(0x8038f464u, 1u);
    wr32(0x805029b0u, r0);
    wr32(0x805027acu, 0u);
    return 0u;
}
