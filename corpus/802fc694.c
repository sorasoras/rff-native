#include "tc_rt.h"

u32 fn_802fc694(u32 param_1, s32 param_2)
{
    if ((u32)rd8(param_1) == 0u) {
        return 0u;
    }
    wr8(param_1 + 2u, (u8)param_2);
    return 1u;
}
