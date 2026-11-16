#include "tc_rt.h"

void fn_8003d7b0(s32 param_1, s32 param_2)
{
    u32 r0 = 0, r4 = 0;
    if ((u32)param_2 != 0u) {
        r4 = (((u32)param_1 & 0x20u) != 0u) ? 0u : (1u << ((u32)param_1 & 0x1fu));
        r0 = rd32(0x803be5fcu) | r4;
        wr32(0x803be5f8u, rd32(0x803be5f8u) | r4);
        wr32(0x803be5fcu, r0);
        return;
    }
    wr32(0x803be5f8u, rd32(0x803be5f8u) & ~((((u32)param_1 & 0x20u) != 0u) ? 0u : (1u << ((u32)param_1 & 0x1fu))));
    return;
}
