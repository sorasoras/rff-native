#include "tc_rt.h"

void fn_8019ad04(s32 param_1)
{
    u32 r3 = 0, r28 = 0, r29 = 0;
    TcArgs a = {0};
    r29 = (u32)param_1;
    r28 = 0u;
    do {
        wr32(r29 + 0x540u, 0u);
        r3 = rd32(r29 + 0x58cu);
        if ((r3 + 0x10000u) != 0xffffu) {
            a.r[0] = r3;
            (void)tc_call(0x8004bc54u, &a);
            wr32(r29 + 0x58cu, 0xffffffffu);
        }
        r28 = r28 + 1u;
        r29 = r29 + 0x94u;
    } while ((s32)r28 < 8);
    return;
}
