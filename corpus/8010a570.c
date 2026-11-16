#include "tc_rt.h"

void fn_8010a570(s32 param_1, u32 param_2)
{
    TcArgs a = {0};
    a.r[0] = (u32)param_1 + 0x19b8u;
    a.r[1] = 2u;
    (void)tc_call(0x801630d0u, &a);
    a.r[0] = (u32)param_1 + 0x19b8u;
    a.r[1] = param_2;
    a.r[2] = 2u;
    (void)tc_call(0x80162e44u, &a);
    return;
}
