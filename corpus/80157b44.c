#include "tc_rt.h"

void fn_80157b44(s32 param_1)
{
    TcArgs a = {0};
    a.r[0] = (u32)param_1 + 0x14u;
    a.r[1] = 0u;
    a.r[2] = 0x400u;
    (void)tc_call(0x8000443cu, &a);
    a.r[0] = (u32)param_1 + 8u;
    a.r[1] = 0u;
    (void)tc_call(0x802de7dcu, &a);
    wr32((u32)param_1 + 4u, 0u);
    return;
}
