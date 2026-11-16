#include "tc_rt.h"

u32 fn_800b1048(s32 param_1, s32 param_2)
{
    u32 r3 = 0;
    r3 = rd32((u32)param_1 + 0x1628u) & ((((u32)param_2 & 0x20u) != 0u) ? 0u : (1u << ((u32)param_2 & 0x1fu)));
    r3 = (((0u - r3) | r3) >> 0x1fu) & 1u;
    return r3;
}
