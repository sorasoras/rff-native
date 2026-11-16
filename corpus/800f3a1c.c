#include "tc_rt.h"

void fn_800f3a1c(s32 param_1)
{
    TcArgs a = {0};
    wr32((u32)param_1 + 0x128u, 0u);
    wr32((u32)param_1 + 0x12cu, 1u);
    wr32((u32)param_1 + 0x124u, 0u);
    a.r[0] = (u32)param_1;
    (void)tc_call(0x80083e44u, &a);
    return;
}
