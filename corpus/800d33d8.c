#include "tc_rt.h"

void fn_800d33d8(u32 param_1, u32 param_2, u32 param_3)
{
    u32 r3 = 0, r31 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    r3 = tc_call(0x80052c3cu, &a);
    r31 = r3;
    wrf32d(r3 + 0x30u, (f64)rdf32(param_1 + 0x20u));
    a.r[0] = param_1;
    f1 = tc_callf(0x800d5a1cu, &a);
    wrf32d(r31 + 0x40u, f1);
    f1 = (f64)rdf32(0x80573124u);
    a.f[0] = f1;
    a.f[1] = f1;
    a.f[2] = (f64)rdf32(param_1 + 0x14u);
    a.f[3] = (f64)rdf32(param_1 + 0x18u);
    a.r[0] = r31;
    (void)tc_call(0x800cc524u, &a);
    wrf32d(r31 + 0x3cu, (f64)rdf32(param_1 + 0x1cu));
    a.r[0] = r31;
    a.r[1] = rd32(param_1);
    a.r[2] = param_2;
    a.r[3] = param_3;
    (void)tc_call(0x800cd4c4u, &a);
    return;
}
