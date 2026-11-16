#include "tc_rt.h"

u32 fn_800f6264(s32 param_1)
{
    return rd32((u32)param_1 + 0x12cu) & 0xffffu;
}
