#include "tc_rt.h"

void fn_8028d78c(u32 param_1)
{
    TcArgs a = {0};
    a.r[0] = 0x8053d520u;
    a.r[1] = param_1;
    (void)tc_call(0x8028d9b0u, &a);
    return;
}
