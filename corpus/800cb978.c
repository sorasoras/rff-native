#include "tc_rt.h"

u32 fn_800cb978(s32 param_1, s32 param_2)
{
    u32 r3 = 0;
    r3 = rd32((u32)param_1 + 0x10a0u);
    if (r3 == 0u) {
        return 0u;
    }
    r3 = (u32)param_2 - ((u32)ppc_divw(param_2, (s32)r3) * r3);
    r3 = (((0u - r3) | r3) >> 0x1fu) & 1u;
    return r3;
}
