#include "tc_rt.h"

void fn_802ab290(s32 param_1, s32 param_2)
{
    u32 r0 = 0;
    if ((u32)rd8((u32)param_2 + 6u) != 0u) {
        r0 = rd32((u32)param_2 + 0xcu);
        wr32((u32)param_1 + 0x40u, rd32((u32)param_2 + 8u));
        wr32((u32)param_1 + 0x44u, r0);
        r0 = rd32((u32)param_2 + 0x14u);
        wr32((u32)param_1 + 0x48u, rd32((u32)param_2 + 0x10u));
        wr32((u32)param_1 + 0x4cu, r0);
        r0 = rd32((u32)param_2 + 0x1cu);
        wr32((u32)param_1 + 0x50u, rd32((u32)param_2 + 0x18u));
        wr32((u32)param_1 + 0x54u, r0);
        return;
    }
    return;
}
