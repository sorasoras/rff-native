#include "tc_rt.h"

void fn_8014a224(u32 param_1, u32 param_2, s32 param_3)
{
    u32 r4 = 0;
    f64 f1 = 0.0, f2 = 0.0;
    r4 = rd32(0x805712fcu) + (rd32(param_2) * 0x418u) + ((u32)param_3 * 0x28u);
    f2 = (f64)rdf32(r4 + 0x80u);
    f1 = (f64)rdf32(r4 + 0x7cu);
    wrf32d(param_1, (f64)rdf32(r4 + 0x78u));
    wrf32d(param_1 + 4u, f1);
    wrf32d(param_1 + 8u, f2);
    return;
}
