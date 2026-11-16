#include "tc_rt.h"

void fn_8020fe38(u32 param_1, s32 param_2)
{
    TcArgs a = {0};
    if ((u32)param_2 == 0u) {
        a.r[0] = param_1;
        (void)tc_call(0x802100e0u, &a);
        return;
    }
    return;
}
