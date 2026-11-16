#include "tc_rt.h"

void fn_8011f27c(f64 param_1, s32 param_2)
{
    u32 c0eq = 0, r0 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0;
    TcArgs a = {0};
    f2 = (f64)(f32)param_1;
    f0 = (f64)rdf32(0x80574284u);
    wrf32d((u32)param_2 + 0x50u, param_1);
    if (f2 < f0) {
        wrf32d((u32)param_2 + 0x50u, f0);
    } else {
        f0 = (f64)rdf32(0x80574280u);
        if (f2 > f0) {
            wrf32d((u32)param_2 + 0x50u, f0);
        }
    }
    r0 = rd32((u32)param_2 + 0x4cu);
    c0eq = r0 == 0u;
    if (!c0eq) {
        f1 = (f64)rdf32((u32)param_2 + 0x50u);
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
