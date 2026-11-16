#include "tc_rt.h"

void fn_8008ca00(s32 param_1, u32 param_2, u32 param_3)
{
    TcArgs a = {0};
    a.r[0] = (u32)param_1 + 0x4190u;
    a.r[1] = param_2;
    a.r[2] = param_3;
    a.r[3] = (u32)rd8(0x80492b98u);
    (void)tc_call(0x80189aa8u, &a);
    return;
}
