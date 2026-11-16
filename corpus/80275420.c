#include "tc_rt.h"

void fn_80275420(u32 param_1)
{
    TcArgs a = {0};
    a.r[0] = param_1;
    a.r[1] = 0x1fu;
    (void)tc_call(0x80274a6cu, &a);
    return;
}
