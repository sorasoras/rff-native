#include "tc_rt.h"

s32 fn_80149d7c(u32 param_1, s32 param_2)
{
    return (s32)(rd32(0x805712f0u) + (rd32(param_1) * 0x16cu) + ((u32)param_2 * 0x24u) + 0xcu);
}
