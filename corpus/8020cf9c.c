#include "tc_rt.h"

void fn_8020cf9c(s32 param_1, u32 param_r4)
{
    u32 r3 = 0;
    TcArgs a = {0};
    r3 = rd32((u32)param_1 + 0x70u);
    if (r3 != 0u) {
        a.r[0] = r3;
        a.r[1] = param_r4;
        (void)tc_call(0x800318a8u, &a);
        return;
    }
    return;
}
