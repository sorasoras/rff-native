#include "tc_rt.h"

void fn_801c871c(void)
{
    u32 r3 = 0;
    f64 f0 = 0.0, f1 = 0.0;
    f1 = (f64)rdf32(0x80575e04u);
    f0 = (f64)rdf32(0x80575de8u);
    r3 = (rd32(0x805710e0u) * 0x6d0u) - 0x7fc2e738u;
    wrf32d(r3 + 0x1d8u, (f64)rdf32(0x80575e00u));
    wrf32d(r3 + 0x1d0u, f1);
    wrf32d(r3 + 0x1d4u, f0);
    return;
}
