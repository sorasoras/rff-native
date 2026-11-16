#include "tc_rt.h"

u32 fn_8011ee44(u32 param_1)
{
    u32 r3 = 0;
    f64 f0 = 0.0;
    TcArgs a = {0};
    wr32(param_1 + 8u, 0x803629e8u);
    r3 = tc_call(0x8004f57cu, &a);
    wr32(param_1, r3);
    r3 = tc_call(0x8004f588u, &a);
    wr32(param_1 + 4u, r3);
    wr32(param_1 + 8u, 0x80362a50u);
    a.r[0] = param_1 + 0x10u;
    (void)tc_call(0x8011e378u, &a);
    f0 = (f64)rdf32(0x80574280u);
    wr32(param_1 + 0x4cu, 0u);
    wr32(param_1 + 0xcu, 0xffffffffu);
    wrf32d(param_1 + 0x50u, f0);
    wr32(param_1 + 0x60u, 0u);
    wr32(param_1 + 0x54u, 1u);
    wr32(param_1 + 0x58u, 1u);
    return param_1;
}
