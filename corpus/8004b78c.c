#include "tc_rt.h"

void fn_8004b78c(s32 param_1, u32 param_2, u32 param_3, u32 param_4)
{
    TcArgs a = {0};
    wr32((u32)param_1 + 0x14u, param_3);
    wr32((u32)param_1 + 0x18u, param_4);
    wr32((u32)param_1 + 0x1cu, 0u);
    a.r[0] = (u32)param_1;
    a.r[1] = param_2;
    (void)tc_call(0x80042618u, &a);
    return;
}
