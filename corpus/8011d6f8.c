#include "tc_rt.h"

u32 fn_8011d6f8(f64 param_1, f64 param_2, u32 param_3)
{
    u32 r3 = 0;
    f64 f30 = 0.0;
    TcArgs a = {0};
    f30 = param_1;
    a.r[0] = param_3;
    r3 = tc_call(0x8011ddbcu, &a);
    if (r3 == 0u) {
        r3 = 0u;
    } else {
        if (rd32(0x80571100u) == 1u) {
            f30 = (f64)(f32)(param_1 * (f64)rdf32(0x80574258u));
        }
        a.r[0] = param_3;
        r3 = tc_call(0x8011ddbcu, &a);
        wrf32d(r3 + 0x4cu, (f64)(f32)f30);
        wrf32d(r3 + 0x50u, (f64)(f32)param_2);
        r3 = 1u;
    }
    return r3;
}
