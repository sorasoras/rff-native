#include "tc_rt.h"

void fn_8028d76c(u32 param_1, u32 param_2, u32 param_3)
{
    TcArgs a = {0};
    a.r[0] = 0x8053d520u;
    a.r[1] = param_1;
    a.r[2] = param_2;
    a.r[3] = param_3;
    (void)tc_call(0x8028d910u, &a);
    return;
}
