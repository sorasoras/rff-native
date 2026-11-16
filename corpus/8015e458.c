#include "tc_rt.h"

void fn_8015e458(s32 param_1, u32 param_2, u32 param_3, s32 param_4)
{
    (void)param_2;
    (void)param_3;
    if ((u32)param_4 != 0u) {
        wr32((u32)param_1 + 0x140u, (u32)param_4);
        return;
    }
    return;
}
