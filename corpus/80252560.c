#include "tc_rt.h"

s32 fn_80252560(s32 param_1)
{
    return (s32)(((rd32((u32)param_1 + 8u) & 0x3ffu) + 1u) & 0xffffu);
}
