#include "tc_rt.h"

void fn_80059e34(u32 param_1)
{
    TcArgs a = {0};
    a.r[0] = param_1;
    (void)tc_call(0x80212554u, &a);
    return;
}
