#include "tc_rt.h"

void fn_801a0e9c(f64 param_1, f64 param_2, f64 param_3, f64 param_4, f64 param_5, f64 param_6, u32 param_7, u32 param_8, s32 param_9, s32 param_10, s32 param_11)
{
    u32 r3 = 0;
    f64 f0 = 0.0, f2 = 0.0, f31 = 0.0;
    TcArgs a = {0};
    wrf32d(param_8 + 0x74u, param_1);
    wrf32d(param_8 + 0x78u, param_2);
    f31 = param_6;
    wrf32d(param_8 + 0x80u, param_3);
    wrf32d(param_8 + 0x84u, param_4);
    a.r[0] = param_8;
    a.r[1] = param_8;
    a.r[2] = (u32)param_9;
    a.r[3] = (u32)param_10;
    a.r[4] = (u32)param_11;
    a.f[0] = param_1;
    a.f[1] = param_2;
    a.f[2] = param_3;
    a.f[3] = param_4;
    a.f[4] = param_5;
    a.f[5] = param_6;
    (void)tc_call(rd32(rd32(param_8) + 0xcu), &a);
    a.r[0] = param_8;
    a.r[1] = tc_lastr4();
    a.r[2] = 0u;
    a.r[3] = 0u;
    a.r[4] = 0u;
    a.f[0] = (f64)rdf32(param_8 + 0x74u);
    a.f[1] = (f64)rdf32(param_8 + 0x78u);
    a.f[2] = (f64)rdf32(param_8 + 0x80u);
    a.f[3] = (f64)rdf32(param_8 + 0x84u);
    a.f[4] = 0.0;
    a.f[5] = 0.0;
    (void)tc_call(rd32(rd32(param_8) + 0x1cu), &a);
    wr8(param_8 + 0x2cu, 0xffu);
    wr32(param_8 + 0x5cu, (u32)param_11);
    wr32(param_8 + 0x18u, (u32)param_9);
    if ((u32)param_9 != 0u) {
        a.r[0] = (u32)param_9;
        r3 = tc_call(0x8004c630u, &a);
        if ((s32)r3 > param_10) {
            wr32(param_8 + 0x1cu, (u32)param_10);
        }
    }
    f0 = (f64)rdf32(0x80575858u);
    wrf32d(param_8 + 0xcu, param_5);
    if (f0 == param_6) {
        f31 = param_1;
    }
    f2 = (f64)rdf32(0x8057583cu);
    if (rd32(param_7 + 0x2cu) == 1u) {
        f2 = (f64)rdf32(0x8057585cu);
    }
    wrf32d(param_8 + 0x88u, (f64)(f32)((f64)(f32)((f64)rdf32(0x8057583cu) - f2) * (f64)(f32)(f31 - param_1)));
    return;
}
