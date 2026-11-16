#include "tc_rt.h"

void fn_8019a1f4(s32 param_1)
{
    TcArgs a = {0};
    a.r[0] = (u32)param_1 + 0x3c4u;
    (void)tc_call(0x8005250cu, &a);
    wr32((u32)param_1 + 0x3ecu, 1u);
    return;
}
