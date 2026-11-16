#include "tc_rt.h"

void fn_8007ad9c(s32 param_1, u32 param_2, u32 param_3)
{
    u32 r4 = 0, r31 = 0;
    TcArgs a = {0};
    r4 = (u32)param_1;
    while (r4 != 0u) {
        r31 = rd32(r4);
        a.r[0] = (u32)param_1;
        a.r[1] = r4;
        a.r[2] = param_2;
        a.r[3] = param_3;
        (void)tc_call(0x8007ac64u, &a);
        r4 = r31;
    }
    return;
}
