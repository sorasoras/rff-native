#include "tc_rt.h"

void fn_80271c6c(s32 param_1, s32 param_2, f64 param_f1, f64 param_f2, f64 param_f3, f64 param_f4, f64 param_f5, f64 param_f6, f64 param_f7, f64 param_f8, u32 param_r10, u32 param_r7, u32 param_r8, u32 param_r9)
{
    u32 r3 = 0, r5 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    if (param_1 >= 0) {
        wr32(rd32((u32)param_2 + 8u), (u32)param_1);
        wr8(rd32((u32)param_2 + 8u) + 0x89u, 2u);
        r5 = rd32((u32)param_2 + 8u);
        wr8(r5 + 0x8au, 1u);
        a.r[0] = 0u;
        a.r[1] = (u32)param_2;
        a.r[2] = r5;
        a.r[3] = 2u;
        a.r[4] = param_r7;
        a.r[5] = param_r8;
        a.r[6] = param_r9;
        a.r[7] = param_r10;
        a.f[0] = param_f1;
        a.f[1] = param_f2;
        a.f[2] = param_f3;
        a.f[3] = param_f4;
        a.f[4] = param_f5;
        a.f[5] = param_f6;
        a.f[6] = param_f7;
        a.f[7] = param_f8;
        (void)tc_call(rd32((u32)param_2 + 4u), &a);
    } else {
        a.f[0] = param_f1;
        a.f[1] = param_f2;
        a.f[2] = param_f3;
        a.f[3] = param_f4;
        a.f[4] = param_f5;
        a.f[5] = param_f6;
        a.f[6] = param_f7;
        a.f[7] = param_f8;
        a.r[0] = (u32)param_1;
        a.r[4] = param_r7;
        a.r[5] = param_r8;
        a.r[6] = param_r9;
        a.r[7] = param_r10;
        r3 = tc_call(0x802721bcu, &a);
        f1 = tc_lastf();
        a.r[0] = r3;
        a.r[1] = (u32)param_2;
        a.r[2] = 0u;
        a.r[3] = 0u;
        a.r[4] = 0u;
        a.r[5] = 0u;
        a.r[6] = 0u;
        a.r[7] = 0u;
        a.f[0] = f1;
        a.f[1] = 0.0;
        a.f[2] = 0.0;
        a.f[3] = 0.0;
        a.f[4] = 0.0;
        a.f[5] = 0.0;
        a.f[6] = 0.0;
        a.f[7] = 0.0;
        (void)tc_call(rd32((u32)param_2 + 4u), &a);
    }
    return;
}
