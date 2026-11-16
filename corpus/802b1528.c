#include "tc_rt.h"

void fn_802b1528(s32 param_1, f64 param_f1, f64 param_f2, f64 param_f3, f64 param_f4, f64 param_f5, f64 param_f6, f64 param_f7, f64 param_f8, u32 param_r10, u32 param_r5, u32 param_r6, u32 param_r7, u32 param_r8, u32 param_r9)
{
    u32 r3 = 0;
    TcArgs a = {0};
    if ((u32)rd8(0x8054161cu) >= 4u) {
        a.f[0] = param_f1;
        a.f[1] = param_f2;
        a.f[2] = param_f3;
        a.f[3] = param_f4;
        a.f[4] = param_f5;
        a.f[5] = param_f6;
        a.f[6] = param_f7;
        a.f[7] = param_f8;
        a.r[0] = 0x90003u;
        a.r[1] = 0x80397840u;
        a.r[2] = param_r5;
        a.r[3] = param_r6;
        a.r[4] = param_r7;
        a.r[5] = param_r8;
        a.r[6] = param_r9;
        a.r[7] = param_r10;
        (void)tc_call(0x8028cc54u, &a);
    }
    a.r[0] = (u32)param_1;
    (void)tc_call(0x8028d290u, &a);
    for (;;) {
        a.r[0] = (u32)param_1 + 0x18u;
        r3 = tc_call(0x8028a9f8u, &a);
        if (r3 == 0u) break;
        a.r[0] = r3;
        (void)tc_call(0x8028a35cu, &a);
    }
    a.r[0] = (u32)param_1;
    a.r[1] = 0u;
    a.r[2] = 0x78u;
    (void)tc_call(0x8000443cu, &a);
    wr8((u32)param_1 + 0x6cu, 0u);
    return;
}
