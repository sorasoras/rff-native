#include "tc_rt.h"

u32 fn_8011d60c(u32 param_1, u32 param_2, u32 param_3)
{
    u32 r3 = 0;
    TcArgs a = {0};
    a.r[0] = param_1;
    r3 = tc_call(0x8011ddbcu, &a);
    if (r3 == 0u) {
        r3 = 0u;
    } else {
        a.r[0] = param_1;
        r3 = tc_call(0x8011ddbcu, &a);
        if (param_2 != 0u) {
            wrf32d(param_2, (f64)rdf32(r3 + 0x44u));
        }
        if ((f64)rdf32(param_3) != (f64)rdf32(0x80574248u)) {
            wrf32d(param_3, (f64)rdf32(r3 + 0x48u));
        }
        r3 = 1u;
    }
    return r3;
}
