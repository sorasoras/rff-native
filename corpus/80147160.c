#include "tc_rt.h"

void fn_80147160(s32 param_1)
{
    TcArgs a = {0};
    a.r[0] = (u32)param_1 + 4u;
    a.r[1] = 0u;
    a.r[2] = 0x50u;
    (void)tc_call(0x8000443cu, &a);
    a.r[0] = (u32)param_1 + 0x54u;
    a.r[1] = 0u;
    a.r[2] = 0x50u;
    (void)tc_call(0x8000443cu, &a);
    a.r[0] = (u32)param_1 + 0x554u;
    a.r[1] = 0u;
    a.r[2] = 0x50u;
    (void)tc_call(0x8000443cu, &a);
    a.r[0] = (u32)param_1 + 0x5a4u;
    a.r[1] = 0u;
    a.r[2] = 0x50u;
    (void)tc_call(0x8000443cu, &a);
    return;
}
