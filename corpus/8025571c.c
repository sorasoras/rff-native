#include "tc_rt.h"

void fn_8025571c(s32 param_1, u32 param_2, s32 param_3, s32 param_4)
{
    u32 r5 = 0, r6 = 0, r30 = 0, r31 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    r5 = (u32)param_3;
    r6 = (u32)param_4;
    r30 = (u32)param_4;
    r31 = (u32)param_1 + ((u32)param_3 * (u32)param_4);
    while (r30 != 0u) {
        r31 = r31 - (u32)param_3;
        a.r[0] = r31;
        a.r[1] = 0xffffffffu;
        a.r[2] = r5;
        a.r[3] = r6;
        a.f[0] = f1;
        f1 = tc_callf(param_2, &a);
        r5 = 0u;
        r6 = 0u;
        r30 = r30 - 1u;
    }
    return;
}
