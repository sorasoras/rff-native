#include "tc_rt.h"

void fn_802f5fc0(s32 param_1)
{
    if ((u32)rd8((u32)param_1 + 0x79u) == 0u) {
        wr8((u32)param_1 + 0x78u, 1u);
        return;
    }
    return;
}
