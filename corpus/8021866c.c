#include "tc_rt.h"

u32 fn_8021866c(s32 param_1)
{
    return rd32(rd32((u32)param_1 + 0x64u) + 0x5cu);
}
