#include "tc_rt.h"

void fn_801b3eb4(s32 param_1, s32 param_2)
{
    TcArgs a = {0};
    if (rd32((u32)param_1 + 0x1284u) != (u32)param_2) {
        a.r[0] = (u32)param_1;
        (void)tc_call(0x801b3ea8u, &a);
    }
    wr32((u32)param_1 + 0x1284u, (u32)param_2);
    return;
}
