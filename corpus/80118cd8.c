#include "tc_rt.h"

void fn_80118cd8(u32 param_1, u32 param_2, u32 param_3)
{
    TcArgs a = {0};
    a.r[0] = param_1;
    a.r[1] = rd32(param_1);
    a.r[2] = (u32)(s8)rd8(param_1 + 4u);
    a.r[3] = param_2;
    a.r[4] = param_3;
    (void)tc_call(0x80118e24u, &a);
    return;
}
