#include "tc_rt.h"

f64 fn_80262c60(f64 param_1)
{
    f64 f1 = 0.0;
    TcArgs a = {0};
    a.f[0] = param_1;
    f1 = tc_callf(0x8025ed80u, &a);
    return f1;
}
