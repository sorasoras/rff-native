#include "tc_rt.h"

void fn_80141e6c(u32 param_1)
{
    TcArgs a = {0};
    a.r[0] = param_1;
    a.r[1] = 0u;
    (void)tc_call(0x80141d6cu, &a);
    return;
}
