#include "tc_rt.h"

void fn_800dc7e8(u32 param_1, s32 param_2, u32 param_r5, u32 param_r6)
{
    TcArgs a = {0};
    a.r[0] = param_1;
    a.r[1] = (u32)param_2 + 0x82cu;
    a.r[2] = param_r5;
    a.r[3] = param_r6;
    (void)tc_call(0x800dc878u, &a);
    return;
}
