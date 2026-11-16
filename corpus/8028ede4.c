#include "tc_rt.h"

void fn_8028ede4(u32 param_1, u32 param_2, u32 param_3)
{
    TcArgs a = {0};
    (void)param_1;
    (void)param_2;
    a.r[0] = 0x8053d598u;
    a.r[1] = param_3;
    a.r[2] = 0x1fu;
    (void)tc_call(0x8025bdf4u, &a);
    a.r[0] = 0x8028ede4u;
    (void)tc_call(0x8029a6c4u, &a);
    return;
}
