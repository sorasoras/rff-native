#include "tc_rt.h"

void fn_802fad50(u32 param_1)
{
    f64 f0 = 0.0;
    f0 = (f64)rdf32(0x80577664u);
    wrf32d(param_1, (f64)rdf32(0x80577660u));
    wr8(param_1 + 0xcu, 1u);
    wrf32d(param_1 + 4u, f0);
    wr32(param_1 + 8u, 0u);
    return;
}
