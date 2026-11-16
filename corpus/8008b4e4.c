#include "tc_rt.h"

f64 fn_8008b4e4(f64 param_f1)
{
    f64 f1 = 0.0;
    TcArgs a = {0};
    a.f[0] = param_f1;
    f1 = tc_callf(0x80262ec0u, &a);
    f1 = (f64)(f32)f1;
    return f1;
}
