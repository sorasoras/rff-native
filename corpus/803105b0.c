#include "tc_rt.h"

u32 fn_803105b0(s32 param_1)
{
    u32 r3 = 0;
    r3 = (u32)rd8((u32)param_1 + 0xeau);
    r3 = (((0u - r3) | r3) >> 0x1fu) & 1u;
    return r3;
}
