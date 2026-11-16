#include "tc_rt.h"

u32 fn_8017c25c(u32 param_1, s32 param_2)
{
    (void)param_1;
    return rd32((((u32)param_2 << 3u) & 0xfffffff8u) - 0x7fc90de8u);
}
