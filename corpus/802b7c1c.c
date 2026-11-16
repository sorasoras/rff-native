#include "tc_rt.h"

void fn_802b7c1c(u32 param_1, u32 param_2, u32 param_3, u32 param_4, u32 param_5, u32 param_6)
{
    TcArgs a = {0};
    a.r[0] = param_4;
    a.r[1] = param_3;
    (void)tc_call(0x80227738u, &a);
    a.r[0] = param_1;
    a.r[1] = param_2;
    a.r[2] = param_3;
    a.r[3] = param_4;
    a.r[4] = 1u;
    a.r[5] = param_5;
    a.r[6] = param_6;
    a.r[7] = 1u;
    (void)tc_call(0x802b77f8u, &a);
    return;
}
