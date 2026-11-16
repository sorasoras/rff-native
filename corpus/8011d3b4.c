#include "tc_rt.h"

void fn_8011d3b4(s32 param_1)
{
    u32 r3 = 0, r31 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f3 = 0.0;
    TcArgs a = {0};
    a.r[0] = (u32)param_1;
    (void)tc_call(0x8011d43cu, &a);
    a.r[0] = (u32)param_1;
    r3 = tc_call(0x8011d7dcu, &a);
    r31 = r3;
    a.r[0] = (u32)param_1;
    r3 = tc_call(0x8011d534u, &a);
    f1 = tc_lastf();
    a.r[0] = r3;
    a.r[1] = r31;
    a.f[0] = f1;
    a.f[1] = 0.0;
    a.f[2] = 0.0;
    (void)tc_call(rd32(rd32(r3) + 0x34u), &a);
    a.r[0] = (u32)param_1;
    (void)tc_call(0x8011d4d8u, &a);
    f3 = (f64)rdf32(0x8057424cu);
    f2 = (f64)rdf32(0x80574250u);
    f1 = (f64)rdf32(0x80574254u);
    f0 = (f64)rdf32(0x80574248u);
    wrf32d((u32)param_1 + 0x134u, f3);
    wrf32d((u32)param_1 + 0x130u, f3);
    wrf32d((u32)param_1 + 0x128u, f2);
    wrf32d((u32)param_1 + 0x12cu, f1);
    wrf32d((u32)param_1 + 0x138u, f0);
    return;
}
