#include "tc_rt.h"

void fn_80070804(s32 param_1)
{
    TcArgs a = {0};
    wr32((u32)param_1 + 0x98u, 0u);
    wr32((u32)param_1 + 0xa0u, 0u);
    wr32((u32)param_1 + 0x9cu, 0u);
    wr32((u32)param_1 + 0xa8u, 0u);
    wr32((u32)param_1 + 0xa4u, 0u);
    a.r[0] = (u32)param_1;
    (void)tc_call(0x80070a14u, &a);
    return;
}
