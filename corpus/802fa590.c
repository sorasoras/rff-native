#include "tc_rt.h"

u32 fn_802fa590(u32 param_1)
{
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f3 = 0.0, f4 = 0.0, f5 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdfc0u, 0x817fe000u);
    f5 = (f64)rdf32(0x80577648u);
    wr32(0x817fe004u, 0x817ff000u);
    f1 = (f64)rdf32(0x80577658u);
    wr32(0x817fdffcu, 0u);
    f4 = (f64)rdf32(0x8057764cu);
    f3 = (f64)rdf32(0x80577650u);
    f2 = (f64)rdf32(0x80577654u);
    f0 = (f64)rdf32(0x8057765cu);
    wr32(param_1 + 4u, 0u);
    wr32(param_1 + 8u, 0u);
    wr32(param_1, 0x8039d1a0u);
    wr8(param_1 + 0xcu, 0u);
    wr32(param_1 + 0x10u, 0u);
    wr32(param_1 + 0x14u, 0u);
    wrf32d(param_1 + 0x18u, f5);
    wrf32d(param_1 + 0x1cu, f4);
    wrf32d(param_1 + 0x20u, f3);
    wrf32d(param_1 + 0x24u, f2);
    wrf32d(param_1 + 0x28u, f1);
    wr32(param_1 + 0x2cu, 5u);
    wrf32d(param_1 + 0x30u, f5);
    wr32(param_1 + 0x34u, 0u);
    wrf32d(param_1 + 0x38u, f0);
    wrf32d(param_1 + 0x3cu, f1);
    wrf32d(0x817fdfc8u, f5);
    wrf32d(0x817fdfccu, f4);
    wrf32d(0x817fdfd0u, f3);
    wrf32d(0x817fdfd4u, f2);
    wrf32d(0x817fdfd8u, f1);
    wr32(0x817fdfdcu, 5u);
    wrf32d(0x817fdfe0u, f5);
    wr32(0x817fdfe4u, 0u);
    wrf32d(0x817fdfe8u, f0);
    wrf32d(0x817fdfecu, f1);
    a.r[0] = param_1;
    a.r[1] = 0x817fdfc8u;
    (void)tc_call(0x802fa7a8u, &a);
    return param_1;
}
