#include "tc_rt.h"

void fn_801cc618(u32 param_1)
{
    TcArgs a = {0};
    a.r[0] = param_1;
    (void)tc_call(0x801cc64cu, &a);
    a.r[0] = param_1;
    (void)tc_call(0x801e7280u, &a);
    return;
}
