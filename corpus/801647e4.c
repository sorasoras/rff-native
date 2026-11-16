#include "tc_rt.h"

void fn_801647e4(s32 param_1)
{
    TcArgs a = {0};
    if (rd32((u32)param_1 + 0x120u) == 3u) {
        a.r[0] = (u32)param_1;
        (void)tc_call(0x800da0d8u, &a);
        return;
    }
    return;
}
