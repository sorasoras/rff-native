#include "tc_rt.h"

u32 fn_800a012c(u32 param_1, u32 param_2, u32 param_3)
{
    wr8(param_1, (u8)((param_3 >> 2u) & 3u));
    wr8(param_2, (u8)(param_3 & 3u));
    return 1u;
}
