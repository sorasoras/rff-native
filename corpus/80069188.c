#include "tc_rt.h"

u32 fn_80069188(s32 param_1, s32 param_2)
{
    u32 r3 = 0;
    r3 = rd32((u32)param_1 + ((u32)param_2 * 0xacu) + 0x30cu);
    r3 = (((0u - r3) | r3) >> 0x1fu) & 1u;
    return r3;
}
