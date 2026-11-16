#include "tc_rt.h"

static f64 px_fdiv(f64 a, f64 b)
{
    return a / b;
}

void fn_801cf87c(s32 param_1)
{
    f64 f0 = 0.0, f1 = 0.0, f3 = 0.0;
    if (rd32((u32)param_1 + 0xe30u) != 1u) {
        f1 = (f64)rdf32(0x803d27a0u);
        f0 = (f64)rdf32(0x80575ea0u);
        wr32(0x8057118cu, rd32(0x8057118cu) & 0xffffdfffu);
        f3 = (f64)rdf32((u32)param_1 + 0xd68u);
        f0 = (f64)(f32)(f0 * (f64)rdf32((u32)param_1 + 0xd6cu));
        wrf32d((u32)param_1 + 0xe20u, f1);
        f0 = (f64)(f32)px_fdiv((f64)(f32)(f1 - f3), f0);
        wrf32d((u32)param_1 + 0xe24u, (f64)rdf32(0x803d27a4u));
        wrf32d((u32)param_1 + 0xe28u, (f64)rdf32(0x803d27a8u));
        wrf32d((u32)param_1 + 0xe2cu, (f64)rdf32(0x803d27acu));
        f0 = -f0;
        wr32((u32)param_1 + 0xe30u, 1u);
        wrf32d((u32)param_1 + 0xe34u, f0);
        return;
    }
    return;
}
