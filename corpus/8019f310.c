#include "tc_rt.h"

u32 fn_8019f310(s32 param_1)
{
    wr32((u32)param_1 + 0x120u, 0u);
    return 1u;
}
