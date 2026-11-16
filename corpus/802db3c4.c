#include "tc_rt.h"

void fn_802db3c4(s32 param_1, u32 param_2)
{
    u32 r3 = 0;
    r3 = rd32(0x805475ccu) + ((u32)(s8)rd8(rd32((u32)param_1 + 0x18u) - 0x7fab8a98u) * 0x64u);
    wr32(r3 + 0xcu, param_2);
    wr32(r3 + 4u, rd32(r3 + 4u) | 0x40000000u);
    return;
}
