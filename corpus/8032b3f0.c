#include "tc_rt.h"

f64 fn_8032b3f0(f64 param_1)
{
    f64 f0 = 0.0, f1 = 0.0;
    TcArgs a = {0};
    f0 = (f64)rdf32(0x80577c40u);
    if ((param_1 < f0) || (param_1 == f0)) {
        return f0;
    }
    a.f[0] = param_1;
    f1 = tc_callf(0x802eff54u, &a);
    f0 = (f64)(f32)(param_1 * f1);
    return f0;
}
