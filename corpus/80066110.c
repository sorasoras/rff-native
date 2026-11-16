#include "tc_rt.h"

void fn_80066110(f64 param_1, f64 param_2, u32 param_3)
{
    f64 f0 = 0.0, f1 = 0.0, f29 = 0.0, f30 = 0.0, f31 = 0.0;
    TcArgs a = {0};
    a.f[0] = param_1;
    f1 = tc_callf(0x80262b10u, &a);
    f31 = (f64)(f32)f1;
    a.f[0] = param_1;
    f1 = tc_callf(0x80262704u, &a);
    f30 = (f64)(f32)f1;
    a.f[0] = param_2;
    f1 = tc_callf(0x80262b10u, &a);
    f29 = (f64)(f32)f1;
    a.f[0] = param_2;
    f1 = tc_callf(0x80262704u, &a);
    f0 = (f64)(f32)f1;
    wrf32d(param_3 + 4u, f29);
    f1 = (f64)(f32)(f31 * f0);
    f0 = (f64)(f32)(f30 * f0);
    wrf32d(param_3, f1);
    wrf32d(param_3 + 8u, f0);
    return;
}
