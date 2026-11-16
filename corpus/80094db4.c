#include "tc_rt.h"

void fn_80094db4(u32 param_1, s32 param_2, s32 param_3)
{
    TcArgs a = {0};
    wr32(param_1, (u32)param_2);
    wr32(param_1 + 4u, (u32)param_3);
    wr32(param_1 + 8u, (u32)param_2);
    wr32(param_1 + 0xcu, (u32)param_2 + (((u32)param_3 << 4u) & 0xfffffff0u) - 0x10u);
    a.r[0] = param_1;
    (void)tc_call(0x80094dd4u, &a);
    return;
}
