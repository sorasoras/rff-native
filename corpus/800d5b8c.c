#include "tc_rt.h"

u32 fn_800d5b8c(s32 param_1)
{
    u32 r4 = 0;
    r4 = rd32((u32)param_1 + 0x518u);
    return (((~r4 | 2u) - (((2u - r4) >> 1u) & 0x7fffffffu)) >> 0x1fu) & 1u;
}
