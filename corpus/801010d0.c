#include "tc_rt.h"

void fn_801010d0(u32 param_1, u32 param_2)
{
    u32 r4 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0;
    f2 = (f64)rdf32(param_2);
    f1 = (f64)rdf32(param_2 + 4u);
    f0 = (f64)rdf32(param_2 + 8u);
    wrf32d(param_1 + 0xcu, f2);
    r4 = rd32(param_1);
    wrf32d(param_1 + 0x10u, f1);
    wrf32d(param_1 + 0x14u, f0);
    wrf32d(param_1 + 0xcu, (f64)(f32)(f2 + (f64)rdf32(r4 + 0x2cu)));
    wrf32d(param_1 + 0x10u, (f64)(f32)(f1 + (f64)rdf32(r4 + 0x30u)));
    return;
}
