#include "tc_rt.h"

void fn_800ae430(s32 param_1, u32 param_2, u32 param_3)
{
    TcArgs a = {0};
    if (param_2 < 2u) {
        a.r[0] = (u32)param_1 + (param_2 * 0x2au);
        a.r[1] = param_3;
        (void)tc_call(0x8025e7c0u, &a);
        return;
    }
    return;
}
