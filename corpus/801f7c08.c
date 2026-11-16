#include "tc_rt.h"

void fn_801f7c08(u32 param_1, u32 param_2, u32 param_3)
{
    u32 r3 = 0;
    f64 f1 = 0.0, f31 = 0.0;
    TcArgs a = {0};
    a.r[0] = param_1;
    f1 = tc_callf(0x801f80f8u, &a);
    f31 = f1;
    r3 = tc_call(0x800d3f34u, &a);
    if (r3 != 0u) {
        f31 = (f64)(f32)(f31 * (f64)rdf32(0x80576638u));
    }
    a.r[0] = param_1;
    f1 = tc_callf(0x800d59f8u, &a);
    if (!(f31 > f1)) {
        a.r[0] = param_1;
        f1 = tc_callf(0x800d59f8u, &a);
        f31 = f1;
    }
    wrf32d(param_2, f31);
    a.r[0] = param_1;
    f1 = tc_callf(0x800d5a00u, &a);
    f31 = f1;
    a.r[0] = param_1;
    f1 = tc_callf(0x801f82dcu, &a);
    wrf32d(param_3, (f64)(f32)(f1 + f31));
    return;
}
