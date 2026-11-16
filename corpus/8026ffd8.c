#include "tc_rt.h"

void fn_8026ffd8(u32 param_1, u32 param_2, s32 param_3, u32 param_4, s32 param_5)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r5 = 0, r26 = 0, r27 = 0, r28 = 0;
    TcArgs a = {0};
    if (param_1 == 0u) {
        return;
    }
    wr32(param_1 + 0xcu, param_2);
    r27 = ((u32)param_3 << 3u) & 0xfffffff8u;
    r26 = 0u;
    r28 = 0u;
    wr32(param_1 + 0x10u, (u32)param_3);
    wr32(param_1 + 0x14u, param_4);
    wr32(param_1 + 0x18u, (u32)param_5);
    while (r26 < rd32(param_1 + 0x14u)) {
        r3 = rd32(param_1 + 0x18u);
        r0 = r28 + r27;
        r4 = r3 + r0;
        r3 = rd32(r3 + r0);
        r4 = rd32(r4 + 4u);
        a.r[0] = r3;
        a.r[1] = r4;
        (void)tc_call(0x80227738u, &a);
        r4 = rd32(param_1 + 0x18u);
        r3 = r28 + r27;
        r5 = rd32(r4 + r3);
        if (r5 != 0u) {
            r0 = r5 - 0x80000000u;
        } else {
            r0 = 0u;
        }
        wr32(r4 + r3, r0);
        r28 = r28 + 8u;
        r26 = r26 + 1u;
    }
    r27 = 0u;
    r28 = 0u;
    for (;;) {
        r4 = rd32(param_1 + 0x10u);
        if (r27 >= r4) break;
        r0 = rd32(param_1 + 0x18u);
        a.r[0] = rd32(r28 + r0);
        a.r[1] = rd32(r0 + r28 + 4u);
        (void)tc_call(0x80227738u, &a);
        r3 = rd32(param_1 + 0x18u);
        r4 = rd32(r3 + r28);
        if (r4 != 0u) {
            r0 = r4 - 0x80000000u;
        } else {
            r0 = 0u;
        }
        wr32(r3 + r28, r0);
        r28 = r28 + 8u;
        r27 = r27 + 1u;
    }
    r4 = ((r4 + rd32(param_1 + 0x14u)) << 3u) & 0xfffffff8u;
    a.r[0] = rd32(param_1 + 0x18u);
    a.r[1] = r4;
    (void)tc_call(0x80227738u, &a);
    if ((u32)param_5 != 0u) {
        r0 = (u32)param_5 - 0x80000000u;
    } else {
        r0 = 0u;
    }
    wr32(param_1 + 0x18u, r0);
    return;
}
