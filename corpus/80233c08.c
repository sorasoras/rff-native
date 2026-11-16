#include "tc_rt.h"

void fn_80233c08(f64 param_1, u32 param_2, u32 param_3)
{
    f64 f1 = 0.0, f31 = 0.0;
    TcArgs a = {0};
    a.f[0] = param_1;
    f1 = tc_callf(0x80262b10u, &a);
    f31 = (f64)(f32)f1;
    a.f[0] = param_1;
    f1 = tc_callf(0x80262704u, &a);
    a.f[0] = f31;
    a.f[1] = (f64)(f32)f1;
    a.r[0] = param_2;
    a.r[1] = param_3;
    (void)tc_call(0x80233b58u, &a);
    return;
}
