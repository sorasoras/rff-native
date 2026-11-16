#include "tc_rt.h"

void fn_8010c838(u32 param_1)
{
    TcArgs a = {0};
    a.r[0] = param_1;
    a.r[1] = 0xffffffffu;
    a.r[2] = 0x480u;
    (void)tc_call(0x8000443cu, &a);
    return;
}
