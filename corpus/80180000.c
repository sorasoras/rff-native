#include "tc_rt.h"

void fn_80180000(s32 param_1, u32 param_2)
{
    if (rd32((u32)param_1 + 0xc0u) == 0u) {
        wr32((u32)param_1 + 0xc0u, param_2);
        return;
    }
    if (rd32((u32)param_1 + 0xc4u) == 0u) {
        wr32((u32)param_1 + 0xc4u, param_2);
        return;
    }
    return;
}
