#include "tc_rt.h"

void fn_800ada04(u32 param_1)
{
    f64 f0 = 0.0;
    f0 = (f64)rdf32(0x80572bc0u);
    wrf32d(param_1, f0);
    wrf32d(param_1 + 4u, f0);
    wrf32d(param_1 + 8u, f0);
    wrf32d(param_1 + 0xcu, f0);
    return;
}
