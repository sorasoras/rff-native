#include "tc_rt.h"

s32 fn_80031edc(s32 param_1)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r29 = 0, r31 = 0;
    TcArgs a = {0};
    if (rd32((u32)param_1 + 4u) == 0u) {
        return param_1;
    }
    r0 = rd32((u32)param_1 + 0xcu);
    if (r0 == 0u) {
        r0 = 0u;
    } else {
        r0 = (u32)param_1 + r0;
    }
    wr32((u32)param_1 + 0xcu, r0);
    r29 = 0u;
    r31 = 0u;
    while (r29 < rd32((u32)param_1 + 8u)) {
        if ((s32)r29 < 0) {
            r4 = 0u;
        } else {
            r4 = rd32((u32)param_1 + 0xcu) + r31;
        }
        r0 = rd32(r4 + 4u);
        if (r0 == 0u) {
            r3 = 0u;
        } else {
            r3 = (u32)param_1 + r0;
        }
        wr32(r4 + 4u, r3);
        a.r[0] = r3;
        a.r[1] = (u32)param_1;
        (void)tc_call(0x80031ddcu, &a);
        r31 = r31 + 0xcu;
        r29 = r29 + 1u;
    }
    r0 = rd32((u32)param_1 + 0x10u);
    if (r0 == 0u) {
        r0 = 0u;
    } else {
        r0 = (u32)param_1 + r0;
    }
    r3 = rd32((u32)param_1 + 0x2cu);
    wr32((u32)param_1 + 0x10u, r0);
    if (r3 == 0u) {
        r3 = 0u;
    } else {
        r3 = (u32)param_1 + r3;
    }
    wr32((u32)param_1 + 0x2cu, r3);
    wr32((u32)param_1 + 4u, 0u);
    return param_1;
}
