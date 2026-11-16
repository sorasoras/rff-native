#include "tc_rt.h"

u32 fn_8015a81c(s32 param_1)
{
    u32 r4 = 0;
    r4 = rd32((u32)param_1 + 0x14u);
    return (((0xffffffffu - r4) | (r4 + 1u)) >> 0x1fu) & 1u;
}
