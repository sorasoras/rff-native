#include "tc_rt.h"

f64 fn_80262c6c(f64 param_1, f64 param_2)
{
    f64 f1 = 0.0;
    TcArgs a = {0};
    a.f[0] = param_1;
    a.f[1] = param_2;
    f1 = tc_callf(0x8025f54cu, &a);
    return f1;
}
