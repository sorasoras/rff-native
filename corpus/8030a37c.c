#include "tc_rt.h"

void fn_8030a37c(u32 param_r3)
{
    TcArgs a = {0};
    a.r[0] = param_r3;
    (void)tc_call(0x80308ef8u, &a);
    return;
}
