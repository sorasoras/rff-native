#include "tc_rt.h"

void fn_800cc588(f64 param_1, s32 param_2)
{
    wrf32d((u32)param_2 + 0x64u, (f64)(f32)(param_1 + (f64)rdf32((u32)param_2 + 0x64u)));
    return;
}
