#include "tc_rt.h"

static f64 px_b2f(u64 x)
{
    union { f64 d; u64 b; } v;
    v.b = x;
    return v.d;
}

f64 fn_80079c74(s32 param_1)
{
    f64 f1 = 0.0;
    if ((u32)param_1 != 0u) {
        f1 = (f64)(f32)((f64)(f32)(px_b2f((u64)(((u32)rd16((u32)param_1 + 8u) - (u32)rd16((u32)param_1 + 4u)) ^ 0x80000000u) | 0x4330000000000000ull) - rdf64(0x80572808u)) - (f64)rdf32(0x805727e4u));
    } else {
        f1 = (f64)rdf32(0x805727e0u);
    }
    if (rd32(0x80571100u) == 1u) {
        f1 = (f64)(f32)(f1 * (f64)rdf32(0x805727e8u));
    }
    return f1;
}
