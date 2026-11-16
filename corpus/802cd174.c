#include "tc_rt.h"

void fn_802cd174(u32 param_1, s32 param_2)
{
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f4 = 0.0;
    if ((u32)rd8((u32)param_2 + 0x20u) == 1u) {
        f4 = (f64)rdf32((u32)param_2 + 0x1cu);
        f1 = (f64)rdf32((u32)param_2 + 0x18u);
        f2 = (f64)rdf32(0x80348a24u);
        wrf32d(param_1 + 8u, (f64)(f32)(f1 * f2));
        wrf32d(param_1 + 4u, (f64)(f32)(f4 * f2));
        wrf32d(param_1, (f64)(f32)(-f1 * f2));
        wrf32d(param_1 + 0xcu, (f64)(f32)(-f4 * f2));
        return;
    }
    f2 = (f64)rdf32((u32)param_2 + 0x1cu);
    f0 = (f64)rdf32(0x80348a20u);
    f1 = (f64)rdf32((u32)param_2 + 0x18u);
    wrf32d(param_1, f0);
    wrf32d(param_1 + 4u, f0);
    wrf32d(param_1 + 8u, f1);
    wrf32d(param_1 + 0xcu, f2);
    return;
}
