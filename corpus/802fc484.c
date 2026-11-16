#include "tc_rt.h"

s32 fn_802fc484(s32 param_1)
{
    return (s32)(rd32((u32)param_1 + 0x10u) - rd32((u32)param_1 + 0x14u));
}
