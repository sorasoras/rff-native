#include "tc_rt.h"

u32 fn_801d5604(s32 param_1)
{
    return rd32(rd32((u32)param_1 + 8u) + 0xcfcu);
}
