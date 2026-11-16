#include "tc_rt.h"

void fn_80255794(s32 param_1, u32 param_2, u32 param_3, s32 param_4)
{
    u32 r4 = 0, r5 = 0, r6 = 0, r27 = 0, r28 = 0, r29 = 0, r30 = 0, r31 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    r4 = param_2;
    r5 = param_3;
    r6 = (u32)param_4;
    if ((u32)param_1 != 0u) {
        r29 = rd32((u32)param_1 - 0xcu);
        r28 = rd32((u32)param_1 - 0x10u);
        r31 = (u32)param_1 - 0x10u;
        if (param_2 != 0u) {
            r30 = 0u;
            r27 = (u32)param_1 + (r29 * r28);
            while (r30 < r29) {
                r27 = r27 - r28;
                a.r[0] = r27;
                a.r[1] = 0xffffffffu;
                a.r[2] = r5;
                a.r[3] = r6;
                a.f[0] = f1;
                f1 = tc_callf(param_2, &a);
                r4 = tc_lastr4();
                r5 = 0u;
                r6 = 0u;
                r30 = r30 + 1u;
            }
        }
        if (param_3 != 0u) {
            if ((u32)param_4 != 0u) {
                a.r[0] = r31;
                a.r[1] = (r29 * r28) + 0x10u;
                a.r[2] = r5;
                a.r[3] = r6;
                a.f[0] = f1;
                (void)tc_call(param_3, &a);
            } else {
                a.r[0] = r31;
                a.r[1] = r4;
                a.r[2] = r5;
                a.r[3] = r6;
                a.f[0] = f1;
                (void)tc_call(param_3, &a);
            }
        }
    }
    return;
}
