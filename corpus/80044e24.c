#include "tc_rt.h"

void fn_80044e24(u32 param_1, u32 param_2, u32 param_3, u32 param_4)
{
    TcArgs a = {0};
    a.r[0] = param_1;
    a.r[1] = param_2;
    a.r[2] = param_3;
    a.r[3] = param_4;
    (void)tc_call(0x80253ebcu, &a);
    return;
}
