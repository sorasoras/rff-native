#include "tc_rt.h"

u32 fn_802d8050(s32 param_1)
{
    u32 r4 = 0;
    r4 = rd32((u32)param_1 + 0x14u);
    return (((u32)rd16(r4 + 4u) << 0x10u) & 0xffff0000u) | (((u32)rd8(r4 + 6u) << 8u) & 0xff00u);
}
