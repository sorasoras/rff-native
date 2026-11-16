#include "tc_rt.h"

void fn_801d4aac(f64 param_1, s32 param_2, u32 param_r4)
{
    f64 f0 = 0.0, f1 = 0.0;
    TcArgs a = {0};
    wrf32d((u32)param_2 + 0x188u, param_1);
    a.r[0] = (u32)param_2;
    a.r[1] = param_r4;
    f1 = tc_callf(0x801d4a1cu, &a);
    if ((f64)rdf32(0x80576028u) < f1) {
        f1 = (f64)(f32)(f1 - (f64)rdf32(0x8057602cu));
    } else {
        f0 = (f64)rdf32(0x80576030u);
        if ((f0 > f1) || (f0 == f1)) {
            f1 = (f64)(f32)((f64)rdf32(0x8057602cu) + f1);
        }
    }
    wrf32d((u32)param_2 + 0x19cu, f1);
    return;
}
