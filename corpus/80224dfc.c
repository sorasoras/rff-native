#include "tc_rt.h"

void fn_80224dfc(s32 param_1)
{
    u32 r3 = 0, r28 = 0, r29 = 0;
    TcArgs a = {0};
    r29 = (u32)param_1;
    r28 = 0u;
    do {
        r3 = rd32(r29 + 0x1a4u);
        if ((r3 + 0x10000u) != 0xffffu) {
            a.r[0] = r3;
            (void)tc_call(0x8004bc54u, &a);
            wr32(r29 + 0x1a4u, 0xffffffffu);
        }
        r28 = r28 + 1u;
        wr32(r29 + 0x158u, 0u);
        r29 = r29 + 0x90u;
    } while ((s32)r28 < 4);
    return;
}
