#include "tc_rt.h"

s32 fn_8003a530(f64 param_1, f64 param_2, s32 param_3, u32 param_4, s32 param_5)
{
    u32 ctr = 0, r3 = 0;
    f64 f2 = 0.0, t0 = 0.0;
    (void)param_1;
    (void)param_4;
    f2 = param_2;
    r3 = (u32)param_3;
    ctr = (u32)param_5;
    if (param_5 > 0) {
        do {
            t0 = (f64)(f32)(f2 - f2);
            f2 = t0;
            wrf32d(r3, t0);
            wrf32d(r3, 0.0);
            wrf32d(r3 + 8u, t0);
            r3 = r3 + 0xcu;
            ctr = ctr - 1u;
        } while (ctr != 0u);
        return (s32)r3;
    }
    return param_3;
}
