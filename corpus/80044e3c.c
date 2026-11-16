#include "tc_rt.h"

void fn_80044e3c(u32 param_1, u32 param_2, u32 param_3)
{
    TcArgs a = {0};
    a.r[0] = param_1 & 0xffu;
    a.r[1] = param_3;
    a.r[2] = param_2 & 0xffu;
    (void)tc_call(0x80253f64u, &a);
    return;
}
