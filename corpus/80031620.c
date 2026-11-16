#include "tc_rt.h"

void fn_80031620(s32 param_1, s32 param_2, s32 param_3)
{
    u32 r3 = 0, r4 = 0, r5 = 0, r21 = 0, r22 = 0, r23 = 0, r24 = 0, r30 = 0, r31 = 0;
    TcArgs a = {0};
    if (rd32((u32)param_3 + 0x28u) != 0u) {
        r21 = 0u;
        r22 = 0u;
        while ((s32)r21 < (s32)rd16((u32)param_3 + 0x1eu)) {
            r4 = (u32)rd16(rd32((u32)param_3 + 0x20u) + r22);
            r23 = r4 * 0x30u;
            r3 = rd32((u32)param_1 + 0x38u) + (rd32((u32)param_1 + 0x3cu) * r4);
            r4 = rd32(r3 + 0x3cu);
            r24 = r23 - 0x7fc62180u;
            r3 = rd32(r3 + 0x50u);
            r4 = rd32(r4 + 0x70u);
            a.r[0] = r3;
            a.r[1] = r4;
            a.r[2] = r24;
            (void)tc_call(0x802337a0u, &a);
            a.r[0] = r24;
            a.r[1] = r23 - 0x7fc5f180u;
            (void)tc_call(0x80233964u, &a);
            r22 = r22 + 2u;
            r21 = r21 + 1u;
        }
        a.r[0] = 0u;
        a.r[1] = 0u;
        (void)tc_call(0x8004cc20u, &a);
    } else {
        r3 = tc_call(0x8004d97cu, &a);
        r31 = r3;
        r30 = 0u;
        r22 = 0u;
        while ((s32)r30 < (s32)rd16((u32)param_3 + 0x1eu)) {
            r5 = (u32)rd16(rd32((u32)param_3 + 0x20u) + r22);
            r21 = r5 * 0x30u;
            r4 = rd32((u32)param_1 + 0x38u) + (rd32((u32)param_1 + 0x3cu) * r5);
            r5 = rd32(r4 + 0x3cu);
            r4 = rd32(r4 + 0x50u);
            r23 = r21 - 0x7fc62180u;
            r24 = rd32(r5 + 0x70u);
            a.r[0] = r31;
            a.r[1] = r4;
            a.r[2] = r23;
            (void)tc_call(0x802337a0u, &a);
            a.r[0] = r23;
            a.r[1] = r24;
            a.r[2] = r23;
            (void)tc_call(0x802337a0u, &a);
            a.r[0] = r23;
            a.r[1] = r21 - 0x7fc5f180u;
            (void)tc_call(0x80233964u, &a);
            r22 = r22 + 2u;
            r30 = r30 + 1u;
        }
        a.r[0] = 0u;
        a.r[1] = rd32((u32)param_2 + 0x50u);
        (void)tc_call(0x8004cc20u, &a);
    }
    return;
}
