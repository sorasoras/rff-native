#include "tc_rt.h"

u32 fn_8014a110(u32 param_1, s32 param_2)
{
    return rd32(rd32(0x805712f8u) + (rd32(param_1) * 0xacu) + (((u32)param_2 << 3u) & 0xfffffff8u) + 0x74u);
}
