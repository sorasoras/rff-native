#include "tc_rt.h"

void fn_8007d7c4(s32 param_1)
{
    TcArgs a = {0};
    a.r[0] = (u32)param_1;
    (void)tc_call(0x8007dabcu, &a);
    wr32((u32)param_1 + 0x19cu, 0u);
    a.r[0] = (u32)param_1;
    (void)tc_call(0x80070804u, &a);
    return;
}
