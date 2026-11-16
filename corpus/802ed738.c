#include "tc_rt.h"

static f64 px_b2f(u64 x)
{
    union { f64 d; u64 b; } v;
    v.b = x;
    return v.d;
}

void fn_802ed738(u32 param_1, s32 param_2, u32 param_3)
{
    u32 r6 = 0;
    f64 f0 = 0.0, f1 = 0.0;
    if (param_3 >= ((rd32((u32)param_2 + 0x3cu) >> 0x1cu) & 0xfu)) {
        f0 = (f64)rdf32(0x805774c0u);
        wrf32d(param_1, f0);
        wrf32d(param_1 + 4u, f0);
    } else {
        r6 = rd32((u32)param_2 + 0x40u) + (param_3 * 0x1cu);
        f1 = rdf64(0x805774d0u);
        f0 = px_b2f((u64)rd16(r6 + 8u) | 0x4330000000000000ull);
        wrf32d(param_1 + 4u, (f64)(f32)(px_b2f((u64)rd16(r6 + 0xau) | 0x4330000000000000ull) - f1));
        f0 = (f64)(f32)(f0 - f1);
        wrf32d(param_1, f0);
    }
    return;
}
