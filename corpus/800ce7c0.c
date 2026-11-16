#include "tc_rt.h"

u32 fn_800ce7c0(u32 param_1, s32 param_2, u32 param_3, u32 param_4)
{
    u32 r3 = 0, r4 = 0, r31 = 0;
    f64 f0 = 0.0, f1 = 0.0;
    TcArgs a = {0};
    (void)param_1;
    a.r[0] = (u32)param_2;
    r3 = tc_call(0x80074e90u, &a);
    f1 = tc_lastf();
    r4 = tc_lastr4();
    if (r3 == 0u) {
        r3 = 0u;
    } else {
        r31 = rd32((((u32)param_2 << 2u) & 0xfffffffcu) - 0x7fb79c28u);
        a.r[0] = r31;
        a.r[1] = r4;
        a.r[2] = 0u;
        a.r[3] = 0u;
        a.f[0] = f1;
        r3 = tc_call(rd32(rd32(r31) + 0x28u), &a);
        f0 = (f64)rdf32(0x80573050u);
        wrf32d(param_3, (f64)rdf32(r3));
        f1 = (f64)rdf32(r3 + 4u);
        wrf32d(param_3 + 4u, f1);
        f0 = (f64)(f32)(f1 + f0);
        f1 = (f64)rdf32(r3 + 8u);
        wrf32d(param_3 + 8u, f1);
        wrf32d(param_3 + 4u, f0);
        a.r[0] = r31;
        a.r[1] = tc_lastr4();
        a.r[2] = 0u;
        a.r[3] = 0u;
        a.f[0] = f1;
        r3 = tc_call(rd32(rd32(r31) + 0x30u), &a);
        f0 = (f64)rdf32(0x80573050u);
        wrf32d(param_4, (f64)rdf32(r3));
        f1 = (f64)rdf32(r3 + 4u);
        wrf32d(param_4 + 4u, f1);
        f0 = (f64)(f32)(f1 + f0);
        f1 = (f64)rdf32(r3 + 8u);
        r3 = 1u;
        wrf32d(param_4 + 8u, f1);
        wrf32d(param_4 + 4u, f0);
    }
    return r3;
}
