#include "tc_rt.h"

static f64 px_fdiv(f64 a, f64 b)
{
    return a / b;
}

void fn_80056b18(f64 param_1, f64 param_2, f64 param_3, f64 param_4, s32 param_5)
{
    f64 f0 = 0.0, f1 = 0.0, f5 = 0.0, f6 = 0.0;
    if (rd32((u32)param_5 + 0x204u) == 0u) {
        f5 = (f64)rdf32(0x80572358u);
        f6 = (f64)rdf32(0x8057234cu);
        wrf32d((u32)param_5 + 0x208u, param_1);
        wr32((u32)param_5 + 0x204u, 1u);
        wrf32d((u32)param_5 + 0x20cu, param_2);
        wrf32d((u32)param_5 + 0x220u, param_4);
        f1 = (f64)(f32)(f6 * param_3);
        f0 = (f64)(f32)(f5 - (f64)(f32)px_fdiv(f5, (f64)(f32)(param_1 * param_1)));
        wrf32d((u32)param_5 + 0x210u, f1);
        wrf32d((u32)param_5 + 0x218u, f1);
        wrf32d((u32)param_5 + 0x21cu, f0);
        wrf32d((u32)param_5 + 0x214u, f0);
        return;
    }
    return;
}
