#include "tc_rt.h"

void fn_80048e3c(u32 param_1)
{
    TcArgs a = {0};
    a.r[0] = 0x803c2798u;
    a.r[1] = param_1;
    a.r[2] = 1u;
    (void)tc_call(0x8022caacu, &a);
    return;
}
