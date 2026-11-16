#include "tc_rt.h"

void fn_801f7edc(u32 param_r3)
{
    u32 r3 = 0, r28 = 0, r29 = 0, r30 = 0, r31 = 0;
    f64 f1 = 0.0, f29 = 0.0, f30 = 0.0, f31 = 0.0;
    TcArgs a = {0};
    a.r[0] = param_r3;
    r3 = tc_call(0x800d56bcu, &a);
    r30 = r3;
    if (r3 != 0u) {
        a.r[0] = param_r3;
        r3 = tc_call(0x800d569cu, &a);
        r29 = r3;
        r3 = tc_call(0x801f8424u, &a);
        r31 = r3;
        a.r[0] = param_r3;
        f1 = tc_callf(0x801f81f0u, &a);
        f30 = f1;
        a.r[0] = param_r3;
        f1 = tc_callf(0x800d5a00u, &a);
        f31 = f1;
        a.r[0] = param_r3;
        f1 = tc_callf(0x800d59f0u, &a);
        f29 = (f64)(f32)(f1 + f31);
        a.r[0] = param_r3;
        a.r[1] = tc_lastr4();
        a.f[0] = f1;
        a.f[1] = 0.0;
        a.f[2] = 0.0;
        a.f[3] = 0.0;
        f1 = tc_callf(rd32(rd32(param_r3 + 0x738u) + 0x20u), &a);
        f29 = (f64)(f32)(f29 + f1);
        r28 = 0u;
        while ((s32)r28 < (s32)r30 && r28 != r29) {
            a.r[0] = param_r3;
            r3 = tc_call(0x801f8428u, &a);
            if (r3 == 0u) {
                a.r[0] = param_r3;
                a.r[1] = r28;
                f1 = tc_callf(0x801f8054u, &a);
                f30 = (f64)(f32)(f30 + f1);
                a.r[0] = param_r3;
                a.r[1] = tc_lastr4();
                a.f[0] = f1;
                a.f[1] = 0.0;
                a.f[2] = 0.0;
                a.f[3] = 0.0;
                f1 = tc_callf(rd32(rd32(param_r3 + 0x738u) + 0x1cu), &a);
                f30 = (f64)(f32)(f30 + f1);
            } else {
                f1 = tc_callf(0x800d3b08u, &a);
                f31 = f1;
                a.r[0] = param_r3;
                f1 = tc_callf(0x800d3b00u, &a);
                f29 = (f64)(f32)(f29 + (f64)(f32)(f1 + f31));
            }
            r28 = r28 + 1u;
        }
        wrf32d(r31 + 0xcu, f30);
        wrf32d(r31 + 0x10u, f29);
        wrf32d(r31 + 0x18u, f30);
        wrf32d(r31 + 0x1cu, f29);
        a.r[0] = param_r3;
        a.r[1] = r29;
        f1 = tc_callf(0x801f8054u, &a);
        f31 = f1;
        a.r[0] = param_r3;
        f1 = tc_callf(0x800d3b00u, &a);
        a.f[0] = f30;
        a.f[1] = f29;
        a.f[2] = f31;
        a.f[3] = f1;
        (void)tc_call(0x800d5a98u, &a);
    }
    return;
}
