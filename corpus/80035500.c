#include "tc_rt.h"

u32 fn_80035500(s32 param_1)
{
    u32 c0eq = 0, r4 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f3 = 0.0;
    r4 = rd32((u32)param_1 + 0x48u);
    f2 = (f64)rdf32((u32)param_1 + 0x58u);
    c0eq = ((u32)rd16((u32)param_1 + 0x30u) & 2u) == 0u;
    f3 = (f64)rdf32(r4 + 0x18u);
    wrf32d((u32)param_1 + 0x54u, (f64)(f32)((f64)rdf32((u32)param_1 + 0x54u) + (f64)(f32)(f2 * (f64)rdf32(r4 + 0x1cu))));
    if (!c0eq) {
        wrf32d((u32)param_1 + 0x5cu, (f64)(f32)((f64)rdf32((u32)param_1 + 0x5cu) + f2));
    }
    f1 = (f64)rdf32((u32)param_1 + 0x54u);
    f0 = (f64)rdf32(0x80571e50u);
    if (f1 < f0) {
        if (((u32)rd16((u32)param_1 + 0x30u) & 1u) != 0u) {
            wrf32d((u32)param_1 + 0x54u, (f64)(f32)(f1 + f3));
            return 0u;
        }
        wrf32d((u32)param_1 + 0x54u, f0);
        return 1u;
    }
    if ((f1 > f3) || (f1 == f3)) {
        if (((u32)rd16((u32)param_1 + 0x30u) & 1u) != 0u) {
            wrf32d((u32)param_1 + 0x54u, (f64)(f32)(f1 - f3));
            return 0u;
        }
        wrf32d((u32)param_1 + 0x54u, f3);
        return 1u;
    }
    return 0u;
}
