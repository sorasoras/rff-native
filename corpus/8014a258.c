#include "tc_rt.h"

u32 fn_8014a258(u32 param_1, s32 param_2)
{
    return rd32(rd32(0x805712fcu) + (rd32(param_1) * 0x418u) + (((u32)param_2 << 3u) & 0xfffffff8u) + 0x37cu);
}
