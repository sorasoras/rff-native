#include "tc_rt.h"

u32 fn_8011bb64(u32 param_1)
{
    u32 r30 = 0, r31 = 0;
    f64 f0 = 0.0;
    TcArgs a = {0};
    a.r[0] = param_1;
    (void)tc_call(0x800efd28u, &a);
    r30 = param_1 + 0xcu;
    r31 = param_1 + 0x4cu;
    wr32(param_1, 0x803628f4u);
    do {
        a.r[0] = r30;
        (void)tc_call(0x8011bb14u, &a);
        r30 = r30 + 8u;
    } while (r30 < r31);
    f0 = (f64)rdf32(0x80574220u);
    wr32(param_1 + 0x4cu, 0xffffffffu);
    wr32(param_1 + 0x50u, 0u);
    wr32(param_1 + 0x54u, 0u);
    wrf32d(param_1 + 0x58u, f0);
    wr32(param_1 + 0x5cu, 1u);
    return param_1;
}
