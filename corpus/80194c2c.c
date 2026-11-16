#include "tc_rt.h"

void fn_80194c2c(u32 param_1)
{
    TcArgs a = {0};
    a.r[0] = 0x804d910cu;
    a.r[1] = param_1;
    (void)tc_call(0x80194fdcu, &a);
    return;
}
