#include "tc_rt.h"

void fn_801a2a44(s32 param_1)
{
    f64 f1 = 0.0;
    f1 = (f64)rdf32(0x80575908u);
    wrf32d(0x803710e8u, (f64)(f32)((f64)rdf32((u32)param_1 + 0xd54u) * (f64)(f32)(f1 * (f64)rdf32((u32)param_1 + 0xd58u))));
    wrf32d(0x8037110cu, (f64)(f32)((f64)rdf32((u32)param_1 + 0xd54u) * (f64)(f32)(f1 * (f64)rdf32((u32)param_1 + 0xd5cu))));
    wrf32d(0x80371130u, (f64)(f32)((f64)rdf32((u32)param_1 + 0xd54u) * (f64)(f32)(f1 * (f64)rdf32((u32)param_1 + 0xd60u))));
    wrf32d(0x80371154u, (f64)(f32)((f64)rdf32((u32)param_1 + 0xd54u) * (f64)(f32)(f1 * (f64)rdf32((u32)param_1 + 0xd64u))));
    wrf32d((u32)param_1 + 0xf64u, (f64)(f32)((f64)rdf32((u32)param_1 + 0xd54u) * (f64)(f32)(f1 * (f64)rdf32((u32)param_1 + 0xd68u))));
    return;
}
