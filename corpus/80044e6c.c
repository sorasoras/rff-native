#include "tc_rt.h"

void fn_80044e6c(u32 param_1)
{
    TcArgs a = {0};
    a.r[0] = param_1 & 0xffu;
    (void)tc_call(0x80254070u, &a);
    return;
}
