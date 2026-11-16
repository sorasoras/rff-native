#include "tc_rt.h"

void fn_8019e1f0(s32 param_1)
{
    TcArgs a = {0};
    a.r[0] = (u32)param_1;
    (void)tc_call(0x8017b810u, &a);
    wr32((u32)param_1 + 0x128u, 0xau);
    wr32((u32)param_1 + 0x12cu, 0u);
    return;
}
