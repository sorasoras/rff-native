#include "tc_rt.h"

void fn_80052ea0(u32 param_1, u32 param_2, u32 param_3, u32 param_4, u32 param_5, u32 param_6, u32 param_7)
{
    TcArgs a = {0};
    a.r[0] = 0x803d0320u;
    a.r[1] = param_1;
    a.r[2] = param_2;
    a.r[3] = param_3;
    a.r[4] = param_4;
    a.r[5] = param_5;
    a.r[6] = param_6;
    a.r[7] = param_7 & 0xffu;
    (void)tc_call(0x80146c60u, &a);
    return;
}
