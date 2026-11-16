#include "tc_rt.h"

void fn_800fea0c(s32 param_1, s32 param_2)
{
    TcArgs a = {0};
    if ((u32)param_2 != 0u) {
        a.r[0] = (u32)param_1 + 0xd8u;
        a.r[1] = (u32)param_2;
        (void)tc_call(0x8025bd34u, &a);
        return;
    }
    return;
}
