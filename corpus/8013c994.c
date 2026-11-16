#include "tc_rt.h"

u32 fn_8013c994(s32 param_1)
{
    u32 r4 = 0;
    r4 = (u32)param_1 - 0x295u;
    return (((~r4 | 2u) - (((2u - r4) >> 1u) & 0x7fffffffu)) >> 0x1fu) & 1u;
}
