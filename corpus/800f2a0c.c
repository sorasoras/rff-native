#include "tc_rt.h"

s32 fn_800f2a0c(s32 param_1)
{
    return (s32)(rd32(0x80571238u) + (((u32)param_1 << 3u) & 0xfffffff8u));
}
