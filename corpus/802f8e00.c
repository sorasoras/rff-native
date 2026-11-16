#include "tc_rt.h"

s32 fn_802f8e00(s32 param_1)
{
    return (s32)(rd32((u32)param_1 + 0x18u) - rd32((u32)param_1 + 0x70u));
}
