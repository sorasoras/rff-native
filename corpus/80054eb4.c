#include "tc_rt.h"

static f64 px_fdiv(f64 a, f64 b)
{
    return a / b;
}

void fn_80054eb4(f64 param_1, u32 param_2, u32 param_3, u32 param_4, u32 param_5)
{
    TcArgs a = {0};
    a.f[0] = (f64)(f32)px_fdiv(param_1, (f64)rdf32(0x8057234cu));
    a.f[1] = (f64)rdf32(0x80572350u);
    a.f[2] = (f64)rdf32(0x80572354u);
    a.f[3] = (f64)rdf32(0x80572344u);
    a.r[0] = param_2;
    a.r[1] = param_5;
    a.r[2] = param_3;
    a.r[3] = param_4;
    (void)tc_call(0x80054c68u, &a);
    return;
}
