#include "tc_rt.h"

u32 fn_8010f3bc(u32 param_1, u32 param_2, s32 param_3, u32 param_4, f64 param_f1, f64 param_f2, f64 param_f3, f64 param_f4, f64 param_f5, f64 param_f6, f64 param_f7, f64 param_f8, u32 param_r10, u32 param_r8, u32 param_r9)
{
    u32 r3 = 0, r8 = 0, r9 = 0, r10 = 0;
    f64 f1 = 0.0, f2 = 0.0, f3 = 0.0, f4 = 0.0, f5 = 0.0, f6 = 0.0, f7 = 0.0, f8 = 0.0;
    TcArgs a = {0};
    (void)param_1;
    f1 = param_f1;
    f2 = param_f2;
    f3 = param_f3;
    f4 = param_f4;
    f5 = param_f5;
    f6 = param_f6;
    f7 = param_f7;
    f8 = param_f8;
    r10 = param_r10;
    r8 = param_r8;
    r9 = param_r9;
    if ((u32)param_3 != 0u) {
        a.r[0] = 1u;
        a.r[1] = param_2;
        a.r[2] = (u32)param_3;
        r3 = tc_call(0x800a6dccu, &a);
        f1 = tc_lastf();
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
        if (r3 != 0u) {
            r3 = 1u;
            return r3;
        }
    }
    a.f[0] = f1;
    a.f[1] = f2;
    a.f[2] = f3;
    a.f[3] = f4;
    a.f[4] = f5;
    a.f[5] = f6;
    a.f[6] = f7;
    a.f[7] = f8;
    a.r[0] = 1u;
    a.r[1] = param_2;
    a.r[2] = 0x8010ed64u;
    a.r[3] = 1u;
    a.r[4] = param_4;
    a.r[5] = r8;
    a.r[6] = r9;
    a.r[7] = r10;
    r3 = tc_call(0x800a7228u, &a);
    return r3;
}
