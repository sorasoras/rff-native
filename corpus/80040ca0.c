#include "tc_rt.h"

void fn_80040ca0(u32 param_1)
{
    TcArgs a = {0};
    a.r[0] = param_1;
    (void)tc_call(0x800407f0u, &a);
    return;
}
