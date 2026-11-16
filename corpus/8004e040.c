#include "tc_rt.h"

void fn_8004e040(void)
{
    f64 f0 = 0.0, f1 = 0.0;
    f1 = (f64)rdf32(0x80572220u);
    f0 = (f64)rdf32(0x80572224u);
    wr32(0x803c6598u, 0u);
    wrf32d(0x803c659cu, f1);
    wrf32d(0x803c65a0u, f0);
    wr8(0x803c65a4u, 0u);
    wr8(0x803c65a5u, 0u);
    wr8(0x803c65a6u, 0xffu);
    wr8(0x803c65a7u, 0xffu);
    wr8(0x803c65a8u, 0xffu);
    wr8(0x803c65a9u, 0xffu);
    return;
}
