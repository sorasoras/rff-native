#include "tc_rt.h"

void fn_8022d648(s32 param_1)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r5 = 0, r30 = 0, r31 = 0;
    TcArgs a = {0};
    r3 = tc_call(0x8022c2b0u, &a);
    r31 = r3;
    r3 = tc_call(0x8022efe4u, &a);
    r30 = r3;
    if (rd32((u32)param_1 + 8u) == r3) {
        r0 = rd32((u32)param_1 + 0xcu) - 1u;
        wr32((u32)param_1 + 0xcu, r0);
        if (r0 == 0u) {
            r4 = rd32((u32)param_1 + 0x10u);
            r5 = rd32((u32)param_1 + 0x14u);
            if (r4 == 0u) {
                wr32(r3 + 0x2f8u, r5);
            } else {
                wr32(r4 + 0x14u, r5);
            }
            if (r5 == 0u) {
                wr32(r3 + 0x2f4u, r4);
            } else {
                wr32(r5 + 0x10u, r4);
            }
            wr32((u32)param_1 + 8u, 0u);
            if ((s32)rd32(r3 + 0x2d0u) < (s32)rd32(r3 + 0x2d4u)) {
                r3 = r3;
                a.r[0] = r3;
                r3 = tc_call(0x8022f0d0u, &a);
                wr32(r30 + 0x2d0u, r3);
            }
            a.r[0] = (u32)param_1;
            (void)tc_call(0x802300d0u, &a);
        }
    }
    a.r[0] = r31;
    (void)tc_call(0x8022c2d8u, &a);
    return;
}
