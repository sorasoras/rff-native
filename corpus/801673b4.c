#include "tc_rt.h"

void fn_801673b4(u32 param_1, u32 param_2)
{
    f64 f0 = 0.0, f1 = 0.0;
    f1 = (f64)rdf32(0x80574bf8u);
    f0 = (f64)rdf32(0x80574bfcu);
    wr32(param_1 + 4u, param_2);
    wr32(param_1, 0x8036ae10u);
    wr8(param_1 + 8u, 0u);
    wr32(param_1 + 0xcu, 0u);
    wrf32d(param_1 + 0x18u, f1);
    wrf32d(param_1 + 0x14u, f1);
    wrf32d(param_1 + 0x10u, f1);
    wrf32d(param_1 + 0x1cu, f0);
    return;
}
