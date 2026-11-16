#include "tc_rt.h"

u32 fn_800c6880(u32 param_1, u32 param_2)
{
    u32 r3 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    a.r[0] = param_1;
    a.r[1] = param_2;
    (void)tc_call(0x800c677cu, &a);
    f1 = (f64)rdf32(0x80572f38u);
    if (f1 != (f64)rdf32(param_2) || f1 != (f64)rdf32(param_2 + 8u)) {
        f1 = (f64)rdf32(param_2 + 8u);
        if ((f64)rdf32(0x80572f38u) != f1) {
            wrf32d(param_2 + 8u, (f64)(f32)(f1 * (f64)rdf32(0x80572f40u)));
        }
        r3 = 1u;
    } else {
        r3 = 0u;
    }
    return r3;
}
