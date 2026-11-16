#include "tc_rt.h"

s32 fn_801fa500(s32 param_1, s32 param_2, f64 param_f1, f64 param_f2, f64 param_f3, f64 param_f4, f64 param_f5, f64 param_f6, f64 param_f7, f64 param_f8, u32 param_r10, u32 param_r6, u32 param_r7, u32 param_r8, u32 param_r9)
{
    u32 r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r30 = 0, r31 = 0;
    f64 f1 = 0.0, f2 = 0.0, f3 = 0.0, f4 = 0.0, f5 = 0.0, f6 = 0.0, f7 = 0.0, f8 = 0.0;
    TcArgs a = {0};
    f1 = param_f1;
    f2 = param_f2;
    f3 = param_f3;
    f4 = param_f4;
    f5 = param_f5;
    f6 = param_f6;
    f7 = param_f7;
    f8 = param_f8;
    r10 = param_r10;
    r6 = param_r6;
    r7 = param_r7;
    r8 = param_r8;
    r9 = param_r9;
    if ((u32)param_1 != 0u) {
        r31 = (u32)param_1 + 0x28u;
        r30 = 0u;
        wr32((u32)param_1 + 0xc8u, 0x803771d8u);
        do {
            a.f[0] = f1;
            a.f[1] = f2;
            a.f[2] = f3;
            a.f[3] = f4;
            a.f[4] = f5;
            a.f[5] = f6;
            a.f[6] = f7;
            a.f[7] = f8;
            a.r[0] = r31;
            a.r[3] = r6;
            a.r[4] = r7;
            a.r[5] = r8;
            a.r[6] = r9;
            a.r[7] = r10;
            f1 = tc_callf(0x80164328u, &a);
            r6 = 0u;
            r7 = 0u;
            r8 = 0u;
            r9 = 0u;
            r10 = 0u;
            f2 = 0.0;
            f3 = 0.0;
            f4 = 0.0;
            f5 = 0.0;
            f6 = 0.0;
            f7 = 0.0;
            f8 = 0.0;
            r30 = r30 + 1u;
            r31 = r31 + 0xcu;
        } while ((s32)r30 < 5);
        a.r[0] = (u32)param_1 + 0x78u;
        a.r[1] = 0xffffffffu;
        (void)tc_call(0x801f0de8u, &a);
        a.r[0] = (u32)param_1 + 0x28u;
        a.r[1] = 0x80163f08u;
        a.r[2] = 0xcu;
        a.r[3] = 5u;
        (void)tc_call(0x8025571cu, &a);
        if (param_2 > 0) {
            a.r[0] = (u32)param_1;
            (void)tc_call(0x801faeacu, &a);
        }
    }
    return param_1;
}
