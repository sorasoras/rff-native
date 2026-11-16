#include "tc_rt.h"

static f64 px_fdiv(f64 a, f64 b)
{
    return a / b;
}

void fn_80054ee0(f64 param_1, f64 param_2, f64 param_3, f64 param_4)
{
    TcArgs a = {0};
    a.f[0] = param_3;
    a.f[1] = param_1;
    a.f[2] = param_2;
    a.f[3] = (f64)(f32)px_fdiv(param_4, (f64)rdf32(0x8057234cu));
    a.f[4] = (f64)rdf32(0x80572350u);
    a.f[5] = (f64)rdf32(0x80572354u);
    a.f[6] = (f64)rdf32(0x80572344u);
    (void)tc_call(0x80054e64u, &a);
    return;
}
