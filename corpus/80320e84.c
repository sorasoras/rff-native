#include "tc_rt.h"

void fn_80320e84(u32 param_1, u32 param_2, u32 param_3)
{
    f64 f0 = 0.0, f1 = 0.0, f3 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdfe0u, 0x817fe000u);
    f1 = (f64)rdf32(0x805779bcu);
    f0 = (f64)rdf32(param_3);
    wr32(0x817fe004u, 0x817ff000u);
    if (f1 != f0) {
        f3 = (f64)(f32)ppc_fres(f0);
        f3 = ppc_fnmsubs(f0, (f64)(f32)(f3 * f3), (f64)(f32)(f3 + f3));
    } else {
        f3 = (f64)rdf32(0x805779ecu);
    }
    f1 = (f64)rdf32(0x805779bcu);
    f0 = (f64)rdf32(param_3 + 4u);
    wrf32d(0x817fdfe8u, f3);
    if (f1 != f0) {
        f3 = (f64)(f32)ppc_fres(f0);
        f3 = ppc_fnmsubs(f0, (f64)(f32)(f3 * f3), (f64)(f32)(f3 + f3));
    } else {
        f3 = (f64)rdf32(0x805779ecu);
    }
    f1 = (f64)rdf32(0x805779bcu);
    f0 = (f64)rdf32(param_3 + 8u);
    wrf32d(0x817fdfecu, f3);
    if (f1 != f0) {
        f1 = (f64)(f32)ppc_fres(f0);
        f1 = ppc_fnmsubs(f0, (f64)(f32)(f1 * f1), (f64)(f32)(f1 + f1));
    } else {
        f1 = (f64)rdf32(0x805779ecu);
    }
    wrf32d(0x817fdff0u, f1);
    a.r[0] = param_1;
    a.r[1] = param_2;
    a.r[2] = 0x817fdfe8u;
    (void)tc_call(0x802f00c4u, &a);
    return;
}
