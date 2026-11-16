#include "tc_rt.h"

void fn_80221fb0(s32 param_1, u32 param_2)
{
    if (rd32((u32)param_1 + 0xbcu) == 0u) {
        wr32((u32)param_1 + 0xc0u, param_2);
        wr32((u32)param_1 + 0xbcu, 2u);
        return;
    }
    return;
}
