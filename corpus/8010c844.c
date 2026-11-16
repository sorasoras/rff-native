#include "tc_rt.h"

void fn_8010c844(s32 param_1, s32 param_2)
{
    TcArgs a = {0};
    a.r[0] = (u32)param_1 + ((u32)param_2 * 0x480u);
    a.r[1] = 0xffffffffu;
    a.r[2] = 0x480u;
    (void)tc_call(0x8000443cu, &a);
    return;
}
