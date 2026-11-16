#include "tc_rt.h"

u32 fn_800cfd98(f64 param_1, f64 param_2, f64 param_3, f64 param_4, s32 param_5, u32 param_r4)
{
    u32 r3 = 0;
    f64 f0 = 0.0, f30 = 0.0, f31 = 0.0;
    TcArgs a = {0};
    f30 = param_3;
    f31 = param_4;
    a.f[0] = param_1;
    a.f[1] = param_2;
    a.r[0] = (u32)param_5;
    a.r[1] = param_r4;
    r3 = tc_call(0x800cfa64u, &a);
    if (r3 == 0u) {
        r3 = 0u;
    } else {
        if ((f64)rdf32(0x80573070u) < param_3) {
            f30 = (f64)(f32)(param_3 - (f64)rdf32(0x80573074u));
        } else {
            f0 = (f64)rdf32(0x80573078u);
            if ((f0 > param_3) || (f0 == param_3)) {
                f30 = (f64)(f32)((f64)rdf32(0x80573074u) + param_3);
            }
        }
        f0 = (f64)rdf32(0x80573070u);
        wrf32d((u32)param_5 + 0x1cu, f30);
        if (f0 < param_4) {
            f31 = (f64)(f32)(param_4 - (f64)rdf32(0x80573074u));
        } else {
            f0 = (f64)rdf32(0x80573078u);
            if ((f0 > param_4) || (f0 == param_4)) {
                f31 = (f64)(f32)((f64)rdf32(0x80573074u) + param_4);
            }
        }
        wrf32d((u32)param_5 + 0x20u, f31);
        r3 = 1u;
    }
    return r3;
}
