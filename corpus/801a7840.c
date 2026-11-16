#include "tc_rt.h"

void fn_801a7840(u32 param_1)
{
    TcArgs a = {0};
    a.r[0] = param_1;
    (void)tc_call(0x801a7844u, &a);
    return;
}
