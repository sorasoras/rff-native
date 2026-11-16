#include "tc_rt.h"

s32 fn_8004bf2c(s32 param_1, u32 param_2)
{
    u32 r3 = 0, r5 = 0, r28 = 0, r29 = 0, r30 = 0, r31 = 0;
    TcArgs a = {0};
    if ((u32)param_1 == 0u) {
        r3 = 0xffffffffu;
    } else {
        a.r[0] = (u32)param_1;
        (void)tc_call(0x80045be0u, &a);
        r31 = rd32((u32)param_1 + 0xcu);
        a.r[0] = r31;
        r3 = tc_call(0x8004c098u, &a);
        r29 = r3;
        if ((r3 + 0x10000u) == 0xffffu) {
            r3 = 0xffffffffu;
        } else {
            r28 = 0u;
            r30 = 0u;
            while ((s32)r28 < (s32)r31) {
                if (r28 < rd32((u32)param_1 + 0xcu)) {
                    r5 = rd32((u32)param_1 + 8u) + r30;
                } else {
                    r5 = 0u;
                }
                a.r[0] = r29;
                a.r[1] = r28;
                a.r[2] = r5;
                a.r[3] = param_2;
                (void)tc_call(0x8004c51cu, &a);
                r30 = r30 + 0x20u;
                r28 = r28 + 1u;
            }
            r3 = r29;
        }
    }
    return (s32)r3;
}
