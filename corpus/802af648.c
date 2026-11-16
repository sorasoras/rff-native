#include "tc_rt.h"

void fn_802af648(s32 param_1, s32 param_2, f64 param_f1, f64 param_f2, f64 param_f3, f64 param_f4, f64 param_f5, f64 param_f6, f64 param_f7, f64 param_f8, u32 param_r10, u32 param_r7, u32 param_r8, u32 param_r9)
{
    TcArgs a = {0};
    if ((u32)param_2 != 0u) {
        wr8(0x8054126cu, 1u);
        if ((u32)rd8((u32)param_1 + 0x73u) == 0u) {
            a.f[0] = param_f1;
            a.f[1] = param_f2;
            a.f[2] = param_f3;
            a.f[3] = param_f4;
            a.f[4] = param_f5;
            a.f[5] = param_f6;
            a.f[6] = param_f7;
            a.f[7] = param_f8;
            a.r[0] = (u32)param_1;
            a.r[1] = 0u;
            a.r[2] = 0u;
            a.r[4] = param_r7;
            a.r[5] = param_r8;
            a.r[6] = param_r9;
            a.r[7] = param_r10;
            (void)tc_call(0x802ac72cu, &a);
        }
        a.r[0] = (u32)param_1;
        a.r[1] = 0u;
        (void)tc_call(0x802b02dcu, &a);
    }
    return;
}
