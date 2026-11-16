#include "tc_rt.h"

void fn_800d5140(s32 param_1)
{
    TcArgs a = {0};
    a.r[0] = (u32)param_1 + 0x4bcu;
    (void)tc_call(0x800d3184u, &a);
    return;
}
