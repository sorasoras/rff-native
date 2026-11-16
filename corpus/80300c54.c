#include "tc_rt.h"

void fn_80300c54(u32 param_1)
{
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f3 = 0.0;
    f3 = (f64)rdf32(0x80577740u);
    f2 = (f64)rdf32(0x80577744u);
    f1 = (f64)rdf32(0x80577748u);
    f0 = (f64)rdf32(0x8057774cu);
    wr32(param_1, 0x8039d4f8u);
    wrf32d(param_1 + 4u, f3);
    wrf32d(param_1 + 8u, f2);
    wrf32d(param_1 + 0xcu, f1);
    wrf32d(param_1 + 0x10u, f0);
    return;
}
