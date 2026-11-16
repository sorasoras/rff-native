#include "tc_rt.h"

u32 fn_801d0208(u32 param_1)
{
    f64 f0 = 0.0, f1 = 0.0;
    TcArgs a = {0};
    a.r[0] = param_1;
    (void)tc_call(0x8007dde4u, &a);
    f1 = (f64)rdf32(0x80575ea8u);
    f0 = (f64)rdf32(0x80575e98u);
    wrf32d(param_1 + 0x32cu, f1);
    wr32(param_1, 0x80374304u);
    wrf32d(param_1 + 0x330u, f0);
    wr32(param_1 + 0x334u, 0u);
    wr32(param_1 + 0x338u, 0u);
    wrf32d(param_1 + 0x33cu, f1);
    return param_1;
}
