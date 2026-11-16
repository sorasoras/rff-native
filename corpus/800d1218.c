#include "tc_rt.h"

u32 fn_800d1218(u32 param_1, u32 param_2, u32 param_3)
{
    f64 f0 = 0.0, f1 = 0.0;
    (void)param_1;
    f1 = (f64)rdf32(0x80573088u);
    f0 = (f64)rdf32(param_2);
    if (f1 != f0) {
        if (!(f0 > f1)) {
            f1 = (f64)rdf32(0x805730b8u);
            if (!(f1 > f0)) {
                f1 = f0;
            }
            wrf32d(param_3, f1);
        } else {
            f1 = (f64)rdf32(0x805730b4u);
            if (!(f1 < f0)) {
                f1 = f0;
            }
            wrf32d(param_3, f1);
        }
        f0 = (f64)rdf32(0x805730b4u);
        f1 = (f64)(f32)((f64)rdf32(param_2) - (f64)rdf32(param_3));
        wrf32d(param_2, f1);
        f1 = (f64)(f32)ppc_fabs(f1);
        if (f1 < f0) {
            wrf32d(param_2, (f64)rdf32(0x80573088u));
        }
        return 0u;
    }
    return 1u;
}
