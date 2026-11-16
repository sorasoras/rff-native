#include "tc_rt.h"

void fn_80311368(s32 param_1, u32 param_2)
{
    u32 r3 = 0, r31 = 0;
    TcArgs a = {0};
    a.r[0] = param_2;
    a.r[1] = (u32)param_1 + 0x54u;
    (void)tc_call(0x8023376cu, &a);
    r31 = 0u;
    for (;;) {
        a.r[0] = (u32)param_1 + 0x24u;
        a.r[1] = r31;
        r3 = tc_call(0x802de9f0u, &a);
        r31 = r3;
        if (r3 == 0u) break;
        if (rd32(r3 + 0xf4u) == 0u) {
            r3 = r3;
            a.r[0] = r3;
            (void)tc_call(0x80313cecu, &a);
        }
    }
    return;
}
