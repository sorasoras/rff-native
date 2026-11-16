#include "tc_rt.h"

void fn_80335858(u32 param_1, u32 param_2)
{
    u32 r3 = 0;
    f64 f0 = 0.0;
    r3 = rd32(param_1);
    f0 = (f64)rdf32(param_2 + 4u);
    wrf32d(r3 + 0x18u, (f64)rdf32(param_2));
    wrf32d(r3 + 0x1cu, f0);
    return;
}
