#include "tc_rt.h"

void fn_801f897c(u32 param_1, u32 param_2)
{
    u32 r3 = 0;
    TcArgs a = {0};
    (void)param_1;
    r3 = tc_call(0x801f888cu, &a);
    a.r[0] = r3;
    a.r[1] = param_2;
    (void)tc_call(0x800d5940u, &a);
    return;
}
