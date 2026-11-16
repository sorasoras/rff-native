#include "tc_rt.h"

void fn_802db360(s32 param_1)
{
    wr32(rd32(0x805475ccu) + ((u32)(s8)rd8(rd32((u32)param_1 + 0x18u) - 0x7fab8a98u) * 0x64u), 0u);
    return;
}
