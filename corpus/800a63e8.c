#include "tc_rt.h"

s32 fn_800a63e8(s32 param_1)
{
    return (s32)(rd32((u32)param_1 + 4u) - rd32((u32)param_1 + 0x10u));
}
