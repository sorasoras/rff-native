#include "tc_rt.h"

s32 fn_802d7fd0(s32 param_1)
{
    u32 r4 = 0;
    r4 = rd32((u32)param_1 + 0x14u);
    return (s32)((u32)rd8(r4 + 0x14u) - (u32)rd8(r4 + 0x16u));
}
