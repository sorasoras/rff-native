#include "tc_rt.h"

void fn_8011d574(u32 param_1, u32 param_2, u32 param_3)
{
    u32 r0 = 0, r3 = 0;
    TcArgs a = {0};
    wr32(0x817fdfd0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    wr32(0x817fdff8u, 0u);
    wr32(0x817fdff4u, 0u);
    a.r[0] = param_1;
    r3 = tc_call(0x8011ddbcu, &a);
    if (r3 != 0u) {
        a.r[0] = param_1;
        r3 = tc_call(0x8011ddbcu, &a);
        r0 = rd32(r3 + 0x30u);
        wr32(0x817fdfd8u, rd32(r3 + 0x2cu));
        wr32(0x817fdfdcu, r0);
        wr32(0x817fdfe0u, rd32(r3 + 0x34u));
        a.r[0] = 0x817fdfd8u;
        a.r[1] = 0x817fdfdcu;
        (void)tc_call(0x8011d7e4u, &a);
        if (param_2 != 0u) {
            wrf32d(param_2, (f64)rdf32(0x817fdfd8u));
        }
        if (param_3 != 0u) {
            wrf32d(param_3, (f64)rdf32(0x817fdfdcu));
        }
    }
    return;
}
