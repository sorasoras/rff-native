#include "tc_rt.h"

u32 fn_8022d77c(s32 param_1)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r30 = 0, r31 = 0;
    TcArgs a = {0};
    r3 = tc_call(0x8022c2b0u, &a);
    r31 = r3;
    r3 = tc_call(0x8022efe4u, &a);
    r0 = rd32((u32)param_1 + 8u);
    if (r0 == 0u) {
        r4 = rd32((u32)param_1 + 0xcu);
        wr32((u32)param_1 + 8u, r3);
        wr32((u32)param_1 + 0xcu, r4 + 1u);
        r4 = rd32(r3 + 0x2f8u);
        if (r4 == 0u) {
            wr32(r3 + 0x2f4u, (u32)param_1);
        } else {
            wr32(r4 + 0x10u, (u32)param_1);
        }
        wr32((u32)param_1 + 0x14u, r4);
        r30 = 1u;
        wr32((u32)param_1 + 0x10u, 0u);
        wr32(r3 + 0x2f8u, (u32)param_1);
    } else {
        if (r0 == r3) {
            r30 = 1u;
            wr32((u32)param_1 + 0xcu, rd32((u32)param_1 + 0xcu) + 1u);
        } else {
            r30 = 0u;
        }
    }
    a.r[0] = r31;
    (void)tc_call(0x8022c2d8u, &a);
    return r30;
}
