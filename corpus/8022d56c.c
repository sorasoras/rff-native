#include "tc_rt.h"

void fn_8022d56c(s32 param_1)
{
    u32 r0 = 0, r3 = 0, r29 = 0, r30 = 0;
    TcArgs a = {0};
    r3 = tc_call(0x8022c2b0u, &a);
    r29 = r3;
    r3 = tc_call(0x8022efe4u, &a);
    r30 = r3;
    for (;;) {
        r0 = rd32((u32)param_1 + 8u);
        if (r0 == 0u) break;
        if (r0 == r30) {
            wr32((u32)param_1 + 0xcu, rd32((u32)param_1 + 0xcu) + 1u);
            a.r[0] = r29;
            (void)tc_call(0x8022c2d8u, &a);
            return;
        }
        wr32(r30 + 0x2f0u, (u32)param_1);
        a.r[0] = rd32((u32)param_1 + 8u);
        a.r[1] = rd32(r30 + 0x2d0u);
        (void)tc_call(0x8022f2c0u, &a);
        a.r[0] = (u32)param_1;
        (void)tc_call(0x8022ffe4u, &a);
        wr32(r30 + 0x2f0u, 0u);
    }
    r3 = rd32((u32)param_1 + 0xcu);
    wr32((u32)param_1 + 8u, r30);
    wr32((u32)param_1 + 0xcu, r3 + 1u);
    r3 = rd32(r30 + 0x2f8u);
    if (r3 != 0u) {
        wr32(r3 + 0x10u, (u32)param_1);
    } else {
        wr32(r30 + 0x2f4u, (u32)param_1);
    }
    wr32((u32)param_1 + 0x14u, r3);
    wr32((u32)param_1 + 0x10u, 0u);
    wr32(r30 + 0x2f8u, (u32)param_1);
    a.r[0] = r29;
    (void)tc_call(0x8022c2d8u, &a);
    return;
}
