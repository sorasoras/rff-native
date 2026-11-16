#include "tc_rt.h"

void fn_800ce638(u32 param_1, u32 param_2, u32 param_3)
{
    u32 r3 = 0, r31 = 0;
    f64 f0 = 0.0, f1 = 0.0;
    TcArgs a = {0};
    (void)param_1;
    r31 = rd32(0x804863d8u);
    a.r[0] = r31;
    a.r[1] = param_2;
    a.r[2] = param_3;
    a.f[0] = 0.0;
    r3 = tc_call(rd32(rd32(r31) + 0x28u), &a);
    f0 = (f64)rdf32(0x80573050u);
    wrf32d(param_2, (f64)rdf32(r3));
    f1 = (f64)rdf32(r3 + 4u);
    wrf32d(param_2 + 4u, f1);
    f0 = (f64)(f32)(f1 + f0);
    f1 = (f64)rdf32(r3 + 8u);
    wrf32d(param_2 + 8u, f1);
    wrf32d(param_2 + 4u, f0);
    a.r[0] = r31;
    a.r[1] = tc_lastr4();
    a.r[2] = 0u;
    a.f[0] = f1;
    r3 = tc_call(rd32(rd32(r31) + 0x30u), &a);
    f0 = (f64)rdf32(0x80573050u);
    wrf32d(param_3, (f64)rdf32(r3));
    f1 = (f64)rdf32(r3 + 4u);
    wrf32d(param_3 + 4u, f1);
    f0 = (f64)(f32)(f1 + f0);
    wrf32d(param_3 + 8u, (f64)rdf32(r3 + 8u));
    wrf32d(param_3 + 4u, f0);
    return;
}
