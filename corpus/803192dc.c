#include "tc_rt.h"

u32 fn_803192dc(u32 param_1, s32 param_2)
{
    u32 c0lt = 0, r3 = 0;
    f64 f0 = 0.0, f1 = 0.0;
    c0lt = param_2 < 1;
    if ((u32)param_2 == 1u) {
        wrf32d(0x817fdfecu, (f64)rdf32(param_1 + 8u));
    } else if (!c0lt) {
        if (param_2 < 3) {
            wrf32d(0x817fdfecu, (f64)rdf32(param_1));
        }
    } else if (param_2 >= 0) {
        wrf32d(0x817fdfecu, (f64)rdf32(param_1 + 4u));
    }
    f1 = (f64)rdf32(0x817fdfecu);
    f0 = (f64)rdf32(0x805778e8u);
    c0lt = f1 < f0;
    if (!(f1 > f0)) {
        if (!c0lt) {
            r3 = 1u;
        } else {
            r3 = 3u;
        }
    } else {
        r3 = 2u;
    }
    return r3;
}
