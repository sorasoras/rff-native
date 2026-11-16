#include "tc_rt.h"

void fn_8015a8fc(s32 param_1)
{
    u32 r3 = 0;
    TcArgs a = {0};
    a.r[0] = (u32)param_1;
    r3 = tc_call(0x8015a81cu, &a);
    if (r3 != 0u) {
        r3 = rd32((u32)param_1 + 0x14u);
        if ((r3 + 0x10000u) != 0xffffu) {
            a.r[0] = r3;
            a.r[1] = 0u;
            r3 = tc_call(0x8004c670u, &a);
            if (r3 != 0u) {
                a.r[0] = r3;
                a.r[1] = 0u;
                a.r[2] = 0u;
                (void)tc_call(0x8004b358u, &a);
            }
        }
    }
    return;
}
