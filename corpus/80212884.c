#include "tc_rt.h"

void fn_80212884(u32 param_1, u32 param_2)
{
    TcArgs a = {0};
    (void)param_1;
    a.r[0] = param_2;
    (void)tc_call(0x800a4580u, &a);
    return;
}
