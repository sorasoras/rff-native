#include "tc_rt.h"

f64 fn_801dc33c(u32 param_1)
{
    f64 f1 = 0.0, f2 = 0.0, f3 = 0.0;
    TcArgs a = {0};
    f1 = (f64)rdf32(param_1);
    f3 = (f64)rdf32(0x80570c00u);
    if (f1 != f3 && (f64)rdf32(param_1 + 4u) != f3) {
        f2 = (f64)rdf32(param_1 + 8u);
        if (f2 != f3) {
            a.f[0] = f1;
            a.f[1] = f2;
            a.r[0] = (rd32(0x80471a18u) * 0x4150u) - 0x7fb92738u;
            a.r[1] = 0u;
            a.r[2] = 0u;
            f1 = tc_callf(0x80089fc8u, &a);
            return f1;
        }
    }
    return (f64)rdf32(0x805761f0u);
}
