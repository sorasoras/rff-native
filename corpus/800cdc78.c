#include "tc_rt.h"

static f64 px_fdiv(f64 a, f64 b)
{
    return a / b;
}

void fn_800cdc78(f64 param_1, f64 param_2, f64 param_3, f64 param_4, s32 param_5, u32 param_6, u32 param_7, s32 param_8, u32 param_9)
{
    u32 r0 = 0, r5 = 0, r7 = 0;
    f64 f2 = 0.0, f6 = 0.0, f7 = 0.0, f8 = 0.0;
    TcArgs a = {0};
    if (rd32((u32)param_5 + 0xf0u) == 0u) {
        f8 = (f64)rdf32(param_6);
        f7 = (f64)rdf32(param_6 + 4u);
        f6 = (f64)rdf32(param_6 + 8u);
        wrf32d((u32)param_5 + 0xe4u, param_1);
        wrf32d((u32)param_5 + 8u, f8);
        r5 = (u32)param_5 + 8u;
        wrf32d((u32)param_5 + 0xcu, f7);
        f2 = (f64)(f32)param_4;
        wrf32d((u32)param_5 + 0x10u, f6);
        r7 = 6u;
        wrf32d((u32)param_5 + 0x24u, param_4);
        wrf32d((u32)param_5 + 0xe8u, param_3);
        wrf32d((u32)param_5 + 0xecu, (f64)(f32)px_fdiv((f64)(f32)(param_3 - param_2), (f64)(f32)param_1));
        wr32((u32)param_5 + 0xf0u, 1u);
        if ((u32)param_8 != 0u) {
            r7 = 2u;
        }
        a.f[0] = param_2;
        a.f[1] = f2;
        a.r[0] = (u32)param_5;
        a.r[1] = 0u;
        a.r[2] = r5;
        a.r[3] = param_9;
        a.r[4] = r7;
        a.r[5] = param_7;
        (void)tc_call(0x8006e674u, &a);
        r0 = rd32((u32)param_5 + 0x64u);
        wr32((u32)param_5 + 0x38u, 2u);
        r0 = r0 | 0x80000000u;
        wr32((u32)param_5 + 0x64u, r0);
        a.r[0] = (u32)param_5;
        (void)tc_call(0x8006ff58u, &a);
    }
    return;
}
