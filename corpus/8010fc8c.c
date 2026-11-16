#include "tc_rt.h"

void fn_8010fc8c(u32 param_1)
{
    u32 r3 = 0;
    f64 f0 = 0.0;
    TcArgs a = {0};
    r3 = tc_call(0x80097da4u, &a);
    r3 = rd32(r3 + 0x4cu);
    f0 = (f64)rdf32(0x80574124u);
    wrf32d(param_1, (f64)rdf32(r3 + 0x74u));
    wrf32d(param_1 + 4u, (f64)rdf32(r3 + 0x78u));
    wrf32d(param_1 + 8u, (f64)rdf32(r3 + 0x7cu));
    wrf32d(param_1 + 4u, f0);
    return;
}
