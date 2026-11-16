#include "tc_rt.h"

u32 fn_8017567c(u32 param_1)
{
    f64 f0 = 0.0, f1 = 0.0;
    TcArgs a = {0};
    a.r[0] = param_1;
    (void)tc_call(0x800d9ce0u, &a);
    f1 = (f64)rdf32(0x80574f40u);
    f0 = (f64)rdf32(0x80574f44u);
    wr32(param_1, 0x8036e9f8u);
    wr32(param_1 + 0x124u, 0xdu);
    wrf32d(param_1 + 0x12cu, f1);
    wrf32d(param_1 + 0x128u, f0);
    wr32(param_1 + 0x120u, 0u);
    wr32(param_1 + 0x130u, 0xffffffffu);
    wr32(param_1 + 0x134u, 0xffffffffu);
    wr32(param_1 + 0x138u, 0xffffffffu);
    wr32(param_1 + 0x13cu, 0xffffffffu);
    wr32(param_1 + 0x148u, 0x3cu);
    wr32(param_1 + 0x140u, 0u);
    wr32(param_1 + 0x144u, 0u);
    return param_1;
}
