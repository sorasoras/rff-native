#include "tc_rt.h"

void fn_801c36bc(s32 param_1, u32 param_2)
{
    u32 r0 = 0;
    wr32((u32)param_1 + ((rd32((u32)param_1 + 0x30u) << 2u) & 0xfffffffcu) + 0x18u, param_2);
    r0 = rd32((u32)param_1 + 0x30u) + 1u;
    wr32((u32)param_1 + 0x30u, r0);
    if ((s32)r0 > 4) {
        wr32((u32)param_1 + 0x30u, 0u);
        return;
    }
    return;
}
