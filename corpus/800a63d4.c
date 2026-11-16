#include "tc_rt.h"

s32 fn_800a63d4(s32 param_1)
{
    return (s32)(rd32((u32)param_1 + 8u) + rd32((u32)param_1 + 0x10u));
}
