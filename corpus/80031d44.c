#include "tc_rt.h"

s32 fn_80031d44(s32 param_1, s32 param_2, s32 param_3)
{
    u32 r3 = 0, r28 = 0, r29 = 0, r30 = 0, r31 = 0;
    TcArgs a = {0};
    if ((u32)param_2 == 0u) {
        r30 = 0u;
    } else {
        r30 = (u32)param_3 + (u32)param_2;
    }
    if (r30 == 0u) {
        r3 = 0u;
    } else {
        if ((u32)param_1 != 0u) {
            r31 = r30;
            r28 = 0u;
            r29 = (u32)(s8)rd8((u32)param_1 - 0x7fcca620u);
            while ((s32)r28 < (s32)r29) {
                a.r[0] = r31;
                a.r[1] = (u32)param_3;
                (void)tc_call(0x80031fe0u, &a);
                r31 = r31 + 0x18u;
                r28 = r28 + 1u;
            }
            r3 = r30;
        } else {
            r3 = 0u;
        }
    }
    return (s32)r3;
}
