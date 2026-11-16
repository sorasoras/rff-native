#include "tc_rt.h"

s32 fn_802cf340(s32 param_1)
{
    return (s32)(rd32((u32)param_1 + 0x58u) + ((rd32((u32)param_1 + 0x4cu) >> 0x17u) & 0x1e0u));
}
