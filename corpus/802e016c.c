#include "tc_rt.h"

s32 fn_802e016c(s32 param_1)
{
    return (s32)(s8)rd8(rd32((u32)param_1 + 0x14u) + 1u);
}
