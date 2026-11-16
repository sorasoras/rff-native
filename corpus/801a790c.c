#include "tc_rt.h"

void fn_801a790c(u32 param_1, u32 param_2)
{
    TcArgs a = {0};
    a.r[0] = param_1;
    (void)tc_call(0x801a7844u, &a);
    a.r[0] = param_1;
    a.r[1] = param_2;
    (void)tc_call(0x801a7950u, &a);
    return;
}
