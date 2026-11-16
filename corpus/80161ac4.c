#include "tc_rt.h"

void fn_80161ac4(s32 param_1)
{
    u32 r4 = 0;
    TcArgs a = {0};
    a.r[0] = (u32)param_1 + 0x60u;
    a.r[1] = 0u;
    (void)tc_call(0x80051534u, &a);
    r4 = rd32((u32)param_1 + 0x58u);
    if (r4 != 0u) {
        a.r[0] = 0x80472f48u;
        a.r[1] = r4;
        (void)tc_call(0x800beee0u, &a);
    }
    wr32((u32)param_1 + 0x58u, 0u);
    wr32((u32)param_1 + 0x5cu, 0u);
    return;
}
