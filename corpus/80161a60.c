#include "tc_rt.h"

void fn_80161a60(s32 param_1)
{
    u32 r0 = 0, r3 = 0, r4 = 0;
    TcArgs a = {0};
    r4 = (u32)rd16((u32)param_1 + 0xbcu);
    wr32((u32)param_1 + 0x58u, 0u);
    wr32((u32)param_1 + 0x5cu, 0u);
    if (r4 != 0x2e8u) {
        a.r[0] = 0x80472f48u;
        a.r[1] = r4;
        r3 = tc_call(0x800bede4u, &a);
        r0 = (u32)param_1 + 0x60u;
        wr32((u32)param_1 + 0x58u, r3);
        wr32((u32)param_1 + 0x5cu, r0);
        a.r[0] = r0;
        a.r[1] = r3;
        (void)tc_call(0x80051534u, &a);
    }
    return;
}
