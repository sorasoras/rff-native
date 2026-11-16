#include "tc_rt.h"

u32 fn_802d7ff8(s32 param_1)
{
    return (u32)rd8(rd32(rd32((u32)param_1 + 0x14u) + 8u) + 1u);
}
