#include "tc_rt.h"

u32 fn_802f8cbc(s32 param_1, u32 param_2, u32 param_3, f64 param_f1, f64 param_f2, f64 param_f3, f64 param_f4, f64 param_f5, f64 param_f6, f64 param_f7, f64 param_f8, u32 param_r10, u32 param_r8, u32 param_r9)
{
    u32 r3 = 0, r6 = 0, r31 = 0;
    TcArgs a = {0};
    r31 = rd32((u32)param_1 + 0x124u);
    r6 = rd32((u32)param_1 + 0x120u);
    if (param_3 < r31) {
        r3 = 0u;
    } else {
        a.f[0] = param_f1;
        a.f[1] = param_f2;
        a.f[2] = param_f3;
        a.f[3] = param_f4;
        a.f[4] = param_f5;
        a.f[5] = param_f6;
        a.f[6] = param_f7;
        a.f[7] = param_f8;
        a.r[0] = (u32)param_1 + 0x14cu;
        a.r[1] = param_2;
        a.r[2] = r31;
        a.r[3] = r6;
        a.r[4] = 2u;
        a.r[5] = param_r8;
        a.r[6] = param_r9;
        a.r[7] = param_r10;
        r3 = tc_call(0x80234ea0u, &a);
        if (r3 != r31) {
            r3 = 0u;
        } else {
            a.r[0] = (u32)param_1 + 0x108u;
            a.r[1] = param_2;
            (void)tc_call(0x80301aecu, &a);
            r3 = 1u;
        }
    }
    return r3;
}
