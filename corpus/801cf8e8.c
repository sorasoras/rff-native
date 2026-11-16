#include "tc_rt.h"

static f64 px_fdiv(f64 a, f64 b)
{
    return a / b;
}

void fn_801cf8e8(s32 param_1)
{
    f64 f0 = 0.0;
    if (rd32((u32)param_1 + 0xe30u) != 2u) {
        f0 = (f64)(f32)px_fdiv((f64)(f32)((f64)rdf32((u32)param_1 + 0xe20u) - (f64)rdf32(0x803d27a0u)), (f64)(f32)((f64)rdf32(0x80575ea0u) * (f64)rdf32((u32)param_1 + 0xd70u)));
        wr32((u32)param_1 + 0xe30u, 2u);
        wrf32d((u32)param_1 + 0xe34u, f0);
    }
    return;
}
