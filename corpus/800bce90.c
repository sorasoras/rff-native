#include "tc_rt.h"

void fn_800bce90(s32 param_1)
{
    u32 r3 = 0, r28 = 0, r29 = 0;
    TcArgs a = {0};
    r28 = 0u;
    r29 = (u32)param_1;
    do {
        wr32(r29 + 0x154cu, 0u);
        r3 = rd32(r29 + 0x1598u);
        if ((r3 + 0x10000u) != 0xffffu) {
            a.r[0] = r3;
            (void)tc_call(0x8004bc54u, &a);
            wr32(r29 + 0x1598u, 0xffffffffu);
        }
        r28 = r28 + 1u;
        r29 = r29 + 0x90u;
    } while ((s32)r28 < 2);
    r3 = rd32((u32)param_1 + 0x16bcu);
    wr32((u32)param_1 + 0x1670u, 0u);
    if ((r3 + 0x10000u) != 0xffffu) {
        a.r[0] = r3;
        (void)tc_call(0x8004bc54u, &a);
        wr32((u32)param_1 + 0x16bcu, 0xffffffffu);
    }
    wr32((u32)param_1 + 0x1520u, 0u);
    return;
}
