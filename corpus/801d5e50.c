#include "tc_rt.h"

void fn_801d5e50(s32 param_1)
{
    TcArgs a = {0};
    a.r[0] = (u32)param_1;
    (void)tc_call(0x801d5530u, &a);
    wr32((u32)param_1 + 0x10u, 0u);
    wr32((u32)param_1 + 0x70u, 0u);
    return;
}
