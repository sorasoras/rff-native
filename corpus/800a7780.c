#include "tc_rt.h"

s32 fn_800a7780(s32 param_1, s32 param_2, u32 param_3, u32 param_4, u32 param_5)
{
    u32 r3 = 0, r5 = 0, r6 = 0, r7 = 0, r30 = 0, r31 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    r5 = param_3;
    r6 = param_4;
    r7 = param_5;
    r31 = (u32)param_1;
    r30 = 0u;
    while (r30 < param_3) {
        a.r[0] = r31;
        a.r[1] = param_5;
        a.r[2] = r5;
        a.r[3] = r6;
        a.r[4] = r7;
        a.f[0] = f1;
        r3 = tc_call(param_4, &a);
        f1 = tc_lastf();
        r5 = 0u;
        r6 = 0u;
        r7 = 0u;
        if (r3 != 0u) {
            r3 = r31;
            return (s32)r3;
        }
        r31 = r31 + (u32)param_2;
        r30 = r30 + 1u;
    }
    r3 = 0u;
    return (s32)r3;
}
