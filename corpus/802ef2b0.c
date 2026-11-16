#include "tc_rt.h"

void fn_802ef2b0(s32 param_1, u32 param_2, u32 param_3, u32 param_4)
{
    TcArgs a = {0};
    a.r[0] = (u32)param_1 + 4u;
    a.r[1] = (u32)param_1 + 0x30u;
    a.r[2] = param_2;
    a.r[3] = param_3;
    a.r[4] = param_4;
    (void)tc_call(0x802ef084u, &a);
    return;
}
