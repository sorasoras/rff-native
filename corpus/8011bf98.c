#include "tc_rt.h"

void fn_8011bf98(s32 param_1)
{
    u32 r3 = 0;
    f64 f0 = 0.0, f1 = 0.0;
    TcArgs a = {0};
    a.r[0] = (u32)param_1;
    r3 = tc_call(0x8011beecu, &a);
    if (r3 != 0u) {
        a.r[0] = 1u;
        (void)tc_call(0x8014da48u, &a);
    }
    if (rd32(0x805706e0u) == 4u) {
        f1 = (f64)rdf32((u32)param_1 + 0x58u);
        if (rd32(rd32(0x8057110cu) + 0xcu) != 0xdu) {
            f0 = (f64)rdf32(0x80574230u);
            if ((f1 > f0) || (f1 == f0)) {
                f0 = (f64)rdf32(0x80574220u);
                wr32((u32)param_1 + 0x5cu, 1u);
                wrf32d((u32)param_1 + 0x58u, f0);
            }
        } else {
            f0 = (f64)rdf32(0x80574230u);
            if (!(f1 < f0)) {
                f0 = (f64)(f32)(f1 + (f64)rdf32(0x80574234u));
            }
            wrf32d((u32)param_1 + 0x58u, f0);
        }
    }
    return;
}
