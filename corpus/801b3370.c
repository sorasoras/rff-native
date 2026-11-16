#include "tc_rt.h"

void fn_801b3370(s32 param_1)
{
    TcArgs a = {0};
    a.r[0] = (u32)param_1 + 0x84u;
    (void)tc_call(0x8005250cu, &a);
    a.r[0] = (u32)param_1 + 0x118u;
    (void)tc_call(0x8005250cu, &a);
    a.r[0] = (u32)param_1 + 0x1acu;
    (void)tc_call(0x8005250cu, &a);
    a.r[0] = (u32)param_1 + 0x240u;
    (void)tc_call(0x8005250cu, &a);
    return;
}
