#include "tc_rt.h"

u32 fn_8011f6c4(u32 param_1)
{
    u32 r3 = 0;
    f64 f0 = 0.0;
    TcArgs a = {0};
    wr32(param_1 + 8u, 0x803629e8u);
    r3 = tc_call(0x8004f57cu, &a);
    wr32(param_1, r3);
    r3 = tc_call(0x8004f588u, &a);
    wr32(param_1 + 4u, r3);
    wr32(param_1 + 8u, 0x80362af4u);
    a.r[0] = param_1 + 0x40u;
    a.r[1] = 0x8011f754u;
    a.r[2] = 0x8010ac30u;
    a.r[3] = 0x80u;
    a.r[4] = 0x30u;
    (void)tc_call(0x80255624u, &a);
    f0 = (f64)rdf32(0x805742a0u);
    wr32(param_1 + 0x1844u, 0u);
    wrf32d(param_1 + 0xcu, f0);
    wrf32d(param_1 + 0x10u, f0);
    wr32(param_1 + 0x1848u, 0u);
    wr32(0x80571290u, 0u);
    return param_1;
}
