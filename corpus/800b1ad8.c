#include "tc_rt.h"

void fn_800b1ad8(s32 param_1, u32 param_2)
{
    u32 r0 = 0;
    r0 = rd32((u32)param_1 + 0xed4u);
    if ((s32)r0 < 10) {
        r0 = (r0 << 2u) & 0xfffffffcu;
        wr32((u32)param_1 + r0 + 0xed8u, param_2);
        wr32((u32)param_1 + 0xed4u, rd32((u32)param_1 + 0xed4u) + 1u);
        return;
    }
    return;
}
