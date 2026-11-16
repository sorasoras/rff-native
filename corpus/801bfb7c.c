#include "tc_rt.h"

u32 fn_801bfb7c(s32 param_1)
{
    return rd32((((u32)param_1 << 3u) & 0xfffffff8u) - 0x7fb23b08u);
}
