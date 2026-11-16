#include "tc_rt.h"

u32 fn_8014cdf0(u32 param_1)
{
    u32 r3 = 0;
    f64 f0 = 0.0;
    TcArgs a = {0};
    wr32(param_1 + 8u, 0x803629e8u);
    r3 = tc_call(0x8004f57cu, &a);
    wr32(param_1, r3);
    r3 = tc_call(0x8004f588u, &a);
    wr32(param_1 + 4u, r3);
    wr32(param_1 + 8u, 0x80365694u);
    a.r[0] = param_1 + 0xcu;
    (void)tc_call(0x8011e378u, &a);
    f0 = (f64)rdf32(0x805746f0u);
    wr32(param_1 + 0x48u, 0u);
    wrf32d(param_1 + 0x4cu, f0);
    wr32(param_1 + 0x50u, 0xffffffffu);
    wr32(param_1 + 0x54u, 1u);
    return param_1;
}
