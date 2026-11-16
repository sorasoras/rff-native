#include "tc_rt.h"

void fn_801f78b0(s32 param_1)
{
    u32 r3 = 0;
    TcArgs a = {0};
    r3 = rd32((u32)param_1 + 0xc0u);
    if (r3 != 0u) {
        a.r[0] = r3;
        (void)tc_call(0x801fa180u, &a);
        return;
    }
    return;
}
