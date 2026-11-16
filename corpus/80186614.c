#include "tc_rt.h"

void fn_80186614(s32 param_1)
{
    u32 r0 = 0;
    TcArgs a = {0};
    r0 = rd32((u32)param_1 + 0x120u);
    if (r0 == 6u || r0 == 2u) {
        a.r[0] = (u32)param_1;
        (void)tc_call(0x800da0d8u, &a);
        return;
    }
    return;
}
