#include "tc_rt.h"

void fn_802fc254(s32 param_1, u32 param_2, u32 param_3)
{
    TcArgs a = {0};
    a.r[0] = (u32)param_1 + 8u;
    a.r[1] = param_2;
    a.r[2] = param_3;
    a.r[3] = 0xf8u;
    (void)tc_call(0x802faa98u, &a);
    return;
}
