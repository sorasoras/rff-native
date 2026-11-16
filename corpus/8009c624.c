#include "tc_rt.h"

u32 fn_8009c624(s32 param_1)
{
    return (u32)(s8)((rd32((u32)param_1 + 0x50u) >> 0x1fu) & 1u);
}
