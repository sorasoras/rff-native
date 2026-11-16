#include "tc_rt.h"

void fn_8004e7f0(f64 param_1, f64 param_2, u32 param_3)
{
    f64 f1 = 0.0;
    TcArgs a = {0};
    a.r[0] = 0x101u;
    (void)tc_call(0x8004cd5cu, &a);
    a.r[0] = param_3;
    a.r[1] = param_3;
    a.r[2] = 0x101u;
    (void)tc_call(0x8003d05cu, &a);
    f1 = (f64)rdf32(0x80572238u);
    a.f[0] = f1;
    a.f[1] = f1;
    a.f[2] = param_1;
    a.f[3] = param_2;
    (void)tc_call(0x8004e6b8u, &a);
    return;
}
