#include "tc_rt.h"

s32 fn_80258684(s32 param_1, s32 param_2, s32 param_3, s32 param_4, u32 param_5)
{
    u32 c0lt = 0, r3 = 0, r28 = 0, r29 = 0, r30 = 0, r31 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    if ((((u32)param_1 == 0u || (u32)param_2 == 0u) || ((u32)param_3 == 0u || (u32)param_4 == 0u)) || param_5 == 0u) {
        r3 = 0u;
    } else {
        a.r[0] = (u32)param_1;
        a.r[1] = (u32)param_2;
        a.r[2] = (u32)param_3;
        a.r[3] = (u32)param_4;
        a.r[4] = param_5;
        a.f[0] = 0.0;
        r3 = tc_call(param_5, &a);
        f1 = tc_lastf();
        c0lt = (s32)r3 < 0;
        if (r3 == 0u) {
            r3 = (u32)param_2;
        } else {
            if (c0lt) {
                r3 = 0u;
            } else {
                r29 = (u32)param_3 - 1u;
                r30 = 1u;
                while (r30 <= r29) {
                    r28 = ((r30 + r29) >> 1u) & 0x7fffffffu;
                    r31 = (u32)param_2 + ((u32)param_4 * r28);
                    a.r[0] = (u32)param_1;
                    a.r[1] = r31;
                    a.r[2] = 0u;
                    a.r[3] = 0u;
                    a.r[4] = 0u;
                    a.f[0] = f1;
                    r3 = tc_call(param_5, &a);
                    f1 = tc_lastf();
                    c0lt = (s32)r3 < 0;
                    if (r3 == 0u) {
                        r3 = r31;
                        return (s32)r3;
                    }
                    if (c0lt) {
                        r29 = r28 - 1u;
                    }
                    if ((s32)r3 >= 0) {
                        r30 = r28 + 1u;
                    }
                }
                r3 = 0u;
            }
        }
    }
    return (s32)r3;
}
