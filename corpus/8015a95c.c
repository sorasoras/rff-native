#include "tc_rt.h"

void fn_8015a95c(s32 param_1)
{
    u32 r3 = 0, r4 = 0, r31 = 0;
    TcArgs a = {0};
    a.r[0] = (u32)param_1;
    r3 = tc_call(0x800a6420u, &a);
    if (r3 != 0u) {
        a.r[0] = (u32)param_1;
        r3 = tc_call(0x800a63e4u, &a);
        r4 = rd32((u32)param_1 + 0x14u);
        r31 = r3;
        if ((r4 + 0x10000u) != 0xffffu) {
            a.r[0] = r4;
            (void)tc_call(0x8004bc54u, &a);
            wr32((u32)param_1 + 0x14u, 0xffffffffu);
        }
        a.r[0] = r31;
        a.r[1] = 0u;
        r3 = tc_call(0x8004bf2cu, &a);
        wr32((u32)param_1 + 0x14u, r3);
        a.r[0] = (u32)param_1;
        (void)tc_call(0x800a62ccu, &a);
    }
    return;
}
