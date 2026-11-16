#include "tc_rt.h"

s32 fn_801ecd64(u32 param_1, s32 param_2)
{
    return (s32)(rd32(rd32(param_1) + 8u) + (((u32)param_2 << 5u) & 0xffffffe0u));
}
