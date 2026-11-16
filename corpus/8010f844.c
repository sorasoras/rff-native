#include "tc_rt.h"

f64 fn_8010f844(f64 param_f1, f64 param_f2)
{
    f64 f1 = 0.0;
    TcArgs a = {0};
    a.f[0] = param_f1;
    a.f[1] = param_f2;
    a.r[0] = (rd32(0x80471a18u) * 0x4150u) - 0x7fb92738u;
    a.r[1] = 0u;
    a.r[2] = 0u;
    f1 = tc_callf(0x80089fc8u, &a);
    f1 = (f64)(f32)((f64)rdf32(0x80574120u) + f1);
    return f1;
}
