#include "tc_rt.h"

void fn_801f10b8(s32 param_1, s32 param_2)
{
    TcArgs a = {0};
    if ((u32)param_2 != 0u) {
        a.r[0] = (u32)param_1 + 4u;
        a.r[1] = 4u;
        (void)tc_call(0x800f8544u, &a);
        return;
    }
    a.r[0] = (u32)param_1 + 4u;
    a.r[1] = 1u;
    (void)tc_call(0x800f8544u, &a);
    return;
}
