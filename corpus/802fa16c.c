#include "tc_rt.h"

u32 fn_802fa16c(u32 param_1)
{
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdfd0u, 0x817fe000u);
    f2 = (f64)rdf32(0x80577630u);
    wr32(0x817fe004u, 0x817ff000u);
    f0 = (f64)rdf32(0x80577638u);
    wr32(0x817fdffcu, 0u);
    f1 = (f64)rdf32(0x80577634u);
    wr32(param_1 + 4u, 0u);
    wr32(param_1 + 8u, 0u);
    wr32(param_1, 0x8039d178u);
    wr8(param_1 + 0xcu, 0u);
    wr32(param_1 + 0x10u, 0u);
    wr32(param_1 + 0x14u, 0u);
    wrf32d(param_1 + 0x18u, f2);
    wrf32d(param_1 + 0x1cu, f1);
    wrf32d(param_1 + 0x20u, f0);
    wrf32d(param_1 + 0x24u, f2);
    wrf32d(param_1 + 0x28u, f0);
    wrf32d(0x817fdfd8u, f2);
    wrf32d(0x817fdfdcu, f1);
    wrf32d(0x817fdfe0u, f0);
    wrf32d(0x817fdfe4u, f2);
    wrf32d(0x817fdfe8u, f0);
    a.r[0] = param_1;
    a.r[1] = 0x817fdfd8u;
    (void)tc_call(0x802fa34cu, &a);
    return param_1;
}
