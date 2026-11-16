#include "tc_rt.h"

void fn_800b3318(s32 param_1, s32 param_2)
{
    TcArgs a = {0};
    a.r[0] = (u32)param_1 + 0x36cu;
    a.r[1] = (u32)(s16)param_2;
    (void)tc_call(0x80154964u, &a);
    return;
}
