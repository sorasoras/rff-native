#include "tc_rt.h"

s32 fn_8004bfdc(s32 param_1, s32 param_2, u32 param_3)
{
    u32 r3 = 0, r5 = 0, r6 = 0, r28 = 0, r29 = 0, r30 = 0, r31 = 0;
    TcArgs a = {0};
    a.r[0] = (u32)param_2;
    (void)tc_call(0x80045be0u, &a);
    a.r[0] = (u32)param_1;
    (void)tc_call(0x80045c98u, &a);
    r30 = rd32((u32)param_1 + 0xcu);
    a.r[0] = r30;
    r3 = tc_call(0x8004c098u, &a);
    r29 = r3;
    if ((r3 + 0x10000u) == 0xffffu) {
        r3 = 0xffffffffu;
    } else {
        r28 = 0u;
        r31 = 0u;
        while ((s32)r28 < (s32)r30) {
            r6 = (u32)rd16(rd32((u32)param_1 + 8u) + r31);
            if (r6 < rd32((u32)param_2 + 0xcu)) {
                r5 = rd32((u32)param_2 + 8u) + ((r6 << 5u) & 0xffffffe0u);
            } else {
                r5 = 0u;
            }
            a.r[0] = r29;
            a.r[1] = r28;
            a.r[2] = r5;
            a.r[3] = param_3;
            (void)tc_call(0x8004c51cu, &a);
            r31 = r31 + 2u;
            r28 = r28 + 1u;
        }
        r3 = r29;
    }
    return (s32)r3;
}
