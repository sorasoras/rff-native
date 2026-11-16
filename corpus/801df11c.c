#include "tc_rt.h"

void fn_801df11c(s32 param_1)
{
    u32 r3 = 0;
    TcArgs a = {0};
    a.r[0] = (u32)param_1;
    r3 = tc_call(0x801df0bcu, &a);
    if (r3 == 0u) {
        a.r[0] = 0x804b9da0u;
        a.r[1] = 0x2394u;
        r3 = tc_call(0x8010a7dcu, &a);
        wr32((u32)param_1 + 0xd60u, r3);
    }
    return;
}
