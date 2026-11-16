#include "tc_rt.h"

s32 fn_80131738(s32 param_1)
{
    return (s32)((rd32((u32)param_1 + 0x8e0u) << 1u) & 0xfffffffeu);
}
