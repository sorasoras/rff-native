#include "tc_rt.h"

void fn_801ba71c(u32 param_1)
{
    TcArgs a = {0};
    a.r[0] = param_1;
    a.r[1] = 0u;
    (void)tc_call(0x801894d8u, &a);
    return;
}
