#include "tc_rt.h"

void fn_802574d8(u32 param_1, f64 param_f1, f64 param_f2, f64 param_f3, f64 param_f4, f64 param_f5, f64 param_f6, f64 param_f7, f64 param_f8, u32 param_r10, u32 param_r4, u32 param_r5, u32 param_r6, u32 param_r7, u32 param_r8, u32 param_r9)
{
    u32 r0 = 0, r3 = 0, r30 = 0, r31 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    if (rd32(0x80570a48u) == 0xffffffffu) {
        a.f[0] = param_f1;
        a.f[1] = param_f2;
        a.f[2] = param_f3;
        a.f[3] = param_f4;
        a.f[4] = param_f5;
        a.f[5] = param_f6;
        a.f[6] = param_f7;
        a.f[7] = param_f8;
        a.r[0] = 0x8033cac8u;
        a.r[1] = param_r4;
        a.r[2] = param_r5;
        a.r[3] = param_r6;
        a.r[4] = param_r7;
        a.r[5] = param_r8;
        a.r[6] = param_r9;
        a.r[7] = param_r10;
        f1 = tc_callf(0x80228554u, &a);
        a.f[0] = f1;
        a.f[1] = 0.0;
        a.f[2] = 0.0;
        a.f[3] = 0.0;
        a.f[4] = 0.0;
        a.f[5] = 0.0;
        a.f[6] = 0.0;
        a.f[7] = 0.0;
        a.r[0] = 0x8033cafeu;
        a.r[1] = tc_lastr4();
        a.r[2] = 0u;
        a.r[3] = 0u;
        a.r[4] = 0u;
        a.r[5] = 0u;
        a.r[6] = 0u;
        a.r[7] = 0u;
        (void)tc_call(0x80228554u, &a);
        r3 = tc_call(0x802271d8u, &a);
        r30 = r3;
        r3 = tc_call(0x802271c0u, &a);
        r31 = r3;
        a.r[0] = r30;
        a.r[1] = r3;
        a.r[2] = 1u;
        r3 = tc_call(0x802270d4u, &a);
        r30 = r3;
        a.r[0] = r3;
        (void)tc_call(0x80227208u, &a);
        r0 = r30 + 0x1fu;
        r30 = r31 & 0xffffffe0u;
        a.r[0] = r0 & 0xffffffe0u;
        a.r[1] = r30;
        r3 = tc_call(0x80227144u, &a);
        a.r[0] = r3;
        (void)tc_call(0x802270c4u, &a);
        a.r[0] = r30;
        (void)tc_call(0x80227208u, &a);
    }
    a.r[0] = rd32(0x80570a48u);
    a.r[1] = param_1;
    (void)tc_call(0x8022704cu, &a);
    return;
}
