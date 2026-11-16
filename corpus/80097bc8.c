#include "tc_rt.h"

void fn_80097bc8(u32 param_1, u32 param_2)
{
    TcArgs a = {0};
    (void)param_1;
    a.r[0] = 2u;
    a.r[1] = 0x37u;
    a.r[2] = param_2;
    (void)tc_call(0x800a6dccu, &a);
    return;
}
