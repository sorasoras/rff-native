#include "tc_rt.h"

void fn_80146d58(u32 param_1)
{
    TcArgs a = {0};
    a.r[0] = param_1;
    (void)tc_call(0x800d3704u, &a);
    a.r[0] = param_1;
    (void)tc_call(0x80146dc0u, &a);
    return;
}
