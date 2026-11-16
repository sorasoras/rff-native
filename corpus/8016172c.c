#include "tc_rt.h"

u32 fn_8016172c(u32 param_1)
{
    f64 f0 = 0.0, f1 = 0.0;
    TcArgs a = {0};
    wr32(param_1 + 0xccu, 0x803693f8u);
    a.r[0] = param_1 + 4u;
    (void)tc_call(0x801f0da4u, &a);
    a.r[0] = param_1 + 0x60u;
    (void)tc_call(0x80051438u, &a);
    f1 = (f64)rdf32(0x80574ae8u);
    f0 = (f64)rdf32(0x80574aecu);
    wr32(param_1 + 0x54u, 0u);
    wr32(param_1 + 0x58u, 0u);
    wr32(param_1 + 0x5cu, 0u);
    wr32(param_1 + 0xa8u, 0u);
    wr16(param_1 + 0xbcu, 0x2e8u);
    wr8(param_1 + 0xbeu, 0u);
    wr8(param_1 + 0xbfu, 1u);
    wrf32d(param_1 + 0xb4u, f1);
    wrf32d(param_1 + 0xb0u, f1);
    wrf32d(param_1 + 0xb8u, f0);
    wr32(param_1 + 0xacu, 0u);
    wr32(param_1, 0u);
    return param_1;
}
