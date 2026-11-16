#include "tc_rt.h"

void fn_8004ce78(s32 param_1, s32 param_2)
{
    if ((u32)param_2 != 0u) {
        wr32((u32)param_1 + 0xf8u, rd32((u32)param_1 + 0xf8u) | 1u);
        return;
    }
    wr32((u32)param_1 + 0xf8u, rd32((u32)param_1 + 0xf8u) & 0xfffffffeu);
    return;
}
