#include "tc_rt.h"

u32 fn_803191ec(u32 param_1, s32 param_2)
{
    u32 c0lt = 0, r3 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0;
    c0lt = param_2 < 1;
    if ((u32)param_2 == 1u) {
        f0 = -(f64)rdf32(param_1 + 4u);
        f1 = (f64)rdf32(param_1 + 8u);
        wrf32d(0x817fdfe8u, (f64)rdf32(param_1));
        wrf32d(0x817fdfecu, f1);
        wrf32d(0x817fdff0u, f0);
    } else if (!c0lt) {
        if (param_2 < 3) {
            f2 = -(f64)rdf32(param_1 + 4u);
            f0 = (f64)rdf32(param_1 + 8u);
            wrf32d(0x817fdfecu, (f64)rdf32(param_1));
            wrf32d(0x817fdfe8u, f2);
            wrf32d(0x817fdff0u, f0);
        }
    } else if (param_2 >= 0) {
        f1 = (f64)rdf32(param_1 + 4u);
        f0 = (f64)rdf32(param_1 + 8u);
        wrf32d(0x817fdfe8u, (f64)rdf32(param_1));
        wrf32d(0x817fdfecu, f1);
        wrf32d(0x817fdff0u, f0);
    }
    f1 = (f64)rdf32(0x817fdfecu);
    f0 = (f64)rdf32(0x805778e8u);
    c0lt = f1 < f0;
    if (!(f1 > f0)) {
        if (!c0lt) {
            f0 = (f64)rdf32(0x817fdfe8u);
            f2 = (f64)rdf32(0x805778e0u);
            if (!(f0 < f2)) {
                f1 = (f64)rdf32(0x805778e4u);
                if (!(f0 > f1)) {
                    f0 = (f64)rdf32(0x817fdff0u);
                    if (f0 < f2 || f0 > f1) {
                        r3 = 4u;
                        return r3;
                    }
                    r3 = 1u;
                    return r3;
                }
            }
            r3 = 4u;
        } else {
            r3 = 3u;
        }
    } else {
        r3 = 3u;
    }
    return r3;
}
