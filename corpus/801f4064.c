#include "tc_rt.h"

void fn_801f4064(s32 param_1)
{
    u32 r3 = 0;
    TcArgs a = {0};
    a.r[0] = (u32)param_1;
    r3 = tc_call(0x801f412cu, &a);
    if (r3 != 0u) {
        a.r[0] = 0x804b9da0u;
        a.r[1] = 0xfadu;
        (void)tc_call(0x8010a75cu, &a);
        wr32((u32)param_1 + 0xfd0u, rd32(rd32((u32)param_1 + 0xfd0u) + 4u));
    } else {
        a.r[0] = 0x804b9da0u;
        a.r[1] = 4u;
        (void)tc_call(0x8010a75cu, &a);
    }
    return;
}
