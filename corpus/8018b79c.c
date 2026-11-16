#include "tc_rt.h"

u32 fn_8018b79c(s32 param_1, f64 param_f1, f64 param_f2, f64 param_f3, u32 param_r4, u32 param_r5, u32 param_r6, u32 param_r7, u32 param_r8, u32 param_r9)
{
    u32 r3 = 0;
    TcArgs a = {0};
    if (rd32((u32)param_1 + 0x48u) != 0u) {
        r3 = 0u;
    } else {
        a.f[0] = param_f1;
        a.f[1] = param_f2;
        a.f[2] = param_f3;
        a.r[0] = (u32)param_1;
        a.r[1] = param_r4;
        a.r[2] = param_r5;
        a.r[3] = param_r6;
        a.r[4] = param_r7;
        a.r[5] = 1u;
        a.r[6] = param_r8 | 0x100000u;
        a.r[7] = param_r9;
        (void)tc_call(0x80094a50u, &a);
        r3 = 1u;
    }
    return r3;
}
