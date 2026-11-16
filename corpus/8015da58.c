#include "tc_rt.h"

u32 fn_8015da58(s32 param_1)
{
    wr32((u32)param_1 + 0x120u, 1u);
    wr32((u32)param_1 + 0x14cu, 0u);
    return 1u;
}
