#include "tc_rt.h"

void fn_801b34c8(s32 param_1)
{
    TcArgs a = {0};
    a.r[0] = (u32)param_1 + 0x2d4u;
    (void)tc_call(0x8005250cu, &a);
    a.r[0] = (u32)param_1 + 0x368u;
    (void)tc_call(0x8005250cu, &a);
    a.r[0] = (u32)param_1 + 0x3fcu;
    (void)tc_call(0x8005250cu, &a);
    a.r[0] = (u32)param_1 + 0x490u;
    (void)tc_call(0x8005250cu, &a);
    return;
}
