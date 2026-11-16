#include "tc_rt.h"

void fn_80190440(s32 param_1)
{
    TcArgs a = {0};
    a.r[0] = (u32)param_1 + 0x24cu;
    (void)tc_call(0x8005250cu, &a);
    a.r[0] = (u32)param_1 + 0x2e0u;
    (void)tc_call(0x8005250cu, &a);
    a.r[0] = (u32)param_1 + 0x374u;
    (void)tc_call(0x8005250cu, &a);
    a.r[0] = (u32)param_1 + 0x408u;
    (void)tc_call(0x8005250cu, &a);
    return;
}
