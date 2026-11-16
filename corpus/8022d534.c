#include "tc_rt.h"

void fn_8022d534(s32 param_1)
{
    TcArgs a = {0};
    a.r[0] = (u32)param_1;
    (void)tc_call(0x8022efd4u, &a);
    wr32((u32)param_1 + 8u, 0u);
    wr32((u32)param_1 + 0xcu, 0u);
    return;
}
