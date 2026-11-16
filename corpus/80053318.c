#include "tc_rt.h"

void fn_80053318(void)
{
    f64 f0 = 0.0;
    f0 = (f64)rdf32(0x805722b8u);
    wr32(0x805710f0u, 1u);
    wrf32d(0x803d278cu, f0);
    wrf32d(0x803d2788u, f0);
    wrf32d(0x803d2784u, f0);
    wrf32d(0x803d2780u, f0);
    wrf32d(0x803d279cu, f0);
    wrf32d(0x803d2798u, f0);
    wrf32d(0x803d2794u, f0);
    wrf32d(0x803d2790u, f0);
    wrf32d(0x803d27acu, f0);
    wrf32d(0x803d27a8u, f0);
    wrf32d(0x803d27a4u, f0);
    wrf32d(0x803d27a0u, f0);
    return;
}
