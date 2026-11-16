#include "tc_rt.h"

static f64 px_b2f(u64 x)
{
    union { f64 d; u64 b; } v;
    v.b = x;
    return v.d;
}

static f64 px_fdiv(f64 a, f64 b)
{
    return a / b;
}

void fn_802f7194(f64 param_1, s32 param_2, u32 param_3)
{
    u32 r0 = 0, r6 = 0;
    f64 f0 = 0.0, f2 = 0.0, f4 = 0.0, f5 = 0.0;
    f5 = (f64)rdf32(0x805775a8u);
    if (!(param_1 > f5)) {
        f5 = (f64)rdf32(0x805775acu);
        if (!(param_1 < f5)) {
            f5 = param_1;
        }
    }
    r6 = rd32((u32)param_2 + 0x9cu);
    r0 = rd32((u32)param_2 + 0xa0u);
    if ((s32)r0 < (s32)r6) {
        r0 = r0 ^ 0x80000000u;
        wr32(0x817fdfecu, r0);
        f4 = rdf64(0x805775b0u);
        wr32(0x817fdfe8u, 0x43300000u);
        f2 = (f64)rdf32((u32)param_2 + 0x94u);
        f0 = (f64)(f32)(f2 + (f64)(f32)px_fdiv((f64)(f32)((f64)(f32)(rdf64(0x817fdfe8u) - f4) * (f64)(f32)((f64)rdf32((u32)param_2 + 0x98u) - f2)), (f64)(f32)(px_b2f((u64)(r6 ^ 0x80000000u) | 0x4330000000000000ull) - f4)));
    } else {
        f0 = (f64)rdf32((u32)param_2 + 0x98u);
    }
    wrf32d((u32)param_2 + 0x94u, f0);
    wrf32d((u32)param_2 + 0x98u, f5);
    wr32((u32)param_2 + 0x9cu, param_3);
    wr32((u32)param_2 + 0xa0u, 0u);
    return;
}
