#include "tc_rt.h"

void fn_80168a9c(u32 param_1)
{
    TcArgs a = {0};
    a.r[0] = param_1;
    a.r[1] = 0x13u;
    (void)tc_call(0x800b31a0u, &a);
    return;
}
