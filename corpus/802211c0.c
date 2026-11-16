#include "tc_rt.h"

u32 fn_802211c0(s32 param_1, f64 param_f1, f64 param_f2, f64 param_f3, f64 param_f4, f64 param_f5, f64 param_f6, f64 param_f7, f64 param_f8, u32 param_r10, u32 param_r8, u32 param_r9)
{
    u32 r5 = 0;
    TcArgs a = {0};
    r5 = 0u;
    if (rd32((u32)param_1 + 0x20u) != 0u) {
        r5 = 0x10u;
    }
    a.f[0] = param_f1;
    a.f[1] = param_f2;
    a.f[2] = param_f3;
    a.f[3] = param_f4;
    a.f[4] = param_f5;
    a.f[5] = param_f6;
    a.f[6] = param_f7;
    a.f[7] = param_f8;
    a.r[0] = 0x22u;
    a.r[1] = 0u;
    a.r[2] = r5;
    a.r[3] = 0u;
    a.r[4] = 1u;
    a.r[5] = param_r8;
    a.r[6] = param_r9;
    a.r[7] = param_r10;
    (void)tc_call(0x800f2370u, &a);
    a.r[0] = rd32((u32)param_1 + 0x1cu) + 0x44u;
    a.r[1] = 1u;
    (void)tc_call(0x800f8544u, &a);
    return 1u;
}
