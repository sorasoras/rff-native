#include "tc_rt.h"

void fn_80198ea8(u32 param_1)
{
    TcArgs a = {0};
    a.r[0] = 0x804dac68u;
    a.r[1] = param_1;
    (void)tc_call(0x8019a72cu, &a);
    return;
}
