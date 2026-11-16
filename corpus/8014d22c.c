#include "tc_rt.h"

void fn_8014d22c(f64 param_1, s32 param_2)
{
    u32 c0eq = 0, r0 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0;
    TcArgs a = {0};
    f2 = (f64)(f32)param_1;
    f0 = (f64)rdf32(0x805746f4u);
    wrf32d((u32)param_2 + 0x4cu, param_1);
    if (f2 < f0) {
        wrf32d((u32)param_2 + 0x4cu, f0);
    } else {
        f0 = (f64)rdf32(0x805746f0u);
        if (f2 > f0) {
            wrf32d((u32)param_2 + 0x4cu, f0);
        }
    }
    r0 = rd32((u32)param_2 + 0x48u);
    c0eq = r0 == 0u;
    if (!c0eq) {
        f1 = (f64)rdf32((u32)param_2 + 0x4cu);
        if (c0eq) {
            return;
        }
        a.f[0] = f1;
        a.r[0] = r0;
        a.r[1] = 0u;
        (void)tc_call(0x802f7194u, &a);
        return;
    }
    return;
}
