#include "tc_rt.h"

void fn_800dcafc(void)
{
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f3 = 0.0;
    f3 = rdf64(0x80573a50u);
    f2 = rdf64(0x80573a58u);
    f1 = (f64)rdf32(0x80573a60u);
    f0 = (f64)rdf32(0x80573a64u);
    wr32(0x80571208u, 0x7fffffffu);
    wrf64(0x80571210u, f3);
    wrf64(0x80571218u, f2);
    wrf32d(0x80571220u, f1);
    wrf32d(0x80571224u, f0);
    return;
}
