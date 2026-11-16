#include "tc_rt.h"

void fn_8021df70(s32 param_1, f64 param_f1, f64 param_f2, f64 param_f3, f64 param_f4, f64 param_f5, f64 param_f6, f64 param_f7, f64 param_f8, u32 param_r10, u32 param_r6, u32 param_r7, u32 param_r8, u32 param_r9)
{
    u32 r30 = 0, r31 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    a.f[0] = param_f1;
    a.f[1] = param_f2;
    a.f[2] = param_f3;
    a.f[3] = param_f4;
    a.f[4] = param_f5;
    a.f[5] = param_f6;
    a.f[6] = param_f7;
    a.f[7] = param_f8;
    a.r[0] = (u32)param_1 + 0x14c4u;
    a.r[3] = param_r6;
    a.r[4] = param_r7;
    a.r[5] = param_r8;
    a.r[6] = param_r9;
    a.r[7] = param_r10;
    (void)tc_call(0x80164328u, &a);
    a.r[0] = (u32)param_1 + 0x1040u;
    (void)tc_call(0x80220d38u, &a);
    a.r[0] = (u32)param_1 + 0x48cu;
    f1 = tc_callf(0x80220600u, &a);
    a.f[0] = f1;
    a.f[1] = 0.0;
    a.f[2] = 0.0;
    a.f[3] = 0.0;
    a.f[4] = 0.0;
    a.f[5] = 0.0;
    a.f[6] = 0.0;
    a.f[7] = 0.0;
    a.r[0] = (u32)param_1 + 0x44u;
    a.r[3] = 0u;
    a.r[4] = 0u;
    a.r[5] = 0u;
    a.r[6] = 0u;
    a.r[7] = 0u;
    (void)tc_call(0x80119f2cu, &a);
    r31 = (u32)param_1 + 0x14d8u;
    r30 = 0u;
    do {
        a.r[0] = r31;
        (void)tc_call(0x801f0ff4u, &a);
        r30 = r30 + 1u;
        r31 = r31 + 0x58u;
    } while ((s32)r30 < 3);
    a.r[0] = (u32)param_1 + 0x44cu;
    (void)tc_call(0x800f8388u, &a);
    a.r[0] = 0x80571250u;
    (void)tc_call(0x80103074u, &a);
    a.r[0] = 0x804b9d30u;
    (void)tc_call(0x80100404u, &a);
    return;
}
