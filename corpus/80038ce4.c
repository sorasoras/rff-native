#include "tc_rt.h"

s32 fn_80038ce4(s32 param_1)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r30 = 0;
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
    r4 = rd32((u32)param_1 + 0x14u);
    wr32((u32)param_1 + 0xcu, r0);
    if (r4 == 0u) {
        r0 = 0u;
    } else {
        r0 = (u32)param_1 + r4;
    }
    r4 = rd32((u32)param_1 + 0x34u);
    wr32((u32)param_1 + 0x14u, r0);
    if (r4 == 0u) {
        r0 = 0u;
    } else {
        r0 = (u32)param_1 + r4;
    }
    wr32((u32)param_1 + 0x34u, r0);
    r30 = 0u;
    while (r30 < rd32((u32)param_1 + 8u)) {
        if ((s32)r30 < 0) {
            r3 = 0u;
        } else {
            r3 = rd32((u32)param_1 + 0xcu) + (rd32((u32)param_1 + 0x20u) * r30);
        }
        a.r[0] = r3;
        a.r[1] = (u32)param_1;
        (void)tc_call(0x80038cb8u, &a);
        r30 = r30 + 1u;
    }
    r30 = 0u;
    while (r30 < rd32((u32)param_1 + 0x10u)) {
        if ((s32)r30 < 0) {
            r3 = 0u;
        } else {
            r3 = rd32((u32)param_1 + 0x14u) + (rd32((u32)param_1 + 0x24u) * r30);
        }
        a.r[0] = r3;
        a.r[1] = (u32)param_1;
        (void)tc_call(0x80038bc4u, &a);
        r30 = r30 + 1u;
    }
    wr32((u32)param_1 + 4u, 0u);
    return param_1;
}
