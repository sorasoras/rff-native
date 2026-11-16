#include "tc_rt.h"

void fn_801aa7b0(u32 param_1)
{
    TcArgs a = {0};
    a.r[0] = param_1;
    (void)tc_call(0x801c2d40u, &a);
    a.r[0] = param_1;
    (void)tc_call(0x801e722cu, &a);
    return;
}
